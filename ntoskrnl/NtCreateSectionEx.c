/*
 * XREFs of NtCreateSectionEx @ 0x140A2CB00
 * Callers:
 *     <none>
 * Callees:
 *     MiCreateSectionCommon @ 0x1407D01E0 (MiCreateSectionCommon.c)
 */

__int64 __fastcall NtCreateSectionEx(
        unsigned __int64 a1,
        unsigned int a2,
        int a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        volatile void *Address,
        ULONGLONG a9)
{
  ULONGLONG ullMultiplicand; // [rsp+40h] [rbp-18h]

  LODWORD(ullMultiplicand) = a9;
  return MiCreateSectionCommon(a1, a2, a3, a4, a5, a6, a7, Address, ullMultiplicand);
}
