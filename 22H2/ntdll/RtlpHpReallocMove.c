/*
 * XREFs of RtlpHpReallocMove @ 0x18010E410
 * Callers:
 *     RtlpHpLargeReAlloc @ 0x18010E7FC (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlpHpAllocateHeapInternal @ 0x1800076C4 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpFreeHeap @ 0x180024920 (RtlpHpFreeHeap.c)
 *     RtlpHpExtrasSetPresent @ 0x18006B2A4 (RtlpHpExtrasSetPresent.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

__int64 __fastcall RtlpHpReallocMove(unsigned int *a1, const void *a2, __int64 a3, unsigned int a4)
{
  void *v8; // rax
  __int64 v9; // rsi
  size_t v10; // r8
  __int64 v11; // rdx
  unsigned __int8 *v12; // rdx
  __int64 v13; // rcx
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v8 = (void *)RtlpHpAllocateHeapInternal(a1, *(_QWORD *)(a3 + 24), *(_QWORD *)(a3 + 32), a4, &v15);
  v9 = (__int64)v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 >= *(_QWORD *)(a3 + 24) )
      v10 = *(_QWORD *)(a3 + 24);
    memmove(v8, a2, v10);
    if ( *(_DWORD *)(a3 + 16) )
    {
      v11 = (__int64)a2 + *(_QWORD *)a3 + 16;
      if ( (a4 & 0x10000000) == 0 )
        v11 = (__int64)a2 + *(_QWORD *)a3;
      v12 = (unsigned __int8 *)((v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v13 = v9 + *(_QWORD *)(a3 + 24) + 16;
      if ( (a4 & 0x10000000) == 0 )
        v13 = v9 + *(_QWORD *)(a3 + 24);
      memmove((void *)((v13 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v12, 16 * (v12[3] + 1LL));
      RtlpHpExtrasSetPresent((__int64)a1, v9, a4);
    }
    RtlpHpFreeHeap((__int64)a1, (unsigned __int64)a2, a4 & 0x11000001, 0LL, 0LL);
  }
  return v9;
}
