/*
 * XREFs of SepIdAssignableAsOwner @ 0x1406BBF6C
 * Callers:
 *     SepValidOwnerSubjectContext @ 0x1406BBE6C (SepValidOwnerSubjectContext.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepIdAssignableAsOwner(__int64 a1, unsigned int a2)
{
  return !a2 || (*(_DWORD *)(*(_QWORD *)(a1 + 152) + 16LL * a2 + 8) & 8) != 0;
}
