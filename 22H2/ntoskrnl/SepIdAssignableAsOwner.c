/*
 * XREFs of SepIdAssignableAsOwner @ 0x1406C7AE8
 * Callers:
 *     SepValidOwnerSubjectContext @ 0x1406C79E4 (SepValidOwnerSubjectContext.c)
 *     NtSetInformationToken @ 0x1407EFA00 (NtSetInformationToken.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepIdAssignableAsOwner(__int64 a1, unsigned int a2)
{
  return !a2 || (*(_DWORD *)(*(_QWORD *)(a1 + 152) + 16LL * a2 + 8) & 8) != 0;
}
