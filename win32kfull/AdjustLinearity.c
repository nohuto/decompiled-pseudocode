/*
 * XREFs of AdjustLinearity @ 0x1C01A6260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AdjustLinearity(__int64 a1, INT *a2, INT *a3, int *a4)
{
  int v7; // r9d
  int v8; // r8d
  INT v9; // ebx
  INT v10; // r11d
  int v11; // r13d
  int v12; // esi
  int v13; // r10d
  int v14; // r12d
  int v15; // r15d
  int v16; // ecx
  int v17; // edx
  __int64 v18; // rbp
  int v19; // edi
  int v20; // r8d
  __int64 v21; // rax
  int v22; // r10d
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  int v26; // edi
  int v27; // eax
  int v28; // ebp
  unsigned __int16 v29; // bx
  unsigned __int16 v30; // di
  int v31; // r9d
  INT v32; // r10d
  int v33; // r9d
  INT v34; // r8d
  INT v35; // ebx
  INT v36; // eax
  unsigned __int16 v37; // [rsp+20h] [rbp-68h]
  unsigned __int16 v38; // [rsp+22h] [rbp-66h]
  unsigned __int16 v39; // [rsp+24h] [rbp-64h]
  INT v40; // [rsp+34h] [rbp-54h]
  unsigned __int16 v41; // [rsp+38h] [rbp-50h]
  __int64 v42; // [rsp+40h] [rbp-48h]

  if ( a2 && a3 && a1 && *(_DWORD *)a1 <= 0x8000u && *(_DWORD *)(a1 + 4) <= 0x8000u )
  {
    if ( a4 )
    {
      v7 = *a4;
      v8 = a4[2];
      if ( v7 == v8 || a4[1] == a4[3] )
        return;
      v9 = EngMulDiv(*a2 - v7, *(_DWORD *)a1, v8 - v7);
      v40 = v9;
      v10 = EngMulDiv(*a3 - a4[1], *(_DWORD *)(a1 + 4), a4[3] - a4[1]);
    }
    else
    {
      v9 = *a2;
      v10 = *a3;
      v40 = *a2;
    }
    v11 = *(unsigned __int16 *)(a1 + 10);
    v12 = 0;
    v13 = *(unsigned __int16 *)(a1 + 12);
    v14 = *(unsigned __int16 *)(a1 + 8);
    v15 = *(unsigned __int16 *)(a1 + 14);
    v16 = v14 + v11 * v13;
    v17 = v14 + v13 * (v11 + 1);
    do
    {
      v18 = a1 + 8LL * v16;
      if ( v9 >= *(unsigned __int16 *)(v18 + 20) || v9 >= *(unsigned __int16 *)(a1 + 8LL * v17 + 20) )
        v19 = *(unsigned __int16 *)(a1 + 8LL * v16 + 28) <= v9
           && *(unsigned __int16 *)(a1 + 8LL * v17 + 28) <= v9
           && v14 + 2 < v13;
      else
        v19 = -(v14 != 0);
      if ( v10 >= *(unsigned __int16 *)(v18 + 22) || v10 >= *(unsigned __int16 *)(a1 + 8 * (v16 + 1LL) + 22) )
        v20 = *(unsigned __int16 *)(a1 + 8LL * v17 + 22) <= v10
           && *(unsigned __int16 *)(a1 + 8LL * v17 + 30) <= v10
           && v11 + 2 < v15;
      else
        v20 = -(v11 != 0);
      if ( !v19 && !v20 )
        break;
      v11 += v20;
      v14 += v19;
      ++v12;
      v16 = v14 + v11 * v13;
      v17 = v14 + v13 * (v11 + 1);
    }
    while ( v12 <= v15 + v13 );
    v21 = v16;
    v42 = v16;
    v22 = *(unsigned __int16 *)(a1 + 8LL * v16 + 22);
    v23 = *(unsigned __int16 *)(a1 + 8LL * v17 + 22);
    if ( (_WORD)v23 != (_WORD)v22 )
    {
      v38 = *(_WORD *)(a1 + 8LL * v17 + 30);
      v37 = *(_WORD *)(a1 + 8 * v21 + 30);
      if ( v38 != v37 )
      {
        v24 = *(unsigned __int16 *)(a1 + 8 * v21 + 28);
        v25 = *(unsigned __int16 *)(a1 + 8 * v21 + 20);
        if ( (_WORD)v24 != (_WORD)v25 )
        {
          v26 = *(unsigned __int16 *)(a1 + 8LL * v17 + 28);
          v27 = *(unsigned __int16 *)(a1 + 8LL * v17 + 20);
          if ( (_WORD)v26 != (_WORD)v27 )
          {
            v28 = *(unsigned __int16 *)(a1 + 8LL * v17 + 20);
            *(_WORD *)(a1 + 8) = v14;
            *(_WORD *)(a1 + 10) = v11;
            v41 = v25 + (v10 - v22) * (v27 - v25) / (v23 - v22);
            v39 = v24 + (v10 - v37) * (v26 - v24) / (v38 - v37);
            v29 = v22 + (v37 - v22) * (v40 - v25) / (v24 - v25);
            v30 = v23 + (v38 - v23) * (v40 - v28) / (v26 - v28);
            if ( v39 != v41 && v30 != v29 )
            {
              v31 = *(unsigned __int16 *)(a1 + 8 * v42 + 16);
              v32 = v31 + (v40 - v41) * (*(unsigned __int16 *)(a1 + 8 * v42 + 24) - v31) / (v39 - v41);
              v33 = *(unsigned __int16 *)(a1 + 8 * v42 + 18);
              v34 = *(_DWORD *)a1;
              v35 = v33 + (v10 - v29) * (*(unsigned __int16 *)(a1 + 8LL * v17 + 18) - v33) / (v30 - v29);
              if ( v32 >= 0 )
              {
                if ( v34 <= v32 )
                  v32 = v34 - 1;
              }
              else
              {
                v32 = 0;
              }
              if ( v35 >= 0 )
              {
                v36 = *(_DWORD *)(a1 + 4);
                if ( v36 <= v35 )
                  v35 = v36 - 1;
              }
              else
              {
                v35 = 0;
              }
              if ( v34 )
              {
                if ( *(_DWORD *)(a1 + 4) )
                {
                  *a2 = *a4 + EngMulDiv(v32, a4[2] - *a4, v34);
                  *a3 = a4[1] + EngMulDiv(v35, a4[3] - a4[1], *(_DWORD *)(a1 + 4));
                }
              }
            }
          }
        }
      }
    }
  }
}
