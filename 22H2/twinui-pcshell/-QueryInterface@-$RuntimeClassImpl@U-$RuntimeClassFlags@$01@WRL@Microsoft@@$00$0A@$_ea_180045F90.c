/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowSizeConversionLogicalClientToWindow@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180045F90
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowSizeConversionLogicalClientToWindow@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016FAA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18016FAA0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowSizeConversionLogicalClientToWindow@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016FAB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18016FAB0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowSizeConversionLogicalClientToWindow@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016FAC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18016FAC0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowSizeConversionLogicalClientToWindow@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016FAD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18016FAD0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18036F63C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiv_ea_18036F63C.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IWindowSizeConversionLogicalClientToWindow,IImmersiveMonitorNotification>::QueryInterface(
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
  __int64 v13; // r9
  __int64 v14; // r10

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
LABEL_21:
    CanCastTo = 0;
    goto LABEL_11;
  }
  if ( InlineIsEqualGUID(v6, &GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4) )
  {
    *v7 = v10;
    goto LABEL_21;
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
    goto LABEL_17;
  if ( !InlineIsEqualGUID(v8, &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a) )
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>::CanCastTo(
                  v14 + 8,
                  v13);
LABEL_17:
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_14;
  }
  *v7 = v14;
  CanCastTo = 0;
LABEL_14:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
  return (unsigned int)CanCastTo;
}
