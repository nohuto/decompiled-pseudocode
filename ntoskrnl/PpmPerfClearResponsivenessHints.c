__int64 PpmPerfClearResponsivenessHints()
{
  __int64 i; // rdx
  unsigned int v1; // r8d
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    v1 = 0;
    for ( *(_BYTE *)(i + 520) = 0; v1 < *(_DWORD *)(i + 296); *(_BYTE *)(result + 16 * v3 + 60) = 0 )
    {
      v2 = v1++;
      v3 = 9 * v2;
      result = *(_QWORD *)(i + 312);
    }
  }
  return result;
}
