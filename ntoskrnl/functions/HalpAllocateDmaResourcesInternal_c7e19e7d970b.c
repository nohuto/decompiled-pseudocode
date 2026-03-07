char __fastcall HalpAllocateDmaResourcesInternal(__int64 a1, char a2, int *a3)
{
  __int64 v3; // rdi
  int v5; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned int v12; // esi
  _QWORD *MapRegisters; // rax
  _QWORD *v14; // rcx
  int v15; // eax
  unsigned int i; // eax
  _QWORD *v17; // rsi
  __int64 (__fastcall *v18)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  int v19; // eax

  v3 = *(_QWORD *)(a1 + 352);
  v5 = *(_DWORD *)(a1 + 624);
  if ( !v5 )
  {
    *(_DWORD *)(a1 + 624) = 1;
LABEL_8:
    if ( !*(_BYTE *)(a1 + 441) && !(unsigned __int8)HalpAllocateDmaChannels(a1) )
      goto LABEL_16;
    ++*(_DWORD *)(a1 + 624);
    goto LABEL_11;
  }
  v8 = v5 - 1;
  if ( !v8 )
    goto LABEL_8;
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_11:
    v12 = *(_DWORD *)(a1 + 248);
    if ( v12 && *(_BYTE *)(a1 + 440) )
    {
      MapRegisters = (_QWORD *)HalpDmaAllocateMapRegisters(a1, v12);
      *(_QWORD *)(a1 + 240) = MapRegisters;
      v14 = MapRegisters;
      if ( !MapRegisters )
      {
        HalpQueueMapBufferWorker(a1, v12);
        if ( (*(_DWORD *)(v3 + 20) & 1) == 0 )
          HalpDmaQueueAdapter(a1);
        goto LABEL_16;
      }
      MapRegisters[3] = 0LL;
      MapRegisters[4] = 0LL;
      MapRegisters[5] = 0LL;
      if ( (*(_DWORD *)(v3 + 20) & 4) != 0 )
      {
        for ( i = 0; i < v12; ++i )
        {
          if ( !v14 )
            break;
          v14[6] |= 0x20uLL;
          v14 = (_QWORD *)v14[1];
        }
      }
    }
    else
    {
      *(_QWORD *)(a1 + 240) = 0LL;
      *(_DWORD *)(a1 + 248) = 0;
    }
    ++*(_DWORD *)(a1 + 624);
    goto LABEL_25;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_25:
    if ( *(_DWORD *)(a1 + 520) != 3 )
      goto LABEL_29;
    v17 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 24LL);
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD *))(HalpDmaIommuInterfaceFcnTable + 128))(
           *(_QWORD *)(*(_QWORD *)(a1 + 512) + 40LL),
           *(_DWORD *)(v3 + 20) & 0xFFFFF000,
           0LL,
           0LL,
           0LL,
           v17) >= 0 )
      goto LABEL_29;
    if ( HalpDmaUseEmergencyLogicalAddressResources(a1, (_QWORD *)(a1 + 600), (*(_BYTE *)(v3 + 20) & 1) == 0) )
    {
      *v17 = *(_QWORD *)(a1 + 560);
LABEL_29:
      ++*(_DWORD *)(a1 + 624);
      goto LABEL_30;
    }
LABEL_16:
    v15 = *(_DWORD *)(v3 + 20);
    if ( (v15 & 1) != 0
      || (v15 & 2) != 0
      && (*(_DWORD *)(v3 - 8) & 2) != 0
      && (HalpDmaRemoveFromEmergencyLogicalAddressQueue(a1, (_QWORD *)(a1 + 600))
       || HalpDmaRemoveAdapterFromMasterQueue(a1)
       || (unsigned __int8)HalpDmaRemoveAdapterFromChannelQueue(a1)) )
    {
      *(_DWORD *)(a1 + 248) = 0;
      IoFreeAdapterChannelV3(a1);
    }
    return 0;
  }
  if ( v10 != 1 )
    return 0;
LABEL_30:
  if ( (*(_DWORD *)(v3 + 20) & 2) != 0 )
    _InterlockedOr((volatile signed __int32 *)(v3 - 8), 1u);
  ++*(_DWORD *)(a1 + 624);
  if ( (*(_DWORD *)(v3 + 20) & 2) != 0 )
    *(_QWORD *)(a1 + 360) = v3 - 16;
  v18 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v3 + 24);
  if ( v18 )
  {
    v19 = v18(*(_QWORD *)(v3 + 48), *(_QWORD *)(v3 + 56), *(_QWORD *)(a1 + 240), *(_QWORD *)(v3 + 32));
    if ( a3 )
      *a3 = v19;
    if ( a2 )
      HalFreeAdapterObject(a1, v19);
  }
  return 1;
}
