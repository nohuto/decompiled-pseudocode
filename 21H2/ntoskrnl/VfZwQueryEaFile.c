/*
 * XREFs of VfZwQueryEaFile @ 0x1409EBE10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x1409ED944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409ED990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryEaFile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        ULONG_PTR BugCheckParameter3,
        int a7,
        ULONG_PTR a8,
        char a9)
{
  ULONG_PTR v13; // r8
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v13, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckVirtualAddress(a8, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, char, ULONG_PTR, int, ULONG_PTR, char))pXdvZwQueryEaFile)(
           a1,
           a2,
           a3,
           a4,
           a5,
           BugCheckParameter3,
           a7,
           a8,
           a9);
}
