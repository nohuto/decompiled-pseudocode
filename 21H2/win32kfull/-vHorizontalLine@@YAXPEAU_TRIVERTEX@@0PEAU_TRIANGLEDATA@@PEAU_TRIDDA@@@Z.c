/*
 * XREFs of ?vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C014D3E0
 * Callers:
 *     ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1C014CFB4 (-vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vHorizontalLine(
        struct _TRIVERTEX *a1,
        struct _TRIVERTEX *a2,
        struct _TRIANGLEDATA *a3,
        struct _TRIDDA *a4)
{
  int v4; // eax
  LONG x; // r9d
  LONG v8; // r10d
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  COLOR16 *v12; // r10
  __int64 v13; // r9
  __int64 v14; // rax
  LONG v15; // eax
  __int64 v16; // r9
  COLOR16 *p_Red; // r10
  __int64 v18; // rax

  v4 = *((_DWORD *)a4 + 1);
  if ( v4 >= *((_DWORD *)a3 + 1) && v4 < *((_DWORD *)a3 + 3) )
  {
    x = a1->x;
    v8 = a2->x;
    v9 = v4 - *((_DWORD *)a3 + 28);
    v10 = 5 * v9;
    v11 = (_QWORD *)((char *)a3 + 40 * v9 + 176);
    if ( x > v8 )
    {
      *((_DWORD *)a3 + 10 * v9 + 42) = v8;
      v16 = 4LL;
      p_Red = &a2->Red;
      do
      {
        v18 = *p_Red++;
        *v11++ = v18 << 48;
        --v16;
      }
      while ( v16 );
      v15 = a1->x;
    }
    else
    {
      *((_DWORD *)a3 + 10 * v9 + 42) = x;
      v12 = &a1->Red;
      v13 = 4LL;
      do
      {
        v14 = *v12++;
        *v11++ = v14 << 48;
        --v13;
      }
      while ( v13 );
      v15 = a2->x;
    }
    *((_DWORD *)a3 + 2 * v10 + 43) = v15;
  }
}
