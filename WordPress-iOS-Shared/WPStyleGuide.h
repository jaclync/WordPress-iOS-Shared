#import <UIKit/UIKit.h>

@class UITableViewTextFieldCell;
@interface WPStyleGuide : NSObject

// Fonts
+ (UIFont *)largePostTitleFont;
+ (NSDictionary *)largePostTitleAttributes;
+ (UIFont *)postTitleFont;
+ (UIFont *)postTitleFontBold;
+ (NSDictionary *)postTitleAttributes;
+ (NSDictionary *)postTitleAttributesBold;
+ (UIFont *)subtitleFont;
+ (NSDictionary *)subtitleAttributes;
+ (UIFont *)subtitleFontItalic;
+ (NSDictionary *)subtitleItalicAttributes;
+ (UIFont *)subtitleFontBold;
+ (NSDictionary *)subtitleAttributesBold;
+ (UIFont *)labelFont;
+ (UIFont *)labelFontNormal;
+ (NSDictionary *)labelAttributes;
+ (UIFont *)regularTextFont;
+ (UIFont *)regularTextFontBold;
+ (NSDictionary *)regularTextAttributes;
+ (UIFont *)tableviewTextFont;
+ (UIFont *)tableviewSubtitleFont;
+ (UIFont *)tableviewSectionHeaderFont;
+ (NSDictionary *)defaultDTCoreTextOptions;

// Colors
+ (UIColor *)wordPressBlue;
+ (UIColor *)baseLighterBlue;
+ (UIColor *)baseDarkerBlue;
+ (UIColor *)lightBlue;
+ (UIColor *)newKidOnTheBlockBlue;
+ (UIColor *)midnightBlue;
+ (UIColor *)jazzyOrange;
+ (UIColor *)fireOrange;
+ (UIColor *)bigEddieGrey;
+ (UIColor *)littleEddieGrey;
+ (UIColor *)whisperGrey;
+ (UIColor *)allTAllShadeGrey;
+ (UIColor *)readGrey;
+ (UIColor *)itsEverywhereGrey;
+ (UIColor *)darkAsNightGrey;
+ (UIColor *)textFieldPlaceholderGrey;
+ (UIColor *)validationErrorRed;

+ (UIColor *)tableViewActionColor;
+ (UIColor *)buttonActionColor;

+ (UIColor *)keyboardColor;

+ (UIColor *)notificationsLightGrey;
+ (UIColor *)notificationsDarkGrey;

// Bar Button Styles
+ (UIBarButtonItemStyle)barButtonStyleForDone;
+ (UIBarButtonItemStyle)barButtonStyleForBordered;

// Utilities
+ (void)setLeftBarButtonItemWithCorrectSpacing:(UIBarButtonItem *)barButtonItem forNavigationItem:(UINavigationItem *)navigationItem;
+ (void)setRightBarButtonItemWithCorrectSpacing:(UIBarButtonItem *)barButtonItem forNavigationItem:(UINavigationItem *)navigationItem;
+ (void)configureTableViewActionCell:(UITableViewCell *)cell;
+ (void)configureTableViewCell:(UITableViewCell *)cell;
+ (void)configureTableViewTextCell:(UITableViewTextFieldCell *)cell;
+ (void)configureTableViewSmallSubtitleCell:(UITableViewCell *)cell;
+ (void)configureColorsForView:(UIView *)view andTableView:(UITableView *)tableView;
+ (void)configureColorsForView:(UIView *)view collectionView:(UICollectionView *)collectionView;
+ (void)configureFollowButton:(UIButton *)followButton;

@end
