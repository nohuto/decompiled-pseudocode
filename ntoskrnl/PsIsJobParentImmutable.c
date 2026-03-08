/*
 * XREFs of PsIsJobParentImmutable @ 0x140799510
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x1406FFFD0 (PspGetJobAssignmentDisposition.c)
 *     PspIsJobMovable @ 0x1409AF5C4 (PspIsJobMovable.c)
 *     ObCreateSiloRootDirectory @ 0x140A70E70 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

char __fastcall PsIsJobParentImmutable(__int64 a1)
{
  char result; // al

  if ( (*(_DWORD *)(a1 + 1540) & 1) != 0 )
    return 1;
  result = 0;
  if ( *(_QWORD *)(a1 + 1288) )
    return 1;
  return result;
}
