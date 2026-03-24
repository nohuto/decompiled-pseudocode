/*
 * XREFs of IsChildSameThread @ 0x1C01E3234
 * Callers:
 *     ImeCanDestroyDefIMEforChild @ 0x1C00339F4 (ImeCanDestroyDefIMEforChild.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsChildSameThread(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r11
  _QWORD *i; // r8
  char v5; // r9
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  int v8; // r10d
  _QWORD *v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r9

  v2 = a2[2];
  for ( i = *(_QWORD **)(a1 + 112); ; i = (_QWORD *)i[11] )
  {
    if ( !i )
      return 0LL;
    v5 = *(_BYTE *)(i[5] + 31LL) & 0xC0;
    if ( v5 == 64 )
      break;
    v6 = i;
    if ( **(_WORD **)(i[17] + 8LL) != *(_WORD *)(gpsi + 906LL) )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(v6[17] + 8LL);
        if ( (*(_BYTE *)(v7 + 10) & 1) != 0 || *(_WORD *)v7 == *(_WORD *)(gpsi + 898LL) )
          break;
        v6 = (_QWORD *)v6[15];
        if ( !v6 )
          goto LABEL_7;
      }
    }
LABEL_22:
    ;
  }
LABEL_7:
  if ( i == a2 || i[2] != v2 )
    goto LABEL_22;
  v8 = 0;
  v9 = i;
  if ( v5 == 64 )
  {
    do
    {
      if ( v9[2] != v2 )
        break;
      v10 = *(_QWORD *)(v9[17] + 8LL);
      if ( (*(_BYTE *)(v10 + 10) & 1) != 0 || *(_WORD *)v10 == *(_WORD *)(gpsi + 898LL) )
        v8 = 1;
      v9 = (_QWORD *)v9[13];
    }
    while ( (*(_BYTE *)(v9[5] + 31LL) & 0xC0) == 0x40 );
  }
  if ( (*(_BYTE *)(v9[5] + 31LL) & 0xC0) != 0x40 )
  {
    do
    {
      if ( v9[2] != v2 )
        break;
      v11 = *(_QWORD *)(v9[17] + 8LL);
      if ( (*(_BYTE *)(v11 + 10) & 1) != 0 || *(_WORD *)v11 == *(_WORD *)(gpsi + 898LL) )
        v8 = 1;
      v9 = (_QWORD *)v9[15];
    }
    while ( v9 );
  }
  if ( v8 )
    goto LABEL_22;
  return 1LL;
}
