/*
 * XREFs of ?pxrlStrRead01AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00B6020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead01AND(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7)
{
  int v7; // r9d
  _DWORD *v8; // r14
  char v9; // dl
  unsigned __int8 *v11; // r13
  ULONG v12; // ebp
  int v13; // r12d
  int v14; // ecx
  int v15; // r15d
  int v16; // esi
  __int64 v17; // rdi
  unsigned int *v18; // r10
  __int64 v19; // r8
  __int64 v20; // rax
  _DWORD *v21; // r11
  _DWORD *v22; // r11
  ULONG *pulXlate; // rax

  v7 = a6;
  v8 = (_DWORD *)((char *)a2 + 8);
  v9 = a6 & 0x1F;
  v11 = &a3[4 * ((__int64)a6 >> 5)];
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v12 = *pulXlate;
    v13 = pulXlate[1];
  }
  else
  {
    v12 = 0;
    v13 = 1;
  }
  v14 = *(_DWORD *)a1;
  v15 = 0;
  *v8 = v14;
  v8[1] = *((_DWORD *)a1 + 2) - v14;
  if ( a6 < a7 )
  {
    v16 = *(_DWORD *)v11;
    v17 = 0LL;
    v18 = (unsigned int *)((char *)a1 + 32);
    v19 = a6 & 0x1F;
    while ( 1 )
    {
      v20 = *v18;
      if ( (v16 & dword_1C0319320[v19]) != 0 )
      {
        if ( (_DWORD)v20 )
        {
          v15 += v20;
          v22 = &v8[v17 + 2];
          v17 += v20;
          do
          {
            *v22++ &= v13;
            LODWORD(v20) = v20 - 1;
          }
          while ( (_DWORD)v20 );
        }
        else
        {
          v8[v17 + 2] &= v13;
        }
      }
      else if ( (_DWORD)v20 )
      {
        v15 += v20;
        v21 = &v8[v17 + 2];
        v17 += v20;
        do
        {
          *v21++ &= v12;
          LODWORD(v20) = v20 - 1;
        }
        while ( (_DWORD)v20 );
      }
      else
      {
        v8[v17 + 2] &= v12;
      }
      ++v7;
      ++v9;
      ++v19;
      if ( v7 >= a7 )
        break;
      if ( (v9 & 0x20) != 0 )
      {
        v16 = *((_DWORD *)v11 + 1);
        v11 += 4;
        v9 = 0;
        v19 = 0LL;
      }
      ++v18;
    }
  }
  return (struct _XRUNLEN *)&v8[v15 + 2];
}
