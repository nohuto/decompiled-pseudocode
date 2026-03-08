/*
 * XREFs of ?vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C028FCF0
 * Callers:
 *     ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1C028F930 (-vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z.c)
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
  LONG x; // edx
  __int64 v8; // rax
  __int64 v9; // r9
  _QWORD *v10; // rcx
  COLOR16 *v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rax
  LONG v14; // eax
  __int64 v15; // rdx
  COLOR16 *p_Red; // r10
  __int64 v17; // rax

  v4 = *((_DWORD *)a4 + 1);
  if ( v4 >= *((_DWORD *)a3 + 1) && v4 < *((_DWORD *)a3 + 3) )
  {
    x = a1->x;
    v8 = v4 - *((_DWORD *)a3 + 28);
    v9 = 5 * v8;
    v10 = (_QWORD *)((char *)a3 + 40 * v8 + 176);
    if ( x > a2->x )
    {
      *((_DWORD *)a3 + 10 * v8 + 42) = a2->x;
      v15 = 4LL;
      p_Red = &a2->Red;
      do
      {
        v17 = *p_Red++;
        *v10++ = v17 << 48;
        --v15;
      }
      while ( v15 );
      v14 = a1->x;
    }
    else
    {
      *((_DWORD *)a3 + 10 * v8 + 42) = x;
      v11 = &a1->Red;
      v12 = 4LL;
      do
      {
        v13 = *v11++;
        *v10++ = v13 << 48;
        --v12;
      }
      while ( v12 );
      v14 = a2->x;
    }
    *((_DWORD *)a3 + 2 * v9 + 43) = v14;
  }
}
