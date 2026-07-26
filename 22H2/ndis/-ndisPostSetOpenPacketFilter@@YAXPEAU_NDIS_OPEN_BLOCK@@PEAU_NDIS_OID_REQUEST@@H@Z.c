/*
 * XREFs of ?ndisPostSetOpenPacketFilter@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C002D3D8
 * Callers:
 *     ?ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C002DCA0 (-ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C00043E0 (NdisAcquireRWLockWrite.c)
 *     NdisReleaseRWLock @ 0x1C0005AC0 (NdisReleaseRWLock.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002ADE0 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002D880 (-ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisPostSetOpenPacketFilter(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  int v4; // r15d
  _X_FILTER *v7; // r12
  _NDIS_OPEN_BLOCK *v8; // r14
  unsigned int v9; // ebp
  _NDIS_OPEN_BLOCK *OpenList; // rdx
  _NDIS_OPEN_BLOCK *NoFTypeOpenList; // rdx
  _NDIS_OPEN_BLOCK *FTypeOpenList; // rdx
  bool v13; // zf
  unsigned int v14; // eax
  _DWORD *InformationBuffer; // rbx
  volatile unsigned int OpenFlags; // eax
  KIRQL v17; // dl
  unsigned int v18; // eax
  _NDIS_MEDIUM MediaType; // eax
  _X_FILTER *EthDB; // rcx
  unsigned int v21; // eax
  struct _LOCK_STATE_EX LockState; // [rsp+60h] [rbp+8h] BYREF
  KIRQL NewIrql; // [rsp+70h] [rbp+18h] BYREF

  MiniportHandle = a1->MiniportHandle;
  NewIrql = 0;
  v4 = a3;
  if ( a3 && a3 != -1073676268 && a3 != -1073676266 )
  {
    if ( (a1->OldPacketFilters | a1->PacketFilters) == a1->OldPacketFilters )
    {
      v4 = 0;
    }
    else
    {
      MediaType = MiniportHandle->MediaType;
      if ( MediaType )
      {
        if ( MediaType == NdisMediumNative802_11 && (a1->OpenFlags & 0x8000) == 0 )
          a1->PacketFilters = a1->OldPacketFilters;
      }
      else
      {
        EthDB = MiniportHandle->EthDB;
        if ( (a1->OpenFlags & 0x8000) == 0 )
        {
          a1->PacketFilters = a1->OldPacketFilters;
          EthDB->CombinedPacketFilter = EthDB->OldCombinedPacketFilter;
        }
      }
    }
  }
  if ( MiniportHandle->MediaType == NdisMedium802_3 )
  {
    v7 = MiniportHandle->EthDB;
    v8 = 0LL;
    *(_WORD *)&LockState.OldIrql = 0;
    v9 = 0;
    LockState.Flags = 0;
    NdisAcquireRWLockWrite(v7->BindListLock, &LockState, 0);
    OpenList = v7->OpenList;
    while ( OpenList && v9 <= 1 )
    {
      v21 = v9 + 1;
      if ( OpenList->PacketFilters )
        v8 = OpenList;
      else
        v21 = v9;
      OpenList = OpenList->FilterNextOpen;
      v9 = v21;
    }
    NoFTypeOpenList = v7->NoFTypeOpenList;
    while ( NoFTypeOpenList && v9 <= 1 )
    {
      v18 = v9 + 1;
      if ( NoFTypeOpenList->PacketFilters )
        v8 = NoFTypeOpenList;
      else
        v18 = v9;
      NoFTypeOpenList = NoFTypeOpenList->FilterNextOpen;
      v9 = v18;
    }
    FTypeOpenList = v7->FTypeOpenList;
    while ( FTypeOpenList )
    {
      v13 = v9 == 1;
      if ( v9 > 1 )
        goto LABEL_15;
      v14 = v9 + 1;
      if ( FTypeOpenList->PacketFilters )
        v8 = FTypeOpenList;
      else
        v14 = v9;
      FTypeOpenList = FTypeOpenList->FilterNextOpen;
      v9 = v14;
    }
    v13 = v9 == 1;
LABEL_15:
    if ( !v13 )
      v8 = 0LL;
    v7->SingleActiveOpen = v8;
    if ( *(_DWORD *)&a2->NdisReserved[88] )
    {
      a2->DATA.QUERY_INFORMATION.InformationBuffer = *(PVOID *)&a2->NdisReserved[80];
      a2->DATA.QUERY_INFORMATION.InformationBufferLength = *(_DWORD *)&a2->NdisReserved[88];
      *(_QWORD *)&a2->NdisReserved[80] = 0LL;
      *(_DWORD *)&a2->NdisReserved[88] = 0;
    }
    if ( v4 )
      goto LABEL_23;
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&a1->SpinLock);
    OpenFlags = a1->OpenFlags;
    if ( (*InformationBuffer & 0xA0) != 0 )
    {
      if ( (OpenFlags & 4) != 0 )
        goto LABEL_22;
      a1->OpenFlags |= 4u;
      ++MiniportHandle->PmodeOpens;
      if ( a1->ProtocolMajorVersion >= 6 )
        ++MiniportHandle->PmodeOpen6;
    }
    else
    {
      if ( (OpenFlags & 4) == 0 )
      {
LABEL_22:
        KeReleaseSpinLock(&a1->SpinLock, NewIrql);
LABEL_23:
        ndisUpdateCheckForLoopbackFlag(MiniportHandle);
        NdisReleaseRWLock(v7->BindListLock, &LockState);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
        ndisUpdateLoopbackOpens(MiniportHandle);
        v17 = NewIrql;
        MiniportHandle->MiniportThread = 0LL;
        KeReleaseSpinLock(&MiniportHandle->Lock, v17);
        return;
      }
      a1->OpenFlags &= ~4u;
      --MiniportHandle->PmodeOpens;
      if ( a1->ProtocolMajorVersion >= 6 )
        --MiniportHandle->PmodeOpen6;
    }
    ndisUpdateCheckForLoopbackFlag(MiniportHandle);
    goto LABEL_22;
  }
  if ( *(_DWORD *)&a2->NdisReserved[88] )
  {
    a2->DATA.QUERY_INFORMATION.InformationBuffer = *(PVOID *)&a2->NdisReserved[80];
    a2->DATA.QUERY_INFORMATION.InformationBufferLength = *(_DWORD *)&a2->NdisReserved[88];
    *(_QWORD *)&a2->NdisReserved[80] = 0LL;
    *(_DWORD *)&a2->NdisReserved[88] = 0;
  }
}
