__int64 __fastcall wcstoxlX(__int64 a1, wint_t *a2, wint_t **a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // r14d
  wint_t v9; // bp
  wint_t *v10; // rbx
  unsigned int v11; // edi
  int v12; // esi
  unsigned int v13; // r13d
  unsigned int v14; // ecx
  unsigned __int16 v15; // dx
  int v16; // ecx
  wint_t *v17; // rbx
  __int64 result; // rax

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && a4 - 2 > 0x22 )
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
  v9 = *a2;
  v10 = a2 + 1;
  v11 = 0;
  while ( iswctype_l(v9, 8u, 0LL) )
    v9 = *v10++;
  v12 = a5;
  if ( v9 == 45 )
  {
    v12 = a5 | 2;
  }
  else if ( v9 != 43 )
  {
    goto LABEL_13;
  }
  v9 = *v10++;
LABEL_13:
  if ( v6 )
  {
    if ( v6 != 16 )
      goto LABEL_23;
    goto LABEL_20;
  }
  if ( !(unsigned int)wchartodigit(v9) )
  {
    if ( ((*v10 - 88) & 0xFFDF) != 0 )
    {
      v6 = 8;
      goto LABEL_23;
    }
    v6 = 16;
LABEL_20:
    if ( !(unsigned int)wchartodigit(v9) && ((*v10 - 88) & 0xFFDF) == 0 )
    {
      v9 = v10[1];
      v10 += 2;
    }
    goto LABEL_23;
  }
  v6 = 10;
LABEL_23:
  v13 = 0xFFFFFFFF / v6;
  while ( 1 )
  {
    v14 = wchartodigit(v9);
    if ( v14 != -1 )
      goto LABEL_30;
    v15 = v9 - 97;
    if ( (unsigned __int16)(v9 - 65) > 0x19u && v15 > 0x19u )
      break;
    v16 = v9 - 32;
    if ( v15 > 0x19u )
      v16 = v9;
    v14 = v16 - 55;
LABEL_30:
    if ( v14 >= v6 )
      break;
    v12 |= 8u;
    if ( a6 || v11 < v13 || v11 == v13 && v14 <= 0xFFFFFFFF % v6 )
    {
      v11 = v14 + v6 * v11;
    }
    else
    {
      v12 |= 4u;
      if ( !a3 )
        break;
    }
    v9 = *v10++;
  }
  v17 = v10 - 1;
  if ( (v12 & 8) != 0 )
  {
    if ( (v12 & 4) == 0 )
    {
      if ( (v12 & 1) != 0 )
        goto LABEL_52;
      if ( (v12 & 2) != 0 )
      {
        if ( v11 <= 0x80000000 )
          goto LABEL_52;
      }
      else if ( v11 <= 0x7FFFFFFF )
      {
        goto LABEL_52;
      }
    }
    if ( !a6 )
    {
      if ( (v12 & 1) != 0 )
        v11 = -1;
      else
        v11 = ((v12 & 2) != 0) + 0x7FFFFFFF;
    }
  }
  else
  {
    if ( a3 )
      v17 = a2;
    v11 = 0;
  }
LABEL_52:
  if ( a3 )
    *a3 = v17;
  result = -v11;
  if ( (v12 & 2) == 0 )
    return v11;
  return result;
}
