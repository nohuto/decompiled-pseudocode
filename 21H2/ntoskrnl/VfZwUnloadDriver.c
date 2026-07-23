/*
 * XREFs of VfZwUnloadDriver @ 0x1409ED580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViZwCheckUnicodeString @ 0x1409ED8AC (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x1409ED990 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwUnloadDriver(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString(BugCheckParameter3, retaddr);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvZwUnloadDriver)(BugCheckParameter3);
}
