/*
 * XREFs of PspIsJobMovable @ 0x1409B0334
 * Callers:
 *     PspAssignProcessToJob @ 0x1406879B8 (PspAssignProcessToJob.c)
 *     PspGetJobAssignmentDisposition @ 0x140687EEC (PspGetJobAssignmentDisposition.c)
 * Callees:
 *     PsIsJobParentImmutable @ 0x1406E1784 (PsIsJobParentImmutable.c)
 */

char __fastcall PspIsJobMovable(__int64 a1)
{
  __int64 v1; // rcx
  char result; // al

  if ( *(_QWORD *)(a1 + 1760) != a1 )
    return 0;
  if ( PsIsJobParentImmutable(a1) )
    return 0;
  if ( *(_QWORD *)(v1 + 1248) != v1 + 1248 )
    return 0;
  result = 1;
  if ( *(_DWORD *)(v1 + 216) != 1 || *(_DWORD *)(v1 + 212) != 1 )
    return 0;
  return result;
}
