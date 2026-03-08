/*
 * XREFs of MiComputeAweCharges @ 0x140A3E848
 * Callers:
 *     MiComputeVadCharges @ 0x14034CBC4 (MiComputeVadCharges.c)
 *     MiReleaseVadEventBlocks @ 0x1406ECE8C (MiReleaseVadEventBlocks.c)
 * Callees:
 *     MiGetAwePageSize @ 0x14064836C (MiGetAwePageSize.c)
 *     MiGetAweViewPageSize @ 0x14064840C (MiGetAweViewPageSize.c)
 *     MiPageSizeToPteLevel @ 0x14064BCD4 (MiPageSizeToPteLevel.c)
 *     MiResidentPagesForSpan @ 0x140784F38 (MiResidentPagesForSpan.c)
 */

__int64 __fastcall MiComputeAweCharges(__int64 a1, __int64 a2)
{
  int v2; // r9d
  __int64 v3; // r10
  unsigned __int64 AweViewPageSize; // rcx
  __int64 v5; // r8

  v2 = 0;
  v3 = a1;
  AweViewPageSize = 1LL;
  if ( a2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 1) == 0 )
    {
      AweViewPageSize = MiGetAweViewPageSize(a2);
      if ( !AweViewPageSize )
        AweViewPageSize = MiGetAwePageSize(v5);
    }
    v2 = MiPageSizeToPteLevel(AweViewPageSize);
  }
  return MiResidentPagesForSpan(
           (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 12,
           ((*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) << 12) | 0xFFF,
           v2);
}
