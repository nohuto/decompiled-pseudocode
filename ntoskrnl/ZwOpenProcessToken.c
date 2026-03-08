/*
 * XREFs of ZwOpenProcessToken @ 0x140414930
 * Callers:
 *     DifZwOpenProcessTokenWrapper @ 0x1405EFD70 (DifZwOpenProcessTokenWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenProcessToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
