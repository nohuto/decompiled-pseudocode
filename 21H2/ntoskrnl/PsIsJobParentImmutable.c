/*
 * XREFs of PsIsJobParentImmutable @ 0x14061C25C
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x1406F6B28 (PspGetJobAssignmentDisposition.c)
 *     PspIsJobMovable @ 0x1409090E4 (PspIsJobMovable.c)
 *     ObCreateSiloRootDirectory @ 0x1409806B0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

char __fastcall PsIsJobParentImmutable(__int64 a1)
{
  char result; // al

  if ( (*(_DWORD *)(a1 + 1324) & 1) != 0 )
    return 1;
  result = 0;
  if ( *(_QWORD *)(a1 + 1072) )
    return 1;
  return result;
}
