/*
 * XREFs of NVMeControllerInitPart2 @ 0x1C000DDD0
 * Callers:
 *     NVMeHwInitialize @ 0x1C000AD80 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x1C000AE40 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerPowerUp @ 0x1C000E398 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E684 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0018290 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     GetInterruptMessageInformation @ 0x1C000B6D4 (GetInterruptMessageInformation.c)
 *     InitializePerfOptions @ 0x1C000BE94 (InitializePerfOptions.c)
 *     IoQueuesCreation @ 0x1C000BFD8 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000C15C (IoQueuesCreationAsync.c)
 *     IoQueuesInitialize @ 0x1C000C8F4 (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x1C000CE38 (IoReservedQueuesInitialize.c)
 *     IoSqToIoCqMapping @ 0x1C000CF44 (IoSqToIoCqMapping.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000EC10 (NVMeInitHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C000EE88 (NVMeInitStreams.c)
 *     NVMeBuildPollingConfiguration @ 0x1C0017E98 (NVMeBuildPollingConfiguration.c)
 *     NVMeSetArbitration @ 0x1C001B3E4 (NVMeSetArbitration.c)
 *     NVMeSetInterruptCoalescing @ 0x1C001B7A4 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C001B8B8 (NVMeSetIoQueueCount.c)
 */

char __fastcall NVMeControllerInitPart2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  char v5; // si
  int v7; // ecx

  v4 = a3;
  v5 = a2;
  if ( (_BYTE)a2 )
  {
    if ( !GetInterruptMessageInformation(a1, a2, a3, a4) )
    {
      v7 = 11;
LABEL_29:
      *(_DWORD *)(a1 + 28) = v7;
      goto LABEL_30;
    }
    NVMeBuildPollingConfiguration(a1);
  }
  NVMeSetIoQueueCount(a1);
  if ( !*(_WORD *)(a1 + 290) || !*(_WORD *)(a1 + 288) )
  {
    v7 = 12;
    goto LABEL_29;
  }
  if ( (*(_DWORD *)(a1 + 56) & 4) == 0 )
  {
    NVMeSetInterruptCoalescing(a1);
    if ( (*(_DWORD *)(a1 + 56) & 4) == 0 )
      NVMeSetArbitration(a1);
  }
  if ( v5 )
  {
    if ( !InitializePerfOptions(a1) )
    {
      *(_DWORD *)(a1 + 288) = 0;
      v7 = 21;
      goto LABEL_29;
    }
    if ( !IoQueuesInitialize(a1) )
    {
      v7 = 13;
      goto LABEL_29;
    }
    if ( !*(_BYTE *)(a1 + 16) && *(_WORD *)(a1 + 822) && !IoReservedQueuesInitialize(a1) )
    {
      v7 = 17;
      goto LABEL_29;
    }
    IoSqToIoCqMapping(a1);
  }
  if ( (*(_DWORD *)(a1 + 128) & 4) != 0 || v4 )
  {
    if ( !IoQueuesCreation(a1) )
    {
LABEL_30:
      StorPortNotification(4109LL, a1, 0LL);
      return 0;
    }
  }
  else if ( !IoQueuesCreationAsync(a1) )
  {
    goto LABEL_30;
  }
  NVMeInitHostMemoryBuffer(a1);
  if ( (*(_BYTE *)(a1 + 3792) & 5) == 5 )
    NVMeInitStreams(a1);
  return 1;
}
