/*
 * XREFs of KiAttemptFastRemoveQueue @ 0x1402E90E8
 * Callers:
 *     KeRemoveQueueEx @ 0x140315D50 (KeRemoveQueueEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall KiAttemptFastRemoveQueue(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  __int64 **v3; // r10
  __int64 *v7; // rdx
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 **v10; // r9

  v3 = (__int64 **)(BugCheckParameter2 + 24);
  v7 = *(__int64 **)(BugCheckParameter2 + 24);
  result = 0LL;
  do
  {
    --*(_DWORD *)(BugCheckParameter2 + 4);
    v9 = *v7;
    if ( !*v7 )
      KeBugCheckEx(0x96u, (ULONG_PTR)v7, BugCheckParameter2, ExWorkerQueue, v7[2]);
    if ( *(__int64 **)(v9 + 8) != v7 || (v10 = (__int64 **)v7[1], *v10 != v7) )
      __fastfail(3u);
    *v10 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v10;
    *v7 = 0LL;
    *(_QWORD *)(a2 + 8 * result) = v7;
    result = (unsigned int)(result + 1);
    v7 = *v3;
  }
  while ( *v3 != (__int64 *)v3 && (unsigned int)result < a3 );
  return result;
}
