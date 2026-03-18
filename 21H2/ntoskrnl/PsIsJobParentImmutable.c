/*
 * XREFs of PsIsJobParentImmutable @ 0x1406E1784
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x140687EEC (PspGetJobAssignmentDisposition.c)
 *     PspIsJobMovable @ 0x1409B0334 (PspIsJobMovable.c)
 *     ObCreateSiloRootDirectory @ 0x140A34510 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

char __fastcall PsIsJobParentImmutable(__int64 a1)
{
  char result; // al

  if ( (*(_DWORD *)(a1 + 1516) & 1) != 0 )
    return 1;
  result = 0;
  if ( *(_QWORD *)(a1 + 1264) )
    return 1;
  return result;
}
