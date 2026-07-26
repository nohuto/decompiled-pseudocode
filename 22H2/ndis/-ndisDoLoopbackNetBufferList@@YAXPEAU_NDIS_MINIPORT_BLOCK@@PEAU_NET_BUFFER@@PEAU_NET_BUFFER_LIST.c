/*
 * XREFs of ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00AAA70
 * Callers:
 *     ?ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C00AB038 (-ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000326C (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0003C00 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C0005400 (NdisFreeNetBufferList.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C003EA60 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 */

void __fastcall ndisDoLoopbackNetBufferList(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER *a2,
        struct _NET_BUFFER_LIST *a3,
        unsigned int a4,
        char a5)
{
  SIZE_T DataLength; // rbp
  __int64 v9; // rbx
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v11; // rdi
  unsigned __int64 v12; // rax
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  struct _NET_BUFFER_LIST *v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  _MDL *CurrentMdl; // r14
  char *MappedSystemVa; // rax
  __int64 CurrentMdlOffset; // rdx
  unsigned int v20; // ecx
  ULONG v21; // ebp
  unsigned __int64 v22; // r15
  size_t v23; // r8
  char *v24; // rdx
  void *i; // rcx
  char *v26; // rax
  ULONG ByteCount; // ecx

  DataLength = a2->DataLength;
  v9 = ((unsigned int)MmSizeOfMdl((PVOID)0xFFF, DataLength) + 7) & 0xFFFFFFF8;
  if ( (v9 + DataLength) >> 32 )
    return;
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v9 + DataLength), 0x706C444Eu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return;
  v12 = (unsigned __int64)PoolWithTag + v9;
  if ( v12 < (unsigned __int64)v11 )
  {
LABEL_37:
    ExFreePoolWithTag(v11, 0);
    return;
  }
  v11->Next = 0LL;
  v11->MdlFlags = 0;
  v11->ByteCount = DataLength;
  v11->StartVa = (PVOID)(v12 & 0xFFFFFFFFFFFFF000uLL);
  v11->Size = 8 * ((((v12 & 0xFFF) + DataLength + 4095) >> 12) + 6);
  v11->ByteOffset = v12 & 0xFFF;
  MmBuildMdlForNonPagedPool(v11);
  NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(ndisNetBufferListPool, 0, 0, v11, 0, DataLength);
  v14 = NetBufferAndNetBufferList;
  if ( !NetBufferAndNetBufferList )
  {
LABEL_35:
    if ( (v11->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(v11->MappedSystemVa, v11);
    goto LABEL_37;
  }
  v15 = *(_QWORD *)(NetBufferAndNetBufferList->Link.Region + 32);
  if ( (*(_BYTE *)(v15 + 10) & 5) != 0 )
    v16 = *(_QWORD *)(v15 + 24);
  else
    v16 = (unsigned __int64)MmMapLockedPagesSpecifyCache((PMDL)v15, 0, MmCached, 0LL, 0, 0x40000000u);
  if ( !v16
    || ((CurrentMdl = a2->CurrentMdl, (CurrentMdl->MdlFlags & 5) == 0)
      ? (MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000000u))
      : (MappedSystemVa = (char *)CurrentMdl->MappedSystemVa),
        !MappedSystemVa) )
  {
    NdisFreeNetBufferList(v14);
    goto LABEL_35;
  }
  CurrentMdlOffset = a2->CurrentMdlOffset;
  v20 = DataLength;
  if ( CurrentMdl->ByteCount - (int)CurrentMdlOffset <= (unsigned int)DataLength )
    v20 = CurrentMdl->ByteCount - CurrentMdlOffset;
  v21 = DataLength - v20;
  v22 = v20;
  v23 = v20;
  v24 = &MappedSystemVa[CurrentMdlOffset];
  for ( i = (void *)v16; ; i = (void *)v22 )
  {
    memmove(i, v24, v23);
    CurrentMdl = CurrentMdl->Next;
    v22 += v16;
    if ( !CurrentMdl || !v21 )
      break;
    v26 = (char *)((CurrentMdl->MdlFlags & 5) != 0
                 ? CurrentMdl->MappedSystemVa
                 : MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000000u));
    if ( !v26 )
      break;
    ByteCount = v21;
    if ( v21 >= CurrentMdl->ByteCount )
      ByteCount = CurrentMdl->ByteCount;
    v24 = v26;
    v16 = ByteCount;
    v21 -= ByteCount;
    v23 = ByteCount;
  }
  v14->Flags |= 0x80u;
  v14->NblFlags |= 0x8000u;
  v14->SourceHandle = a3->SourceHandle;
  v14->NetBufferListInfo[5] = a3->SourceHandle;
  if ( (a5 & 2) != 0 )
    v14->Flags |= 0x200u;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(v14, 168LL, 0LL, 0x9Bu, 0);
  ndisInvokeNextReceiveHandler(
    v14,
    a4,
    1u,
    2,
    (struct _NDIS_FILTER_BLOCK *)a1->Next.IndicateNetBufferListsObject,
    a1->Next.IndicateNetBufferListsContext,
    (void (*)(void))a1->Next.IndicateNetBufferListsHandler);
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(v14, 0LL, 0xA8uLL, 0x9Cu, 0);
  if ( (v11->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(v11->MappedSystemVa, v11);
  ExFreePoolWithTag(v11, 0);
  NdisFreeNetBufferList(v14);
}
