__int64 __fastcall sub_1400820C8(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v3; // r8
  const wchar_t *v4; // rdx

  if ( *a2 == 1 )
  {
    *(_WORD *)(a1 + 8) = 0;
    v3 = 9LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    v4 = L"HashIndex";
  }
  else
  {
    *(_WORD *)(a1 + 8) = 0;
    v3 = 11LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    v4 = L"Unspecified";
  }
  *(_QWORD *)a1 = &off_1400D41D0;
  sub_1400011A8((_QWORD *)a1, (__int64)v4, v3);
  return a1;
}
