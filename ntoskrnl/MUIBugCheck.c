/*
 * XREFs of MUIBugCheck @ 0x14060D174
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x140779C90 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
