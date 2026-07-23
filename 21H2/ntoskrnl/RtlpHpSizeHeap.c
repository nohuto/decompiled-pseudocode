/*
 * XREFs of RtlpHpSizeHeap @ 0x140594CB4
 * Callers:
 *     RtlpHpFreeHeap @ 0x14034CE50 (RtlpHpFreeHeap.c)
 * Callees:
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     RtlpHpSizeHeapInternal @ 0x140594D5C (RtlpHpSizeHeapInternal.c)
 */

__int64 __fastcall RtlpHpSizeHeap(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  int v5; // edx
  int v6; // r8d
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rbx

  v3 = *(_DWORD *)(a1 + 220);
  v5 = a3 | *(_DWORD *)(a1 + 20);
  v6 = 0;
  if ( v3 )
    LOBYTE(v6) = v3 == KeGetCurrentThread()[1].CurrentRunTime;
  v7 = v5 | 1;
  if ( !v6 )
    v7 = v5;
  if ( !a2 )
    return -1LL;
  if ( (a2 & 0xF) != 0 )
    return -1LL;
  v8 = RtlpHpSizeHeapInternal(a1, a2, v7, 0LL);
  v9 = v8;
  if ( v8 != -1
    && (v7 & 0x10000000) != 0
    && RtlCompareMemory((const void *)(v8 + a2), CheckHeapFillPattern, 0x10uLL) != 16 )
  {
    return -1LL;
  }
  return v9;
}
