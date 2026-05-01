/*
 * XREFs of HampIpcChannelObjectCompareObjectsForTree @ 0x1800083B0
 * Callers:
 *     HamCreateExtendedExecution @ 0x180004410 (HamCreateExtendedExecution.c)
 *     RmpClientRegisterActivityHostCallbacks @ 0x1800058F0 (RmpClientRegisterActivityHostCallbacks.c)
 *     RmpClientAcquireResourceSet @ 0x180005B20 (RmpClientAcquireResourceSet.c)
 *     HamCreateActivityForProcess @ 0x180005EE0 (HamCreateActivityForProcess.c)
 *     HamCreateActivityEx @ 0x180006180 (HamCreateActivityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampIpcChannelObjectCompareObjectsForTree(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 40) + 64LL))();
}
