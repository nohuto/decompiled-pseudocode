__int64 __fastcall sub_14009E2A0(__int64 a1, int a2)
{
  unsigned __int64 v3; // r8
  int v4; // edx
  const wchar_t *v5; // rdx

  *(_QWORD *)a1 = &off_1400D41D0;
  *(_WORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a2 )
  {
    v3 = 7LL;
    v4 = a2 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        v5 = L"Enabled";
      else
        v5 = L"Unknown";
    }
    else
    {
      v5 = L"Dynamic";
    }
  }
  else
  {
    v3 = 8LL;
    v5 = L"Disabled";
  }
  sub_1400011A8((_QWORD *)a1, (__int64)v5, v3);
  return a1;
}
