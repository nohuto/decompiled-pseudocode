/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800442B0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180163D10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180163D10.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180163D20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180163D20.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180163D30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180163D30.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180163D40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180163D40.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180163D50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180163D50.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180163D60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180163D60.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180163D70 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180163D70.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180163D80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180163D80.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18021915C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIFullScreenNotificatio.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IFullScreenManager,IFullScreenManagerPriv,IFullScreenNotificationService,IFullScreenPositionerNotification,IImmersiveMonitorNotification,IPrivilegedOperationsConsumer>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r11
  int CanCastTo; // ebx
  __int64 v13; // r10
  __int64 v15; // r9
  __int64 v16; // r10

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v3, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352) )
  {
    *v7 = v9;
LABEL_24:
    CanCastTo = 0;
    goto LABEL_11;
  }
  if ( InlineIsEqualGUID(v6, &GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4) )
  {
    *v7 = v10;
    goto LABEL_24;
  }
  v11 = v10 + 8;
  if ( *v8 == 1834041537
    && v8[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
    && v8[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
    && v8[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
  {
    *v7 = v11;
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = -2147467262;
  }
  if ( CanCastTo == -2147467262 )
    CanCastTo = -2147467262;
LABEL_11:
  if ( CanCastTo != -2147467262 )
    goto LABEL_20;
  v13 = v9 + 88;
  if ( *v8 != -267831919
    || v8[1] != *(_DWORD *)&GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d.Data2
    || v8[2] != *(_DWORD *)GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d.Data4
    || v8[3] != *(_DWORD *)&GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d.Data4[4] )
  {
    if ( InlineIsEqualGUID(v8, &GUID_5f7c3ff2_e06b_42a9_b4de_c87109b32dd0) )
    {
      *v7 = v16;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFullScreenNotificationService,IFullScreenPositionerNotification,IImmersiveMonitorNotification,IPrivilegedOperationsConsumer>::CanCastTo(
                    v16 + 8,
                    v15);
    }
LABEL_20:
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_17;
  }
  *v7 = v13;
  CanCastTo = 0;
LABEL_17:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
  return (unsigned int)CanCastTo;
}
