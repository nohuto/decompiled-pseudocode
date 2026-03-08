/*
 * XREFs of CcReEngageWorkerThreads @ 0x1403CEBD0
 * Callers:
 *     CcWorkerThread @ 0x140215D70 (CcWorkerThread.c)
 *     CcAdjustWriteBehindThreadPool @ 0x1405337B8 (CcAdjustWriteBehindThreadPool.c)
 *     CcAsyncLazywriteWorker @ 0x14053741C (CcAsyncLazywriteWorker.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x1403439E0 (ExQueueWorkItemToPartition.c)
 */

void __fastcall CcReEngageWorkerThreads(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rsi
  unsigned int v5; // ebp
  _QWORD **v10; // rdi
  _QWORD *v11; // r10
  _QWORD *v12; // rax
  unsigned int v13; // ebp
  _QWORD **v14; // rdi
  _QWORD *v15; // r10
  _QWORD *v16; // rax

  v4 = *(_QWORD *)(a2 + 16);
  v5 = 0;
  if ( a3 )
  {
    v10 = (_QWORD **)(a2 + 56);
    do
    {
      v11 = *v10;
      if ( *v10 == v10 )
        break;
      if ( (_QWORD **)v11[1] == v10 )
      {
        v12 = (_QWORD *)*v11;
        if ( *(_QWORD **)(*v11 + 8LL) == v11 )
          continue;
      }
LABEL_24:
      __fastfail(3u);
      *v10 = v12;
      v12[1] = v10;
      ++*(_DWORD *)(a2 + 48);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1296)) <= 1 )
        __fastfail(0xEu);
      if ( v4 && _InterlockedIncrement64((volatile signed __int64 *)(v4 + 8)) <= 1 )
        __fastfail(0xEu);
      *v11 = 0LL;
      ExQueueWorkItemToPartition(v11, 0, *(_DWORD *)(a2 + 24), *(_QWORD *)(a1 + 8));
      ++v5;
    }
    while ( v5 < a3 );
  }
  v13 = 0;
  if ( a4 )
  {
    v14 = (_QWORD **)(a2 + 136);
    do
    {
      v15 = *v14;
      if ( *v14 == v14 )
        break;
      if ( (_QWORD **)v15[1] != v14 )
        goto LABEL_24;
      v16 = (_QWORD *)*v15;
      if ( *(_QWORD **)(*v15 + 8LL) != v15 )
        goto LABEL_24;
      *v14 = v16;
      v16[1] = v14;
      ++*(_DWORD *)(a2 + 152);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1296)) <= 1 )
        __fastfail(0xEu);
      if ( v4 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 8)) <= 1 )
          __fastfail(0xEu);
      }
      *v15 = 0LL;
      ExQueueWorkItemToPartition(v15, 0, *(_DWORD *)(a2 + 24), *(_QWORD *)(a1 + 8));
      ++v13;
    }
    while ( v13 < a4 );
  }
}
