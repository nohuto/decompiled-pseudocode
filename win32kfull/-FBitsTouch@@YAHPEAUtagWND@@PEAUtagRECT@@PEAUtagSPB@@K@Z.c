__int64 __fastcall FBitsTouch(struct tagWND *a1, struct tagRECT *a2, struct tagSPB *a3)
{
  _QWORD *v5; // rcx
  __int16 v6; // r9
  _QWORD *i; // rbx
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v12; // r8

  if ( !a1 )
    return IntersectRect(a2, a2, (char *)a3 + 24);
  if ( !(unsigned int)IsVisible(a1) )
    return 0LL;
  i = (_QWORD *)*((_QWORD *)a3 + 1);
  if ( (*((_DWORD *)a3 + 12) & 2) != 0 && (v6 & 0x400) != 0 )
    return 0LL;
  v8 = (_QWORD *)i[13];
  if ( v5 == v8 )
    return IntersectRect(a2, a2, (char *)a3 + 24);
  v9 = (_QWORD *)v5[13];
  v10 = v5;
  if ( v8 != v9 )
  {
    do
    {
      v5 = (_QWORD *)v5[13];
      if ( !v5 )
        return 0LL;
    }
    while ( v8 != (_QWORD *)v5[13] );
  }
  if ( v5 == i )
  {
    if ( (*((_DWORD *)a3 + 12) & 2) != 0 )
    {
      if ( v10 != i )
      {
        while ( i != v9 )
        {
          v10 = v9;
          v9 = (_QWORD *)v9[13];
        }
        for ( i = (_QWORD *)i[14]; i && i != v10; i = (_QWORD *)i[11] )
        {
          v12 = i[5];
          if ( (*(_BYTE *)(v12 + 31) & 0x10) != 0
            && !*(_QWORD *)(v12 + 168)
            && (*(_BYTE *)(v12 + 26) & 8) == 0
            && !(unsigned int)SubtractRect(a2, a2, v12 + 88) )
          {
            return 0LL;
          }
LABEL_20:
          ;
        }
      }
      return IntersectRect(a2, a2, (char *)a3 + 24);
    }
  }
  else
  {
    v10 = v5;
    while ( v5 != i )
    {
      v5 = (_QWORD *)v5[11];
      if ( !v5 )
        goto LABEL_20;
    }
  }
  return 0LL;
}
