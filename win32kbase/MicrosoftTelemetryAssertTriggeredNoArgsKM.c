/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C008D2C0
 * Callers:
 *     xxxRemoteConnect @ 0x1C000F480 (xxxRemoteConnect.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C001FAC0 (DrvUpdateGraphicsDeviceList.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0025090 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ImpCompleteRpc @ 0x1C0086EB8 (ImpCompleteRpc.c)
 *     ImpRpcQueryEnabledStateAsync @ 0x1C0087020 (ImpRpcQueryEnabledStateAsync.c)
 *     ImpRpcAsyncResponseHandler @ 0x1C0089B28 (ImpRpcAsyncResponseHandler.c)
 *     ImpInitializeWork @ 0x1C0089C08 (ImpInitializeWork.c)
 *     ImpAllocate @ 0x1C0089EE4 (ImpAllocate.c)
 *     ImpWorkerRoutine @ 0x1C0089F90 (ImpWorkerRoutine.c)
 *     ImpReleaseLock @ 0x1C008A6FC (ImpReleaseLock.c)
 *     ImpAcquireLock @ 0x1C008A74C (ImpAcquireLock.c)
 *     ImSessionStop @ 0x1C008A7A8 (ImSessionStop.c)
 *     ImpInitializeLock @ 0x1C008BE24 (ImpInitializeLock.c)
 *     ImSessionStart @ 0x1C008BE98 (ImSessionStart.c)
 *     ImpRpcAsyncInit @ 0x1C008C754 (ImpRpcAsyncInit.c)
 *     ImpRpcConnect @ 0x1C008CAE8 (ImpRpcConnect.c)
 *     ImpCleanupWork @ 0x1C008D2F0 (ImpCleanupWork.c)
 *     ImpRpcDisconnect @ 0x1C008D3D4 (ImpRpcDisconnect.c)
 *     ImpCleanupLock @ 0x1C008D638 (ImpCleanupLock.c)
 *     ImpWaitForWorkerShutdown @ 0x1C008D694 (ImpWaitForWorkerShutdown.c)
 *     ImpShutdownWorker @ 0x1C008D758 (ImpShutdownWorker.c)
 *     ImpRpcAsyncUnInit @ 0x1C008D848 (ImpRpcAsyncUnInit.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C00EEC00 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C017F048 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 *     ImpRpcSendString @ 0x1C027474C (ImpRpcSendString.c)
 *     ImpQueueCharacter @ 0x1C0274AC8 (ImpQueueCharacter.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C008C178 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

void MicrosoftTelemetryAssertTriggeredNoArgsKM()
{
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  MicrosoftTelemetryAssertTriggeredWorker(retaddr, 0, 0LL, -1, -1, 0LL);
}
