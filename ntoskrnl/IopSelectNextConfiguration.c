/*
 * XREFs of IopSelectNextConfiguration @ 0x140803664
 * Callers:
 *     PnpFindBestConfigurationWorker @ 0x14080375C (PnpFindBestConfigurationWorker.c)
 * Callees:
 *     IopAddRemoveReqDescs @ 0x1408061D8 (IopAddRemoveReqDescs.c)
 */

char __fastcall IopSelectNextConfiguration(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v8; // ebx
  __int64 *v9; // r14
  __int64 v10; // rbp
  __int64 *v12; // r14
  __int64 v13; // rbx

  v4 = 0;
  v8 = 0;
  if ( a2 )
  {
    v9 = (__int64 *)(a1 + 32);
    do
    {
      v10 = *v9;
      IopAddRemoveReqDescs(**(_QWORD **)(*v9 + 16) + 24LL, *(unsigned int *)(**(_QWORD **)(*v9 + 16) + 20LL), 0LL, 0LL);
      *(_QWORD *)(v10 + 16) += 8LL;
      if ( *(_QWORD *)(v10 + 16) < *(_QWORD *)(v10 + 24) )
        break;
      ++v8;
      v9 += 8;
      *(_QWORD *)(v10 + 16) = v10 + 40;
    }
    while ( v8 < a2 );
  }
  if ( v8 == a2 )
    return 0;
  if ( a2 )
  {
    v12 = (__int64 *)(a1 + 32);
    do
    {
      v13 = *v12;
      LOBYTE(a4) = 1;
      IopAddRemoveReqDescs(**(_QWORD **)(*v12 + 16) + 24LL, *(unsigned int *)(**(_QWORD **)(*v12 + 16) + 20LL), a3, a4);
      if ( *(_QWORD *)(v13 + 16) != v13 + 40 )
        break;
      ++v4;
      v12 += 8;
    }
    while ( v4 < a2 );
  }
  return 1;
}
