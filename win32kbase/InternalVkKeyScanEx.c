__int16 __fastcall InternalVkKeyScanEx(unsigned __int16 a1, _QWORD *a2)
{
  unsigned __int16 v2; // r8
  __int16 v4; // di
  __int16 v5; // bx
  __int64 v6; // rsi
  unsigned __int16 v7; // r14
  __int16 v8; // r15
  __int16 v9; // bp
  __int64 v10; // r9
  unsigned __int8 *v11; // rdx
  unsigned __int8 v12; // r12
  unsigned __int8 v13; // r11
  unsigned __int8 *v14; // rcx
  unsigned __int8 v15; // al

  v2 = 0;
  v4 = 0;
  v5 = 0;
  if ( !a2 )
    a2 = *(_QWORD **)(*(_QWORD *)(gspklBaseLayout + 48) + 32LL);
  v6 = *a2;
  v7 = *(_WORD *)(*a2 + 8LL);
  v8 = 15;
  if ( v7 < 2u )
  {
    v9 = 15;
  }
  else
  {
    v9 = *(unsigned __int8 *)(v6 + 12);
    if ( v7 >= 3u )
      v8 = *(unsigned __int8 *)(v6 + 13);
  }
  v10 = a2[1];
  if ( !v10 || (v11 = *(unsigned __int8 **)v10) == 0LL )
  {
LABEL_35:
    if ( a1 >= 0x20u )
      return -1;
    else
      return (unsigned __int8)(a1 + 64) | 0x200;
  }
  while ( !*v11 )
  {
LABEL_14:
    v10 += 16LL;
    v11 = *(unsigned __int8 **)v10;
    if ( !*(_QWORD *)v10 )
    {
      if ( v4 )
        return v4;
      if ( v5 )
        return v5;
      goto LABEL_35;
    }
  }
  v12 = *(_BYTE *)(v10 + 8);
  while ( 1 )
  {
    v13 = 0;
    if ( v12 )
      break;
LABEL_13:
    v11 += *(unsigned __int8 *)(v10 + 9);
    if ( !*v11 )
      goto LABEL_14;
  }
  while ( 1 )
  {
    v14 = v11;
    if ( *(_WORD *)&v11[2 * v13 + 2] == a1 )
      break;
LABEL_12:
    if ( ++v13 >= v12 )
      goto LABEL_13;
  }
  if ( *v11 == 0xFF )
    v14 = &v11[-*(unsigned __int8 *)(v10 + 9)];
  if ( v13 == v9 )
  {
    if ( !v4 )
      v4 = *v14 | 0x200;
    goto LABEL_12;
  }
  if ( v13 == v8 )
  {
    if ( !v5 )
      v5 = *v14 | 0x300;
    goto LABEL_12;
  }
  while ( *(_BYTE *)(v2 + v6 + 10) != v13 )
  {
    if ( ++v2 > v7 )
      return -1;
  }
  v15 = *v14;
  if ( *v14 == 0xFF )
    v15 = v14[-*(unsigned __int8 *)(v10 + 9)];
  return ((unsigned __int8)v2 << 8) | v15;
}
