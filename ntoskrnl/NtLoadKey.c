/*
 * XREFs of NtLoadKey @ 0x140861300
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x1406BD790 (NtLoadKeyEx.c)
 */

__int64 __fastcall NtLoadKey(__int64 a1, __int64 a2)
{
  return NtLoadKeyEx(a1, a2, 0, 0LL, 0LL, 0, 0LL, 0LL);
}
