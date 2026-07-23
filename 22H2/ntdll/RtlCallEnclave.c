/*
 * XREFs of RtlCallEnclave @ 0x1800A14E0
 * Callers:
 *     LdrInitializeEnclave @ 0x1800CCCB0 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CD740 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     ZwCallEnclave @ 0x18009E6F0 (ZwCallEnclave.c)
 */

NTSTATUS __fastcall RtlCallEnclave(LPVOID (__cdecl *a1)(LPVOID), void *a2, ULONG a3, PVOID *a4)
{
  return ZwCallEnclave(a1, a2, a3, a4);
}
