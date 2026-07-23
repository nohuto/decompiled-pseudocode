/*
 * XREFs of VfZwQueryLicenseValue @ 0x1409EC4B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViZwCheckUnicodeString @ 0x1409ED8AC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1409ED944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409ED990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryLicenseValue(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        ULONG_PTR a3,
        unsigned int a4,
        ULONG_PTR BugCheckParameter3a)
{
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(a3, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3a, retaddr);
    ViZwCheckUnicodeString(BugCheckParameter3, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, ULONG_PTR, _QWORD, ULONG_PTR))pXdvZwQueryLicenseValue)(
           BugCheckParameter3,
           a2,
           a3,
           a4,
           BugCheckParameter3a);
}
