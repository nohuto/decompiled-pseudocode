/*
 * XREFs of BgpGxBlendRectangle @ 0x140AEF430
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140381538 (BgpTxtDisplayCharacter.c)
 *     BgpTxtDisplayString @ 0x140AEF7A0 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpGxBlendColor @ 0x1403841F8 (BgpGxBlendColor.c)
 *     BgpGxRectangleDestroy @ 0x140AEAA70 (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x140AEAA94 (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxBlendRectangle(_DWORD *a1, _DWORD *a2, _DWORD *a3, __int64 *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 *v6; // rsi
  _DWORD *v8; // r15
  _DWORD *v9; // r14
  unsigned int v10; // r8d
  unsigned int v11; // edx
  unsigned int v12; // r9d
  int v13; // eax
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // r12
  unsigned int v17; // ebp
  __int64 v18; // r8
  __int64 v19; // r8
  unsigned int v20; // ecx
  __int64 v21; // r13
  unsigned int v22; // edx
  unsigned int v23; // r14d
  __int64 v24; // r15
  __int64 v25; // rsi
  bool v26; // zf
  int v28; // [rsp+20h] [rbp-78h]
  __int64 v29; // [rsp+28h] [rbp-70h] BYREF
  unsigned int v30; // [rsp+30h] [rbp-68h]
  unsigned __int64 v31; // [rsp+38h] [rbp-60h] BYREF
  int v32; // [rsp+40h] [rbp-58h]
  __int64 v33; // [rsp+48h] [rbp-50h]
  __int64 v34; // [rsp+50h] [rbp-48h]

  v32 = 0;
  v4 = 0LL;
  v5 = 0;
  v29 = 0LL;
  v6 = a4;
  v8 = a2;
  v9 = a1;
  if ( a4
    && *a1
    && (v10 = *a2) != 0
    && (v11 = a1[1]) != 0
    && (v12 = v8[1]) != 0
    && a1[2] == 32
    && v8[2] == 32
    && v11 >= v12 + *a3
    && *a1 >= v10 + a3[1] )
  {
    v4 = *v6;
    if ( !*v6 )
    {
      v31 = __PAIR64__(v10, v12);
      v13 = BgpGxRectangleCreate(&v31, 32, &v29);
      v4 = v29;
      v5 = v13;
      if ( v13 < 0 )
        goto LABEL_25;
LABEL_15:
      v14 = *(_DWORD *)v4;
      v15 = *(_QWORD *)(v4 + 24);
      v16 = *((_QWORD *)v8 + 3);
      v17 = *(_DWORD *)(v4 + 8) >> 3;
      v18 = v17 * (*a3 + v9[1] * a3[1]);
      v34 = v15;
      LODWORD(v29) = v17;
      v28 = v14;
      v19 = *((_QWORD *)v9 + 3) + v18;
      v33 = v19;
      if ( v14 )
      {
        v20 = *(_DWORD *)(v4 + 4);
        do
        {
          v30 = 0;
          v21 = v16;
          v22 = v20;
          if ( v20 )
          {
            v23 = v30;
            v31 = v17;
            v24 = v19 - v16;
            v25 = v15 - v16;
            do
            {
              *(_DWORD *)(v25 + v21) = BgpGxBlendColor(*(_DWORD *)(v24 + v21), *(_DWORD *)v21, *(_BYTE *)(v21 + 3));
              ++v23;
              v20 = *(_DWORD *)(v4 + 4);
              v21 += v17;
            }
            while ( v23 < v20 );
            v9 = a1;
            v22 = *(_DWORD *)(v4 + 4);
            v8 = a2;
            v17 = v29;
            v19 = v33;
            v15 = v34;
          }
          v16 += v8[1] * v17;
          v19 += v9[1] * v17;
          v15 += v17 * v22;
          v33 = v19;
          v26 = v28-- == 1;
          v34 = v15;
        }
        while ( !v26 );
        v6 = a4;
      }
      goto LABEL_28;
    }
    if ( *(_DWORD *)(v4 + 4) == v12 && *(_DWORD *)v4 == v10 )
      goto LABEL_15;
    v5 = -1073741670;
  }
  else
  {
    v5 = -1073741811;
  }
LABEL_25:
  if ( *v6 )
    return v5;
  if ( v4 )
  {
    BgpGxRectangleDestroy(v4);
    v4 = 0LL;
  }
LABEL_28:
  if ( !*v6 )
    *v6 = v4;
  return v5;
}
