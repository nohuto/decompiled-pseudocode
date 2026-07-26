/*
 * XREFs of ?ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x1C00AAE4C
 * Callers:
 *     ?ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C00AB038 (-ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C0005A00 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C0005AC0 (NdisReleaseRWLock.c)
 *     ?ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z @ 0x1C0066304 (-ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z.c)
 */

void __fastcall ndisMIsLoopbackNetBuffer(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER *a2,
        struct _NET_BUFFER_LIST *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  _MDL *CurrentMdl; // rcx
  char v7; // bp
  unsigned __int8 v8; // di
  char *MappedSystemVa; // rax
  unsigned __int8 *v13; // r15
  char *v14; // rbx
  _X_FILTER *EthDB; // rcx
  _X_FILTER *v16; // rsi
  unsigned int MiniportPacketFilter; // r14d
  bool v18; // zf
  struct _LOCK_STATE_EX LockState; // [rsp+68h] [rbp+10h] BYREF

  CurrentMdl = a2->CurrentMdl;
  v7 = 0;
  v8 = 0;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( (CurrentMdl->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)CurrentMdl->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  v13 = a5;
  *a4 = 0;
  *v13 = 0;
  if ( MappedSystemVa )
  {
    v14 = &MappedSystemVa[a2->CurrentMdlOffset];
    if ( a1->MiniportMediaType )
      goto LABEL_33;
    if ( (a1->Flags & 0x800000) != 0 )
    {
      if ( (*v14 & 1) == 0
        && (EthDB = a1->EthDB, *(_DWORD *)(v14 + 2) == *(_DWORD *)&EthDB->AdapterAddress[2])
        && *(_WORD *)v14 == *(_WORD *)EthDB->AdapterAddress )
      {
        v8 = 1;
        v7 = 1;
      }
      else
      {
        v8 = 1;
      }
LABEL_31:
      if ( (a3->Flags & 0x200) != 0 )
        v7 = 1;
LABEL_35:
      *a4 = v8;
      *v13 = v7;
      return;
    }
    NdisAcquireRWLockRead(a1->EthDB->BindListLock, &LockState, 0);
    v16 = a1->EthDB;
    MiniportPacketFilter = v16->MiniportPacketFilter;
    if ( (*v14 & 1) != 0 )
    {
      if ( *v14 == -1 && v14[1] == -1 && v14[2] == -1 && v14[3] == -1 && v14[4] == -1 && v14[5] == -1 )
      {
        v18 = (MiniportPacketFilter & 8) == 0;
        goto LABEL_20;
      }
      if ( (MiniportPacketFilter & 4) != 0 )
      {
LABEL_21:
        v8 = 1;
        goto LABEL_28;
      }
      if ( (MiniportPacketFilter & 2) != 0 )
      {
        v18 = ethFindMulticast(v16->NextNumAddresses, 0LL, v16->NextMCastAddressBuf, (unsigned __int8 *const)v14) == 0;
LABEL_20:
        if ( v18 )
          goto LABEL_28;
        goto LABEL_21;
      }
    }
    else if ( *(_DWORD *)(v14 + 2) == *(_DWORD *)&v16->AdapterAddress[2]
           && *(_WORD *)v14 == *(_WORD *)v16->AdapterAddress )
    {
      v8 = 1;
      v7 = 1;
    }
LABEL_28:
    if ( (MiniportPacketFilter & 0xA0) != 0 )
      v8 = 1;
    NdisReleaseRWLock(v16->BindListLock, &LockState);
    if ( v8 )
      goto LABEL_31;
LABEL_33:
    if ( (a3->Flags & 0x200) != 0 )
      v8 = 1;
    goto LABEL_35;
  }
}
