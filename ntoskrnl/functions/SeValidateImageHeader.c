__int64 __fastcall SeValidateImageHeader(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  if ( qword_140C375E0 )
  {
    if ( (a10 & 1) != 0 )
      _InterlockedCompareExchange(&dword_140D0C78C, 0, 0);
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64))qword_140C375E0)(a1, a2);
  }
  else
  {
    return (unsigned int)-1073740760;
  }
}
