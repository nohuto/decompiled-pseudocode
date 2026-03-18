/*
 * XREFs of NtOpenKeyTransacted @ 0x140A0D970
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenKeyTransactedEx @ 0x1407D3A80 (NtOpenKeyTransactedEx.c)
 */

__int64 __fastcall NtOpenKeyTransacted(HANDLE *a1, int a2, __int64 a3, void *Handle)
{
  return NtOpenKeyTransactedEx(a1, a2, a3, 0, Handle);
}
