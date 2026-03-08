/*
 * XREFs of NtOpenKeyTransacted @ 0x140A0AC60
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenKeyTransactedEx @ 0x140784470 (NtOpenKeyTransactedEx.c)
 */

__int64 __fastcall NtOpenKeyTransacted(HANDLE *a1, int a2, __int64 a3, void *Handle)
{
  return NtOpenKeyTransactedEx(a1, a2, a3, 0, Handle);
}
