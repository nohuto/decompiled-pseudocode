/*
 * XREFs of PpmParkMaximumCoresParked @ 0x14022C78C
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x14022C5E0 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     <none>
 */

char PpmParkMaximumCoresParked()
{
  char v0; // r9
  unsigned __int16 i; // dx
  unsigned int v2; // r8d
  _BYTE *v3; // rcx

  v0 = 1;
  for ( i = 0; i < (unsigned int)PpmParkNumNodes; ++i )
  {
    v2 = 0;
    v3 = (_BYTE *)(PpmParkNodes + 272LL * i + 130);
    while ( v3[13] <= *v3 )
    {
      ++v2;
      ++v3;
      if ( v2 >= 2 )
        goto LABEL_5;
    }
    v0 = 0;
LABEL_5:
    ;
  }
  return v0;
}
