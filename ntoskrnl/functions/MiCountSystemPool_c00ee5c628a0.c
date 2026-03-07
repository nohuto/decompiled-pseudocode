unsigned __int64 __fastcall MiCountSystemPool(int a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  volatile signed __int64 *v4; // r9
  unsigned __int64 v5; // r8

  result = 0LL;
  if ( a1 == 5 )
  {
    v4 = &qword_140C65108;
  }
  else if ( a1 == 6 )
  {
    v4 = &qword_140C695A8;
  }
  else
  {
    v4 = &qword_140C65110;
    if ( a1 != 15 )
      v4 = 0LL;
  }
  if ( a3 )
  {
    v5 = a2 + _InterlockedExchangeAdd64(v4, a2);
    if ( a1 == 5 )
    {
      result = (MiState - v5) & -(__int64)(v5 < MiState);
      if ( result < 0x300 )
        return MiFreeExcessSegments();
    }
  }
  else
  {
    _InterlockedExchangeAdd64(v4, -(__int64)a2);
  }
  return result;
}
