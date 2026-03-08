/*
 * XREFs of HalAllocateDomainCommonBufferDmarThin @ 0x140511120
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocateCommonBufferDmarThin @ 0x1405116E8 (HalpAllocateCommonBufferDmarThin.c)
 */

__int64 __fastcall HalAllocateDomainCommonBufferDmarThin(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  return HalpAllocateCommonBufferDmarThin(*(_QWORD *)(a1 + 512), a5, a6, a7, a8, a9);
}
