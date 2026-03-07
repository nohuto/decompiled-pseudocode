__int64 __fastcall PpmPerfQueryProcMeasurementValues(unsigned int a1)
{
  __int64 v2; // rax
  unsigned int v3; // ecx

  if ( a1 )
  {
    v2 = PpmPerfDomainHead;
    v3 = -1073741822;
    while ( (__int64 *)v2 != &PpmPerfDomainHead )
    {
      if ( *(_QWORD *)(v2 + 424) )
        return (*(unsigned int (__fastcall **)(_QWORD))(v2 + 424))(a1);
      v2 = *(_QWORD *)v2;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
