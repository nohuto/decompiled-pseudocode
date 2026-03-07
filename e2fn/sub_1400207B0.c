__int64 __fastcall sub_1400207B0(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 v5; // r8
  const wchar_t *v6; // rdx

  v2 = *(_DWORD *)(a1 + 80);
  *(_QWORD *)a2 = &off_1400D41D0;
  *(_WORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  if ( v2 )
  {
    v5 = 4LL;
    v6 = L"true";
  }
  else
  {
    v5 = 5LL;
    v6 = L"false";
  }
  sub_1400011A8((_QWORD *)a2, (__int64)v6, v5);
  return a2;
}
