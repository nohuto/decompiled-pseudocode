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
    v2 = *(_DWORD *)(v0 + 296);
    if ( v2 )
    {
      v3 = v2;
      v4 = (_DWORD *)(*(_QWORD *)(v0 + 312) + 56LL);
      do
      {
        if ( *(v4 - 10) != 2 && *v4 > *(_DWORD *)(v0 + 784) )
          i = 0;
        v4 += 36;
        --v3;
      }
      while ( v3 );
    }
  }
  return i;
}
