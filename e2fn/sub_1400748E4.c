__int64 __fastcall sub_1400748E4(__int64 a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  unsigned __int64 v6; // r8
  const wchar_t *v7; // rdx

  if ( !a2 )
  {
    v6 = 4LL;
    v7 = L"None";
    goto LABEL_12;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v6 = 5LL;
    v7 = L"Sleep";
LABEL_12:
    *(_WORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)a1 = &off_1400D41D0;
    goto LABEL_13;
  }
  *(_WORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)a1 = &off_1400D41D0;
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v6 = 7LL;
        v7 = L"Restart";
      }
      else
      {
        v6 = 5LL;
        v7 = L"Other";
      }
    }
    else
    {
      v6 = 8LL;
      v7 = L"Shutdown";
    }
  }
  else
  {
    v6 = 9LL;
    v7 = L"Hibernate";
  }
LABEL_13:
  sub_1400011A8((_QWORD *)a1, (__int64)v7, v6);
  return a1;
}
