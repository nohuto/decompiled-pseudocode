/*
 * XREFs of AMLIRestartContext @ 0x1C0048D2C
 * Callers:
 *     ACPIFlushDeviceQueueCallback @ 0x1C0014500 (ACPIFlushDeviceQueueCallback.c)
 *     ACPIFlushPowerQueueCallback @ 0x1C0014540 (ACPIFlushPowerQueueCallback.c)
 *     GenericDeviceFirmwareLockCompletion @ 0x1C001BD10 (GenericDeviceFirmwareLockCompletion.c)
 *     AcpiNativeMethodEvalRequestCompletion @ 0x1C00375E0 (AcpiNativeMethodEvalRequestCompletion.c)
 *     ACPITableUnloadCallBack @ 0x1C003F980 (ACPITableUnloadCallBack.c)
 *     AMLIFinalizeObject @ 0x1C0048054 (AMLIFinalizeObject.c)
 *     FreeObjOwnerWorker @ 0x1C004B810 (FreeObjOwnerWorker.c)
 * Callees:
 *     RestartContext @ 0x1C0051308 (RestartContext.c)
 */

__int64 __fastcall AMLIRestartContext(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_DWORD *)(a1 + 64) >> 8;
  LOBYTE(v1) = (*(_DWORD *)(a1 + 64) & 0x100) == 0;
  return RestartContext(a1, v1);
}
