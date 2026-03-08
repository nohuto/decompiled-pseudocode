/*
 * XREFs of PpmParkMaximumCoresParked @ 0x14059ABE4
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1402EB350 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     <none>
 */

char PpmParkMaximumCoresParked()
{
  char v0; // r9
  unsigned __int16 i; // dx
  unsigned int v2; // r8d
  __int64 v3; // rcx

  v0 = 1;
  for ( i = 0; i < (unsigned int)PpmParkNumNodes; ++i )
  {
    v2 = 0;
    v3 = PpmParkNodes + 192LL * i;
    if ( *(_BYTE *)(v3 + 11) )
    {
      while ( *(_BYTE *)(104LL * v2 + *(_QWORD *)(v3 + 184) + 5) <= *(_BYTE *)(104LL * v2 + *(_QWORD *)(v3 + 184) + 1) )
      {
        if ( ++v2 >= *(unsigned __int8 *)(v3 + 11) )
          goto LABEL_7;
      }
      v0 = 0;
    }
LABEL_7:
    ;
  }
  return v0;
}
