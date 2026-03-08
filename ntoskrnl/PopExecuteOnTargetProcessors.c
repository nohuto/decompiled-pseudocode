/*
 * XREFs of PopExecuteOnTargetProcessors @ 0x140236D20
 * Callers:
 *     PoGetIdleTimes @ 0x140236ABC (PoGetIdleTimes.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1402F74A8 (PoGetPerfStateAndParkingInfo.c)
 *     PpmParkRegisterParking @ 0x14038D880 (PpmParkRegisterParking.c)
 *     PpmCheckResetProcessors @ 0x14038F23C (PpmCheckResetProcessors.c)
 *     PpmHeteroHgsBackupInit @ 0x1403A6744 (PpmHeteroHgsBackupInit.c)
 *     PpmUpdateIdleDomains @ 0x140583E60 (PpmUpdateIdleDomains.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1405841D0 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140584430 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x14059558C (PpmCapturePerformanceDistribution.c)
 *     PpmUpdateIdleStates @ 0x14080D6D0 (PpmUpdateIdleStates.c)
 *     EtwpKernelTraceRundown @ 0x14080D9F8 (EtwpKernelTraceRundown.c)
 *     PpmIdleRegisterDefaultStates @ 0x14080FA58 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateProcessorPolicy @ 0x140826290 (PpmUpdateProcessorPolicy.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x14082681C (PpmParkUpdateConcurrencyTracking.c)
 *     PpmCheckInitProcessors @ 0x140827DA4 (PpmCheckInitProcessors.c)
 *     PpmEventTraceControlCallback @ 0x140860AA0 (PpmEventTraceControlCallback.c)
 *     PpmReapplyIdlePolicy @ 0x14097FAC4 (PpmReapplyIdlePolicy.c)
 *     PpmWmiIdleAccountingWork @ 0x140993530 (PpmWmiIdleAccountingWork.c)
 *     PpmPostProcessMediaBuffering @ 0x14099A314 (PpmPostProcessMediaBuffering.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopQueueTargetDpc @ 0x140235F8C (PopQueueTargetDpc.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

__int64 __fastcall PopExecuteOnTargetProcessors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Object; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v6[2]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v7[2]; // [rsp+48h] [rbp-31h] BYREF
  __int16 v8; // [rsp+58h] [rbp-21h]
  int v9; // [rsp+5Ah] [rbp-1Fh]
  __int16 v10; // [rsp+5Eh] [rbp-1Bh]
  _QWORD v11[5]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v12; // [rsp+88h] [rbp+Fh]
  int v13; // [rsp+8Ch] [rbp+13h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+90h] [rbp+17h] BYREF
  __int128 v15; // [rsp+A0h] [rbp+27h]
  __int128 v16; // [rsp+B0h] [rbp+37h]
  __int64 v17; // [rsp+C0h] [rbp+47h]
  int v18; // [rsp+C8h] [rbp+4Fh]

  Object = 393217LL;
  v17 = 0LL;
  v18 = 0;
  v13 = 0;
  v6[1] = v6;
  v6[0] = v6;
  v7[1] = *(_QWORD *)(a1 + 8);
  v11[4] = v7;
  v7[0] = a1;
  v11[0] = a2;
  v11[3] = &Object;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v9 = 0;
  v15 = 0LL;
  v10 = 0;
  v16 = 0LL;
  v8 = 0;
  v11[1] = a3;
  v11[2] = a4;
  v12 = 0;
  PopQueueTargetDpc((ULONG_PTR)BugCheckParameter2, (__int64)v11);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  return v12;
}
