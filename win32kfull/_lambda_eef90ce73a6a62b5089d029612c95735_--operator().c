/*
 * XREFs of _lambda_eef90ce73a6a62b5089d029612c95735_::operator() @ 0x1C011F5B4
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C011ED74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 * Callees:
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C00E7128 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C011F800 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C011F92C (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x1C02E2A54 (-QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z.c)
 */

__int64 __fastcall lambda_eef90ce73a6a62b5089d029612c95735_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // rbx
  unsigned __int64 v4; // rax
  union _SLIST_HEADER **v6; // r14
  _QWORD *v7; // rbp
  _QWORD *v8; // r15
  __int64 v9; // rdi
  PSLIST_ENTRY v10; // rax
  PSLIST_ENTRY v11; // rsi
  _DWORD *v12; // rax
  _DWORD *v13; // rdi
  union _SLIST_HEADER *v14; // rcx
  signed __int32 v15[18]; // [rsp+0h] [rbp-48h] BYREF
  PSLIST_ENTRY v16; // [rsp+50h] [rbp+8h] BYREF
  _DWORD *v17; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 8) + 16LL))(**(_QWORD **)(a1 + 8))
    && *(struct _KTHREAD **)(*(_QWORD *)(SGDGetSessionState(v2) + 32) + 23504LL) != KeGetCurrentThread() )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 8) + 8LL))(**(_QWORD **)(a1 + 8));
    UmfdHostLifeTimeManager::QueueTryResurrectPffApc(v4);
    return 3221225473LL;
  }
  v6 = *(union _SLIST_HEADER ***)a1;
  v7 = *(_QWORD **)(a1 + 8);
  v8 = *(_QWORD **)(a1 + 16);
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v9 + 16));
  v11 = v10;
  if ( v10 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v9);
  }
  else
  {
    v10 = (PSLIST_ENTRY)CEventPool::CEventPoolEntry::Create();
    v11 = v10;
    if ( !v10 )
    {
      v16 = 0LL;
      goto LABEL_9;
    }
  }
  v16 = v10;
  v12 = EngAllocMem(0, 0x40u, 0x676D6466u);
  v13 = v12;
  if ( v12 )
  {
    v17 = v12;
    v12[6] = 8;
    *((_QWORD *)v12 + 5) = v11;
    v12[7] = 8;
    *((_QWORD *)v12 + 2) = v12 + 14;
    *((_QWORD *)v12 + 7) = *v7;
    v12[2] = 0;
    v14 = *v6;
    if ( !LOBYTE((*v6)->Alignment) )
    {
      v12[2] = 1;
      ExpInterlockedPushEntrySList(v14 + 1, (PSLIST_ENTRY)v12);
      _InterlockedOr(v15, 0);
      v3 = v13;
      goto LABEL_10;
    }
  }
  else
  {
    v17 = 0LL;
  }
  CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v17);
LABEL_9:
  CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v16);
LABEL_10:
  *v8 = v3;
  return v3 == 0LL ? 0xC0000001 : 0;
}
