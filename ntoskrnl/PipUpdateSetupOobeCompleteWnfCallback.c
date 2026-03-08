/*
 * XREFs of PipUpdateSetupOobeCompleteWnfCallback @ 0x14094F200
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage @ 0x14040A260 (Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage.c)
 *     ExQueryWnfStateData @ 0x140793060 (ExQueryWnfStateData.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PipUpdateSetupOobeCompleteWnfCallback(__int64 a1)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v4[5]; // [rsp+24h] [rbp-14h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v4[0] = 0;
  v3 = 4;
  if ( (int)ExQueryWnfStateData(a1, &v5, v4, &v3) >= 0 && v3 == 4 )
  {
    if ( v4[0] )
    {
      PnpSetupOOBEInProgress = 0;
      if ( (unsigned int)Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage() )
      {
        Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1852403792LL);
        if ( Pool2 )
        {
          Pool2->List.Flink = 0LL;
          Pool2->WorkerRoutine = PipOobeCompleteAsyncCallback;
          Pool2->Parameter = Pool2;
          ExQueueWorkItem(Pool2, NormalWorkQueue);
        }
      }
    }
  }
  return 0LL;
}
