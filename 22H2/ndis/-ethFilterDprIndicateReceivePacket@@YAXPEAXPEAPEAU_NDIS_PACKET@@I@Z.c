/*
 * XREFs of ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00658B0
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C0005A00 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C0005AC0 (NdisReleaseRWLock.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032B38 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z @ 0x1C0066304 (-ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C0074DBC (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C008E8F0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ethFilterReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z @ 0x1C008EB9C (-ethFilterReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C00C4DE8 (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ethFilterDprIndicateReceivePacket(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PACKET **a2,
        unsigned int a3)
{
  unsigned int Number; // ebp
  _X_FILTER *EthDB; // r15
  int PnPFlags; // r8d
  struct _NDIS_PACKET **v7; // rbx
  struct _NDIS_RW_LOCK_EX *BindListLock; // rcx
  int v10; // r14d
  struct _NDIS_PACKET *v11; // rbx
  int v12; // ecx
  int v13; // r10d
  _MDL *Head; // rsi
  char *v15; // rdx
  unsigned __int8 *MappedSystemVa; // r11
  unsigned __int8 *v17; // rax
  struct _MDL *Next; // rcx
  __int64 ByteCount; // r9
  struct _NDIS_STACK_RESERVED *v20; // r13
  _NDIS_OPEN_BLOCK *SingleActiveOpen; // rsi
  unsigned int Flags; // ecx
  int v23; // r10d
  __int64 NdisPacketOobOffset; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *IndicatedPacket; // rdx
  unsigned int v26; // ebp
  __int64 v27; // rax
  _NDIS_PACKET *v28; // r14
  int (__fastcall *ReceivePacketHandler)(void *, _NDIS_PACKET *); // r8
  struct _NET_BUFFER_LIST *v30; // rcx
  _NDIS_MINIPORT_STATS *v31; // r8
  _NDIS_MINIPORT_STATS *v32; // rdx
  _NDIS_MINIPORT_STATS *v33; // r8
  __int64 v34; // rax
  int v35; // r14d
  _NDIS_OPEN_BLOCK *v36; // rsi
  unsigned int v37; // eax
  _NDIS_OPEN_BLOCK *v38; // r12
  unsigned __int8 v39; // r9
  struct NDIS_NBL_TRACKER_HANDLE__ *v40; // rdx
  unsigned int v41; // ebp
  __int64 v42; // rax
  _NDIS_PACKET *v43; // r15
  int (__fastcall *v44)(void *, _NDIS_PACKET *); // r8
  struct _NET_BUFFER_LIST *v45; // rcx
  int v46; // eax
  int v47; // r13d
  _NDIS_MINIPORT_STATS *BottomIfStats; // r8
  _NDIS_MINIPORT_STATS *v49; // rdx
  _NDIS_MINIPORT_STATS *v50; // r8
  __int64 v51; // rax
  _NDIS_MINIPORT_STATS *v52; // r8
  _NDIS_MINIPORT_STATS *v53; // rdx
  _NDIS_MINIPORT_STATS *v54; // r8
  __int64 v55; // rax
  _NDIS_OPEN_BLOCK *OpenList; // rsi
  _NDIS_OPEN_BLOCK *FilterNextOpen; // r12
  unsigned int PacketFilters; // eax
  int v59; // ebp
  unsigned __int8 Multicast; // al
  struct NDIS_NBL_TRACKER_HANDLE__ *v61; // rdx
  unsigned int v62; // r14d
  __int64 v63; // rax
  _NDIS_PACKET *v64; // r15
  int (__fastcall *v65)(void *, _NDIS_PACKET *); // r8
  struct _NET_BUFFER_LIST *v66; // rcx
  int v67; // ecx
  struct _NDIS_STACK_RESERVED *v68; // rax
  char v69; // al
  int v70; // ecx
  signed __int32 v71; // edx
  bool v72; // zf
  char *v73; // rcx
  struct _NDIS_PACKET *v74; // rdx
  _NDIS_OPEN_BLOCK *v75; // rcx
  __int64 v76; // rdi
  PNDIS_PER_PROCESSOR_SLOT__ *ReceivedAPacketSlot; // rax
  _NDIS_OPEN_BLOCK *v78; // rbx
  int v79; // [rsp+40h] [rbp-88h]
  unsigned __int8 v80[4]; // [rsp+44h] [rbp-84h]
  unsigned int v81; // [rsp+48h] [rbp-80h]
  unsigned int v82; // [rsp+4Ch] [rbp-7Ch]
  unsigned __int8 *v83; // [rsp+50h] [rbp-78h]
  _X_FILTER *v84; // [rsp+58h] [rbp-70h]
  struct _NDIS_STACK_RESERVED *v85; // [rsp+60h] [rbp-68h]
  struct _NDIS_STACK_RESERVED *v86; // [rsp+68h] [rbp-60h] BYREF
  char *v87; // [rsp+70h] [rbp-58h]
  struct _NDIS_PACKET **v88; // [rsp+78h] [rbp-50h]
  struct _LOCK_STATE_EX LockState; // [rsp+D0h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+D8h] [rbp+10h]
  unsigned int v91; // [rsp+E0h] [rbp+18h]
  int v92; // [rsp+E8h] [rbp+20h]

  v91 = a3;
  BugCheckParameter4 = (ULONG_PTR)a2;
  Number = KeGetPcr()->Prcb.Number;
  EthDB = a1->EthDB;
  PnPFlags = a1->PnPFlags;
  v7 = a2;
  v88 = a2;
  BindListLock = EthDB->BindListLock;
  v10 = 0;
  v84 = EthDB;
  v79 = 0;
  *(_WORD *)&LockState.LockState = 0;
  v86 = 0LL;
  v81 = Number;
  LockState.OldIrql = 2;
  NdisAcquireRWLockRead(BindListLock, &LockState, PnPFlags < 0);
  v82 = 0;
  if ( !a3 )
    goto LABEL_145;
  while ( 1 )
  {
    v11 = *v7;
    v12 = *(_DWORD *)&v11[-1].ProtocolReserved[4];
    if ( v12 != -1 && (a1->Flags & 0x8000) == 0 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        a1->pAdapterInstanceName,
        "Indicating packet not owned by it");
      KeBugCheckEx(0x7Cu, 5uLL, (ULONG_PTR)a1, (ULONG_PTR)v11, BugCheckParameter4);
    }
    *(_DWORD *)&v11[-1].ProtocolReserved[4] = v12 + 1;
    NDIS_STACK_RESERVED_FROM_PACKET(v11, &v86);
    Head = v11->Private.Head;
    v15 = (char *)v11 + v11->Private.NdisPacketOobOffset;
    v87 = v15;
    if ( (Head->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = (unsigned __int8 *)Head->MappedSystemVa;
      v83 = MappedSystemVa;
    }
    else
    {
      v17 = (unsigned __int8 *)MmMapLockedPages(Head, 0);
      v15 = v87;
      MappedSystemVa = v17;
      v83 = v17;
    }
    Next = Head->Next;
    ByteCount = Head->ByteCount;
    *(_DWORD *)v80 = Head->ByteCount;
    if ( Head->Next )
    {
      do
      {
        ByteCount = (unsigned int)(Next->ByteCount + ByteCount);
        Next = Next->Next;
      }
      while ( Next );
      *(_DWORD *)v80 = ByteCount;
    }
    v20 = v86;
    v85 = v86;
    *((_DWORD *)v86 + 2) = -1;
    *((_DWORD *)v20 + 3) = 0;
    *(_QWORD *)v20 = a1;
    v11->Private.ValidCounts = 0;
    if ( *((_DWORD *)v15 + 8) == -1073741670 || (a1->PnPFlags & 0x800) != 0 )
    {
      LOBYTE(v13) = 1;
    }
    else
    {
      if ( (a1->Flags & 0x8000) == 0 )
        *((_DWORD *)v15 + 8) = 0;
      LOBYTE(v13) = 0;
    }
    SingleActiveOpen = EthDB->SingleActiveOpen;
    v92 = v13;
    if ( SingleActiveOpen && SingleActiveOpen->ProtocolMajorVersion < 6 )
    {
      if ( ((unsigned int)ByteCount >= 0xE || (EthDB->CombinedPacketFilter & 0xA0) != 0)
        && ((v11->Private.Flags & 0x80u) == 0
         || *(_NDIS_OPEN_BLOCK **)&v11->MacReserved[v11->Private.NdisPacketOobOffset + 24] != SingleActiveOpen) )
      {
        v79 = v10 + 1;
        *((_BYTE *)SingleActiveOpen->ReceivedAPacketSlot + 4096 * Number) = 1;
        Flags = v11->Private.Flags;
        v23 = SingleActiveOpen->PacketFilters & 0xA0;
        if ( (Flags & 0x20000) == 0 && (v11->Private.NdisPacketFlags & 2) == 0 )
        {
          ethFilterReceivePacketStats(a1, MappedSystemVa, ByteCount);
          Flags = v11->Private.Flags;
          ByteCount = *(unsigned int *)v80;
        }
        NdisPacketOobOffset = v11->Private.NdisPacketOobOffset;
        v11->Private.Flags = Flags & 0xFFFDFFFF;
        IndicatedPacket = (struct NDIS_NBL_TRACKER_HANDLE__ *)a1->IndicatedPacket;
        v26 = *(unsigned int *)((char *)&v11->Private.Count + NdisPacketOobOffset);
        v27 = KeGetPcr()->Prcb.Number;
        v28 = (_NDIS_PACKET *)*((_QWORD *)IndicatedPacket + v27);
        *((_QWORD *)IndicatedPacket + v27) = v11;
        if ( (_BYTE)v92
          || (ReceivePacketHandler = SingleActiveOpen->ReceivePacketHandler) == 0LL
          || v23 && !EthDB->SingleActiveOpen )
        {
          *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = -1073741670;
          SingleActiveOpen->ReceiveHandler(
            SingleActiveOpen->ProtocolBindingContext,
            v11,
            MappedSystemVa,
            14u,
            MappedSystemVa + 14,
            v11->Private.Head->ByteCount - 14,
            ByteCount - 14);
          *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = v26;
        }
        else
        {
          v30 = *(struct _NET_BUFFER_LIST **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset);
          if ( v30 && v26 == -1073741670 )
          {
            ndisNblTrackerTransferOwnershipSingleNbl(v30, IndicatedPacket, SingleActiveOpen->NblTracker, ByteCount);
            ReceivePacketHandler = SingleActiveOpen->ReceivePacketHandler;
          }
          *((_DWORD *)v20 + 3) += ((__int16 (__fastcall *)(void *, struct _NDIS_PACKET *, int (__fastcall *)(void *, _NDIS_PACKET *), __int64))ReceivePacketHandler)(
                                    SingleActiveOpen->ProtocolBindingContext,
                                    v11,
                                    ReceivePacketHandler,
                                    ByteCount);
        }
        a1->IndicatedPacket[KeGetPcr()->Prcb.Number] = v28;
      }
      goto LABEL_114;
    }
    if ( (unsigned int)ByteCount < 0xE )
    {
      v47 = 32;
LABEL_87:
      OpenList = EthDB->OpenList;
      if ( EthDB->OpenList )
      {
        do
        {
          FilterNextOpen = OpenList->FilterNextOpen;
          if ( (v11->Private.Flags & 0x80u) == 0
            || *(_NDIS_OPEN_BLOCK **)&v11->MacReserved[v11->Private.NdisPacketOobOffset + 24] != OpenList )
          {
            if ( (PacketFilters = OpenList->PacketFilters, v59 = PacketFilters & 0xA0, (PacketFilters & 0xA0) != 0)
              || v47 == 8 && (PacketFilters & 8) != 0
              || v47 == 2
              && ((PacketFilters & 4) != 0
               || (PacketFilters & 2) != 0
               && (Multicast = ethFindMulticast(OpenList->NumAddresses, OpenList->MCastAddressBuf, 0LL, MappedSystemVa),
                   ByteCount = *(unsigned int *)v80,
                   Multicast)) )
            {
              v72 = (_BYTE)v92 == 0;
              v79 = v10 + 1;
              *((_BYTE *)OpenList->ReceivedAPacketSlot + 4096 * v81) = 1;
              v61 = (struct NDIS_NBL_TRACKER_HANDLE__ *)a1->IndicatedPacket;
              v62 = *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset);
              v63 = KeGetPcr()->Prcb.Number;
              v64 = (_NDIS_PACKET *)*((_QWORD *)v61 + v63);
              *((_QWORD *)v61 + v63) = v11;
              if ( v72 && (v65 = OpenList->ReceivePacketHandler) != 0LL && (!v59 || v84->SingleActiveOpen) )
              {
                v66 = *(struct _NET_BUFFER_LIST **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset);
                if ( v66 && v62 == -1073741670 )
                {
                  ndisNblTrackerTransferOwnershipSingleNbl(v66, v61, OpenList->NblTracker, ByteCount);
                  v65 = OpenList->ReceivePacketHandler;
                }
                v67 = ((__int16 (__fastcall *)(void *, struct _NDIS_PACKET *, int (__fastcall *)(void *, _NDIS_PACKET *), __int64))v65)(
                        OpenList->ProtocolBindingContext,
                        v11,
                        v65,
                        ByteCount);
                v68 = v85;
                *((_DWORD *)v85 + 3) += v67;
              }
              else
              {
                *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = -1073741670;
                OpenList->ReceiveHandler(
                  OpenList->ProtocolBindingContext,
                  v11,
                  v83,
                  14u,
                  v83 + 14,
                  v11->Private.Head->ByteCount - 14,
                  ByteCount - 14);
                *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = v62;
                v68 = v85;
              }
              if ( *((int *)v68 + 3) > 0 )
              {
                v69 = v92;
                if ( (OpenList->OpenFlags & 8) == 0 )
                  v69 = 1;
                LOBYTE(v92) = v69;
              }
              ByteCount = *(unsigned int *)v80;
              v10 = v79;
              a1->IndicatedPacket[KeGetPcr()->Prcb.Number] = v64;
            }
          }
          MappedSystemVa = v83;
          OpenList = FilterNextOpen;
        }
        while ( FilterNextOpen );
        EthDB = v84;
      }
      v20 = v85;
      goto LABEL_114;
    }
    if ( (*MappedSystemVa & 1) != 0 )
    {
      if ( *MappedSystemVa == 0xFF
        && MappedSystemVa[1] == 0xFF
        && MappedSystemVa[2] == 0xFF
        && MappedSystemVa[3] == 0xFF
        && MappedSystemVa[4] == 0xFF
        && MappedSystemVa[5] == 0xFF )
      {
        v47 = 8;
        if ( (v11->Private.Flags & 0x20000) == 0 && (v11->Private.NdisPacketFlags & 2) == 0 )
        {
          BottomIfStats = a1->BottomIfStats;
          if ( BottomIfStats )
          {
            v49 = &BottomIfStats[KeGetPcr()->Prcb.Number];
            v49->ifHCInBroadcastOctets += (unsigned int)ByteCount;
            v49->ifHCInOctets += (unsigned int)ByteCount;
            v50 = a1->BottomIfStats;
            if ( v50 )
            {
              v51 = KeGetPcr()->Prcb.Number;
              ++v50[v51].ifHCInBroadcastPkts;
            }
          }
        }
      }
      else
      {
        v47 = 2;
        if ( (v11->Private.Flags & 0x20000) == 0 && (v11->Private.NdisPacketFlags & 2) == 0 )
        {
          v52 = a1->BottomIfStats;
          if ( v52 )
          {
            v53 = &v52[KeGetPcr()->Prcb.Number];
            v53->ifHCInMulticastOctets += (unsigned int)ByteCount;
            v53->ifHCInOctets += (unsigned int)ByteCount;
            v54 = a1->BottomIfStats;
            if ( v54 )
            {
              v55 = KeGetPcr()->Prcb.Number;
              ++v54[v55].ifHCInMulticastPkts;
            }
          }
        }
      }
      v11->Private.Flags &= ~0x20000u;
      goto LABEL_87;
    }
    if ( (v11->Private.Flags & 0x20000) == 0 && (v11->Private.NdisPacketFlags & 2) == 0 )
    {
      v31 = a1->BottomIfStats;
      if ( v31 )
      {
        v32 = &v31[KeGetPcr()->Prcb.Number];
        v32->ifHCInUcastOctets += (unsigned int)ByteCount;
        v32->ifHCInOctets += (unsigned int)ByteCount;
        v33 = a1->BottomIfStats;
        if ( v33 )
        {
          v34 = KeGetPcr()->Prcb.Number;
          ++v33[v34].ifHCInUcastPkts;
        }
      }
    }
    v11->Private.Flags &= ~0x20000u;
    v35 = 0;
    if ( (EthDB->CombinedPacketFilter & 0xA4) != 0
      && (*(_DWORD *)&EthDB->AdapterAddress[2] != *(_DWORD *)(MappedSystemVa + 2)
       || *(_WORD *)EthDB->AdapterAddress != *(_WORD *)MappedSystemVa) )
    {
      v35 = 1;
    }
    v36 = EthDB->OpenList;
    if ( EthDB->OpenList )
    {
      while ( 1 )
      {
        v37 = v36->PacketFilters;
        v38 = v36->FilterNextOpen;
        if ( (v37 & 0xA0) != 0 )
          break;
        v39 = 0;
        if ( !v35 && (v37 & 1) != 0 )
          goto LABEL_51;
LABEL_67:
        LOBYTE(v13) = v92;
        v36 = v38;
        if ( !v38 )
        {
          EthDB = v84;
          goto LABEL_114;
        }
      }
      v39 = 1;
LABEL_51:
      if ( (v11->Private.Flags & 0x80u) == 0
        || *(_NDIS_OPEN_BLOCK **)&v11->MacReserved[v11->Private.NdisPacketOobOffset + 24] != v36 )
      {
        ++v79;
        *((_BYTE *)v36->ReceivedAPacketSlot + 4096 * Number) = 1;
        v40 = (struct NDIS_NBL_TRACKER_HANDLE__ *)a1->IndicatedPacket;
        v41 = *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset);
        v42 = KeGetPcr()->Prcb.Number;
        v43 = (_NDIS_PACKET *)*((_QWORD *)v40 + v42);
        *((_QWORD *)v40 + v42) = v11;
        if ( (_BYTE)v13 || (v44 = v36->ReceivePacketHandler) == 0LL || v39 && !v84->SingleActiveOpen )
        {
          *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = -1073741670;
          v36->ReceiveHandler(
            v36->ProtocolBindingContext,
            v11,
            MappedSystemVa,
            14u,
            MappedSystemVa + 14,
            v11->Private.Head->ByteCount - 14,
            *(_DWORD *)v80 - 14);
          *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = v41;
        }
        else
        {
          v45 = *(struct _NET_BUFFER_LIST **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset);
          if ( v45 && v41 == -1073741670 )
          {
            ndisNblTrackerTransferOwnershipSingleNbl(v45, v40, v36->NblTracker, v39);
            v44 = v36->ReceivePacketHandler;
          }
          *((_DWORD *)v20 + 3) += (__int16)v44(v36->ProtocolBindingContext, v11);
        }
        if ( *((int *)v20 + 3) > 0 )
        {
          v46 = (unsigned __int8)v92;
          if ( (v36->OpenFlags & 8) == 0 )
            v46 = 1;
          v92 = v46;
        }
        MappedSystemVa = v83;
        Number = v81;
        a1->IndicatedPacket[KeGetPcr()->Prcb.Number] = v43;
      }
      goto LABEL_67;
    }
LABEL_114:
    v70 = *((_DWORD *)v20 + 3);
    if ( v70 )
    {
      v71 = _InterlockedExchangeAdd((volatile signed __int32 *)v20 + 2, v70 + 1) + v70 + 1;
      v72 = v71 == 0;
      if ( v71 <= 0 )
        goto LABEL_120;
      if ( (a1->Flags & 0x40000) == 0 )
        *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = 259;
    }
    else
    {
      v71 = 0;
      *((_DWORD *)v20 + 2) = 0;
    }
    v72 = v71 == 0;
LABEL_120:
    if ( v72 )
    {
      v73 = v87;
      --*(_DWORD *)&v11[-1].ProtocolReserved[4];
      if ( *((_DWORD *)v73 + 8) == -1073741670 )
        goto LABEL_136;
      if ( (a1->Flags & 0x40000) != 0 )
      {
        *(_QWORD *)v86 = 0LL;
        *((_DWORD *)v73 + 8) = 259;
        if ( (v11[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v11[-1].ProtocolReserved[4] == -1 )
          goto LABEL_131;
        v74 = v11;
        if ( *(_MDL **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset) )
          goto LABEL_126;
        a1->DriverHandle->MiniportDriverCharacteristics.DevicePnPEventNotifyHandler(
          a1->MiniportAdapterContext,
          (_NET_DEVICE_PNP_EVENT *)v11);
      }
      else
      {
        if ( *(_MDL **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset) )
        {
          *(_QWORD *)v86 = 0LL;
          *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = 259;
          if ( (v11[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v11[-1].ProtocolReserved[4] != -1 )
          {
            v74 = v11;
LABEL_126:
            ndisReturnPacketToNetBufferList(&a1->Header, v74);
            goto LABEL_136;
          }
LABEL_131:
          NDIS_FREE_XFER_DATA_PACKET(v11);
          goto LABEL_136;
        }
        *((_DWORD *)v73 + 8) = 0;
      }
    }
    else if ( (a1->Flags & 0x8000) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)&a1->IndicatedPacketsCount, 1u);
    }
LABEL_136:
    v7 = v88 + 1;
    ++v82;
    ++v88;
    if ( v82 >= v91 )
      break;
    Number = v81;
    v10 = v79;
  }
  if ( v79 )
  {
    v75 = EthDB->OpenList;
    if ( EthDB->OpenList )
    {
      v76 = v81 << 12;
      do
      {
        ReceivedAPacketSlot = v75->ReceivedAPacketSlot;
        v78 = v75->FilterNextOpen;
        if ( *((_BYTE *)ReceivedAPacketSlot + v76) )
        {
          *((_BYTE *)ReceivedAPacketSlot + v76) = 0;
          v75->ReceiveCompleteHandler(v75->ProtocolBindingContext);
        }
        v75 = v78;
      }
      while ( v78 );
    }
  }
LABEL_145:
  NdisReleaseRWLock(EthDB->BindListLock, &LockState);
}
