/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIInputHostLayoutChanges@@UIAppSwitcherNotification@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18003CC84
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UIVoiceAssistantPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIInputHostLayoutChanges@@UIAppSwitcherNotification@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180040100 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiv.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18008A084 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIPrivilegedOperationsC.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IInputHostLayoutChanges,IAppSwitcherNotification,IApplicationViewChangeListener,IWindowManagementShowMoveSizeEvents,IPrivilegedOperationsConsumer>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ecx
  int IsEqualGUID; // eax
  _QWORD *v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // r10

  if ( *a2 != -301920745
    || a2[1] != *(_DWORD *)&GUID_ee010e17_919a_4068_868b_675acf787303.Data2
    || a2[2] != *(_DWORD *)GUID_ee010e17_919a_4068_868b_675acf787303.Data4
    || a2[3] != *(_DWORD *)&GUID_ee010e17_919a_4068_868b_675acf787303.Data4[4] )
  {
    v3 = a1 + 8;
    if ( *a2 == -1811144131
      && a2[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
      && a2[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
      && a2[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4]
      || (v3 += 8LL, *a2 == 1337586361)
      && a2[1] == *(_DWORD *)&GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data2
      && a2[2] == *(_DWORD *)GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data4
      && a2[3] == *(_DWORD *)&GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data4[4] )
    {
      *a3 = v3;
    }
    else
    {
      if ( *a2 != 1639578286
        || a2[1] != *(_DWORD *)&GUID_61b9faae_6abc_4c4b_9bdf_77c52e795bf6.Data2
        || a2[2] != *(_DWORD *)GUID_61b9faae_6abc_4c4b_9bdf_77c52e795bf6.Data4
        || a2[3] != *(_DWORD *)&GUID_61b9faae_6abc_4c4b_9bdf_77c52e795bf6.Data4[4] )
      {
        IsEqualGUID = InlineIsEqualGUID(a2, &GUID_727f9e97_76ee_497b_a942_b6371328485c, a3);
        v4 = 0;
        if ( IsEqualGUID )
        {
          *v7 = v9;
        }
        else if ( *v8 == -2005384609
               && v8[1] == *(_DWORD *)&GUID_8878425f_8c9b_4051_a1ef_cc08e3166e7b.Data2
               && v8[2] == *(_DWORD *)GUID_8878425f_8c9b_4051_a1ef_cc08e3166e7b.Data4
               && v8[3] == *(_DWORD *)&GUID_8878425f_8c9b_4051_a1ef_cc08e3166e7b.Data4[4] )
        {
          *v7 = v9 + 8;
        }
        else
        {
          return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPrivilegedOperationsConsumer>::CanCastTo(
                                 v9 + 16,
                                 v8);
        }
        return v4;
      }
      *a3 = v3 + 8;
    }
    return 0;
  }
  *a3 = a1;
  return 0LL;
}
