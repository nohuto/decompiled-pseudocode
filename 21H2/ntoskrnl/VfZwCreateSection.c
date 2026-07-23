/*
 * XREFs of VfZwCreateSection @ 0x1409EA110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfCheckPageProtection @ 0x1409C8CBC (VfCheckPageProtection.c)
 *     ViZwCheckObjectAttributes @ 0x1409ED85C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1409ED944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409ED990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCreateSection(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        ULONG_PTR a4,
        unsigned int a5,
        int a6,
        __int64 a7)
{
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  VfCheckPageProtection(a5, retaddr);
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, ULONG_PTR, unsigned int, int, __int64))pXdvZwCreateSection)(
           BugCheckParameter3,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
