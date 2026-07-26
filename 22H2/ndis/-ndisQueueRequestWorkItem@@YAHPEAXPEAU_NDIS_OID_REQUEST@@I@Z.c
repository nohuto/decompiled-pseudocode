/*
 * XREFs of ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x1C0006998
 * Callers:
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C000E8C0 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C001C124 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C001EA7C (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C000B2F0 (WPP_RECORDER_SF_qDq.c)
 *     NdisReferenceWithTag @ 0x1C000DF00 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012E28 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00187F4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0019A3C (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001A7EC (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C001C00C (-ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0039124 (-ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

__int64 __fastcall ndisQueueRequestWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // rbp
  unsigned int v7; // esi
  struct _NDIS_FILTER_BLOCK *v8; // r15
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  int v10; // edx
  int v11; // r8d
  struct _WORK_QUEUE_ITEM *v12; // rdi
  KSPIN_LOCK *p_SpinLock; // rcx
  KIRQL v14; // al
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v16; // bl
  int v17; // edx
  unsigned __int8 v18; // al
  unsigned int v20; // eax
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  KSPIN_LOCK *p_Lock; // rcx
  unsigned int v23; // eax
  _DWORD v24[4]; // [rsp+40h] [rbp-38h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+78h] [rbp+0h]
  KIRQL NewIrql; // [rsp+98h] [rbp+20h] BYREF

  NewIrql = 0;
  v6 = 0LL;
  v7 = -1073741823;
  v8 = 0LL;
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x50uLL);
    if ( a3 == 17 )
    {
      v6 = a1;
    }
    else
    {
      if ( a3 != 5 )
        goto LABEL_34;
      v8 = (struct _NDIS_FILTER_BLOCK *)a1;
    }
    v12[1].Parameter = a1;
    if ( v6 )
    {
      if ( a2 )
      {
        v18 = ndisReferenceMiniport(v6, MPREF_OID_QUEUED);
        goto LABEL_10;
      }
      ndisReferenceMiniportNoCheck(v6, MPREF_OID_QUEUED);
    }
    else
    {
      if ( !v8 )
        goto LABEL_34;
      p_SpinLock = &v8->PnPRef.SpinLock;
      if ( a2 )
      {
        v24[0] = 0;
        v18 = ndisReferenceRefEx(p_SpinLock, 0xCu, (enum _NDIS_REFERENCE_STATUS *)v24);
        goto LABEL_10;
      }
      v14 = KeAcquireSpinLockRaiseToDpc(p_SpinLock);
      RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v8->PnPRef.RefCountTracker;
      ++v8->PnPRef.ReferenceCount;
      v16 = v14;
      NdisReferenceWithTag(RefCountTracker);
      KeReleaseSpinLock(&v8->PnPRef.SpinLock, v16);
    }
    v18 = 1;
LABEL_10:
    if ( v18 == 1 )
    {
      if ( a2 )
      {
        if ( v6 )
        {
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v6, &NewIrql);
          v23 = ndisMQueueOidRequest(v6, a2);
          v6->MiniportThread = 0LL;
          p_Lock = &v6->Lock;
          v7 = v23;
        }
        else
        {
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v8->Miniport, &NewIrql);
          KeAcquireSpinLockAtDpcLevel(&v8->Lock);
          v8->LockThread = KeGetCurrentThread();
          v20 = ndisFQueueOidRequest(v8, a2);
          v8->LockThread = 0LL;
          v7 = v20;
          KeReleaseSpinLockFromDpcLevel(&v8->Lock);
          Miniport = v8->Miniport;
          Miniport->MiniportThread = 0LL;
          p_Lock = &Miniport->Lock;
        }
        KeReleaseSpinLock(p_Lock, NewIrql);
      }
      else
      {
        v7 = 0;
      }
      if ( !v7 )
      {
        v12[1].List.Blink = 0LL;
        v12->List.Flink = 0LL;
        v12[1].List.Flink = retaddr;
        v12->WorkerRoutine = ndisDoOidRequests;
        v12->Parameter = v12;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 4;
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v17,
            11,
            17,
            (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
            (char)a2,
            (char)a1);
        }
        ExQueueWorkItem(v12, (WORK_QUEUE_TYPE)40);
        return 259;
      }
      goto LABEL_31;
    }
    if ( v18 )
    {
LABEL_31:
      if ( v6 )
        ndisDereferenceMiniport(v6, MPREF_OID_QUEUED);
      else
        ndisDereferenceRef(&v8->PnPRef.SpinLock, 0xCu);
    }
LABEL_34:
    ExFreePoolWithTag(v12, 0);
    return v7;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      v11,
      16,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      a3,
      (char)a2);
  }
  return (unsigned int)-1073741670;
}
