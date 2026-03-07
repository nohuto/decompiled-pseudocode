unsigned __int64 __fastcall std::string::_Calculate_growth(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a2 | 0xF;
  v4 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (a2 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v5 = v2 >> 1;
    if ( v2 <= 0x7FFFFFFFFFFFFFFFLL - (v2 >> 1) )
    {
      v4 = v5 + v2;
      if ( v3 >= v5 + v2 )
        return v3;
    }
  }
  return v4;
}
