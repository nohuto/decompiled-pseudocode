/*
 * XREFs of MiComputeTrimAmount @ 0x140632094
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402245D0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiComputeTrimAmount(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  char v4; // bl
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdi
  char v7; // cl
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  __int64 *v11; // rcx
  __int64 v12; // r11
  __int64 v13; // rax
  unsigned __int8 v14; // al
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a2 + 174));
  if ( *(_QWORD *)(a1 + 80) == *(_QWORD *)(a1 + 96) )
    return 0LL;
  v4 = 3;
  if ( *(_QWORD *)(v3 + 17216) >= *(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 3) < 3u || (*(_BYTE *)a1 & 0x7F) != 0) )
    return 0LL;
  v5 = *(_QWORD *)(a2 + 144);
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 32LL);
  if ( v5 <= v6 )
    return 0LL;
  v7 = *(_BYTE *)(a2 + 184);
  if ( (v7 & 7) == 0 )
  {
    if ( v7 >= 0 )
    {
      if ( (*(_DWORD *)(a2 - 540) & 0x40) != 0 )
        goto LABEL_16;
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  if ( (*(_BYTE *)(a2 + 184) & 7) == 1 && v7 < 0 )
  {
LABEL_12:
    if ( v5 <= *(_QWORD *)(a2 + 112) )
      return 0LL;
  }
LABEL_13:
  v8 = *(_QWORD *)(a2 + 112);
  if ( v5 <= v8 )
    v5 = 0LL;
  else
    v5 -= v8;
LABEL_16:
  v9 = *(unsigned __int8 *)(a1 + 1);
  if ( (_BYTE)v9 )
  {
    v10 = 0LL;
    if ( (unsigned int)v9 >= 8 )
      return 0LL;
    v11 = (__int64 *)(a2 + 40 + 8 * v9);
    v12 = 8 - (unsigned int)*(unsigned __int8 *)(a1 + 1);
    do
    {
      v13 = *v11++;
      v10 += v13;
      --v12;
    }
    while ( v12 );
    if ( !v10 )
      return 0LL;
  }
  else if ( *(_QWORD *)(a2 + 144) <= *(_QWORD *)(a2 + 112) )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 144) - *(_QWORD *)(a2 + 112);
  }
  v14 = *(_BYTE *)a1 & 0x7F;
  if ( v14 <= 1u )
  {
    if ( *(_BYTE *)(a2 + 186) != 2 )
      v4 = 1;
    v15 = v10 >> v4;
    v16 = *(_QWORD *)(a1 + 104);
    if ( v16 >= v10 )
    {
      v17 = v10 * (100 * v10 / v16) / 0x64;
      if ( v15 < v17 )
        v15 = v17;
    }
    if ( v15 <= v5 )
      v5 = v15;
    goto LABEL_44;
  }
  if ( v14 != 4 || *(_QWORD *)(v3 + 17216) >= 0xE0uLL )
  {
    if ( *(_QWORD *)(a1 + 96) <= *(_QWORD *)(a1 + 80) )
    {
      if ( *(_BYTE *)(a2 + 186) != 2 )
      {
        v19 = *(_QWORD *)(a1 + 104);
        v20 = *(_QWORD *)(a1 + 88);
        if ( v19 > v20 )
          v10 /= v19 / v20;
      }
      if ( v10 > v5 )
        v10 = v5;
      v5 = v10;
      goto LABEL_44;
    }
    return 0LL;
  }
  v18 = *(_QWORD *)(a2 + 144);
  if ( v18 <= v6 )
    return 0LL;
  v5 = v18 - v6;
LABEL_44:
  result = *(_QWORD *)(a1 + 80) - *(_QWORD *)(a1 + 96);
  if ( v5 <= result )
    result = v5;
  ++*(_DWORD *)(*(_QWORD *)(v3 + 16920) + 4LL * (*(_BYTE *)a1 & 0x7F) + 2540);
  return result;
}
