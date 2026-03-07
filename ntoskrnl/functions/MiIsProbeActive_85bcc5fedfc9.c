__int64 __fastcall MiIsProbeActive(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebx
  unsigned __int8 v7; // al
  _QWORD *i; // r9
  unsigned __int8 v9; // r13
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  _WORD *v15; // rdx
  _QWORD **v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rsi
  _QWORD *v21; // rbp
  unsigned __int64 v22; // r8
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  unsigned __int64 v26; // rax

  v4 = 0;
  v7 = MiLockIoPfnTree(1);
  i = (_QWORD *)xmmword_140C69200;
  v9 = v7;
  if ( !(_QWORD)xmmword_140C69200 )
    goto LABEL_35;
  if ( (a3 & 1) != 0 )
  {
    v19 = -1LL;
    v20 = a1 + 8 * a2;
    v21 = 0LL;
    if ( a1 >= v20 )
      goto LABEL_35;
    while ( 1 )
    {
      v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1) >> 12) & 0xFFFFFFFFFFLL;
      if ( v22 <= qword_140C65820 && ((*(_QWORD *)(48 * v22 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        if ( (a3 & 2) != 0 && *(_WORD *)(48 * v22 - 0x21FFFFFFFFE0LL) > 2u )
        {
LABEL_34:
          v4 = 1;
          goto LABEL_35;
        }
      }
      else
      {
        v24 = v22 & 0xFFFFFFFE00LL;
        if ( v19 != -1LL && v19 == v24 )
          goto LABEL_50;
        if ( !v21 || v21[3] != v24 )
        {
          v25 = (_QWORD *)xmmword_140C69200;
          while ( v25 )
          {
            v26 = v25[3];
            if ( v22 >= v26 )
            {
              if ( v22 < v26 + 512 )
                break;
              v25 = (_QWORD *)v25[1];
            }
            else
            {
              v25 = (_QWORD *)*v25;
            }
          }
          if ( !v25 )
          {
            v19 = v22 & 0xFFFFFFFFFFFFFE00uLL;
            goto LABEL_50;
          }
          v21 = v25;
        }
        if ( *((_WORD *)v21 + (v22 & ((1LL << ((unsigned __int8)dword_140C65760 - 12)) - 1)) - v21[3] + 88) )
          goto LABEL_34;
      }
LABEL_50:
      a1 += 8LL;
      if ( a1 >= v20 )
        goto LABEL_35;
    }
  }
  v10 = a1 + a2 - 1;
  do
  {
    v11 = i[3];
    if ( v10 >= v11 )
    {
      if ( a1 < v11 + 512 )
        break;
      i = (_QWORD *)i[1];
    }
    else
    {
      i = (_QWORD *)*i;
    }
  }
  while ( i );
  while ( i )
  {
    v12 = i[3];
    if ( v10 < v12 )
      break;
    v13 = a1 - v12;
    if ( a1 < v12 )
      v13 = 0LL;
    if ( a1 + a2 > v12 + 512 )
      v14 = 512LL;
    else
      v14 = a1 + a2 - v12;
    if ( v13 < v14 )
    {
      v15 = (_WORD *)i + v13 + 88;
      while ( !*v15 )
      {
        ++v13;
        ++v15;
        if ( v13 >= v14 )
          goto LABEL_20;
      }
      goto LABEL_34;
    }
LABEL_20:
    v16 = (_QWORD **)i[1];
    v17 = i;
    if ( v16 )
    {
      v18 = *v16;
      for ( i = (_QWORD *)i[1]; v18; v18 = (_QWORD *)*v18 )
        i = v18;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v17 )
          break;
        v17 = i;
      }
    }
  }
LABEL_35:
  MiUnlockIoPfnTree(v9, 1);
  return v4;
}
