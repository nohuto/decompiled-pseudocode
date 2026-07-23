/*
 * XREFs of VfZwWriteFile @ 0x1409ED6F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViZwCheckApcRequirement @ 0x1409ED7F4 (ViZwCheckApcRequirement.c)
 *     ViZwCheckVirtualAddress @ 0x1409ED944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409ED990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwWriteFile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a6,
        int a7,
        ULONG_PTR a8,
        ULONG_PTR a9)
{
  ULONG_PTR v12; // r8
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v12, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckVirtualAddress(a6, retaddr);
    ViZwCheckVirtualAddress(a8, retaddr);
    ViZwCheckVirtualAddress(a9, retaddr);
    ViZwCheckApcRequirement(retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, ULONG_PTR, ULONG_PTR, ULONG_PTR, int, ULONG_PTR, ULONG_PTR))pXdvZwWriteFile)(
           a1,
           a2,
           a3,
           a4,
           BugCheckParameter3,
           a6,
           a7,
           a8,
           a9);
}
