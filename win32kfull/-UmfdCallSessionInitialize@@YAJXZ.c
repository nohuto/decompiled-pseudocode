/*
 * XREFs of ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00E717C
 * Callers:
 *     UmfdSessionInitialize @ 0x1C00E6FB0 (UmfdSessionInitialize.c)
 * Callees:
 *     ?Create@CEventPool@@SAQEAV1@XZ @ 0x1C00E7280 (-Create@CEventPool@@SAQEAV1@XZ.c)
 *     ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1C00E72CC (-Create@CManualResetEvent@@SAQEAV1@XZ.c)
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C00EF3DC (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 *     ??1?$CAutoDestroy@VCMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C0309188 (--1-$CAutoDestroy@VCMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     ??1?$CAutoDestroy@VCWorkItemQueue@@@@QEAA@XZ @ 0x1C03091A8 (--1-$CAutoDestroy@VCWorkItemQueue@@@@QEAA@XZ.c)
 */

__int64 __fastcall UmfdCallSessionInitialize(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rsi
  __int64 v3; // rbp
  union _SLIST_HEADER ***v4; // r14
  union _SLIST_HEADER **v5; // rax
  union _SLIST_HEADER **v6; // rbx
  union _SLIST_HEADER *v7; // rax
  union _SLIST_HEADER *v8; // rdi
  struct CManualResetEvent *v9; // rax
  struct CEventPool *v10; // rax
  void **v12; // rbx
  void *v13; // rcx
  union _SLIST_HEADER *v14; // [rsp+40h] [rbp+8h] BYREF
  union _SLIST_HEADER **v15; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 0LL;
  v3 = *(_QWORD *)(SGDGetSessionState(a1) + 40);
  v4 = (union _SLIST_HEADER ***)(v3 + 16);
  while ( v1 >= 0 )
  {
    v5 = (union _SLIST_HEADER **)EngAllocMem(0, 0x10u, 0x676D6466u);
    v6 = v5;
    if ( !v5 )
      goto LABEL_14;
    v15 = v5;
    v7 = (union _SLIST_HEADER *)EngAllocMem(0, 0x20u, 0x676D6466u);
    v8 = v7;
    if ( !v7 )
      goto LABEL_11;
    v14 = v7;
    InitializeSListHead(v7 + 1);
    LOBYTE(v8->Alignment) = 0;
    v9 = CManualResetEvent::Create();
    v8->Region = (ULONGLONG)v9;
    if ( !v9 )
    {
      CAutoDestroy<CWorkItemQueue>::~CAutoDestroy<CWorkItemQueue>(&v14);
LABEL_11:
      *v6 = 0LL;
LABEL_13:
      CAutoDestroy<CMultipleConsumerWorkQueue>::~CAutoDestroy<CMultipleConsumerWorkQueue>(&v15);
LABEL_14:
      v1 = -1073741801;
      goto LABEL_8;
    }
    *v6 = v8;
    v10 = CEventPool::Create();
    v6[1] = (union _SLIST_HEADER *)v10;
    if ( !v10 )
      goto LABEL_13;
    v4[4] = v6;
    v1 = 0;
    *v4 = v6;
LABEL_8:
    v2 = (unsigned int)(v2 + 1);
    ++v4;
    if ( (unsigned int)v2 >= 4 )
    {
      if ( v1 >= 0 )
        return (unsigned int)v1;
      break;
    }
  }
  if ( (_DWORD)v2 )
  {
    v12 = (void **)(v3 + 48);
    do
    {
      v13 = *v12;
      *(v12 - 4) = 0LL;
      CMultipleConsumerWorkQueue::Destroy(v13);
      *v12++ = 0LL;
      --v2;
    }
    while ( v2 );
  }
  return (unsigned int)v1;
}
