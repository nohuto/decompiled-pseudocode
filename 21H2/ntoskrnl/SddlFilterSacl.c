/*
 * XREFs of SddlFilterSacl @ 0x140926968
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x14066A500 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall SddlFilterSacl(__int64 *a1, __int64 i, unsigned int *a3, unsigned int a4)
{
  __int64 result; // rax
  _WORD *v5; // rbp
  __int64 v6; // r14
  int v9; // r10d
  unsigned __int8 *v10; // r11
  unsigned int v11; // ecx
  bool v12; // zf
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // r10d
  char *v16; // rsi
  unsigned int v17; // edi
  unsigned int v18; // ecx
  unsigned int v19; // eax
  char v20; // al
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  bool v23; // zf
  __int64 v24; // rax

  result = *((unsigned __int16 *)a1 + 2);
  v5 = a1 + 1;
  v6 = i;
  LODWORD(i) = 0;
  v9 = 8;
  v10 = (unsigned __int8 *)(a1 + 1);
  if ( (_WORD)result )
  {
    for ( i = *((unsigned __int16 *)a1 + 2); i; --i )
    {
      v11 = *v10;
      if ( v11 > 0x12 )
      {
        v13 = v11 - 19;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( !v14 )
          {
            if ( (a4 & 0x80u) != 0 )
              goto LABEL_17;
            goto LABEL_18;
          }
          if ( v14 != 1 )
            goto LABEL_7;
          v12 = (a4 & 0x100) == 0;
        }
        else
        {
          v12 = (a4 & 0x40) == 0;
        }
      }
      else
      {
        if ( v11 != 18 )
        {
          if ( v11 > 0x10 )
          {
            v12 = (a4 & 0x10) == 0;
            goto LABEL_16;
          }
LABEL_7:
          v12 = (a4 & 8) == 0;
          goto LABEL_16;
        }
        v12 = (a4 & 0x20) == 0;
      }
LABEL_16:
      if ( !v12 )
LABEL_17:
        v9 += *((unsigned __int16 *)v10 + 1);
LABEL_18:
      result = *((unsigned __int16 *)v10 + 1);
      v10 += result;
    }
  }
  v15 = (v9 + 3) & 0xFFFFFFFC;
  if ( *a3 < v15 )
  {
    *a3 = v15;
    return result;
  }
  result = *a1;
  v16 = (char *)(v6 + 8);
  *(_QWORD *)v6 = *a1;
  v17 = i;
  *(_DWORD *)(v6 + 2) = 8;
  if ( (unsigned __int16)i < *((_WORD *)a1 + 2) )
  {
    do
    {
      v18 = *(unsigned __int8 *)v5;
      if ( v18 > 0x12 )
      {
        v21 = v18 - 19;
        if ( !v21 )
        {
          if ( (a4 & 0x40) == 0 )
            goto LABEL_45;
          v20 = 1;
          goto LABEL_42;
        }
        v22 = v21 - 1;
        if ( v22 )
        {
          if ( v22 != 1 )
          {
LABEL_37:
            v23 = (a4 & 8) == 0;
            goto LABEL_43;
          }
          v19 = a4 >> 8;
        }
        else
        {
          v19 = a4 >> 7;
        }
      }
      else if ( v18 == 18 )
      {
        v19 = a4 >> 5;
      }
      else
      {
        if ( v18 < 2 )
          goto LABEL_37;
        if ( v18 <= 3 )
          goto LABEL_31;
        if ( v18 <= 6 )
          goto LABEL_37;
        if ( v18 <= 8 )
          goto LABEL_31;
        if ( v18 <= 0xC )
          goto LABEL_37;
        if ( v18 <= 0x10 )
LABEL_31:
          v19 = a4 >> 3;
        else
          v19 = a4 >> 4;
      }
      v20 = v19 & 1;
LABEL_42:
      v23 = v20 == 0;
LABEL_43:
      if ( v23 )
      {
LABEL_45:
        LOWORD(v24) = v5[1];
        goto LABEL_46;
      }
      memmove(v16, v5, (unsigned __int16)v5[1]);
      ++*(_WORD *)(v6 + 4);
      *(_WORD *)(v6 + 2) += v5[1];
      v24 = (unsigned __int16)v5[1];
      v16 += v24;
LABEL_46:
      ++v17;
      v5 = (_WORD *)((char *)v5 + (unsigned __int16)v24);
      result = *((unsigned __int16 *)a1 + 2);
    }
    while ( v17 < (unsigned int)result );
  }
  return result;
}
