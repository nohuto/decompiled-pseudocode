/*
 * XREFs of ndisDoPeriodicReceivesIndication @ 0x1C00A3074
 * Callers:
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C00A3528 (ndisEmptyPeriodicReceivesQueue.c)
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C00A44E0 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001D70 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0002110 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0036030 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0099C4C (-ndisIndicateToPmodeOpens@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C009A084 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00C4784 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00C74F4 (PktMonClientNblDropNdis.c)
 */

__int64 __fastcall ndisDoPeriodicReceivesIndication(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *Alignment)
{
  unsigned int v2; // r14d
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  struct _NET_BUFFER_LIST *v5; // rbp
  unsigned int v6; // r15d
  unsigned int i; // r12d
  struct _NET_BUFFER_LIST *v8; // rax
  KSPIN_LOCK *p_Lock; // rcx
  unsigned int Number; // r14d
  char *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r9
  char *PoolWithTag; // rbx
  _X_FILTER *EthDB; // r13
  struct _NET_BUFFER_LIST *v16; // rcx
  __int64 v17; // rdx
  struct _NDIS_OPEN_BLOCK *SingleActiveOpen; // r14
  struct _NDIS_OPEN_BLOCK *NoFTypeOpenList; // rbp
  unsigned int v20; // r13d
  unsigned int v21; // edi
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r15
  __int64 v23; // r14
  __int64 v24; // rcx
  struct _NET_BUFFER_LIST *v25; // rdx
  unsigned int v26; // r15d
  unsigned int v27; // r13d
  unsigned int v28; // r14d
  unsigned int j; // ebp
  __int64 v30; // rax
  _X_FILTER *v32; // [rsp+30h] [rbp-58h]
  char v34; // [rsp+98h] [rbp+10h]
  unsigned int v35; // [rsp+A0h] [rbp+18h]
  unsigned int v36; // [rsp+A8h] [rbp+20h]

  v2 = 0;
  v35 = 0;
  v4 = a1;
  do
  {
    v5 = Alignment;
    if ( !Alignment )
      break;
    v6 = (unsigned int)Alignment->ProtocolReserved[0];
    for ( i = 1; ; ++i )
    {
      v8 = Alignment;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      if ( !Alignment || v6 != LODWORD(Alignment->ProtocolReserved[0]) )
        break;
    }
    v4->PeriodicReceiveQueue.NumNblsDequeued -= i;
    v8->Link.Alignment = 0LL;
    if ( v4->MajorNdisVersion < 6u && (v4->Flags & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(&v4->Lock);
      while ( 1 )
      {
        p_Lock = &v4->Lock;
        v4->MiniportThread = KeGetCurrentThread();
        if ( !v4->LockAcquired )
          break;
        v4->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(p_Lock);
        KeStallExecutionProcessor(1u);
        KeAcquireSpinLockAtDpcLevel(&v4->Lock);
      }
      v4->LockAcquired = 1;
      v4->LockThread = KeGetCurrentThread();
      v4->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(p_Lock);
    }
    if ( !v4->InitMode )
    {
      v36 = 0;
      v34 = 0;
      if ( ndisPerProcRcvTrackers
        && (Number = KeGetPcr()->Prcb.Number,
            v11 = (char *)ndisPerProcRcvTrackers,
            v12 = 2096LL * Number,
            v36 = Number,
            v13 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v12),
            (unsigned int)v13 < 3) )
      {
        v34 = 1;
        PoolWithTag = (char *)ndisPerProcRcvTrackers + 696 * v13 + v12 + 8;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v12) = v13 + 1;
LABEL_18:
        EthDB = v4->EthDB;
        v16 = v5;
        v32 = EthDB;
        PoolWithTag[692] = 0;
        do
        {
          v17 = (__int64)v16;
          v16->Flags = v16->Flags & 0xFFFFFFF0 | 4;
          v16 = (struct _NET_BUFFER_LIST *)v16->Link.Alignment;
        }
        while ( v16 );
        SingleActiveOpen = EthDB->SingleActiveOpen;
        if ( SingleActiveOpen && SingleActiveOpen->ProtocolHandle->MajorNdisVersion >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(SingleActiveOpen, v5, (char *)v6, i, 1u);
          *((_QWORD *)PoolWithTag + 8) = 0LL;
          *((_DWORD *)PoolWithTag + 20) = 0;
        }
        else
        {
          *((_QWORD *)PoolWithTag + 3) = v5;
          *((_QWORD *)PoolWithTag + 1) = EthDB;
          *((_DWORD *)PoolWithTag + 4) = 1;
          *(_QWORD *)PoolWithTag = v4;
          *((_QWORD *)PoolWithTag + 4) = v17;
          *((_DWORD *)PoolWithTag + 10) = v6;
          *((_DWORD *)PoolWithTag + 11) = i;
          ndisSortNetBufferLists((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag, v17, v11);
          if ( *((_QWORD *)PoolWithTag + 8) || *((_DWORD *)PoolWithTag + 172) )
          {
            if ( !EthDB->OpenList || v6 )
              PoolWithTag[692] = 1;
            else
              ndisIndicateXlatedPacketsToNdis5Protocols((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
            if ( !SingleActiveOpen )
            {
              NoFTypeOpenList = EthDB->NoFTypeOpenList;
              if ( NoFTypeOpenList )
              {
                v20 = *((_DWORD *)PoolWithTag + 172);
                v21 = *((_DWORD *)PoolWithTag + 4) | 2;
                do
                {
                  FilterNextOpen = NoFTypeOpenList->FilterNextOpen;
                  v23 = 0LL;
                  do
                  {
                    v24 = (unsigned int)v23;
                    v25 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v23 + 64];
                    v23 = (unsigned int)(v23 + 1);
                    if ( v25 )
                      ndisMIndicateNetBufferListsToOpen(
                        NoFTypeOpenList,
                        v25,
                        (char *)*((unsigned int *)PoolWithTag + 10),
                        *(_DWORD *)&PoolWithTag[40 * v24 + 80],
                        v21);
                  }
                  while ( (unsigned int)v23 <= v20 );
                  NoFTypeOpenList = FilterNextOpen;
                }
                while ( FilterNextOpen );
                v4 = a1;
                EthDB = v32;
              }
              if ( EthDB->FTypeOpenList )
              {
                v26 = *((_DWORD *)PoolWithTag + 4);
                v27 = *((_DWORD *)PoolWithTag + 10);
                v28 = *((_DWORD *)PoolWithTag + 172);
                if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2244LL) )
                  ndisIndicateToPmodeOpens((struct _NDIS_NBL_RCV_TRACKER *)PoolWithTag);
                for ( j = 1; j <= v28; ++j )
                {
                  v30 = j;
                  ndisMIndicateNetBufferListsToOpen(
                    *(struct _NDIS_OPEN_BLOCK **)&PoolWithTag[40 * v30 + 56],
                    *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v30 + 64],
                    (char *)v27,
                    *(_DWORD *)&PoolWithTag[40 * v30 + 80],
                    v26);
                }
              }
            }
          }
        }
        if ( PoolWithTag[692] )
        {
          v5 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
          goto LABEL_48;
        }
      }
      else
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
        if ( PoolWithTag )
          goto LABEL_18;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            4u,
            0xBu,
            (struct _GUID *)&WPP_7920440e7c0337b75cf6bec3de4b863a_Traceguids);
LABEL_48:
        if ( v5 )
        {
          if ( byte_1C00E4FD0 && (*((_DWORD *)&v4->PktMonComp + 13) & 2) != 0 )
            PktMonClientNblDropNdis((_DWORD)v4 + 5808, (_DWORD)v5, (_DWORD)v11, 1, -1073676270, -536866809);
          ndisReturnNetBufferListsInternal(v4, v5, 1u, 0LL);
        }
      }
      if ( v34 )
      {
        --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v36);
      }
      else if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      v2 = v35;
      goto LABEL_58;
    }
    ndisMDispatchReceiveNetBufferListsWithLock(v4, v5, v6, i, 1u);
LABEL_58:
    if ( v4->MajorNdisVersion < 6u && (v4->Flags & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(&v4->Lock);
      v4->LockAcquired = 0;
      v4->LockThread = 0LL;
      v4->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v4->Lock);
    }
    v4->PeriodicReceiveQueue.TrackingIndicated += i;
    v2 += i;
    v35 = v2;
  }
  while ( Alignment );
  return v2;
}
