/*
 * XREFs of MasterInputThreadPrepareForRitTakeover @ 0x1C010BEF4
 * Callers:
 *     EditionDeactivateMitInput @ 0x1C010BA90 (EditionDeactivateMitInput.c)
 * Callees:
 *     ResetPointerDevices @ 0x1C00294A8 (ResetPointerDevices.c)
 *     WPP_RECORDER_SF_s @ 0x1C003B844 (WPP_RECORDER_SF_s.c)
 *     ?RITORDIT@@YAPEADXZ @ 0x1C010BF68 (-RITORDIT@@YAPEADXZ.c)
 */

__int64 MasterInputThreadPrepareForRitTakeover()
{
  const char *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v0 = RITORDIT();
    WPP_RECORDER_SF_s(v2, v1, 0x10u, 0xAu, (__int64)&WPP_dd6a86e0a85d319c71fd6771191f14c7_Traceguids, v0);
  }
  ResetPointerDevices();
  gbPendRecreateTouchInjectionDevices = 1;
  CleanupSensorExplicitly(2LL);
  return EtwTraceDitDisEngaged();
}
