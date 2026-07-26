/*
 * XREFs of ?NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C011BEF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C0015590 (WPP_RECORDER_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qddS @ 0x1C007F4FC (WPP_RECORDER_SF_qddS.c)
 *     ??0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ @ 0x1C011A224 (--0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ.c)
 *     ??_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z @ 0x1C011A44C (--_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z.c)
 *     ?ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAUNDIS_PD_ASSOCIATION@@PEAUNDIS_PD_COUNTER@@EE@Z @ 0x1C011E93C (-ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAM.c)
 */

__int64 __fastcall NdisPDPIAllocateQueue(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_QUEUE_PARAMETERS *a2,
        struct _NDIS_PD_QUEUE **a3)
{
  NDIS_PD_QUEUE_TRACKER *v3; // r14
  const wchar_t *v7; // r8
  int v8; // ebx
  NDIS_PD_QUEUE_TYPE QueueType; // eax
  NDIS_PD_COUNTER_HANDLE__ *CounterHandle; // rsi
  bool v11; // zf
  NDIS_PD_QUEUE_TRACKER *PoolWithTag; // rax
  int v13; // eax
  int v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  struct _NDIS_PD_QUEUE *v17; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0LL;
  v17 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v7 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 88) )
      v7 = L" ";
    WPP_RECORDER_SF_qddS(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)v7,
      0x22u,
      v15,
      (char)a1,
      a2->QueueType,
      a2->QueueSize,
      v7);
  }
  if ( *((_BYTE *)a1 + 88) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_QUEUE_PARAMETERS *, struct _NDIS_PD_QUEUE **))(*((_QWORD *)a1 + 10) + 8LL))(
           *((_QWORD *)a1 + 9),
           a2,
           a3);
    if ( v8 >= 0 )
      *((_QWORD *)(*a3)->PDPlatformReserved[1] + 5) = a1;
    goto LABEL_33;
  }
  *a3 = 0LL;
  if ( a2->Header.Type == 0x80 && a2->Header.Revision == 1 && a2->Header.Size >= 0x38u && (a2->Flags & 0xFFFFFFFE) == 0 )
  {
    QueueType = a2->QueueType;
    CounterHandle = a2->CounterHandle;
    if ( QueueType == PDQueueTypeReceive )
    {
      if ( !CounterHandle )
      {
LABEL_20:
        PoolWithTag = (NDIS_PD_QUEUE_TRACKER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x138uLL, 0x7441444Eu);
        if ( PoolWithTag )
          v3 = NDIS_PD_QUEUE_TRACKER::NDIS_PD_QUEUE_TRACKER(PoolWithTag);
        if ( !v3 )
        {
          v8 = -1073741670;
          goto LABEL_33;
        }
        if ( CounterHandle )
          a2->CounterHandle = (NDIS_PD_COUNTER_HANDLE__ *)*((_QWORD *)CounterHandle + 6);
        v13 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_QUEUE_PARAMETERS *, struct _NDIS_PD_QUEUE **))(*((_QWORD *)a1 + 10) + 8LL))(
                *((_QWORD *)a1 + 9),
                a2,
                &v17);
        v8 = v13;
        if ( CounterHandle )
          a2->CounterHandle = CounterHandle;
        if ( v13 >= 0 )
        {
          ndisSetupPDQTracker(
            v3,
            v17,
            a2,
            (struct NDIS_PD_ASSOCIATION *)a1,
            (struct NDIS_PD_COUNTER *)CounterHandle,
            0,
            a2->Flags & 1);
          *a3 = v17;
          goto LABEL_33;
        }
        goto LABEL_31;
      }
      v11 = *((_DWORD *)CounterHandle + 14) == 1;
    }
    else
    {
      if ( QueueType != PDQueueTypeTransmit )
        goto LABEL_16;
      if ( !CounterHandle )
        goto LABEL_20;
      v11 = *((_DWORD *)CounterHandle + 14) == 2;
    }
    if ( !v11 )
    {
LABEL_16:
      v8 = -1073741811;
      goto LABEL_33;
    }
    goto LABEL_20;
  }
  v8 = -1073741811;
LABEL_31:
  if ( v3 )
    NDIS_PD_QUEUE_TRACKER::`scalar deleting destructor'((char *)v3);
LABEL_33:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v16) = v8;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x23u,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      (char)a1,
      (char)*a3,
      v16);
  }
  return (unsigned int)v8;
}
