__int64 __fastcall EmMatchDate(__int64 a1, __int64 a2, unsigned __int8 **a3, int a4, _DWORD *a5, int a6)
{
  unsigned int v6; // ebx
  unsigned __int8 *v7; // rcx

  v6 = 1;
  if ( a3 )
  {
    if ( a4 == 1 )
    {
      v7 = *a3;
      if ( *a3 )
      {
        if ( a6 == 3 && (EmpCachedBiosDate || *v7 == 42) )
        {
          if ( (unsigned int)EmpCheckOperator(
                               v7,
                               EmpCachedBiosDate,
                               (a5[2] < 0x80u ? 0x20000000 : 419430400) + a5[1] + ((*a5 + (a5[2] << 8)) << 8)) )
            return 2;
        }
      }
    }
  }
  return v6;
}
