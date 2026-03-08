/*
 * XREFs of CcGetLsnForFileObject @ 0x140535590
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 */

__int64 __fastcall CcGetLsnForFileObject(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  struct _FAST_MUTEX *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( !v3 )
    return 0LL;
  v5 = (struct _FAST_MUTEX *)(v3 + 288);
  ExAcquireFastMutex((PFAST_MUTEX)(v3 + 288));
  v6 = 0LL;
  v7 = v3 + 16;
  v8 = *(_QWORD *)(v3 + 16);
  v9 = 0LL;
  while ( 1 )
  {
    v10 = v8 - 16;
    if ( v8 == v7 )
      break;
    if ( *(_WORD *)v10 == 765 )
    {
      if ( *(_BYTE *)(v10 + 2) )
      {
        v11 = *(_QWORD *)(v10 + 40);
        if ( v11 )
        {
          if ( !v6 || v11 < v6 )
            v6 = *(_QWORD *)(v10 + 40);
          if ( *(_QWORD *)(v10 + 48) > v9 )
            v9 = *(_QWORD *)(v10 + 48);
        }
      }
    }
    v8 = *(_QWORD *)(v10 + 16);
  }
  ExReleaseFastMutex(v5);
  if ( a2 )
    *a2 = v6;
  return v9;
}
