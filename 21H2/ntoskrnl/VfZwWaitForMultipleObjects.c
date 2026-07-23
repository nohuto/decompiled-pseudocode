/*
 * XREFs of VfZwWaitForMultipleObjects @ 0x1409ED600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x1409ED944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409ED990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwWaitForMultipleObjects(
        unsigned int a1,
        ULONG_PTR a2,
        unsigned int a3,
        char a4,
        ULONG_PTR BugCheckParameter3)
{
  __int64 v9; // r9
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
  }
  LOBYTE(v9) = a4;
  return ((__int64 (__fastcall *)(_QWORD, ULONG_PTR, _QWORD, __int64, ULONG_PTR))pXdvZwWaitForMultipleObjects)(
           a1,
           a2,
           a3,
           v9,
           BugCheckParameter3);
}
