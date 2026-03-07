__int64 __fastcall sub_14009E208(__int64 a1, int a2)
{
  int v3; // edx
  int v4; // edx
  unsigned __int64 v5; // r8
  const wchar_t *v6; // rdx

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
        if ( v4 == 1 )
        {
          v5 = 4LL;
          v6 = L"Full";
        }
        else
        {
          v5 = 7LL;
          v6 = L"Unknown";
        }
      }
      else
      {
        v5 = 6LL;
        v6 = L"RxOnly";
      }
    }
    else
    {
      v5 = 6LL;
      v6 = L"TxOnly";
    }
  }
  else
  {
    v5 = 8LL;
    v6 = L"Disabled";
  }
  sub_1400011A8((_QWORD *)a1, (__int64)v6, v5);
  return a1;
}
