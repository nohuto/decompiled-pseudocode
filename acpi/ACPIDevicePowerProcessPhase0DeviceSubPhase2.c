/*
 * XREFs of ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C001EF60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C000A374 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001C540 (ACPIDeviceCompleteGenericPhase.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase0DeviceSubPhase2(__int64 a1)
{
  _QWORD *v1; // rax
  int v2; // edi
  const char *v4; // rcx
  const char *v5; // r8
  char v6; // r10
  __int64 v7; // rdx

  v1 = *(_QWORD **)(a1 + 40);
  v2 = 0;
  v4 = (const char *)&unk_1C00622D0;
  v5 = (const char *)&unk_1C00622D0;
  v6 = 0;
  if ( v1 )
  {
    v7 = v1[1];
    v6 = (char)v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)v1[76];
      if ( (v7 & 0x400000000000LL) != 0 )
        v5 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x35u,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      v6,
      v4,
      v5);
  if ( (*(_DWORD *)(a1 + 232) & 1) == 0 )
  {
    *(_DWORD *)(a1 + 256) = 0;
    v2 = 2;
  }
  *(_DWORD *)(a1 + 212) = v2;
  ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
  return 0LL;
}
