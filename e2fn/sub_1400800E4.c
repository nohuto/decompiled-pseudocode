__int64 __fastcall sub_1400800E4(__int64 a1, int a2)
{
  int v3; // edx
  unsigned __int64 v4; // r8
  const wchar_t *v5; // rdx

  if ( !a2 )
    goto LABEL_6;
  v3 = a2 - 1;
  if ( !v3 )
  {
    v4 = 4LL;
    v5 = L"Half";
    goto LABEL_7;
  }
  if ( v3 != 1 )
  {
LABEL_6:
    v4 = 7LL;
    v5 = L"Unknown";
    goto LABEL_7;
  }
  v4 = 4LL;
  v5 = L"Full";
LABEL_7:
  *(_WORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)a1 = &off_1400D41D0;
  sub_1400011A8((_QWORD *)a1, (__int64)v5, v4);
  return a1;
}
