/*
 * XREFs of SepIdAssignableAsOwner @ 0x1405FBFDC
 * Callers:
 *     SepValidOwnerSubjectContext @ 0x1405FBEDC (SepValidOwnerSubjectContext.c)
 *     NtSetInformationToken @ 0x140694530 (NtSetInformationToken.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepIdAssignableAsOwner(__int64 a1, unsigned int a2)
{
  return !a2 || (*(_DWORD *)(*(_QWORD *)(a1 + 152) + 16LL * a2 + 8) & 8) != 0;
}
