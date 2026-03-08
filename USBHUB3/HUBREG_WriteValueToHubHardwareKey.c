/*
 * XREFs of HUBREG_WriteValueToHubHardwareKey @ 0x1C0085D90
 * Callers:
 *     HUBFDO_LogHubResetRecoveryWasInvoked @ 0x1C007C76C (HUBFDO_LogHubResetRecoveryWasInvoked.c)
 *     HUBREG_EvtWorkItemUpdateSqmHubOvercurrentDetected @ 0x1C0085EC0 (HUBREG_EvtWorkItemUpdateSqmHubOvercurrentDetected.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_WriteValueToHubHardwareKey(__int64 a1, __int64 a2, int a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  int *v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  v10 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16),
         1LL,
         131078LL,
         0LL,
         &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_8;
    v7 = 56;
    goto LABEL_7;
  }
  v9 = &v11;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 1928))(
         WdfDriverGlobals,
         v10,
         a2);
  v6 = v5;
  if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 57;
LABEL_7:
    LODWORD(v9) = v5;
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 2520), 2u, 3u, v7, (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids, v9);
  }
LABEL_8:
  if ( v10 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return v6;
}
