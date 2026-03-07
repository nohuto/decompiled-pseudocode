unsigned __int64 __fastcall PopComputeDerivedHiberStats(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  int v6; // r8d
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 result; // rax

  *(_OWORD *)a3 = 0LL;
  v5 = a1[54] + a1[55];
  v6 = 0;
  v7 = *a1;
  v8 = (1000 * a2 * v5) >> 20;
  if ( v7 )
    v9 = v8 / v7;
  else
    LODWORD(v9) = 0;
  *(_DWORD *)a3 = v9;
  v10 = a1[4];
  if ( v10 )
    v11 = v8 / v10;
  else
    LODWORD(v11) = 0;
  *(_DWORD *)(a3 + 8) = v11;
  v12 = a1[18];
  if ( v12 || a1[38] )
    v13 = v8 / (v12 + a1[38]);
  else
    LODWORD(v13) = 0;
  *(_DWORD *)(a3 + 4) = v13;
  result = a1[19];
  if ( result || a1[37] )
  {
    result = v8 / (result + a1[37]);
    v6 = result;
  }
  *(_DWORD *)(a3 + 12) = v6;
  return result;
}
