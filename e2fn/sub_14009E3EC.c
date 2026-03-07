__int64 __fastcall sub_14009E3EC(__int64 a1, int a2)
{
  int v3; // edx
  unsigned __int64 v4; // r8
  const wchar_t *v5; // rdx

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
      if ( v3 == 1 )
      {
        v4 = 10LL;
        v5 = L"AutoDetect";
      }
      else
      {
        v4 = 7LL;
        v5 = L"Unknown";
      }
    }
    else
    {
      v4 = 2LL;
      v5 = L"On";
    }
  }
  else
  {
    v4 = 3LL;
    v5 = L"Off";
  }
  sub_1400011A8((_QWORD *)a1, (__int64)v5, v4);
  return a1;
}
