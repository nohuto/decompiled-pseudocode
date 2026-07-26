/*
 * XREFs of ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B0BB8
 * Callers:
 *     ?ndisEmulateRSSv1Dpc@@YAXPEAU_KDPC@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@@Z @ 0x1C00884C0 (-ndisEmulateRSSv1Dpc@@YAXPEAU_KDPC@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_R.c)
 *     ?ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@U_PROCESSOR_NUMBER@@@Z @ 0x1C00885AC (-ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DP.c)
 *     NdisFSynchronousOidRequest @ 0x1C00B0FE0 (NdisFSynchronousOidRequest.c)
 *     NdisSynchronousOidRequest @ 0x1C00B10F0 (NdisSynchronousOidRequest.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00187F4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001A7EC (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005F6B0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00898D0 (-ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Pop @ 0x1C00B07BC (KStackStorage__ndisSynchronousOidRequestInternal_--_2_--NDIS_SYNCHRONOUS_OID_CALLFRAME_7_--Pop.c)
 *     KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Push @ 0x1C00B0838 (KStackStorage__ndisSynchronousOidRequestInternal_--_2_--NDIS_SYNCHRONOUS_OID_CALLFRAME_7_--Push.c)
 *     ndisFInvokeSynchronousOidRequest @ 0x1C00B08DC (ndisFInvokeSynchronousOidRequest.c)
 *     ndisFInvokeSynchronousOidRequestComplete @ 0x1C00B09B4 (ndisFInvokeSynchronousOidRequestComplete.c)
 *     ndisMInvokeSynchronousOidRequest @ 0x1C00B0ABC (ndisMInvokeSynchronousOidRequest.c)
 *     ndisVerifySynchronousOidAfterCompletion @ 0x1C00B0F70 (ndisVerifySynchronousOidAfterCompletion.c)
 */

__int64 __fastcall ndisSynchronousOidRequestInternal(
        ULONG_PTR BugCheckParameter2,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *HighestFilter,
        struct _NDIS_OID_REQUEST *a4)
{
  bool v4; // zf
  NDIS_REQUEST_TYPE RequestType; // eax
  _LIST_ENTRY *Flink; // rcx
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  KIRQL v11; // dl
  int v12; // r8d
  __int64 v13; // rax
  _QWORD *v14; // r14
  unsigned int v15; // eax
  KIRQL v16; // dl
  __int64 v17; // rax
  ULONG_PTR v18; // rsi
  struct _KEVENT *AllDirectRequestsCompletedEvent; // rcx
  _LIST_ENTRY *v20; // rdx
  _LIST_ENTRY *v21; // rax
  KIRQL v22; // dl
  unsigned int v23; // ebx
  PVOID v24; // rcx
  KIRQL NewIrql[4]; // [rsp+20h] [rbp-B9h] BYREF
  unsigned int v27; // [rsp+24h] [rbp-B5h] BYREF
  int v28; // [rsp+28h] [rbp-B1h] BYREF
  _LIST_ENTRY *v29; // [rsp+30h] [rbp-A9h] BYREF
  _LIST_ENTRY *p_SynchronousOidCalls; // [rsp+38h] [rbp-A1h]
  struct _NDIS_OID_REQUEST *v31; // [rsp+40h] [rbp-99h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-91h]
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-89h]
  _QWORD v34[15]; // [rsp+60h] [rbp-79h] BYREF
  PVOID P; // [rsp+D8h] [rbp-1h]
  __int64 v36; // [rsp+E0h] [rbp+7h]

  v4 = a4->Header.Type == 0x96;
  v34[0] = 0LL;
  P = v34;
  v36 = 0LL;
  NewIrql[0] = 0;
  if ( !v4
    || a4->Header.Revision < 2u
    || a4->Header.Size < 0xF8u
    || a4->Timeout
    || a4->RequestId
    || (RequestType = a4->RequestType, RequestType < NdisRequestQueryInformation)
    || RequestType > NdisRequestSetInformation && RequestType != NdisRequestMethod )
  {
    ndisBugCheckEx(0x21uLL, BugCheckParameter2, (ULONG_PTR)a4, 0LL);
  }
  v31 = a4;
  CurrentThread = KeGetCurrentThread();
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, NewIrql);
  Flink = a2->SynchronousOidCalls.Flink;
  if ( Flink->Blink != &a2->SynchronousOidCalls )
    goto LABEL_50;
  v29 = a2->SynchronousOidCalls.Flink;
  p_SynchronousOidCalls = &a2->SynchronousOidCalls;
  Flink->Blink = (_LIST_ENTRY *)&v29;
  a2->SynchronousOidCalls.Flink = (_LIST_ENTRY *)&v29;
  ++a2->DirectOidRequestCount;
  while ( 1 )
  {
    if ( !HighestFilter )
    {
      HighestFilter = a2->HighestFilter;
      goto LABEL_17;
    }
    while ( 1 )
    {
      HighestFilter = HighestFilter->LowerFilter;
LABEL_17:
      if ( !HighestFilter )
        break;
      FilterDriver = HighestFilter->FilterDriver;
      if ( FilterDriver->DefaultFilterCharacteristics.SynchronousOidRequestHandler
        || FilterDriver->DefaultFilterCharacteristics.SynchronousOidRequestCompleteHandler )
      {
        v28 = 0;
        if ( ndisReferenceRefEx(&HighestFilter->PnPRef.SpinLock, 0x17u, (enum _NDIS_REFERENCE_STATUS *)&v28) )
          break;
      }
    }
    v11 = NewIrql[0];
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v11);
    if ( !HighestFilter )
      break;
    v13 = KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Push((__int64)v34);
    v14 = (_QWORD *)v13;
    if ( !v13 )
    {
      v27 = -1073741670;
LABEL_29:
      KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Pop((__int64)v34);
      goto LABEL_37;
    }
    if ( HighestFilter->FilterDriver->DefaultFilterCharacteristics.SynchronousOidRequestHandler )
    {
      *(_QWORD *)(v13 + 8) = 0LL;
      v27 = ndisFInvokeSynchronousOidRequest((__int64)HighestFilter, (__int64)a4, v13 + 8);
      ndisVerifySynchronousOidAfterCompletion((ULONG_PTR)a4);
      v15 = v27;
    }
    else
    {
      v15 = 0;
      v27 = 0;
    }
    if ( v15 )
    {
      if ( v15 == 255 )
        v15 = 0;
      v27 = v15;
      goto LABEL_29;
    }
    *v14 = HighestFilter;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, NewIrql);
  }
  if ( a2->DriverHandle->MiniportDriverCharacteristics.SynchronousOidRequestHandler )
  {
    v27 = ndisMInvokeSynchronousOidRequest((ULONG_PTR)a2, (ULONG_PTR)a4, v12);
    ndisVerifySynchronousOidAfterCompletion((ULONG_PTR)a4);
    if ( a4->RequestType == NdisRequestMethod
      && a4->DATA.QUERY_INFORMATION.Oid == 66240
      && (*(_DWORD *)&a4->NdisReserved[16] & 0x1000000) == 0
      && !v27 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, NewIrql);
      ndisRssV2UpdateIndirectionTable(a2, a4);
      v16 = NewIrql[0];
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v16);
    }
  }
  else
  {
    v27 = -1073741637;
  }
LABEL_37:
  while ( 1 )
  {
    v17 = KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Pop((__int64)v34);
    if ( !v17 )
      break;
    v18 = *(_QWORD *)v17;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 16LL) + 328LL) )
    {
      ndisFInvokeSynchronousOidRequestComplete(*(_QWORD *)v17, (ULONG_PTR)a4, &v27, *(_QWORD *)(v17 + 8));
      ndisVerifySynchronousOidAfterCompletion((ULONG_PTR)a4);
    }
    ndisDereferenceRef((PKSPIN_LOCK)(v18 + 312), 0x17u);
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, NewIrql);
  v4 = a2->DirectOidRequestCount-- == 1;
  if ( v4 )
  {
    AllDirectRequestsCompletedEvent = a2->AllDirectRequestsCompletedEvent;
    if ( AllDirectRequestsCompletedEvent )
    {
      KeSetEvent(AllDirectRequestsCompletedEvent, 0, 0);
      a2->AllDirectRequestsCompletedEvent = 0LL;
    }
  }
  v20 = v29;
  v21 = p_SynchronousOidCalls;
  if ( (_LIST_ENTRY **)v29->Blink != &v29 || (_LIST_ENTRY **)p_SynchronousOidCalls->Flink != &v29 )
LABEL_50:
    __fastfail(3u);
  p_SynchronousOidCalls->Flink = v29;
  v20->Blink = v21;
  v22 = NewIrql[0];
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v22);
  v23 = v27;
  while ( 1 )
  {
    v24 = P;
    if ( !*(_QWORD *)P )
      break;
    P = *(PVOID *)P;
    ExFreePoolWithTag(v24, 0x4253444Eu);
  }
  return v23;
}
