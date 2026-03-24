/*
 * XREFs of MUIBugCheck @ 0x1405B9AB8
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x140681030 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
