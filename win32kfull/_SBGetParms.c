__int64 __fastcall SBGetParms(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // r11d
  __int64 v6; // r10
  unsigned int v7; // edx

  v5 = a4[1];
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 720LL);
  if ( (v5 & 1) != 0 )
  {
    a4[2] = *a3;
    a4[3] = a3[1];
  }
  if ( (v5 & 2) != 0 )
    a4[4] = a3[2];
  if ( (v5 & 4) != 0 )
    a4[5] = a3[3];
  v7 = 0;
  if ( (v5 & 0x10) != 0 )
  {
    if ( v6 && *(_DWORD *)(v6 + 88) == a2 && *(_QWORD *)(v6 + 8) == a1 )
      a4[6] = *(_DWORD *)(v6 + 84);
    else
      a4[6] = a3[3];
  }
  LOBYTE(v7) = (v5 & 0x17) != 0;
  return v7;
}
