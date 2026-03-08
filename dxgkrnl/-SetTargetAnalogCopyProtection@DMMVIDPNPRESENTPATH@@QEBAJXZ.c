/*
 * XREFs of ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C03B54DC
 * Callers:
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C017A800 (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000469C (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C0069D50 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ?DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETANALOGCOPYPROTECTION@@@Z @ 0x1C02C6EE0 (-DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETANALOGCOPYPROTECTI.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  DXGADAPTER **v4; // rdi
  __int64 v5; // r8
  D3DDDI_VIDEO_PRESENT_TARGET_ID v6; // ecx
  D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE v7; // eax
  int v8; // eax
  unsigned int v9; // edi
  _DXGKARG_SETTARGETANALOGCOPYPROTECTION v11; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v2 + 40) )
    WdLogSingleEntry0(1LL);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 88LL);
  if ( !*(_QWORD *)(v3 + 8) )
    WdLogSingleEntry0(1LL);
  v4 = *(DXGADAPTER ***)(v3 + 8);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v4[2]) )
    WdLogSingleEntry0(1LL);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4[2] + 27) + 64LL) + 40LL) + 28LL) < 0x700Au )
    WdLogSingleEntry0(1LL);
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v4, *(_DWORD *)(*((_QWORD *)this + 11) + 24LL)) )
    return 0LL;
  v6 = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  v11.CopyProtectionSupport = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)*((_DWORD *)this + 42);
  v7 = *((_DWORD *)this + 43);
  v11.TargetId = v6;
  v11.CopyProtectionType = v7;
  if ( v7 == D3DKMDT_VPPMT_MACROVISION_APSTRIGGER )
    v11.APSTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits(this);
  else
    v11.APSTriggerBits = 0;
  v8 = ADAPTER_DISPLAY::DdiSetTargetAnalogCopyProtection((ADAPTER_DISPLAY *)v4, &v11, v5);
  v9 = v8;
  if ( v8 == -1073741637 )
  {
    WdLogSingleEntry2(3LL, this, -1073741637LL);
    return 3221225659LL;
  }
  if ( v8 >= 0 )
    return 0LL;
  WdLogSingleEntry2(2LL, this, v8);
  return v9;
}
