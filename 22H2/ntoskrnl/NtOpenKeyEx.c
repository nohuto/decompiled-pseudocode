/*
 * XREFs of NtOpenKeyEx @ 0x1406CE0D0
 * Callers:
 *     <none>
 * Callees:
 *     CmOpenKey @ 0x1406CE0F0 (CmOpenKey.c)
 */

__int64 __fastcall NtOpenKeyEx(int a1, int a2, int a3, int a4)
{
  return CmOpenKey(a1, a2, a3, a4, 0LL);
}
