/*
 * XREFs of VfZwQuerySection @ 0x1409EC5E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x1409ED944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409ED990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQuerySection(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v9; // r8
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v9, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, ULONG_PTR))pXdvZwQuerySection)(
           a1,
           a2,
           a3,
           a4,
           BugCheckParameter3);
}
