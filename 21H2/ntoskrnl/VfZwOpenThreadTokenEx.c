/*
 * XREFs of VfZwOpenThreadTokenEx @ 0x1409EB5B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x1409ED944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409ED990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwOpenThreadTokenEx(
        __int64 a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        ULONG_PTR BugCheckParameter3)
{
  __int64 v9; // r8
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
  LOBYTE(v9) = a3;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, ULONG_PTR))pXdvZwOpenThreadTokenEx)(
           a1,
           a2,
           v9,
           a4,
           BugCheckParameter3);
}
