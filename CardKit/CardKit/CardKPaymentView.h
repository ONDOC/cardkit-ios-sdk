//
//  UIView+CardKPaymentView.h
//  CardKit
//
//  Created by Alex Korotkov on 5/28/20.
//  Copyright © 2020 AnjLab. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <PassKit/PassKit.h>
#import "CardKViewController.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CardKPaymentViewDelegate

@optional - (void)pressedCardPayButton;
@optional - (void)pressedApplePayButton:(PKPaymentAuthorizationViewController *) authController;

@end

@interface CardKPaymentView: UIView

/*!
 @brief Конструктор CardKPaymentView
 @param cKitDelegate делегат контроллера
 */
- (instancetype)initWithDelegate:(id<CardKDelegate>)cKitDelegate;

/*! Контроллер  */
@property UIViewController *controller;

/*! Значение merchantId */
@property NSString *merchantId;

/*! Экземпляр класса PKPaymentRequest */
@property PKPaymentRequest *paymentRequest;

/*! Тип кнопки Apple Pay */
@property PKPaymentButtonType paymentButtonType;

/*! Стиль кнопки Apple Pay */
@property PKPaymentButtonStyle paymentButtonStyle;

/*!  Управление стилем и название кнопки */
@property UIButton *cardPaybutton;

/*! Управление расположеним кнопок вертикально/горизонтально */
@property BOOL verticalButtonsRendered;

/*! Делегат CardKPaymentView*/
@property (weak, nonatomic) id<CardKPaymentViewDelegate> cardKPaymentViewDelegate;

@end

NS_ASSUME_NONNULL_END
