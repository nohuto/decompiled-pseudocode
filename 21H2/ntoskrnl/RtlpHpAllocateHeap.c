/*
 * XREFs of RtlpHpAllocateHeap @ 0x1403713DC
 * Callers:
 *     ExAllocateHeapPages @ 0x140213318 (ExAllocateHeapPages.c)
 *     RtlpHpMetadataAlloc @ 0x140371274 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x140364128 (RtlpHpFreeHeap.c)
 *     RtlpHpAllocateHeapInternal @ 0x1403714E0 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x140371588 (RtlpHpCheckAllocationSizeLimit.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     RtlpHpExtrasAppend @ 0x1405F2E5C (RtlpHpExtrasAppend.c)
 */

__int64 __fastcall RtlpHpAllocateHeap(__int64 a1, unsigned __int64 a2, int a3, __int16 a4)
{
  int v5; // edi
  unsigned int v7; // edi
  __int64 v8; // rax
  int v9; // esi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 HeapInternal; // rax
  int v14; // r9d
  __int64 v15; // rbx
  __int64 v17; // rax
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  int v19; // [rsp+98h] [rbp+20h] BYREF

  LOWORD(v19) = a4;
  v5 = a3 | *(_DWORD *)(a1 + 20);
  v19 = 0;
  v7 = v5 & 0x93000F0B;
  if ( !(unsigned int)RtlpHpCheckAllocationSizeLimit(a2, a1, a1 + 32) )
    return 0LL;
  v8 = 0LL;
  v18 = 0LL;
  v9 = 0;
  if ( (v7 & 0x1000000) == 0 )
  {
    v9 = *(_DWORD *)(a1 + 24);
    if ( v9 )
    {
      v7 |= 8u;
      if ( (_WORD)v9 != 1
        || (int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 *))CLFS_LSN_NULL_EXT)(a1, 0LL, 1LL, &v18) < 0 )
      {
        return 0LL;
      }
      v8 = v18;
    }
  }
  v10 = a2 + v8;
  v11 = v10 + 16;
  if ( (v7 & 0x10000000) == 0 )
    v11 = v10;
  if ( (v7 & 0x20000F08) != 0 )
    v11 = ((v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v12 = 1LL;
  if ( v11 )
    v12 = v11;
  if ( v12 < a2 || a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  HeapInternal = RtlpHpAllocateHeapInternal(a1, a2, v12, v7 & 0x13000003, (__int64)&v19);
  v15 = HeapInternal;
  if ( HeapInternal )
  {
    if ( (v7 & 0x30000F08) != 0 )
    {
      v17 = RtlpHpExtrasAppend(a1, HeapInternal, a2, v14, v18, v7, 0);
      if ( v9 )
      {
        *(_BYTE *)(v17 + 2) ^= (v9 ^ *(_BYTE *)(v17 + 2)) & 0xF;
        if ( (_WORD)v9 != 1
          || (int)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))CLFS_LSN_NULL_EXT)(
                    a1,
                    v15,
                    2LL,
                    v17 + 16) < 0 )
        {
          RtlpHpFreeHeap((__int128 *)a1, v15, v7, 0LL);
          return 0LL;
        }
      }
    }
  }
  return v15;
}
