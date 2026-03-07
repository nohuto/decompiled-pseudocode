__int64 __fastcall VmpValidateMemoryRangeParameters(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ecx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  if ( a4 == -1 )
  {
    return 10;
  }
  else
  {
    v5 = 0;
    if ( a3 )
    {
      if ( a3 <= 0xFFFFFFFFFFFFFLL )
      {
        if ( ((a2 | a1) & 0xFFF) != 0 )
        {
          return 40;
        }
        else
        {
          v6 = a3 << 12;
          if ( v6 + a2 > a2 )
          {
            if ( v6 + a1 > a1 )
            {
              v7 = v6 + a2 - 1;
              if ( !v6 )
                v7 = a2;
              if ( v7 < a2 )
                return 70;
              v8 = v6 + a2 - 1;
              if ( !v6 )
                v8 = a2;
              if ( v8 > 0x7FFFFFFEFFFFLL )
                return 70;
            }
            else
            {
              return 60;
            }
          }
          else
          {
            return 50;
          }
        }
      }
      else
      {
        return 30;
      }
    }
    else
    {
      return 20;
    }
  }
  return v5;
}
