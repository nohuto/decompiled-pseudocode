/*
 * XREFs of WmipOpenBlock @ 0x1406340C8
 * Callers:
 *     WmipIoControl @ 0x1406061A0 (WmipIoControl.c)
 *     IoWMIOpenBlock @ 0x14075AE50 (IoWMIOpenBlock.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     WmipIsQuerySetGuid @ 0x140633828 (WmipIsQuerySetGuid.c)
 *     WmipEnableCollectOrEvent @ 0x140633890 (WmipEnableCollectOrEvent.c)
 *     WmipFindGEByGuid @ 0x140633FE0 (WmipFindGEByGuid.c)
 *     WmipOpenGuidObject @ 0x1406344F0 (WmipOpenGuidObject.c)
 *     WmipAllocGuidEntry @ 0x1407581E8 (WmipAllocGuidEntry.c)
 */

__int64 __fastcall WmipOpenBlock(int a1, __int64 a2, __int64 a3, unsigned int a4, PADAPTER_OBJECT *a5)
{
  unsigned __int64 v5; // rax
  char v6; // bp
  __int64 v8; // rcx
  int v9; // edi
  PADAPTER_OBJECT v10; // rbx
  _DMA_OPERATIONS *GEByGuid; // rdi
  _DMA_OPERATIONS ***FreeAdapterChannel; // rdx
  _DMA_OPERATIONS **p_DmaOperations; // rax
  __int64 v15; // rax
  _DMA_OPERATIONS **v16; // rax
  __int64 v17; // rcx
  _DMA_OPERATIONS **v18; // rax
  _DMA_OPERATIONS ***v19; // rdx
  PADAPTER_OBJECT DmaAdapter[5]; // [rsp+30h] [rbp-28h] BYREF

  DmaAdapter[0] = 0LL;
  v5 = (unsigned int)(a1 - 2244872);
  v6 = a2;
  if ( (unsigned int)v5 > 0x38 )
    return (unsigned int)-1073741649;
  v8 = 0x110000000000001LL;
  if ( !_bittest64(&v8, v5) )
    return (unsigned int)-1073741649;
  v9 = WmipOpenGuidObject(a3, a2, a4, DmaAdapter);
  if ( v9 >= 0 )
  {
    v10 = DmaAdapter[0];
    *(_DWORD *)&DmaAdapter[0][4].Version = a1;
    if ( a1 == 2244872 )
    {
      *(_DWORD *)(&v10[10].Size + 1) |= 1u;
    }
    else
    {
      GEByGuid = (_DMA_OPERATIONS *)WmipFindGEByGuid(&v10[1].DmaOperations, 0);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( GEByGuid )
      {
        FreeAdapterChannel = (_DMA_OPERATIONS ***)GEByGuid->FreeAdapterChannel;
        p_DmaOperations = &v10[2].DmaOperations;
        if ( *FreeAdapterChannel != (_DMA_OPERATIONS **)&GEByGuid->FlushAdapterBuffers )
          goto LABEL_28;
        *p_DmaOperations = (_DMA_OPERATIONS *)&GEByGuid->FlushAdapterBuffers;
        *(_QWORD *)&v10[3].Version = FreeAdapterChannel;
        *FreeAdapterChannel = p_DmaOperations;
        GEByGuid->FreeAdapterChannel = (void (__fastcall *)(_DMA_ADAPTER *))p_DmaOperations;
      }
      v10[3].DmaOperations = GEByGuid;
      KeReleaseMutex(&WmipSMMutex, 0);
      if ( a1 == 2244924 )
      {
        if ( !GEByGuid
          || HIDWORD(GEByGuid->AllocateAdapterChannel) == a1 - 2244924
          || !WmipIsQuerySetGuid((__int64)GEByGuid) )
        {
          v9 = -1073741163;
          goto LABEL_17;
        }
LABEL_12:
        if ( !v6 )
          *(_DWORD *)(&v10[10].Size + 1) |= 2u;
        if ( GEByGuid )
        {
LABEL_15:
          v9 = WmipEnableCollectOrEvent((ULONG_PTR)GEByGuid, a1, &v10[10]);
          if ( v9 < 0 )
            goto LABEL_17;
          goto LABEL_16;
        }
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        v15 = WmipAllocGuidEntry();
        GEByGuid = (_DMA_OPERATIONS *)v15;
        if ( v15 )
        {
          *(struct _DMA_ADAPTER *)(v15 + 72) = *(PADAPTER_OBJECT)((char *)v10 + 24);
          v16 = (_DMA_OPERATIONS **)WmipGEHeadPtr;
          v17 = *(_QWORD *)WmipGEHeadPtr;
          if ( *(_QWORD *)(*(_QWORD *)WmipGEHeadPtr + 8LL) == WmipGEHeadPtr )
          {
            *(_QWORD *)&GEByGuid->Size = v17;
            GEByGuid->PutDmaAdapter = (void (__fastcall *)(_DMA_ADAPTER *))v16;
            *(_QWORD *)(v17 + 8) = GEByGuid;
            *v16 = GEByGuid;
            v18 = &v10[2].DmaOperations;
            v19 = (_DMA_OPERATIONS ***)GEByGuid->FreeAdapterChannel;
            if ( *v19 == (_DMA_OPERATIONS **)&GEByGuid->FlushAdapterBuffers )
            {
              *v18 = (_DMA_OPERATIONS *)&GEByGuid->FlushAdapterBuffers;
              *(_QWORD *)&v10[3].Version = v19;
              *v19 = v18;
              GEByGuid->FreeAdapterChannel = (void (__fastcall *)(_DMA_ADAPTER *))v18;
              v10[3].DmaOperations = GEByGuid;
              KeReleaseMutex(&WmipSMMutex, 0);
              goto LABEL_15;
            }
          }
LABEL_28:
          __fastfail(3u);
        }
        KeReleaseMutex(&WmipSMMutex, 0);
        v9 = -1073741670;
LABEL_17:
        if ( v10 )
          HalPutDmaAdapter(v10);
        return (unsigned int)v9;
      }
      if ( a1 == 2244928 )
        goto LABEL_12;
    }
LABEL_16:
    *a5 = v10;
    v10 = 0LL;
    v9 = 0;
    goto LABEL_17;
  }
  return (unsigned int)v9;
}
