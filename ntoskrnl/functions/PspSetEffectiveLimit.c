char __fastcall PspSetEffectiveLimit(int a1, _DWORD *a2)
{
  char v2; // r9

  v2 = 0;
  if ( !a2 || (a1 & *(_DWORD *)(*(_QWORD *)a2 + 256LL)) != 0 || (a1 & a2[3]) != 0 )
    return 1;
  return v2;
}
