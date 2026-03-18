/*
 * XREFs of NVMeControllerInitPart2 @ 0x1C0006F74
 * Callers:
 *     NVMeHwPassiveInitialize @ 0x1C0005F00 (NVMeHwPassiveInitialize.c)
 *     NVMeHwInitialize @ 0x1C000E6D0 (NVMeHwInitialize.c)
 *     NVMeControllerPowerUp @ 0x1C0018D60 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C001906C (NVMeControllerReset.c)
 *     NVMeControllerReinitialize @ 0x1C00220A4 (NVMeControllerReinitialize.c)
 * Callees:
 *     GetInterruptMessageInformation @ 0x1C0006260 (GetInterruptMessageInformation.c)
 *     InitializePerfOptions @ 0x1C0006584 (InitializePerfOptions.c)
 *     IoSqToIoCqMapping @ 0x1C00066C8 (IoSqToIoCqMapping.c)
 *     IoQueuesCreationAsync @ 0x1C0006850 (IoQueuesCreationAsync.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C0006EB0 (NVMeInitHostMemoryBuffer.c)
 *     NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x1C000793C (NVMeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     IoQueuesInitialize @ 0x1C0008168 (IoQueuesInitialize.c)
 *     NVMeSetIoQueueCount @ 0x1C0008B98 (NVMeSetIoQueueCount.c)
 *     NVMeBuildPollingConfiguration @ 0x1C0008D3C (NVMeBuildPollingConfiguration.c)
 *     NVMeSetInterruptCoalescing @ 0x1C0008E58 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C0008F6C (NVMeSetArbitration.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     FillControllerRuntimeLog @ 0x1C0017A04 (FillControllerRuntimeLog.c)
 *     IoQueuesCreation @ 0x1C0017D90 (IoQueuesCreation.c)
 *     IoReservedQueuesInitialize @ 0x1C0018434 (IoReservedQueuesInitialize.c)
 *     NVMeInitStreams @ 0x1C00198AC (NVMeInitStreams.c)
 */

__int64 __fastcall NVMeControllerInitPart2(__int64 a1, char a2, char a3)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  _BYTE v12[96]; // [rsp+70h] [rbp-88h] BYREF

  memset(v12, 0, 0x58uLL);
  if ( a2 )
  {
    if ( !GetInterruptMessageInformation(a1) )
    {
      *(_DWORD *)(a1 + 36) = 11;
      goto LABEL_40;
    }
    NVMeBuildPollingConfiguration(a1);
  }
  if ( (*(_DWORD *)(a1 + 136) & 0x10) == 0 && (*(_DWORD *)(a1 + 32) & 0x2000) != 0 )
    *(_DWORD *)(a1 + 132) = 0xFFFF;
  v6 = NVMeSetIoQueueCount(a1);
  v10 = v6;
  if ( v6 || !*(_WORD *)(a1 + 838) && (!*(_WORD *)(a1 + 306) || !*(_WORD *)(a1 + 304)) )
  {
    *(_DWORD *)(a1 + 36) = 12;
    if ( v6 )
      goto LABEL_41;
    goto LABEL_40;
  }
  if ( (*(_DWORD *)(a1 + 64) & 4) == 0 )
  {
    NVMeSetInterruptCoalescing(a1);
    if ( (*(_DWORD *)(a1 + 64) & 4) == 0 )
      NVMeSetArbitration(a1);
  }
  if ( !a2 )
    goto LABEL_22;
  if ( *(_WORD *)(a1 + 306) && *(_WORD *)(a1 + 304) )
  {
    if ( InitializePerfOptions(a1) )
    {
      if ( (unsigned __int8)IoQueuesInitialize(a1) )
      {
        IoSqToIoCqMapping(a1);
        goto LABEL_20;
      }
      *(_DWORD *)(a1 + 36) = 13;
    }
    else
    {
      *(_DWORD *)(a1 + 304) = 0;
      *(_DWORD *)(a1 + 36) = 21;
    }
LABEL_40:
    v10 = -1056964607;
    goto LABEL_41;
  }
LABEL_20:
  if ( !*(_BYTE *)(a1 + 20) && *(_WORD *)(a1 + 838) && !(unsigned __int8)IoReservedQueuesInitialize(a1) )
  {
    *(_DWORD *)(a1 + 36) = 17;
    goto LABEL_40;
  }
LABEL_22:
  if ( *(_WORD *)(a1 + 306) && *(_WORD *)(a1 + 304) )
  {
    if ( (*(_DWORD *)(a1 + 136) & 4) != 0 || a3 )
    {
      v10 = IoQueuesCreation(a1);
      if ( v10 )
      {
LABEL_41:
        if ( !*(_BYTE *)(a1 + 20) )
        {
          FillControllerRuntimeLog(a1, v12);
          StorPortNotification(4109LL, a1, 0LL, 0LL);
        }
        return v10;
      }
    }
    else if ( !IoQueuesCreationAsync(a1) )
    {
      goto LABEL_40;
    }
  }
  NVMeInitHostMemoryBuffer(a1, v7, v8, v9);
  if ( (*(_BYTE *)(a1 + 3808) & 5) == 5 )
    NVMeInitStreams(a1);
  NVMeControllerGetFeaturesSupportedCacheCapabilities(a1);
  return v10;
}
