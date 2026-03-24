/*
 * XREFs of VfZwLoadDriver @ 0x1409E9C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ViZwCheckUnicodeString @ 0x1409EC8BC (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x1409EC9A0 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwLoadDriver(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString(BugCheckParameter3, retaddr);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvZwLoadDriver)(BugCheckParameter3);
}
