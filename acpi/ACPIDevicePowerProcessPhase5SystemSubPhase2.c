/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C00211F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C000A374 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001C540 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIResumeInterpreter @ 0x1C0048D2C (AMLIResumeInterpreter.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase2(__int64 a1)
{
  _QWORD *v1; // rax
  const char *v2; // rdx
  const char *v4; // r10
  _QWORD *v5; // rcx
  __int64 v6; // r8
  bool v7; // zf

  v1 = *(_QWORD **)(a1 + 40);
  v2 = (const char *)&unk_1C00622D0;
  v4 = (const char *)&unk_1C00622D0;
  v5 = 0LL;
  if ( v1 )
  {
    v6 = v1[1];
    v5 = v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v2 = (const char *)v1[76];
      if ( (v6 & 0x400000000000LL) != 0 )
        v4 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x55u,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      (char)v5,
      v2,
      v4);
  v7 = *(_DWORD *)(a1 + 104) == 1;
  *(_DWORD *)(a1 + 212) = 5;
  if ( !v7 )
    AMLIResumeInterpreter(v5);
  ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
  return 0LL;
}
