struct _CIT_PROG_DATA *__fastcall CitpProcessGetProgData(struct _CIT_PROCESS **a1)
{
  bool IsValid; // al
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int16 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r8

  IsValid = CitpProcessInfoIsValid(a1[114]);
  v3 = 0LL;
  if ( !IsValid )
    return 0LL;
  v5 = *(_WORD *)(v2 + 42);
  if ( v5 )
  {
    v6 = *(unsigned __int16 *)(v2 + 40);
    if ( (unsigned int)v6 < *((_DWORD *)xmmword_1C02D4DA0 + 14) )
    {
      v7 = *(_QWORD *)xmmword_1C02D4DA0 + 96 * v6;
      if ( *(_WORD *)(v7 + 32) == v5 )
      {
        if ( *(_QWORD *)(v7 + 56) != *(_QWORD *)(v2 + 64) )
          return 0LL;
        return (struct _CIT_PROG_DATA *)v7;
      }
    }
  }
  return (struct _CIT_PROG_DATA *)v3;
}
