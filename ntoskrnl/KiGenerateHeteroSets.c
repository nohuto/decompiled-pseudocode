__int64 __fastcall KiGenerateHeteroSets(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int8 a4,
        int a5,
        int a6,
        __int64 *a7)
{
  int v7; // edi
  __int64 v9; // rsi
  BOOL IsMultiCoreClassesEnabled; // eax
  unsigned int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 result; // rax

  v7 = a4;
  v9 = a2;
  IsMultiCoreClassesEnabled = KeIsMultiCoreClassesEnabled(a1, a2);
  v12 = 0;
  v13 = *(_QWORD *)(a1 + 192);
  if ( IsMultiCoreClassesEnabled )
    a3 = a6 + 2 * a5;
  v14 = v7 + (unsigned int)*(unsigned __int8 *)(a1 + 185) * a3;
  v15 = *(_QWORD *)(v13 + 24 * v14) & v9;
  v16 = v9 & *(_QWORD *)(v13 + 24 * v14 + 8);
  v17 = v9 & *(_QWORD *)(v13 + 24 * v14 + 16);
  if ( v17 )
  {
    if ( v16 )
    {
      v9 = v15;
      if ( !v15 )
        v9 = v16;
    }
    else
    {
      v16 = v17;
      v9 = v17;
    }
  }
  else
  {
    v17 = v9;
    v16 = v9;
    v12 = 1;
  }
  *a7 = v9;
  a7[1] = v16;
  result = v12;
  a7[2] = v17;
  return result;
}
