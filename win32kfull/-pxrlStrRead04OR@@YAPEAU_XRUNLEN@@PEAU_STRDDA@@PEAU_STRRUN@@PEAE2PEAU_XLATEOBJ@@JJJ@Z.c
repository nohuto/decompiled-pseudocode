/*
 * XREFs of ?pxrlStrRead04OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02E37C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead04OR(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7)
{
  int v7; // r11d
  int v9; // edi
  unsigned __int8 *v11; // r9
  int v12; // ecx
  int v13; // ebp
  int v14; // r14d
  unsigned int *v15; // r15
  __int64 v16; // r8
  __int64 v17; // rbx
  unsigned int v18; // esi
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  char v21; // dl
  __int64 v22; // rsi
  unsigned __int8 *v23; // rax
  int v24; // eax
  int v25; // r15d
  unsigned int *v26; // r13
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // rcx
  ULONG v30; // esi
  _DWORD *v31; // rdx
  char v32; // dl
  __int64 v33; // rsi
  unsigned __int8 *v34; // rax
  int v35; // eax

  v7 = a6;
  v9 = a6 & 7;
  v11 = &a3[4 * ((__int64)a6 >> 3)];
  v12 = *(_DWORD *)a1;
  v13 = 0;
  *((_DWORD *)a2 + 2) = v12;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v12;
  if ( a6 < a7 )
  {
    if ( a5 )
    {
      v25 = *(_DWORD *)v11;
      v26 = (unsigned int *)((char *)a1 + 32);
      v27 = 0LL;
      v28 = a6 & 7;
      while ( 1 )
      {
        v29 = *v26++;
        v30 = a5->pulXlate[(unsigned __int64)(v25 & (unsigned int)dword_1C031B088[v28]) >> dword_1C031B068[v28]];
        if ( (_DWORD)v29 )
        {
          v13 += v29;
          v31 = (_DWORD *)((char *)a2 + 4 * v27 + 16);
          v27 += v29;
          do
          {
            *v31++ |= v30;
            LODWORD(v29) = v29 - 1;
          }
          while ( (_DWORD)v29 );
        }
        else
        {
          *((_DWORD *)a2 + v27 + 4) |= v30;
        }
        ++v7;
        v32 = v9 + 1;
        v33 = v28 + 1;
        if ( v7 >= a7 )
          break;
        v34 = v11 + 4;
        if ( (v32 & 8) != 0 )
          v25 = *(_DWORD *)v34;
        else
          v34 = v11;
        v11 = v34;
        v35 = 0;
        if ( (v32 & 8) == 0 )
          v35 = v9 + 1;
        v28 = 0LL;
        v9 = v35;
        if ( (v32 & 8) == 0 )
          v28 = v33;
      }
    }
    else
    {
      v14 = *(_DWORD *)v11;
      v15 = (unsigned int *)((char *)a1 + 32);
      v16 = 0LL;
      v17 = a6 & 7;
      while ( 1 )
      {
        v18 = (v14 & (unsigned int)dword_1C031B088[v17]) >> dword_1C031B068[v17];
        v19 = *v15++;
        if ( (_DWORD)v19 )
        {
          v13 += v19;
          v20 = (_DWORD *)((char *)a2 + 4 * v16 + 16);
          v16 += v19;
          do
          {
            *v20++ |= v18;
            LODWORD(v19) = v19 - 1;
          }
          while ( (_DWORD)v19 );
        }
        else
        {
          *((_DWORD *)a2 + v16 + 4) |= v18;
        }
        ++v7;
        v21 = v9 + 1;
        v22 = v17 + 1;
        if ( v7 >= a7 )
          break;
        v23 = v11 + 4;
        if ( (v21 & 8) != 0 )
          v14 = *(_DWORD *)v23;
        else
          v23 = v11;
        v11 = v23;
        v24 = 0;
        if ( (v21 & 8) == 0 )
          v24 = v9 + 1;
        v17 = 0LL;
        v9 = v24;
        if ( (v21 & 8) == 0 )
          v17 = v22;
      }
    }
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v13 + 16);
}
