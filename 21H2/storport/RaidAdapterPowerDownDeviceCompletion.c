/*
 * XREFs of RaidAdapterPowerDownDeviceCompletion @ 0x1C0016230
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0033780 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C00337D0 (WPP_SF_qqD.c)
 *     McTemplateK0qpd_EtwWriteTransfer @ 0x1C003DF0C (McTemplateK0qpd_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidAdapterPowerDownDeviceCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // edx
  int v5; // ecx
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 25LL, &WPP_e79642d899e13d0104d95ec0ec72addd_Traceguids, v2, a2);
  }
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( StorEtwLoggingEnabled )
  {
    v7 = 0LL;
    IoGetActivityIdIrp(a2, &v7);
    if ( (byte_1C0069841 & 1) != 0 )
      McTemplateK0qpd_EtwWriteTransfer(v5, v4, (unsigned int)&v7, *(_DWORD *)(v2 + 56), a2, *(_DWORD *)(a2 + 48));
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 280));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      26LL,
      &WPP_e79642d899e13d0104d95ec0ec72addd_Traceguids,
      v2,
      a2,
      *(_DWORD *)(a2 + 48));
  }
  return 0LL;
}
