/*
 * XREFs of PpmPerfMinimumPerfReached @ 0x14022C724
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x14022C5E0 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     <none>
 */

char PpmPerfMinimumPerfReached()
{
  __int64 v0; // rcx
  char i; // r8
  unsigned int v2; // eax
  __int64 v3; // r9
  _DWORD *v4; // rdx

  v0 = PpmPerfDomainHead;
  for ( i = 1; (__int64 *)v0 != &PpmPerfDomainHead; v0 = *(_QWORD *)v0 )
  {
    v2 = *(_DWORD *)(v0 + 200);
    if ( v2 )
    {
      v3 = v2;
      v4 = (_DWORD *)(*(_QWORD *)(v0 + 216) + 56LL);
      do
      {
        if ( *(v4 - 10) != 2 && *v4 > *(_DWORD *)(v0 + 568) )
          i = 0;
        v4 += 34;
        --v3;
      }
      while ( v3 );
    }
  }
  return i;
}
