/*
 * XREFs of KiAbThreadUnboostIoPriority @ 0x14032A2E0
 * Callers:
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     ExpWorkerInitialization @ 0x140A6AE74 (ExpWorkerInitialization.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1402CDF90 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x1402DD248 (PsBoostThreadIoQoS.c)
 */

void __fastcall KiAbThreadUnboostIoPriority(__int64 a1, int a2)
{
  _InterlockedDecrement((volatile signed __int32 *)((a2 != 0 ? 4 : 0) + a1 + 860));
  if ( a2 )
    PsBoostThreadIoQoS(a1, 1LL);
  else
    PsBoostThreadIoEx(a1, 1, 0, 0LL);
}
