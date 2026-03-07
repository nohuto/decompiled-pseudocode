char PpmPerfForceDomainStates()
{
  __int64 i; // r8
  __int64 v1; // r9
  __int64 v2; // rdx

  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 1061) )
    {
      v1 = 0LL;
      for ( *(_BYTE *)(i + 1060) = 1;
            (unsigned int)v1 < *(_DWORD *)(i + 296);
            *(_BYTE *)(*(_QWORD *)(i + 312) + 8 * v2 + 124) = 1 )
      {
        v2 = 18 * v1;
        v1 = (unsigned int)(v1 + 1);
      }
    }
  }
  return 1;
}
