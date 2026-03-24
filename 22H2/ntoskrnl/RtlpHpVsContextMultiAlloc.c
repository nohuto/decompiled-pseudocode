/*
 * XREFs of RtlpHpVsContextMultiAlloc @ 0x140303964
 * Callers:
 *     ExAllocateHeapPool @ 0x1402BC8A0 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1402BC110 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1402BF450 (RtlpHpVsContextAllocateInternal.c)
 */

__int64 __fastcall RtlpHpVsContextMultiAlloc(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char **a5,
        char **a6)
{
  char *v6; // rsi
  char *v7; // rbx
  unsigned int v8; // edi
  char *v12; // rax
  __int64 result; // rax
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v15 = 0LL;
  v14 = 0LL;
  if ( a3 )
  {
    do
    {
      v12 = RtlpHpVsContextAllocateInternal(a1, a2, a2, 0, &v14, &v16);
      if ( !v12 )
        break;
      *(_QWORD *)v12 = v6;
      v6 = v12;
      if ( !v7 )
        v7 = v12;
      ++v8;
    }
    while ( v8 < a3 );
    if ( v16 )
      RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)&v14);
  }
  result = v8;
  *a5 = v6;
  *a6 = v7;
  return result;
}
