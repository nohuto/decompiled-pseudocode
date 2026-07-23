/*
 * XREFs of RtlpHpVsContextMultiAlloc @ 0x140229B34
 * Callers:
 *     ExAllocateHeapPool @ 0x140346F60 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1403467D0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsContextAllocateInternal @ 0x140349B10 (RtlpHpVsContextAllocateInternal.c)
 */

__int64 __fastcall RtlpHpVsContextMultiAlloc(__int64 a1, int a2, unsigned int a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  _QWORD *Internal; // rax
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
      Internal = (_QWORD *)RtlpHpVsContextAllocateInternal(a1, a2, a2, 0, (__int64)&v14, (__int64)&v16);
      if ( !Internal )
        break;
      *Internal = v6;
      v6 = Internal;
      if ( !v7 )
        v7 = Internal;
      ++v8;
    }
    while ( v8 < a3 );
    if ( v16 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), &v14);
  }
  result = v8;
  *a5 = v6;
  *a6 = v7;
  return result;
}
