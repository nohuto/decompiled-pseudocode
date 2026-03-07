__int64 __fastcall sub_14008155C(__int64 a1, char *a2)
{
  char v2; // al
  unsigned __int64 v4; // r8
  const wchar_t *v5; // rdx

  v2 = *a2;
  *(_QWORD *)a1 = &off_1400D41D0;
  *(_WORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (v2 & 1) != 0 )
  {
    v4 = 8LL;
    v5 = L"Toeplitz";
  }
  else
  {
    v4 = 4LL;
    v5 = L"None";
  }
  sub_1400011A8((_QWORD *)a1, (__int64)v5, v4);
  return a1;
}
