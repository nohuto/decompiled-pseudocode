__int64 __fastcall MiMakeIoRangePermanent(unsigned __int64 a1)
{
  unsigned __int64 v1; // r14
  bool v2; // bl
  unsigned __int64 v4; // rdi
  int v5; // ebp
  unsigned __int64 v6; // rdi
  int v7; // r10d
  char v8; // r9
  _QWORD *v9; // r15
  bool i; // zf
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rax
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rsi
  _WORD *v15; // rbp
  int v16; // edx
  char v17; // cl
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  int v23; // [rsp+68h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  v4 = *(_QWORD *)(a1 + 32) - v1;
  v23 = *(_DWORD *)(a1 + 40);
  v5 = 0;
  MiLockIoPfnTree(6);
  v6 = v4 + 1;
  if ( !v6 )
  {
LABEL_30:
    v20 = (_QWORD *)qword_140C69258;
    if ( qword_140C69258 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 32) >= v20[3] )
        {
          if ( *(_QWORD *)(a1 + 24) <= v20[4] )
          {
            ++dword_140C692A4;
            v5 = -1073741800;
            goto LABEL_34;
          }
          v21 = (_QWORD *)v20[1];
          if ( !v21 )
          {
            v2 = 1;
            break;
          }
        }
        else
        {
          v21 = (_QWORD *)*v20;
          if ( !*v20 )
            break;
        }
        v20 = v21;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C69258, (unsigned __int64)v20, v2, a1);
    goto LABEL_34;
  }
  v7 = v23;
  v8 = 0;
  do
  {
    v9 = (_QWORD *)*((_QWORD *)&xmmword_140C69200 + 1);
    for ( i = *((_QWORD *)&xmmword_140C69200 + 1) == 0LL; ; i = v12 == 0LL )
    {
      if ( i )
      {
        v19 = v6;
        if ( 512 - (v1 & 0x1FF) <= v6 )
          v19 = 512 - (v1 & 0x1FF);
        v6 -= v19;
        v1 += v19;
LABEL_25:
        v5 = 0;
        goto LABEL_26;
      }
      v11 = v9[3];
      if ( v1 < v11 )
      {
        v12 = (_QWORD *)*v9;
        goto LABEL_9;
      }
      if ( v1 < v11 + 512 )
        break;
      v12 = (_QWORD *)v9[1];
LABEL_9:
      v9 = v12;
    }
    v13 = 512LL;
    v14 = (v1 & ((1LL << ((unsigned __int8)dword_140C65760 - 12)) - 1)) - v11;
    if ( v1 + v6 <= v11 + 512 )
      v13 = v6 + v14;
    v5 = 0;
    if ( v14 < v13 )
    {
      v15 = (_WORD *)v9 + v14 + 88;
      while ( 1 )
      {
        v16 = (*((_DWORD *)v9
               + ((unsigned __int64)(2
                                   * (((unsigned int)v1 & ((unsigned int)(1LL << ((unsigned __int8)dword_140C65760 - 12))
                                                         - 1))
                                    - *((_DWORD *)v9 + 6))) >> 5)
               + 11) >> ((2 * ((v1 & ((1LL << ((unsigned __int8)dword_140C65760 - 12)) - 1)) - *((_BYTE *)v9 + 24))) & 0x1F)) & 3;
        if ( v16 != v7 )
        {
          if ( *v15 )
          {
            ++dword_140C692A0;
            v5 = -1073741800;
            goto LABEL_29;
          }
          if ( v16 != 3 && !v8 )
          {
            MiFlushEntireTbDueToAttributeChange();
            v8 = 1;
          }
          v7 = v23;
          v17 = (2 * ((v1 & ((1LL << ((unsigned __int8)dword_140C65760 - 12)) - 1)) - *((_BYTE *)v9 + 24))) & 0x1F;
          v18 = (unsigned __int64)(2
                                 * (((unsigned int)v1 & ((unsigned int)(1LL << ((unsigned __int8)dword_140C65760 - 12))
                                                       - 1))
                                  - *((_DWORD *)v9 + 6))) >> 5;
          *((_DWORD *)v9 + v18 + 11) = (v23 << v17) | *((_DWORD *)v9 + v18 + 11) & ~(3 << v17);
        }
        ++v14;
        ++v15;
        ++v1;
        --v6;
        if ( v14 >= v13 )
          goto LABEL_25;
      }
    }
LABEL_26:
    ;
  }
  while ( v6 );
LABEL_29:
  if ( v5 >= 0 )
    goto LABEL_30;
LABEL_34:
  MiUnlockIoPfnTree(0x11u, 6);
  return (unsigned int)v5;
}
