/*
 * XREFs of VfZwAlpcConnectPort @ 0x1409E9510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1409ED85C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x1409ED8AC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1409ED944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409ED990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcConnectPort(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        __int64 a3,
        ULONG_PTR a4,
        int a5,
        ULONG_PTR BugCheckParameter3a,
        ULONG_PTR a7,
        ULONG_PTR a8,
        ULONG_PTR a9,
        ULONG_PTR a10,
        ULONG_PTR a11)
{
  ULONG_PTR retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3a, retaddr);
    ViZwCheckVirtualAddress(a7, retaddr);
    ViZwCheckVirtualAddress(a8, retaddr);
    ViZwCheckVirtualAddress(a9, retaddr);
    ViZwCheckVirtualAddress(a10, retaddr);
    ViZwCheckVirtualAddress(a11, retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
    ViZwCheckUnicodeString(a2, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, ULONG_PTR, int, ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR))pXdvZwAlpcConnectPort)(
           BugCheckParameter3,
           a2,
           a3,
           a4,
           a5,
           BugCheckParameter3a,
           a7,
           a8,
           a9,
           a10,
           a11);
}
