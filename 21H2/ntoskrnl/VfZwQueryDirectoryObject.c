/*
 * XREFs of VfZwQueryDirectoryObject @ 0x1409EACE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x1409EC944 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1409EC990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryDirectoryObject(
        __int64 a1,
        ULONG_PTR a2,
        unsigned int a3,
        char a4,
        char a5,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a7)
{
  __int64 v11; // r9
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckVirtualAddress(a7, retaddr);
  }
  LOBYTE(v11) = a4;
  return ((__int64 (__fastcall *)(__int64, ULONG_PTR, _QWORD, __int64, char, ULONG_PTR, ULONG_PTR))pXdvZwQueryDirectoryObject)(
           a1,
           a2,
           a3,
           v11,
           a5,
           BugCheckParameter3,
           a7);
}
