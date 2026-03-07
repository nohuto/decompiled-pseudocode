__int64 __fastcall sub_14009E314(__int64 a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  unsigned __int64 v8; // r8
  const wchar_t *v9; // rdx

  *(_QWORD *)a1 = &off_1400D41D0;
  *(_WORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              if ( v7 == 1 )
              {
                v8 = 13LL;
                v9 = L"Speed2_5gFull";
              }
              else
              {
                v8 = 7LL;
                v9 = L"Unknown";
              }
            }
            else
            {
              v8 = 11LL;
              v9 = L"Speed1gFull";
            }
          }
          else
          {
            v8 = 13LL;
            v9 = L"Speed100mFull";
          }
        }
        else
        {
          v8 = 13LL;
          v9 = L"Speed100mHalf";
        }
      }
      else
      {
        v8 = 12LL;
        v9 = L"Speed10mFull";
      }
    }
    else
    {
      v8 = 12LL;
      v9 = L"Speed10mHalf";
    }
  }
  else
  {
    v8 = 9LL;
    v9 = L"SpeedAuto";
  }
  sub_1400011A8((_QWORD *)a1, (__int64)v9, v8);
  return a1;
}
