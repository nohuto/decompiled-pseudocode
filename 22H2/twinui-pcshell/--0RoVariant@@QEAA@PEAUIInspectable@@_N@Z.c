/*
 * XREFs of ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x18006F4B4
 * Callers:
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006F140 (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18023D68C (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18023E200 (-OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperien.c)
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18023FD00 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180246BF4 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180248190 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18024DB40 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18025048C (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x1802CEBA8 (-GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1802CF7C4 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 *     ?IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumeration@Devices@Windows@@PEA_N@Z @ 0x1804BE344 (-IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumer.c)
 * Callees:
 *     ??1RoVariant@@QEAA@XZ @ 0x18006F55C (--1RoVariant@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

RoVariant *__fastcall RoVariant::RoVariant(RoVariant *this, struct IInspectable *a2)
{
  struct IInspectable *v2; // rbx
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  struct IInspectable *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  if ( a2 )
  {
    v5 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, struct IInspectable **))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
           &v11);
    v6 = v5;
    if ( v5 < 0 )
    {
      if ( v5 == -2147467262 )
      {
        v2 = a2;
        v6 = 3;
      }
      else
      {
        ((void (__fastcall *)(struct IInspectable *))a2->lpVtbl->Release)(a2);
      }
    }
    else
    {
      v2 = v11;
      ((void (__fastcall *)(struct IInspectable *))a2->lpVtbl->Release)(a2);
      v6 = 7;
    }
  }
  else
  {
    v6 = 0;
  }
  v9 = *(_QWORD *)this;
  v7 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 2) = v6;
  v10 = v7;
  *(_QWORD *)this = v2;
  RoVariant::~RoVariant((RoVariant *)&v9);
  return this;
}
