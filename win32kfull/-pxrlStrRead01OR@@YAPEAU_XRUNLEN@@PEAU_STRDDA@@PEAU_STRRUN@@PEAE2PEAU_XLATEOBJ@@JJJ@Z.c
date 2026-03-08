/*
 * XREFs of ?pxrlStrRead01OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02E34B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead01OR(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7)
{
  int v7; // r10d
  int v9; // r11d
  unsigned __int8 *v10; // r14
  ULONG v11; // edi
  int v12; // esi
  ULONG *pulXlate; // rax
  int v14; // ecx
  int v15; // ebx
  int v16; // r12d
  unsigned int *v17; // r13
  __int64 v18; // r8
  __int64 v19; // rbp
  __int64 v20; // rcx
  _DWORD *v21; // r9
  _DWORD *v22; // r9
  int v23; // r9d
  __int64 v24; // r15
  unsigned __int8 *v25; // rax

  v7 = a6;
  v9 = a6 & 0x1F;
  v10 = &a3[4 * ((__int64)a6 >> 5)];
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v11 = *pulXlate;
    v12 = pulXlate[1];
  }
  else
  {
    v11 = 0;
    v12 = 1;
  }
  v14 = *(_DWORD *)a1;
  v15 = 0;
  *((_DWORD *)a2 + 2) = v14;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v14;
  if ( a6 < a7 )
  {
    v16 = *(_DWORD *)v10;
    v17 = (unsigned int *)((char *)a1 + 32);
    v18 = 0LL;
    v19 = a6 & 0x1F;
    while ( 1 )
    {
      v20 = *v17;
      if ( (v16 & dword_1C0319320[v19]) != 0 )
      {
        if ( (_DWORD)v20 )
        {
          v15 += v20;
          v22 = (_DWORD *)((char *)a2 + 4 * v18 + 16);
          v18 += v20;
          do
          {
            *v22++ |= v12;
            LODWORD(v20) = v20 - 1;
          }
          while ( (_DWORD)v20 );
        }
        else
        {
          *((_DWORD *)a2 + v18 + 4) |= v12;
        }
      }
      else if ( (_DWORD)v20 )
      {
        v15 += v20;
        v21 = (_DWORD *)((char *)a2 + 4 * v18 + 16);
        v18 += v20;
        do
        {
          *v21++ |= v11;
          LODWORD(v20) = v20 - 1;
        }
        while ( (_DWORD)v20 );
      }
      else
      {
        *((_DWORD *)a2 + v18 + 4) |= v11;
      }
      ++v7;
      v23 = v9 + 1;
      v24 = v19 + 1;
      if ( v7 >= a7 )
        break;
      v25 = v10 + 4;
      if ( (v23 & 0x20) != 0 )
        v16 = *(_DWORD *)v25;
      ++v17;
      if ( (v23 & 0x20) == 0 )
        v25 = v10;
      v9 = 0;
      v10 = v25;
      if ( (v23 & 0x20) == 0 )
        v9 = v23;
      v19 = 0LL;
      if ( (v23 & 0x20) == 0 )
        v19 = v24;
    }
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v15 + 16);
}
