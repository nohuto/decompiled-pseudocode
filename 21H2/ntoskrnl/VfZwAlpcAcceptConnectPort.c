/*
 * XREFs of VfZwAlpcAcceptConnectPort @ 0x1409E9420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1409ED85C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1409ED944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409ED990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcAcceptConnectPort(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter3a,
        __int64 a6,
        ULONG_PTR a7,
        ULONG_PTR a8,
        char a9)
{
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3a, retaddr);
    ViZwCheckVirtualAddress(a7, retaddr);
    ViZwCheckVirtualAddress(a8, retaddr);
    ViZwCheckObjectAttributes(a4, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD, __int64, ULONG_PTR, __int64, ULONG_PTR, ULONG_PTR, char))pXdvZwAlpcAcceptConnectPort)(
           BugCheckParameter3,
           a2,
           a3,
           a4,
           BugCheckParameter3a,
           a6,
           a7,
           a8,
           a9);
}
