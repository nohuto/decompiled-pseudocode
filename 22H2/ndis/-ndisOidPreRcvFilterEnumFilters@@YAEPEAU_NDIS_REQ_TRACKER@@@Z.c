/*
 * XREFs of ?ndisOidPreRcvFilterEnumFilters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0086A60
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0078760 (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0085FC8 (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 */

char __fastcall ndisOidPreRcvFilterEnumFilters(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // r15
  struct _NDIS_MINIPORT_BLOCK *v3; // r14
  char v5; // r12
  struct _NDIS_MINIPORT_BLOCK *v6; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  struct _NDIS_MINIPORT_BLOCK *v10; // rcx
  wchar_t *Buffer; // rsi
  __int64 v12; // r8
  unsigned int *v13; // r9
  struct _NDIS_MINIPORT_BLOCK *VPortByVPortIdInternal; // rax
  KIRQL v15; // dl
  unsigned int Next; // edx
  unsigned int v17; // edx
  unsigned int v18; // ebp
  KIRQL v19; // dl
  $474C1527283D704F518D918A58DB716F *v20; // rcx
  unsigned int v21; // r10d
  wchar_t *i; // rsi
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  KIRQL v26; // dl
  struct _NDIS_MINIPORT_BLOCK *v27; // rax
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  v1 = *a1;
  NewIrql = 0;
  ReceiveQueueByQueueId = 0LL;
  v3 = 0LL;
  v5 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x1Eu,
      (struct _GUID *)&WPP_8ae6292ee3d833c857d30dcfbd7b4f7f_Traceguids,
      a1);
  v6 = a1[4];
  v7 = 20;
  if ( *((_DWORD *)&v6->Header + 1) == 12 )
  {
    v8 = -1073676268;
    *((_DWORD *)a1 + 10) = 0;
    if ( v6->PcwDatapathEventMask >= 0x14u )
    {
      v9 = 0;
      if ( HIDWORD(v6->Reserved28) < 0x14 )
      {
        HIDWORD(v6->ShortRef.SpinLock) = 20;
        v9 = -1073676266;
        *((_DWORD *)a1 + 10) = -1073676266;
      }
    }
    else
    {
      HIDWORD(v6->ShortRef.SpinLock) = 20;
      v9 = -1073676268;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    v10 = a1[4];
    if ( v9 )
    {
      HIDWORD(v10->OpenQueue) = 0;
LABEL_10:
      LODWORD(a1[4]->ShortRef.SpinLock) = 0;
      goto LABEL_43;
    }
    if ( *((_BYTE *)v10->Reserved4.Buffer + 1) == 2 )
    {
      *((_DWORD *)a1 + 10) = 0;
      v7 = 28;
      if ( v10->PcwDatapathEventMask < 0x1Cu )
      {
LABEL_15:
        HIDWORD(v10->ShortRef.SpinLock) = 28;
        *((_DWORD *)a1 + 10) = v8;
        HIDWORD(a1[4]->OpenQueue) = 0;
        goto LABEL_10;
      }
      if ( HIDWORD(v10->Reserved28) < 0x1C )
      {
        v8 = -1073676266;
        goto LABEL_15;
      }
    }
    if ( !v1 )
    {
      v5 = 0;
      goto LABEL_43;
    }
    *((_DWORD *)a1 + 10) = -1073741637;
    if ( v1->ReceiveFilterCurrentCapabilities )
    {
      Buffer = v10->Reserved4.Buffer;
      HIDWORD(v10->OpenQueue) = 0;
      LODWORD(a1[4]->ShortRef.SpinLock) = v7;
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
      if ( *((_BYTE *)Buffer + 1) >= 2u && (*((_DWORD *)Buffer + 5) & 1) != 0 )
      {
        VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(v1, *((_DWORD *)Buffer + 6));
        v3 = VPortByVPortIdInternal;
        if ( !VPortByVPortIdInternal )
        {
LABEL_22:
          v15 = NewIrql;
          v1->MiniportThread = 0LL;
          KeReleaseSpinLock(&v1->Lock, v15);
          *((_DWORD *)a1 + 10) = -1073741811;
          goto LABEL_43;
        }
        Next = (unsigned int)VPortByVPortIdInternal->WorkQueue[5].Next;
      }
      else
      {
        v17 = *((_DWORD *)Buffer + 1);
        if ( v17 )
          ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v1, v17, v12, v13);
        else
          ReceiveQueueByQueueId = (struct _NDIS_MINIPORT_BLOCK *)v1->DefaultReceiveQueue;
        if ( !ReceiveQueueByQueueId )
          goto LABEL_22;
        Next = HIDWORD(ReceiveQueueByQueueId->Reserved29);
      }
      v18 = 16 * Next + 28;
      HIDWORD(a1[4]->ShortRef.SpinLock) = v18;
      if ( v18 <= HIDWORD(a1[4]->Reserved28) )
      {
        *(_DWORD *)Buffer = 1835392;
        if ( v3 )
        {
          v20 = ($474C1527283D704F518D918A58DB716F *)v3->WorkQueue[6].Next;
          *((_DWORD *)Buffer + 6) = v3->PnPFlags;
        }
        else
        {
          v20 = *($474C1527283D704F518D918A58DB716F **)&ReceiveQueueByQueueId->Reserved4.Length;
          *((_DWORD *)Buffer + 1) = ReceiveQueueByQueueId->PcwDatapathEventMask;
        }
        *((_DWORD *)Buffer + 2) = 28;
        *((_DWORD *)Buffer + 4) = 16;
        v21 = 0;
        *((_DWORD *)Buffer + 3) = Next;
        for ( i = Buffer + 14; v21 < Next; v20 = *($474C1527283D704F518D918A58DB716F **)&v20->Reserved4.Length )
        {
          if ( v3 )
          {
            if ( v20 == ($474C1527283D704F518D918A58DB716F *)&v3->WorkQueue[6] )
              break;
            v23 = 104LL;
            v24 = 1LL;
            v25 = 108LL;
          }
          else
          {
            if ( v20 == &ReceiveQueueByQueueId->32 )
              break;
            v23 = 120LL;
            v24 = 2LL;
            v25 = 124LL;
          }
          ++v21;
          *(_OWORD *)i = 0LL;
          *(_DWORD *)i = 1048960;
          *((_DWORD *)i + 1) = *(_DWORD *)((char *)&v20->Reserved4.Length + v23);
          *((_DWORD *)i + 2) = *(_DWORD *)((char *)&v20->Reserved4.Length + v25);
          *((_DWORD *)i + 3) = *(_DWORD *)&v20[v24].Reserved4.Length;
          i += 8;
        }
        v26 = NewIrql;
        v1->MiniportThread = 0LL;
        KeReleaseSpinLock(&v1->Lock, v26);
        v27 = a1[4];
        *((_DWORD *)a1 + 10) = 0;
        HIDWORD(v27->OpenQueue) = v18;
      }
      else
      {
        v19 = NewIrql;
        v1->MiniportThread = 0LL;
        KeReleaseSpinLock(&v1->Lock, v19);
        *((_DWORD *)a1 + 10) = -1073676266;
      }
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
LABEL_43:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x1Fu,
      (struct _GUID *)&WPP_8ae6292ee3d833c857d30dcfbd7b4f7f_Traceguids,
      (char)v1,
      *((_DWORD *)a1 + 10));
  return v5;
}
