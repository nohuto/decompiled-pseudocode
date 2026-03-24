/*
 * XREFs of CmSiBugCheck @ 0x1404EDDF4
 * Callers:
 *     CmpInitializeValueNameString @ 0x14066F2E8 (CmpInitializeValueNameString.c)
 *     HvpAllExceptionsFatalFilter @ 0x140873610 (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x140873630 (HvpInpageErrorFilter.c)
 *     CmpInitializeKeyNameString @ 0x1408791D8 (CmpInitializeKeyNameString.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
