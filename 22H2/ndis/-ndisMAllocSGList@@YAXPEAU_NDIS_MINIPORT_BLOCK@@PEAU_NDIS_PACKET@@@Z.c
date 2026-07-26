/*
 * XREFs of ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0063A20
 * Callers:
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00BBD10 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C08C0 (-ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032B38 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     PplpLazyInitializeLookasideList @ 0x1C0039220 (PplpLazyInitializeLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     NdisQueryPacket @ 0x1C0064C60 (NdisQueryPacket.c)
 *     NdisAllocateBuffer @ 0x1C00BF780 (NdisAllocateBuffer.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C0300 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x1C00C3624 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 */

void __fastcall ndisMAllocSGList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // r13
  struct _NDIS_STACK_RESERVED *v5; // rcx
  unsigned int Number; // eax
  __int64 SGListLookasideList; // rcx
  unsigned int v8; // r8d
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  _SLIST_ENTRY *v13; // r15
  KIRQL v14; // r12
  UINT v15; // esi
  char *v16; // r9
  int v17; // ebx
  __int64 v18; // rcx
  unsigned int v19; // r8d
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *v25; // r15
  unsigned int v26; // edx
  int v27; // ebx
  PNDIS_BUFFER v28; // r12
  bool v29; // sf
  char *v30; // rbx
  KIRQL v31; // al
  _DMA_ADAPTER *DmaAdapterObject; // rcx
  char v33[8]; // [rsp+28h] [rbp-41h]
  int v34; // [rsp+38h] [rbp-31h]
  PNDIS_BUFFER FirstBuffer; // [rsp+60h] [rbp-9h] BYREF
  PNDIS_BUFFER Buffer; // [rsp+68h] [rbp-1h] BYREF
  struct _NDIS_STACK_RESERVED *v37; // [rsp+70h] [rbp+7h] BYREF
  char *v38; // [rsp+78h] [rbp+Fh]
  struct _NDIS_STACK_RESERVED *v39; // [rsp+80h] [rbp+17h] BYREF
  int Status; // [rsp+D0h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int v42; // [rsp+E8h] [rbp+7Fh] BYREF

  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  FirstBuffer = 0LL;
  LODWORD(NumberOfBytes) = 0;
  Buffer = 0LL;
  NdisQueryPacket(a2, &a2->Private.PhysicalCount, 0LL, &FirstBuffer, (PUINT)&NumberOfBytes);
  if ( !FirstBuffer )
  {
    *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x800u;
    if ( (a1->Flags & 0x20000) != 0 )
    {
      v37 = 0LL;
      NDIS_STACK_RESERVED_FROM_PACKET(a2, &v37);
      v5 = v37;
LABEL_43:
      (*(void (__fastcall **)(__int64, _QWORD, struct _NDIS_PACKET *))(*((_QWORD *)v5 + 1) + 272LL))(
        3221225473LL,
        *((_QWORD *)v5 + 1),
        a2);
      return;
    }
LABEL_44:
    ndisMSendCompleteX(&a1->Header, a2, -1073741823);
    return;
  }
  Number = KeGetPcr()->Prcb.Number;
  v38 = (char *)FirstBuffer->StartVa + FirstBuffer->ByteOffset;
  SGListLookasideList = (__int64)MiniportSGDmaBlock->SGListLookasideList;
  v8 = Number + 1;
  v9 = *(_DWORD *)SGListLookasideList - 1;
  if ( v8 < *(_DWORD *)SGListLookasideList )
    v9 = v8;
  v10 = v9;
  v11 = *(_QWORD *)(SGListLookasideList + 32);
  v12 = *(_QWORD *)(v11 + 8 * v10);
  if ( !*(_BYTE *)(v12 + 112) )
    PplpLazyInitializeLookasideList(SGListLookasideList, *(_QWORD *)(v11 + 8 * v10));
  ++*(_DWORD *)(v12 + 20);
  v13 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v12);
  if ( !v13 )
  {
    ++*(_DWORD *)(v12 + 24);
    v13 = (_SLIST_ENTRY *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v12 + 48))(
                            *(unsigned int *)(v12 + 36),
                            *(unsigned int *)(v12 + 44),
                            *(unsigned int *)(v12 + 40),
                            v12);
  }
  v14 = KfRaiseIrql(2u);
  if ( v13 )
  {
    a2->Private.Flags |= 0x2000u;
    v15 = NumberOfBytes;
    v16 = v38;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v13;
    Status = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->BuildScatterGatherList(
               MiniportSGDmaBlock->DmaAdapterObject,
               a1->DeviceObject,
               FirstBuffer,
               v16,
               v15,
               ndisMProcessSGList,
               a2,
               1u,
               v13,
               MiniportSGDmaBlock->ScatterGatherListSize);
    v17 = Status;
    if ( Status >= 0 )
      goto LABEL_23;
    *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
    a2->Private.Flags &= ~0x2000u;
    v18 = (__int64)MiniportSGDmaBlock->SGListLookasideList;
    v19 = KeGetPcr()->Prcb.Number + 1;
    v20 = *(_DWORD *)v18 - 1;
    if ( v19 < *(_DWORD *)v18 )
      v20 = v19;
    v21 = v20;
    v22 = *(_QWORD *)(v18 + 32);
    v23 = *(_QWORD *)(v22 + 8 * v21);
    if ( !*(_BYTE *)(v23 + 112) )
      PplpLazyInitializeLookasideList(v18, *(_QWORD *)(v22 + 8 * v21));
    ++*(_DWORD *)(v23 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v23) < *(_WORD *)(v23 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v23, v13);
    }
    else
    {
      ++*(_DWORD *)(v23 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v23 + 56))(v13, v23);
    }
    v17 = Status;
  }
  else
  {
    v17 = -1073741670;
    Status = -1073741670;
  }
  v15 = NumberOfBytes;
  if ( v17 < 0 )
  {
    LOBYTE(v34) = 1;
    v17 = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->GetScatterGatherList(
            MiniportSGDmaBlock->DmaAdapterObject,
            a1->DeviceObject,
            FirstBuffer,
            v38,
            NumberOfBytes,
            ndisMProcessSGList,
            a2,
            v34);
    Status = v17;
  }
LABEL_23:
  if ( v14 != 2 )
    KeLowerIrql(v14);
  if ( v17 < 0 )
  {
    v42 = 0;
    PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x6773444Eu);
    v25 = PoolWithTag;
    if ( PoolWithTag )
    {
      NdisAllocateBuffer(&Status, &Buffer, 0LL, PoolWithTag, v15);
      v27 = Status;
      v28 = Buffer;
      v29 = Status < 0;
      if ( Status )
        goto LABEL_32;
      ndisMCopyFromPacketToBuffer(a2, v26, v15, v25, &v42);
      if ( v42 == v15 )
      {
        a2->Private.Flags |= 0x800u;
        v30 = (char *)v28->StartVa + v28->ByteOffset;
        *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = v28;
        v31 = KfRaiseIrql(2u);
        DmaAdapterObject = MiniportSGDmaBlock->DmaAdapterObject;
        LOBYTE(v34) = 1;
        LOBYTE(Status) = v31;
        v27 = DmaAdapterObject->DmaOperations->GetScatterGatherList(
                DmaAdapterObject,
                a1->DeviceObject,
                v28,
                v30,
                v15,
                ndisMProcessSGList,
                a2,
                v34);
        if ( (_BYTE)Status != 2 )
          KeLowerIrql(Status);
        v29 = v27 < 0;
LABEL_32:
        if ( !v29 )
          return;
LABEL_35:
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v33 = v27;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            3u,
            0xAu,
            (struct _GUID *)&WPP_b95a1582eedd34623c72b3aa5f8cd533_Traceguids,
            *(_QWORD *)v33);
        }
        if ( v28 )
          IoFreeMdl(v28);
        if ( v25 )
          ExFreePoolWithTag(v25, 0);
        *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) = 0LL;
        *(_QWORD *)&a2->MacReserved[a2->Private.NdisPacketOobOffset + 24] = 0LL;
        a2->Private.Flags &= ~0x800u;
        if ( (a1->Flags & 0x20000) != 0 )
        {
          v39 = 0LL;
          NDIS_STACK_RESERVED_FROM_PACKET(a2, &v39);
          v5 = v39;
          goto LABEL_43;
        }
        goto LABEL_44;
      }
    }
    v28 = Buffer;
    v27 = -1073741670;
    goto LABEL_35;
  }
}
