/*
 * XREFs of UmfdHostLifeTimeManager::ExecuteCallbackIfUmfdHostIsReady__lambda_eef90ce73a6a62b5089d029612c95735___ @ 0x1C011F3C4
 * Callers:
 *     UmfdQueryFontData @ 0x1C011EFA0 (UmfdQueryFontData.c)
 * Callees:
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C00E7128 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C011F800 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C011F92C (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C011FE98 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x1C02E2A54 (-QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z.c)
 */

__int64 __fastcall UmfdHostLifeTimeManager::ExecuteCallbackIfUmfdHostIsReady__lambda_eef90ce73a6a62b5089d029612c95735___(
        union _SLIST_HEADER ***a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  union _SLIST_HEADER *v4; // rbx
  union _SLIST_HEADER **v5; // r14
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned int v8; // ebx
  union _SLIST_HEADER **v9; // r15
  union _SLIST_HEADER **v10; // rbp
  union _SLIST_HEADER *v11; // rdi
  PSLIST_ENTRY v12; // rax
  PSLIST_ENTRY v13; // rsi
  union _SLIST_HEADER *v14; // rax
  union _SLIST_HEADER *v15; // rdi
  union _SLIST_HEADER *v17; // rcx
  signed __int32 v18[18]; // [rsp+0h] [rbp-48h] BYREF
  PSLIST_ENTRY v19; // [rsp+58h] [rbp+10h] BYREF
  union _SLIST_HEADER *v20; // [rsp+60h] [rbp+18h] BYREF
  __int64 v21; // [rsp+68h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 32) + 23520LL;
  v21 = v2;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(v2);
  v4 = 0LL;
  if ( *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v3) + 32) + 23536LL) )
  {
    v5 = a1[1];
    if ( (*(unsigned __int8 (__fastcall **)(union _SLIST_HEADER *))((*v5)->Alignment + 16))(*v5)
      && *(struct _KTHREAD **)(*(_QWORD *)(SGDGetSessionState(v6) + 32) + 23504LL) != KeGetCurrentThread() )
    {
      v7 = (*(__int64 (__fastcall **)(union _SLIST_HEADER *))((*v5)->Alignment + 8))(*v5);
      UmfdHostLifeTimeManager::QueueTryResurrectPffApc(v7);
      v8 = -1073741823;
LABEL_12:
      AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v21);
      return v8;
    }
    v9 = *a1;
    v10 = a1[2];
    v11 = (*a1)[1];
    v12 = ExpInterlockedPopEntrySList(v11 + 1);
    v13 = v12;
    if ( v12 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v11);
    }
    else
    {
      v12 = (PSLIST_ENTRY)CEventPool::CEventPoolEntry::Create();
      v13 = v12;
      if ( !v12 )
      {
        v19 = 0LL;
        goto LABEL_10;
      }
    }
    v19 = v12;
    v14 = (union _SLIST_HEADER *)EngAllocMem(0, 0x40u, 0x676D6466u);
    v15 = v14;
    if ( v14 )
    {
      v20 = v14;
      *((_DWORD *)&v14[1].HeaderX64 + 2) = 8;
      v14[2].Region = (ULONGLONG)v13;
      *((_DWORD *)&v14[1].HeaderX64 + 3) = 8;
      v14[1].Alignment = (ULONGLONG)&v14[3].Region;
      v14[3].Region = (ULONGLONG)*v5;
      *((_DWORD *)&v14->HeaderX64 + 2) = 0;
      v17 = *v9;
      if ( !LOBYTE((*v9)->Alignment) )
      {
        *((_DWORD *)&v14->HeaderX64 + 2) = 1;
        ExpInterlockedPushEntrySList(v17 + 1, (PSLIST_ENTRY)v14);
        _InterlockedOr(v18, 0);
        v4 = v15;
        goto LABEL_11;
      }
    }
    else
    {
      v20 = 0LL;
    }
    CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v20);
LABEL_10:
    CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v19);
LABEL_11:
    *v10 = v4;
    v8 = v4 != 0LL ? 0 : 0xC0000001;
    goto LABEL_12;
  }
  if ( v2 )
  {
    GreReleasePushLockShared(v2);
    KeLeaveCriticalRegion();
  }
  return 3221225473LL;
}
