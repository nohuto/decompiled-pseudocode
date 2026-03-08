/*
 * XREFs of RtlCompareAltitudes @ 0x1402E26A0
 * Callers:
 *     CmpInsertCallbackInListByAltitude @ 0x14084E8FC (CmpInsertCallbackInListByAltitude.c)
 *     ObpInsertCallbackByAltitude @ 0x1408548FC (ObpInsertCallbackByAltitude.c)
 * Callees:
 *     <none>
 */

LONG __stdcall RtlCompareAltitudes(PCUNICODE_STRING Altitude1, PCUNICODE_STRING Altitude2)
{
  unsigned __int16 Length; // r10
  unsigned __int16 v3; // r9
  wchar_t *Buffer; // rsi
  unsigned __int16 v5; // cx
  wchar_t *v6; // r14
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // r10
  unsigned __int16 v9; // r9
  LONG v10; // r11d
  unsigned __int16 i; // r8
  unsigned __int16 v12; // bx
  unsigned __int16 j; // ax
  unsigned __int16 v14; // bx
  unsigned __int16 k; // ax
  unsigned __int16 v16; // bx
  wchar_t v17; // di
  wchar_t v18; // ax
  bool v19; // cf
  __int16 v20; // r15
  __int16 v21; // bp
  signed __int16 v22; // di
  unsigned __int16 m; // r10
  __int16 v24; // r10
  unsigned __int16 n; // r9
  wchar_t *v26; // r15
  wchar_t *v27; // r14
  int v29; // eax
  wchar_t v30; // dx
  wchar_t v31; // r8

  Length = Altitude1->Length;
  v3 = Altitude2->Length;
  Buffer = Altitude1->Buffer;
  v5 = 0;
  v6 = Altitude2->Buffer;
  v7 = 0;
  v8 = Length >> 1;
  v9 = v3 >> 1;
  v10 = 1;
  if ( v8 )
  {
    do
    {
      if ( Buffer[v7] == 46 )
        break;
      ++v7;
    }
    while ( v7 < v8 );
  }
  for ( i = 0; i < v9; ++i )
  {
    if ( v6[i] == 46 )
      break;
  }
  v12 = v7;
  for ( j = 0; j < v12; --v8 )
  {
    if ( *Buffer != 48 )
      break;
    ++j;
    ++Buffer;
    --v7;
  }
  v14 = i;
  for ( k = 0; k < v14; --v9 )
  {
    if ( *v6 != 48 )
      break;
    ++k;
    ++v6;
    --i;
  }
  if ( v7 != i )
  {
    v19 = i < v7;
    return v19 ? 1 : -1;
  }
  v16 = 0;
  if ( v7 )
  {
    do
    {
      v17 = Buffer[v16];
      v18 = v6[v16];
      v19 = v18 < v17;
      if ( v18 != v17 )
        return v19 ? 1 : -1;
    }
    while ( ++v16 < v7 );
  }
  v20 = 0;
  v21 = 0;
  if ( (__int16)(v8 - v7 - 1) >= 0 )
    v20 = v8 - v7 - 1;
  v22 = v20;
  if ( (__int16)(v9 - i - 1) >= 0 )
    v21 = v9 - i - 1;
  if ( v8 )
  {
    for ( m = v8 - 1; m > v7 && Buffer[m] == 48; --m )
      --v22;
  }
  v24 = v21;
  if ( v9 )
  {
    for ( n = v9 - 1; n > i && v6[n] == 48; --n )
      --v24;
  }
  v26 = &Buffer[v7];
  v27 = &v6[i];
  if ( v22 > 0 )
  {
    v29 = 0;
    while ( v29 < v24 )
    {
      v30 = v26[v5 + 1];
      v31 = v27[v5 + 1];
      if ( v31 != v30 )
        return v31 < v30 ? 1 : -1;
      v29 = ++v5;
      if ( v5 >= v22 )
        break;
    }
  }
  if ( v22 == v24 )
    return 0;
  if ( v22 <= v24 )
    return -1;
  return v10;
}
