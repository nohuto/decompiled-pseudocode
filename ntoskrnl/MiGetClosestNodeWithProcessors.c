/*
 * XREFs of MiGetClosestNodeWithProcessors @ 0x1403028A8
 * Callers:
 *     MiComputeIdealDpcGang @ 0x1403867CC (MiComputeIdealDpcGang.c)
 *     MiCombineAllPhysicalMemory @ 0x1407C7D50 (MiCombineAllPhysicalMemory.c)
 *     MiCreateZeroThreadContext @ 0x1408384D8 (MiCreateZeroThreadContext.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1402AE860 (KeQueryNodeActiveAffinity.c)
 */

__int64 __fastcall MiGetClosestNodeWithProcessors(int a1)
{
  unsigned int *v1; // rbx
  unsigned int *v2; // rsi
  unsigned int v3; // edi
  USHORT Count; // [rsp+30h] [rbp+8h] BYREF

  Count = 0;
  v1 = (unsigned int *)(qword_140C65718 + 4LL * (unsigned int)(unsigned __int16)KeNumberNodes * a1);
  v2 = &v1[(unsigned __int16)KeNumberNodes];
  while ( v1 < v2 )
  {
    v3 = *v1;
    KeQueryNodeActiveAffinity(*v1, 0LL, &Count);
    if ( Count )
      return v3;
    ++v1;
  }
  return 0xFFFFFFFFLL;
}
