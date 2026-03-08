/*
 * XREFs of ReadString @ 0x1403DBB04
 * Callers:
 *     ReadStringDelimited @ 0x1403DBCC4 (ReadStringDelimited.c)
 *     _input_s @ 0x1403DBE54 (_input_s.c)
 * Callees:
 *     _inc @ 0x1403DBE24 (_inc.c)
 *     _ungetc_nolock @ 0x1403DD628 (_ungetc_nolock.c)
 */

__int64 __fastcall ReadString(
        char a1,
        __int64 a2,
        int *a3,
        _DWORD *a4,
        _WORD **a5,
        int a6,
        FILE *File,
        __int64 a8,
        _DWORD *a9)
{
  _WORD **v9; // rdi
  __int64 v10; // r14
  _WORD *v14; // rsi
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rdx
  int v18; // r14d
  int v19; // eax
  FILE *v21; // rcx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  _WORD *v26; // rcx
  _WORD *v28; // rax
  char v29; // [rsp+60h] [rbp+8h] BYREF
  __int64 v30; // [rsp+68h] [rbp+10h]
  __int64 v31; // [rsp+70h] [rbp+18h]

  v30 = a2;
  v9 = a5;
  v10 = a8;
  v14 = *a5;
  v15 = -((a1 & 8) != 0);
  --*a4;
  v16 = *a3;
  LODWORD(a8) = v15;
  if ( v16 != -1 )
    ungetc_nolock(v16, File);
  v17 = v10 - 1;
  if ( (a1 & 0x10) != 0 )
    v17 = v10;
  v18 = a6;
  v19 = a1 & 1;
  v31 = v17;
  LODWORD(a5) = v19;
  while ( 1 )
  {
    if ( v19 )
    {
      if ( !v18-- )
        goto LABEL_30;
    }
    v21 = File;
    ++*a4;
    v22 = inc(v21, v17, 0LL);
    *a3 = v22;
    v23 = v22;
    if ( v22 == -1 )
      break;
    if ( (a1 & 0x10) == 0 && ((a1 & 0x20) == 0 || (unsigned int)(v22 - 9) <= 4 || v22 == 32) )
    {
      if ( (a1 & 0x40) == 0 )
        break;
      if ( v22 < 0 )
        break;
      v24 = v22 >> 3;
      if ( v23 < v23 >> 3 )
        break;
      v17 = v23 & 7;
      v25 = a8 ^ *(char *)(v24 + v30);
      if ( !_bittest(&v25, v17) )
        break;
    }
    if ( (a1 & 4) != 0 )
    {
      v14 = (_WORD *)((char *)v14 + 1);
    }
    else
    {
      if ( !v31 )
      {
        if ( (a1 & 2) != 0 )
          *v14 = 0;
        else
          *(_BYTE *)v14 = 0;
        return 0xFFFFFFFFLL;
      }
      v26 = *v9;
      v17 = --v31;
      if ( (a1 & 2) != 0 )
      {
        *v26 = (unsigned __int16)&v29;
        ++*v9;
      }
      else
      {
        *(_BYTE *)v26 = *(_BYTE *)a3;
        *v9 = (_WORD *)((char *)*v9 + 1);
      }
    }
    v19 = (int)a5;
  }
  --*a4;
  if ( *a3 != -1 )
    ungetc_nolock(*a3, File);
LABEL_30:
  if ( v14 == *v9 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 4) == 0 )
  {
    ++*a9;
    if ( (a1 & 0x10) == 0 )
    {
      v28 = *v9;
      if ( (a1 & 2) != 0 )
        *v28 = 0;
      else
        *(_BYTE *)v28 = 0;
    }
  }
  return 0LL;
}
