/*
 * XREFs of RtlpHpAllocateHeap @ 0x1402232D4
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x140223158 (RtlpHpMetadataAlloc.c)
 *     ExAllocateHeapPages @ 0x140375218 (ExAllocateHeapPages.c)
 * Callees:
 *     RtlpHpAllocateHeapInternal @ 0x1402233E0 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x140223488 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlpHpFreeHeap @ 0x14034CE50 (RtlpHpFreeHeap.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     RtlpHpExtrasAppend @ 0x140594AE8 (RtlpHpExtrasAppend.c)
 */

__int64 __fastcall RtlpHpAllocateHeap(__int64 a1, unsigned __int64 a2, int a3, __int16 a4)
{
  int v5; // edi
  unsigned int v7; // edi
  __int64 v8; // rcx
  int v9; // esi
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 HeapInternal; // rax
  int v15; // r9d
  __int64 v16; // rbx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // [rsp+80h] [rbp+8h] BYREF
  int v21; // [rsp+98h] [rbp+20h] BYREF

  LOWORD(v21) = a4;
  v5 = a3 | *(_DWORD *)(a1 + 20);
  v21 = 0;
  v7 = v5 & 0x93000F0B;
  if ( !(unsigned int)RtlpHpCheckAllocationSizeLimit(a2, a1, a1 + 32) )
    return 0LL;
  v8 = 0LL;
  v20 = 0LL;
  v9 = 0;
  v10 = -1073741823;
  if ( (v7 & 0x1000000) == 0 )
  {
    v9 = *(_DWORD *)(a1 + 24);
    if ( v9 )
    {
      v7 |= 8u;
      if ( (_WORD)v9 == 1 )
      {
        v18 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 *))RtlpInterceptorRoutines)(a1, 0LL, 1LL, &v20);
        v8 = v20;
      }
      else
      {
        v18 = -1073741823;
      }
      if ( v18 < 0 )
        return 0LL;
    }
  }
  v11 = v8 + a2;
  v12 = v8 + a2 + 16;
  if ( (v7 & 0x10000000) == 0 )
    v12 = v11;
  if ( (v7 & 0x20000F08) != 0 )
    v12 = ((v12 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v13 = 1LL;
  if ( v12 )
    v13 = v12;
  if ( v13 < a2 || a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  HeapInternal = RtlpHpAllocateHeapInternal(a1, a2, v13, v7 & 0x13000003, (__int64)&v21);
  v16 = HeapInternal;
  if ( HeapInternal )
  {
    if ( (v7 & 0x30000F08) != 0 )
    {
      v19 = RtlpHpExtrasAppend(a1, HeapInternal, a2, v15, v20, v7, 0);
      if ( v9 )
      {
        *(_BYTE *)(v19 + 2) ^= (v9 ^ *(_BYTE *)(v19 + 2)) & 0xF;
        if ( (_WORD)v9 == 1 )
          v10 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))RtlpInterceptorRoutines)(
                  a1,
                  v16,
                  2LL,
                  v19 + 16);
        if ( v10 < 0 )
        {
          RtlpHpFreeHeap(a1, v16, v7);
          return 0LL;
        }
      }
    }
  }
  return v16;
}
