/*
 * XREFs of NVMeControllerInitPart2 @ 0x1C000DAA0
 * Callers:
 *     NVMeHwInitialize @ 0x1C0008470 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x1C0008540 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerPowerUp @ 0x1C000E1A4 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E580 (NVMeControllerReset.c)
 *     NVMeControllerReinitialize @ 0x1C001CA10 (NVMeControllerReinitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003750 (__security_check_cookie.c)
 *     memset @ 0x1C0004B80 (memset.c)
 *     FillControllerRuntimeLog @ 0x1C0007A5C (FillControllerRuntimeLog.c)
 *     GetInterruptMessageInformation @ 0x1C0009B6C (GetInterruptMessageInformation.c)
 *     InitializePerfOptions @ 0x1C000A558 (InitializePerfOptions.c)
 *     IoQueuesCreation @ 0x1C000A6A8 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000A834 (IoQueuesCreationAsync.c)
 *     IoQueuesInitialize @ 0x1C000B10C (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x1C000B734 (IoReservedQueuesInitialize.c)
 *     IoSqToIoCqMapping @ 0x1C000B84C (IoSqToIoCqMapping.c)
 *     NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x1C000D744 (NVMeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000F45C (NVMeInitHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C000F6D0 (NVMeInitStreams.c)
 *     NVMeBuildPollingConfiguration @ 0x1C001C3A8 (NVMeBuildPollingConfiguration.c)
 *     NVMeSetArbitration @ 0x1C002369C (NVMeSetArbitration.c)
 *     NVMeSetInterruptCoalescing @ 0x1C00239D8 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C0023AC0 (NVMeSetIoQueueCount.c)
 */

__int64 __fastcall NVMeControllerInitPart2(__int64 a1, char a2, char a3)
{
  unsigned int v6; // eax
  unsigned int v7; // edi
  _DWORD v9[24]; // [rsp+70h] [rbp-88h] BYREF

  memset(v9, 0, 0x58uLL);
  if ( !a2 )
  {
LABEL_5:
    if ( (*(_DWORD *)(a1 + 136) & 0x10) == 0 && (*(_DWORD *)(a1 + 32) & 0x2000) != 0 )
      *(_DWORD *)(a1 + 132) = 0xFFFF;
    v6 = NVMeSetIoQueueCount(a1);
    v7 = v6;
    if ( v6 || !*(_WORD *)(a1 + 918) && (!*(_WORD *)(a1 + 338) || !*(_WORD *)(a1 + 336)) )
    {
      *(_DWORD *)(a1 + 36) = 12;
      if ( v6 )
        goto LABEL_40;
      goto LABEL_39;
    }
    if ( (*(_DWORD *)(a1 + 64) & 4) == 0 )
      NVMeSetInterruptCoalescing(a1);
    if ( (*(_DWORD *)(a1 + 64) & 4) == 0 )
      NVMeSetArbitration(a1);
    if ( a2 )
    {
      if ( *(_WORD *)(a1 + 338) && *(_WORD *)(a1 + 336) )
      {
        if ( !InitializePerfOptions(a1) )
        {
          *(_DWORD *)(a1 + 336) = 0;
          *(_DWORD *)(a1 + 36) = 21;
          goto LABEL_39;
        }
        if ( !IoQueuesInitialize(a1) )
        {
          *(_DWORD *)(a1 + 36) = 13;
          goto LABEL_39;
        }
        IoSqToIoCqMapping(a1);
      }
      if ( !*(_BYTE *)(a1 + 20) && *(_WORD *)(a1 + 918) && !IoReservedQueuesInitialize(a1) )
      {
        *(_DWORD *)(a1 + 36) = 17;
        goto LABEL_39;
      }
    }
    if ( *(_WORD *)(a1 + 338) && *(_WORD *)(a1 + 336) )
    {
      if ( (*(_DWORD *)(a1 + 136) & 4) != 0 || a3 )
      {
        v7 = IoQueuesCreation(a1);
        if ( v7 )
          goto LABEL_40;
      }
      else if ( !IoQueuesCreationAsync(a1) )
      {
        goto LABEL_39;
      }
    }
    NVMeInitHostMemoryBuffer(a1);
    if ( (*(_BYTE *)(a1 + 4008) & 5) == 5 )
      NVMeInitStreams(a1);
    NVMeControllerGetFeaturesSupportedCacheCapabilities(a1);
    goto LABEL_43;
  }
  if ( GetInterruptMessageInformation(a1) )
  {
    NVMeBuildPollingConfiguration(a1);
    goto LABEL_5;
  }
  *(_DWORD *)(a1 + 36) = 11;
LABEL_39:
  v7 = -1056964607;
LABEL_40:
  if ( !*(_BYTE *)(a1 + 20) )
  {
    FillControllerRuntimeLog(a1, v9);
    StorPortNotification(4109LL, a1, 0LL);
  }
  if ( v7 )
  {
    ++*(_DWORD *)(a1 + 4476);
    return v7;
  }
LABEL_43:
  ++*(_DWORD *)(a1 + 4472);
  return v7;
}
