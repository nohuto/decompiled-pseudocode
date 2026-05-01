/*
 * XREFs of ??1OutRef@RoVariant@@QEAA@XZ @ 0x18023D68C
 * Callers:
 *     _CSingleViewShellExperience::OnViewPropertiesChangedBase_::_1_::dtor$6 @ 0x1801765E6 (_CSingleViewShellExperience--OnViewPropertiesChangedBase_--_1_--dtor$6.c)
 *     _CPeopleBarJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x18023E462 (_CPeopleBarJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x18023FFDF (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$4 @ 0x18023FFF7 (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$4.c)
 *     _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$6 @ 0x18024000F (_CShoulderTapExperienceManager--OnViewPropertiesChanging_--_1_--dtor$6.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$2 @ 0x180247048 (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$2.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$5 @ 0x18024706C (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$5.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$8 @ 0x180247090 (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$8.c)
 *     _CJumpViewExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x18024838F (_CJumpViewExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$3 @ 0x18024E0BA (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$3.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$6 @ 0x18024E0DE (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$6.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$9 @ 0x18024E102 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$9.c)
 *     _CQuickConnectExperienceManager::UpdateWindowPosition_::_1_::dtor$3 @ 0x1802507F8 (_CQuickConnectExperienceManager--UpdateWindowPosition_--_1_--dtor$3.c)
 *     _PeoplePaneViewManager::GetRectFromPropertySet_::_1_::dtor$6 @ 0x1802CEF87 (_PeoplePaneViewManager--GetRectFromPropertySet_--_1_--dtor$6.c)
 *     _PeoplePaneViewManager::GetRectFromPropertySet_::_1_::dtor$8 @ 0x1802CEF9F (_PeoplePaneViewManager--GetRectFromPropertySet_--_1_--dtor$8.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$6 @ 0x1802CFDCF (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$6.c)
 * Callees:
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x18006F4B4 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x18006F55C (--1RoVariant@@QEAA@XZ.c)
 */

void __fastcall RoVariant::OutRef::~OutRef(struct IInspectable **this)
{
  struct IInspectable *v1; // rbx
  struct IInspectableVtbl *lpVtbl; // rcx
  struct IInspectableVtbl *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  v1 = *this;
  RoVariant::RoVariant((RoVariant *)&v3, this[1]);
  lpVtbl = v1->lpVtbl;
  v1->lpVtbl = v3;
  v3 = lpVtbl;
  LODWORD(lpVtbl) = v1[1].lpVtbl;
  LODWORD(v1[1].lpVtbl) = v4;
  v4 = (int)lpVtbl;
  RoVariant::~RoVariant((RoVariant *)&v3);
}
