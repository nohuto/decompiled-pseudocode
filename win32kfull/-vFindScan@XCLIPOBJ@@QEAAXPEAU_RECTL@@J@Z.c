void __fastcall XCLIPOBJ::vFindScan(XCLIPOBJ *this, struct _RECTL *a2, LONG a3)
{
  _DWORD *v3; // r9
  _DWORD *v5; // rax
  LONG v6; // r11d
  LONG v7; // ecx
  LONG v8; // eax
  LONG v9; // eax
  LONG v10; // r11d
  LONG v11; // eax
  LONG v12; // ecx
  LONG v13; // eax
  LONG right; // eax

  v3 = (_DWORD *)*((_QWORD *)this + 10);
  if ( a3 < v3[1] )
  {
    do
    {
      v3 = (_DWORD *)((char *)v3 - (unsigned int)(4 * *(v3 - 1) + 16));
      *((_QWORD *)this + 10) = v3;
      v10 = v3[1];
    }
    while ( a3 < v10 );
    v11 = *((_DWORD *)this + 2);
    v12 = v3[2];
    if ( v10 <= v11 )
      v10 = *((_DWORD *)this + 2);
    v13 = *((_DWORD *)this + 4);
    a2->top = v10;
    if ( v12 >= v13 )
      v12 = v13;
    right = a2->right;
    a2->bottom = v12;
    a2->left = right;
    if ( v10 < v12 )
    {
      if ( v10 != 0x80000000 )
        return;
    }
    else
    {
      a2->top = 0x80000000;
    }
    a2->bottom = 0x80000000;
    return;
  }
  if ( a3 < v3[2] )
    return;
  do
  {
    v5 = (_DWORD *)((char *)v3 + (unsigned int)(4 * *v3 + 16));
    *((_QWORD *)this + 10) = v5;
    v3 = v5;
    v6 = v5[2];
  }
  while ( a3 >= v6 );
  v7 = v5[1];
  if ( v7 <= *((_DWORD *)this + 2) )
    v7 = *((_DWORD *)this + 2);
  v8 = *((_DWORD *)this + 4);
  a2->top = v7;
  if ( v6 >= v8 )
    v6 = v8;
  v9 = a2->right;
  a2->bottom = v6;
  a2->left = v9;
  if ( v7 >= v6 )
  {
    a2->bottom = 0x7FFFFFFF;
LABEL_10:
    a2->top = 0x7FFFFFFF;
    return;
  }
  if ( v6 == 0x7FFFFFFF )
    goto LABEL_10;
}
