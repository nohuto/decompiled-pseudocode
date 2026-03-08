/*
 * XREFs of HUBDSM_PurgingDeviceIoOnPrepareForHibernate @ 0x1C001FAD0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl @ 0x1C0029078 (HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_PurgingDeviceIoOnPrepareForHibernate(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl(v1);
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v1 + 16) + 32LL), 0xFFFFFFBF);
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v1 + 16) + 32LL), 0xFFFFDFFF);
  return 1000LL;
}
