__int64 __fastcall NVMeControllerInitPart2(__int64 a1, char a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  _DWORD v13[24]; // [rsp+70h] [rbp-88h] BYREF

  memset(v13, 0, 0x58uLL);
  if ( !a2 )
  {
LABEL_5:
    if ( (*(_DWORD *)(a1 + 136) & 0x10) == 0 && (*(_DWORD *)(a1 + 32) & 0x2000) != 0 )
      *(_DWORD *)(a1 + 132) = 0xFFFF;
    v9 = NVMeSetIoQueueCount(a1);
    v10 = v9;
    if ( v9 || !*(_WORD *)(a1 + 918) && (!*(_WORD *)(a1 + 338) || !*(_WORD *)(a1 + 336)) )
    {
      *(_DWORD *)(a1 + 36) = 12;
      if ( v9 )
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
        v10 = IoQueuesCreation(a1);
        if ( v10 )
          goto LABEL_40;
      }
      else if ( !IoQueuesCreationAsync(a1) )
      {
        goto LABEL_39;
      }
    }
    NVMeInitHostMemoryBuffer(a1);
    if ( (*(_BYTE *)(a1 + 4008) & 5) == 5 )
    {
      LOBYTE(v11) = -1;
      NVMeInitStreams(a1, v11);
    }
    NVMeControllerGetFeaturesSupportedCacheCapabilities(a1);
    goto LABEL_43;
  }
  if ( GetInterruptMessageInformation(a1, v6, v7, v8) )
  {
    NVMeBuildPollingConfiguration(a1);
    goto LABEL_5;
  }
  *(_DWORD *)(a1 + 36) = 11;
LABEL_39:
  v10 = -1056964607;
LABEL_40:
  if ( !*(_BYTE *)(a1 + 20) )
  {
    FillControllerRuntimeLog(a1, v13);
    StorPortNotification(4109LL, a1, 0LL);
  }
  if ( v10 )
  {
    ++*(_DWORD *)(a1 + 4476);
    return v10;
  }
LABEL_43:
  ++*(_DWORD *)(a1 + 4472);
  return v10;
}
