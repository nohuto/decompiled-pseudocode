/*
 * XREFs of HalAllocateDomainCommonBuffer @ 0x1404C4480
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A0AF4 (HalpAllocateDomainCommonBufferInternal.c)
 */

__int64 __fastcall HalAllocateDomainCommonBuffer(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned int a4,
        char a5,
        _DWORD *a6,
        int a7,
        PHYSICAL_ADDRESS *a8,
        _RTL_BALANCED_NODE **a9)
{
  return HalpAllocateDomainCommonBufferInternal(*(_QWORD *)(a1 + 504), 0LL, a3, a4, a5, a6, a7, a8, a9);
}
