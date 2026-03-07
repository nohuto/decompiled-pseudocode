char PpmPerfSelectProcessorStates()
{
  __int64 i; // rbx
  int v2; // eax
  __int64 j; // rdi
  __int64 v4; // rcx

  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    v2 = *(_DWORD *)(i + 1056);
    if ( v2 != -1 )
      *(_DWORD *)(i + 1056) = v2 + 1;
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(i + 296); j = (unsigned int)(j + 1) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(i + 312) + 144 * j);
      if ( v4 )
        PpmPerfSelectProcessorState(v4);
    }
  }
  return 1;
}
