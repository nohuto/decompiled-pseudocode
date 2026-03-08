/*
 * XREFs of AMLIRestartContext @ 0x1C0048D0C
 * Callers:
 *     ACPIFlushDeviceQueueCallback @ 0x1C0014500 (ACPIFlushDeviceQueueCallback.c)
 *     ACPIFlushPowerQueueCallback @ 0x1C0014540 (ACPIFlushPowerQueueCallback.c)
 *     GenericDeviceFirmwareLockCompletion @ 0x1C001BCF0 (GenericDeviceFirmwareLockCompletion.c)
 *     AcpiNativeMethodEvalRequestCompletion @ 0x1C00375C0 (AcpiNativeMethodEvalRequestCompletion.c)
 *     ACPITableUnloadCallBack @ 0x1C003F960 (ACPITableUnloadCallBack.c)
 *     AMLIFinalizeObject @ 0x1C0048034 (AMLIFinalizeObject.c)
 *     FreeObjOwnerWorker @ 0x1C004B7F0 (FreeObjOwnerWorker.c)
 * Callees:
 *     RestartContext @ 0x1C00512E8 (RestartContext.c)
 */

__int64 __fastcall AMLIRestartContext(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_DWORD *)(a1 + 64) >> 8;
  LOBYTE(v1) = (*(_DWORD *)(a1 + 64) & 0x100) == 0;
  return RestartContext(a1, v1);
}
