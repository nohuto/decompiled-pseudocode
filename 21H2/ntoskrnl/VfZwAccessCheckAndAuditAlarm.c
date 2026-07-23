/*
 * XREFs of VfZwAccessCheckAndAuditAlarm @ 0x1409E90D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViZwCheckUnicodeString @ 0x1409ED8AC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1409ED944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409ED990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAccessCheckAndAuditAlarm(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3a,
        int a6,
        ULONG_PTR a7,
        char a8,
        ULONG_PTR a9,
        __int64 a10,
        ULONG_PTR a11)
{
  ULONG_PTR retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckUnicodeString(BugCheckParameter3, retaddr);
    ViZwCheckUnicodeString(a3, retaddr);
    ViZwCheckUnicodeString(a4, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3a, retaddr);
    ViZwCheckVirtualAddress(a7, retaddr);
    ViZwCheckVirtualAddress(a9, retaddr);
    ViZwCheckVirtualAddress(a11, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64, ULONG_PTR, ULONG_PTR, ULONG_PTR, int, ULONG_PTR, char, ULONG_PTR, __int64, ULONG_PTR))pXdvZwAccessCheckAndAuditAlarm)(
           BugCheckParameter3,
           a2,
           a3,
           a4,
           BugCheckParameter3a,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}
