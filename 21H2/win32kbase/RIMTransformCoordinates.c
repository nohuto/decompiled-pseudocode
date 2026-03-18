/*
 * XREFs of RIMTransformCoordinates @ 0x1C0198AA4
 * Callers:
 *     RIMApplyTransforms @ 0x1C0197E64 (RIMApplyTransforms.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0198DA0 (RIMTransformCoordinatesFromDigitizer.c)
 * Callees:
 *     EngMulDiv @ 0x1C006E450 (EngMulDiv.c)
 *     ApiSetAdjustLinearity @ 0x1C0205998 (ApiSetAdjustLinearity.c)
 */

unsigned __int64 __fastcall RIMTransformCoordinates(__int64 a1, int a2, int *a3, unsigned __int64 *a4, _DWORD *a5)
{
  INT v5; // r11d
  INT *v6; // r15
  int v7; // eax
  int v8; // r10d
  int v9; // r12d
  INT v10; // ebx
  int v11; // edx
  int v12; // r14d
  INT v13; // r13d
  INT v14; // r11d
  INT v15; // esi
  _QWORD *v16; // r11
  int v17; // eax
  INT v18; // edi
  __int64 v19; // rcx
  INT v20; // r10d
  unsigned int v21; // r8d
  INT v22; // r9d
  INT v23; // eax
  INT v24; // r11d
  unsigned int v25; // edx
  INT v26; // eax
  INT v27; // eax
  INT v28; // eax
  INT v29; // eax
  INT v30; // ecx
  int v31; // edi
  unsigned __int64 *v32; // rcx
  __int64 v33; // rcx
  unsigned __int64 result; // rax
  int v35; // [rsp+20h] [rbp-48h] BYREF
  INT v36; // [rsp+24h] [rbp-44h] BYREF
  INT v37; // [rsp+28h] [rbp-40h]
  int v38; // [rsp+2Ch] [rbp-3Ch]
  INT v39; // [rsp+30h] [rbp-38h]
  INT v40; // [rsp+34h] [rbp-34h]
  INT v41; // [rsp+38h] [rbp-30h]
  INT v42; // [rsp+3Ch] [rbp-2Ch]
  INT c; // [rsp+40h] [rbp-28h]
  int v44; // [rsp+44h] [rbp-24h]
  INT v45; // [rsp+48h] [rbp-20h]
  INT b; // [rsp+4Ch] [rbp-1Ch]
  INT v47; // [rsp+50h] [rbp-18h]
  int v48; // [rsp+54h] [rbp-14h]
  __int64 v49; // [rsp+B0h] [rbp+48h]
  int *v51; // [rsp+C0h] [rbp+58h]

  v51 = a3;
  v49 = a1;
  v5 = *(_DWORD *)(a1 + 132);
  v6 = a3 + 1;
  v7 = *(_DWORD *)(a1 + 224);
  v8 = a3[1];
  v9 = 1;
  v44 = 0;
  v10 = v8;
  v11 = *(_DWORD *)(a1 + 124);
  v12 = v5 - 1;
  v13 = *(_DWORD *)(a1 + 128);
  v47 = v5;
  v14 = *(_DWORD *)(a1 + 136);
  v48 = v7;
  v39 = v14;
  v15 = v14 - 1;
  v36 = v8;
  v16 = *(_QWORD **)(a1 + 392);
  *a5 = 0;
  v17 = *a3;
  v18 = *a3;
  v35 = *a3;
  v38 = v11;
  if ( v16 )
  {
    if ( *v16 )
    {
      v19 = *v16 + 16LL;
      v44 = 1;
      ApiSetAdjustLinearity(v19, &v35, &v36);
      v18 = v35;
      v17 = v35;
      v10 = v36;
      v8 = v36;
      a3 = v51;
      a1 = v49;
      *v6 = v36;
      *v51 = v18;
    }
    v11 = v38;
  }
  if ( v17 <= v12 )
  {
    if ( v17 < v11 )
    {
      *a3 = v11;
      v18 = v11;
    }
  }
  else
  {
    *a3 = v12;
    v18 = v12;
  }
  if ( v8 <= v15 )
  {
    if ( v8 < v13 )
    {
      *v6 = v13;
      v10 = v13;
    }
  }
  else
  {
    *v6 = v15;
    v10 = v15;
  }
  v20 = *(_DWORD *)(a1 + 212);
  v21 = *(_DWORD *)(a1 + 148);
  v22 = *(_DWORD *)(a1 + 208);
  v23 = *(_DWORD *)(a1 + 220) - v20;
  v24 = *(_DWORD *)(a1 + 136);
  c = *(_DWORD *)(a1 + 152);
  v25 = *(_DWORD *)(a1 + 216) - v22;
  v35 = v18;
  v36 = v10;
  v41 = v24;
  b = v21;
  v45 = v25;
  v40 = v20;
  v42 = v23;
  v37 = v18;
  if ( v21 > v25 )
  {
    v26 = EngMulDiv(v22, *(_DWORD *)(a1 + 132), v21);
    if ( v18 >= v26 )
    {
      if ( v18 > v26 )
      {
        v27 = EngMulDiv(v18 - v26, b, v45);
LABEL_17:
        v20 = v40;
        v18 = v27;
        v24 = v41;
        v37 = v27;
        v35 = v27;
        if ( v27 > v12 )
        {
          *a5 = 1;
          v18 = v47;
          v35 = v47;
          v37 = v47;
        }
        goto LABEL_19;
      }
    }
    else
    {
      *a5 = 1;
    }
    v27 = -1;
    goto LABEL_17;
  }
LABEL_19:
  if ( c <= (unsigned int)v42 )
  {
    v30 = v39;
    goto LABEL_30;
  }
  v28 = EngMulDiv(v20, v24, c);
  if ( v10 < v28 )
  {
    *a5 = 1;
LABEL_22:
    v29 = -1;
    goto LABEL_23;
  }
  if ( v10 <= v28 )
    goto LABEL_22;
  v29 = EngMulDiv(v10 - v28, c, v42);
LABEL_23:
  v30 = v39;
  v10 = v29;
  v36 = v29;
  if ( v29 > v15 )
  {
    v10 = v39;
    v36 = v39;
    *a5 = 1;
  }
LABEL_30:
  if ( v48 == 2 )
  {
    v31 = v15 - v10;
    v10 = v37;
    v18 = v13 + v31;
LABEL_36:
    v15 = v12;
    v12 = v30 - 1;
    goto LABEL_37;
  }
  if ( v48 != 3 )
  {
    if ( v48 != 4 )
      goto LABEL_38;
    v18 = v10;
    v10 = v38 + v12 - v37;
    goto LABEL_36;
  }
  v18 = v38 + v12 - v37;
  v10 = v15 - v10 + v13;
LABEL_37:
  v36 = v10;
  v35 = v18;
LABEL_38:
  v32 = (unsigned __int64 *)v51;
  *v6 = v10;
  *v51 = v18;
  if ( v44 )
  {
    v33 = *(_QWORD *)(*(_QWORD *)(v49 + 392) + 80LL);
    if ( v33 )
    {
      ApiSetAdjustLinearity(v33 + 16, &v35, &v36);
      v32 = (unsigned __int64 *)v51;
      *v51 = v35;
      *v6 = v36;
    }
    else
    {
      v32 = (unsigned __int64 *)v51;
    }
  }
  result = (unsigned __int64)a5;
  if ( *a5 )
  {
    result = *v32;
    *a4 = *v32;
  }
  if ( a2 )
  {
    if ( (int)*a4 <= v12 && (unsigned int)*a4 != -1 )
      v9 = 0;
    if ( v9 )
    {
      v13 = v38;
      v6 = (INT *)v32;
      v15 = v12;
    }
    result = (unsigned int)(v15 - *v6);
    if ( *v6 - v13 < (int)result )
      v15 = v13;
    *v6 = v15;
  }
  return result;
}
