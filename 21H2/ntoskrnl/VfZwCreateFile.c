/*
 * XREFs of VfZwCreateFile @ 0x1409E9ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1409ED85C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1409ED944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409ED990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCreateFile(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3a,
        int a6,
        int a7,
        int a8,
        int a9,
        ULONG_PTR a10,
        int a11)
{
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3a, retaddr);
    ViZwCheckVirtualAddress(a10, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, ULONG_PTR, ULONG_PTR, int, int, int, int, ULONG_PTR, int))pXdvZwCreateFile)(
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
