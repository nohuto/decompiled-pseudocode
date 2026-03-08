/*
 * XREFs of MiInitializeUltraSpace @ 0x140B38940
 * Callers:
 *     MiCreateTopLevelUltraMappings @ 0x140B38844 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     RtlSetAllBitsEx @ 0x1403AFA40 (RtlSetAllBitsEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiInitializeUltraSpace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  int v6; // eax
  unsigned int v7; // ecx

  result = (__int64)MiAllocatePool(66, 0x1000uLL, 0x20206D4Du);
  v5 = result;
  if ( result )
  {
    *(_QWORD *)(a1 + 24) = 0x4000LL;
    *(_QWORD *)(a1 + 32) = result;
    RtlSetAllBitsEx((_QWORD *)(a1 + 24));
    v6 = ExGenRandom(1);
    _BitScanReverse(&v7, 0x4000u);
    *(_QWORD *)(a1 + 16) = v6 & (unsigned int)((1 << v7) - 1);
    *(_QWORD *)(a1 + 48) = v5 + 2048;
    *(_QWORD *)(a1 + 40) = 0x4000LL;
    memset((void *)(v5 + 2048), 0, 0x800uLL);
    *(_QWORD *)(a1 + 8) = a2;
    result = 1LL;
    _InterlockedExchange((volatile __int32 *)(a1 + 56), 0x4000);
  }
  return result;
}
