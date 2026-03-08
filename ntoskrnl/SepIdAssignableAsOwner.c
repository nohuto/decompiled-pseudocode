/*
 * XREFs of SepIdAssignableAsOwner @ 0x14069D4F0
 * Callers:
 *     SepValidOwnerSubjectContext @ 0x14069D3EC (SepValidOwnerSubjectContext.c)
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepIdAssignableAsOwner(__int64 a1, unsigned int a2)
{
  return !a2 || (*(_DWORD *)(*(_QWORD *)(a1 + 152) + 16LL * a2 + 8) & 8) != 0;
}
