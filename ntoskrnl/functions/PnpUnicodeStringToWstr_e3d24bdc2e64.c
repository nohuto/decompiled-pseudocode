__int64 __fastcall PnpUnicodeStringToWstr(_QWORD *a1, _DWORD *a2, unsigned __int16 *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  _WORD *v8; // rcx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r8
  int v11; // ebp
  _WORD *Pool2; // rax
  _WORD *v13; // r15
  unsigned __int64 v14; // rax
  _WORD *v16; // rax

  v3 = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v7 = a3[1];
  if ( (unsigned __int16)v7 < 2u || (v8 = (_WORD *)*((_QWORD *)a3 + 1)) == 0LL )
  {
    *a1 = 0LL;
    if ( a2 )
      *a2 = 0;
    return v3;
  }
  v9 = *a3;
  if ( (unsigned __int16)v9 > (unsigned __int16)v7 )
    return (unsigned int)-1073741811;
  if ( (_WORD)v9 )
  {
    if ( !*v8 )
      goto LABEL_17;
    v10 = (unsigned __int64)*a3 >> 1;
    if ( (_WORD)v9 == (_WORD)v7 && !v8[v10 - 1] )
      goto LABEL_17;
    if ( v9 <= v7 - 2 && (!v8[v10 - 1] || !v8[v10]) )
      goto LABEL_17;
    v11 = v9 + 2;
    Pool2 = (_WORD *)ExAllocatePool2(256LL, (unsigned int)(v9 + 2), 1970499664LL);
    v13 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, *((const void **)a3 + 1), *a3);
      v14 = (unsigned __int64)*a3 >> 1;
      *a1 = v13;
      v13[v14] = 0;
      if ( a2 )
        *a2 = v11;
      return v3;
    }
    return (unsigned int)-1073741670;
  }
  if ( !*v8 )
  {
LABEL_17:
    *a1 = v8;
    if ( a2 )
      *a2 = v7;
    return v3;
  }
  v16 = (_WORD *)ExAllocatePool2(256LL, 2LL, 1970499664LL);
  if ( !v16 )
    return (unsigned int)-1073741670;
  *v16 = 0;
  *a1 = v16;
  if ( a2 )
    *a2 = 2;
  return v3;
}
