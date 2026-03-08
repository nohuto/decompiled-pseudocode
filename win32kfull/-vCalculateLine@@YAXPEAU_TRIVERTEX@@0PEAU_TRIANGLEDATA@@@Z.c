/*
 * XREFs of ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1C028F930
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C028EC08 (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?vEdgeDDA@@YAXPEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C028FBF8 (-vEdgeDDA@@YAXPEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z.c)
 *     ?vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C028FCF0 (-vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z.c)
 */

void __fastcall vCalculateLine(struct _TRIVERTEX *a1, struct _TRIVERTEX *a2, struct _TRIANGLEDATA *a3)
{
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  LONG y; // r11d
  LONG v10; // eax
  LONG x; // edi
  LONG v12; // r9d
  int v13; // r10d
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  LONG v19; // ecx
  LONG v20; // eax
  __int64 v21; // rsi
  int v22; // edi
  int v23; // r9d
  int v24; // edi
  int v25; // eax
  __int64 v26; // rcx
  LONG v27; // [rsp+20h] [rbp-79h] BYREF
  LONG v28; // [rsp+24h] [rbp-75h]
  int v29; // [rsp+28h] [rbp-71h]
  int v30; // [rsp+2Ch] [rbp-6Dh]
  __int64 v31; // [rsp+30h] [rbp-69h]
  __int64 v32; // [rsp+38h] [rbp-61h]
  int v33; // [rsp+40h] [rbp-59h]
  int v34; // [rsp+44h] [rbp-55h]
  int v35; // [rsp+48h] [rbp-51h]
  LONG v36; // [rsp+4Ch] [rbp-4Dh]
  int v37; // [rsp+50h] [rbp-49h]
  int v38; // [rsp+54h] [rbp-45h]
  int v39; // [rsp+58h] [rbp-41h]
  __int64 v40; // [rsp+60h] [rbp-39h]
  __int64 v41; // [rsp+68h] [rbp-31h]
  __int64 v42; // [rsp+70h] [rbp-29h]
  __int64 v43; // [rsp+78h] [rbp-21h]
  __int64 v44; // [rsp+80h] [rbp-19h]
  __int64 v45; // [rsp+88h] [rbp-11h]
  __int64 v46; // [rsp+90h] [rbp-9h]
  __int64 v47; // [rsp+98h] [rbp-1h]
  __int64 v48; // [rsp+A0h] [rbp+7h]
  __int64 v49; // [rsp+A8h] [rbp+Fh]
  __int64 v50; // [rsp+100h] [rbp+67h]
  __int64 v51; // [rsp+108h] [rbp+6Fh]
  __int64 v52; // [rsp+110h] [rbp+77h]
  __int64 v53; // [rsp+118h] [rbp+7Fh]

  memset_0(&v27, 0, 0x80uLL);
  v6 = *((_QWORD *)a3 + 8);
  v7 = *((_QWORD *)a3 + 6);
  v8 = *((_QWORD *)a3 + 7);
  y = a1->y;
  v50 = *((_QWORD *)a3 + 9);
  v47 = v50;
  v10 = a2->y;
  v44 = v7;
  v45 = v8;
  v48 = v6;
  v46 = v6;
  if ( v10 < y )
  {
    x = a2->x;
    v12 = a1->x;
    v13 = y - v10;
    v30 = y - v10;
    y = v10;
    v28 = v10;
  }
  else
  {
    x = a1->x;
    v12 = a2->x;
    v13 = v10 - y;
    v30 = v10 - y;
    v28 = y;
  }
  v27 = x;
  v14 = v12 - x;
  v18 = y - *((_DWORD *)a3 + 35);
  v15 = x - *((_DWORD *)a3 + 34);
  v51 = *((_QWORD *)a3 + 2);
  v29 = v14;
  v52 = *((_QWORD *)a3 + 3);
  v40 = *((_QWORD *)a3 + 10) + v7 * v18 + v15 * v51;
  v53 = *((_QWORD *)a3 + 4);
  v41 = *((_QWORD *)a3 + 11) + v8 * v18 + v15 * v52;
  v16 = *((_QWORD *)a3 + 12) + v6 * v18 + v15 * v53;
  v49 = *((_QWORD *)a3 + 5);
  v42 = v16;
  v17 = v50 * v18 + v15 * v49;
  LODWORD(v18) = 0;
  v43 = *((_QWORD *)a3 + 13) + v17;
  if ( v13 )
  {
    v37 = 1;
    v19 = y + v13;
    v38 = y - *((_DWORD *)a3 + 28);
    v20 = *((_DWORD *)a3 + 3);
    v39 = v13;
    if ( y <= v20 && v19 >= *((_DWORD *)a3 + 1) )
    {
      if ( v19 > v20 )
        v39 = v20 - y;
      v36 = y;
      v21 = v13 * (x + 1LL) - v14 * (__int64)y;
      v31 = v21 - 1;
      if ( v14 <= 0 )
      {
        if ( v14 >= 0 )
        {
          v22 = 0;
          v32 = 0LL;
          v23 = 0;
        }
        else
        {
          v29 = -v14;
          v24 = (-1 - v14) / v13;
          v25 = v13 * (v24 + 1);
          v22 = ~v24;
          LODWORD(v32) = v22;
          v23 = v14 + v25;
          HIDWORD(v32) = v23;
        }
      }
      else
      {
        LODWORD(v32) = v14 / v13;
        v22 = v14 / v13;
        v23 = v14 % v13;
        HIDWORD(v32) = v23;
      }
      v26 = y * v23 + v21 - 1;
      if ( v26 <= 0 )
      {
        if ( v26 < 0 )
          v18 = ~(~v26 / v13);
      }
      else
      {
        LODWORD(v18) = v26 / v13;
      }
      v35 = y * v22 + v18;
      v33 = v26 - v13 * v18;
      v34 = v13 - v33 - 1;
      v44 = v51 * v22 + v7;
      v45 = v52 * v22 + v8;
      v46 = v53 * v22 + v48;
      v47 = v49 * v22 + v50;
      vEdgeDDA(a3, (struct _TRIDDA *)&v27);
    }
  }
  else
  {
    vHorizontalLine(a1, a2, a3, (struct _TRIDDA *)&v27);
  }
}
