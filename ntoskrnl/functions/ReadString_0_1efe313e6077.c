__int64 __fastcall ReadString_0(
        char a1,
        __int64 a2,
        wint_t *a3,
        _DWORD *a4,
        __int64 a5,
        int a6,
        FILE *File,
        __int64 a8,
        _DWORD *a9)
{
  void **v9; // rbx
  __int64 v10; // rdi
  _WORD *v13; // r14
  int v14; // eax
  wint_t v16; // cx
  unsigned __int64 v17; // rbp
  int v18; // ecx
  int v19; // eax
  FILE *v21; // rcx
  wint_t v22; // ax
  int v23; // ecx
  char v24; // di
  _WORD *v26; // rax
  char Src; // [rsp+70h] [rbp+18h] BYREF

  v9 = (void **)a5;
  v10 = a8;
  v13 = *(_WORD **)a5;
  v14 = -((a1 & 8) != 0);
  --*a4;
  v16 = *a3;
  LODWORD(a5) = v14;
  if ( v16 != 0xFFFF )
    ungetwc_nolock(v16, File);
  v17 = v10 - 1;
  v18 = a1 & 0x10;
  if ( (a1 & 0x10) != 0 )
    v17 = v10;
  v19 = a1 & 1;
  LODWORD(a8) = v19;
  while ( 1 )
  {
    if ( v19 )
    {
      if ( !a6-- )
        goto LABEL_38;
    }
    v21 = File;
    ++*a4;
    v22 = fgetwc_nolock(v21);
    *a3 = v22;
    if ( v22 == 0xFFFF )
      break;
    v18 = a1 & 0x10;
    if ( (a1 & 0x10) != 0 || (a1 & 0x20) != 0 && (unsigned __int16)(v22 - 9) > 4u && v22 != 32 )
      goto LABEL_17;
    if ( (a1 & 0x40) == 0 )
      break;
    if ( v22 < (unsigned __int16)(v22 >> 3) )
      break;
    v23 = a5 ^ *(char *)((v22 >> 3) + a2);
    if ( !_bittest(&v23, v22 & 7) )
      break;
    v18 = 0;
LABEL_17:
    if ( (a1 & 4) != 0 )
    {
      ++v13;
LABEL_30:
      v19 = a8;
    }
    else
    {
      if ( !v17 )
      {
        if ( (a1 & 2) != 0 )
          *v13 = 0;
        else
LABEL_34:
          *(_BYTE *)v13 = 0;
        return 0xFFFFFFFFLL;
      }
      if ( (a1 & 2) != 0 )
      {
        *(_WORD *)*v9 = v22;
        *v9 = (char *)*v9 + 2;
        --v17;
        goto LABEL_30;
      }
      if ( v17 < _mb_cur_max )
      {
        Src = *(_BYTE *)a3;
        v24 = Src;
        if ( Src > 0 && Src > v17 || (unsigned __int8)Src > 5u )
          goto LABEL_34;
        memmove(*v9, &Src, Src);
      }
      else
      {
        *(_BYTE *)*v9 = *(_BYTE *)a3;
        v24 = *(_BYTE *)*v9;
      }
      v18 = a1 & 0x10;
      v19 = a8;
      if ( v24 > 0 )
      {
        *v9 = (char *)*v9 + v24;
        v17 -= v24;
        goto LABEL_30;
      }
    }
  }
  --*a4;
  if ( *a3 != 0xFFFF )
    ungetwc_nolock(*a3, File);
  v18 = a1 & 0x10;
LABEL_38:
  if ( v13 == *v9 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 4) == 0 )
  {
    ++*a9;
    if ( !v18 )
    {
      v26 = *v9;
      if ( (a1 & 2) != 0 )
        *v26 = 0;
      else
        *(_BYTE *)v26 = 0;
    }
  }
  return 0LL;
}
