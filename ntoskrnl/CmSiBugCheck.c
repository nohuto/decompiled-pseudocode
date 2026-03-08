/*
 * XREFs of CmSiBugCheck @ 0x140615314
 * Callers:
 *     CmpOpenHiveFile @ 0x1406C05C4 (CmpOpenHiveFile.c)
 *     CmpInitializeValueNameString @ 0x1407845C0 (CmpInitializeValueNameString.c)
 *     HvpAllExceptionsFatalFilter @ 0x140A1A5EC (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x140A1A60C (HvpInpageErrorFilter.c)
 *     CmpInitializeKeyNameString @ 0x140A1F2A4 (CmpInitializeKeyNameString.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
