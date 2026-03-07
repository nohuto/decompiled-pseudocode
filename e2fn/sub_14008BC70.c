__int64 __fastcall sub_14008BC70(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned int v9; // esi

  if ( a3 > a1[2] )
  {
    _mm_lfence();
    v7 = sub_14008BBA4(a1, a3);
    v8 = 0LL;
    if ( !v7 )
      a1[2] = a3;
    if ( a1[2] == a3 )
    {
      v9 = 0;
      sub_1400B6980(a1[1], a2, a3);
      v8 = a3;
    }
    else
    {
      v9 = -1073741801;
    }
    a1[4] = v8;
    return v9;
  }
  else
  {
    sub_1400B6980(a1[1], a2, a3);
    result = 0LL;
    a1[4] = a3;
  }
  return result;
}
