/*
 * XREFs of RIMTransformCoordinates @ 0x1C01BDE94
 * Callers:
 *     RIMApplyTransforms @ 0x1C01BD0C8 (RIMApplyTransforms.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C01BE1E0 (RIMTransformCoordinatesFromDigitizer.c)
 * Callees:
 *     EngMulDiv @ 0x1C003BF30 (EngMulDiv.c)
 *     ApiSetAdjustLinearity @ 0x1C023BCF8 (ApiSetAdjustLinearity.c)
 */

unsigned __int64 __fastcall RIMTransformCoordinates(__int64 a1, int a2, int *a3, _QWORD *a4, _DWORD *a5)
{
  int v5; // eax
  int v7; // r10d
  INT *v8; // rcx
  int v9; // edi
  int v10; // r11d
  int v11; // r15d
  INT v12; // r12d
  int v13; // edx
  INT v14; // eax
  int v15; // ebx
  INT v16; // r9d
  int v17; // r14d
  INT v18; // esi
  INT v19; // edx
  INT v20; // r10d
  unsigned int v21; // edx
  INT v22; // r9d
  unsigned int v23; // ecx
  INT v24; // r11d
  unsigned int v25; // eax
  INT v26; // eax
  INT v27; // eax
  INT v28; // eax
  INT v29; // eax
  INT v30; // ecx
  int v31; // eax
  bool v32; // zf
  int *v33; // rcx
  int *v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 result; // rax
  _QWORD *v37; // r8
  INT v38; // [rsp+20h] [rbp-48h] BYREF
  INT v39; // [rsp+24h] [rbp-44h]
  int v40; // [rsp+28h] [rbp-40h]
  INT v41; // [rsp+2Ch] [rbp-3Ch]
  INT b[2]; // [rsp+30h] [rbp-38h]
  INT v43; // [rsp+38h] [rbp-30h]
  INT v44; // [rsp+3Ch] [rbp-2Ch]
  INT c; // [rsp+40h] [rbp-28h]
  int v46; // [rsp+44h] [rbp-24h]
  INT v47; // [rsp+48h] [rbp-20h]
  int v48; // [rsp+4Ch] [rbp-1Ch]
  int v49; // [rsp+50h] [rbp-18h]
  int v50; // [rsp+B0h] [rbp+48h] BYREF
  int v51; // [rsp+B8h] [rbp+50h]
  int *v52; // [rsp+C0h] [rbp+58h]
  _QWORD *v53; // [rsp+C8h] [rbp+60h]

  v53 = a4;
  v52 = a3;
  v51 = a2;
  v5 = *(_DWORD *)(a1 + 224);
  v7 = *a3;
  v8 = a3 + 1;
  v46 = 0;
  v9 = v7;
  v49 = v5;
  v10 = v7;
  v11 = 1;
  v12 = *(_DWORD *)(a1 + 128);
  v40 = *(_DWORD *)(a1 + 124);
  v13 = *(_DWORD *)(a1 + 132);
  *a5 = 0;
  v14 = a3[1];
  v15 = v14;
  v48 = v13;
  v16 = v14;
  v17 = v13 - 1;
  v50 = v7;
  v41 = *(_DWORD *)(a1 + 136);
  v38 = v14;
  v39 = v14;
  v18 = v41 - 1;
  *(_QWORD *)b = *(_QWORD *)(a1 + 392);
  v19 = v14;
  if ( *(_QWORD *)b )
  {
    v39 = v14;
    *(_QWORD *)b = **(_QWORD **)b;
    v19 = v14;
    if ( *(_QWORD *)b )
    {
      v46 = 1;
      ApiSetAdjustLinearity(*(_QWORD *)b + 16LL, &v50, &v38, a1 + 124);
      v14 = v38;
      v15 = v38;
      v9 = v50;
      v16 = v38;
      a3 = v52;
      v10 = v50;
      v7 = v50;
      v39 = v38;
      v19 = v38;
      v8 = v52 + 1;
      *v52 = v50;
      *v8 = v14;
    }
  }
  if ( v10 <= v17 )
  {
    v19 = v16;
    if ( v7 < v40 )
    {
      v19 = v39;
      v9 = v40;
      *a3 = v40;
    }
  }
  else
  {
    *a3 = v17;
    v9 = v17;
  }
  if ( v19 <= v18 )
  {
    if ( v14 < v12 )
    {
      *v8 = v12;
      v15 = v12;
    }
  }
  else
  {
    *v8 = v18;
    v15 = v18;
  }
  v20 = *(_DWORD *)(a1 + 212);
  v21 = *(_DWORD *)(a1 + 148);
  v22 = *(_DWORD *)(a1 + 208);
  v23 = *(_DWORD *)(a1 + 220) - v20;
  v24 = *(_DWORD *)(a1 + 136);
  c = *(_DWORD *)(a1 + 152);
  v25 = *(_DWORD *)(a1 + 216) - v22;
  v50 = v9;
  v38 = v15;
  v44 = v24;
  b[0] = v21;
  v47 = v25;
  v43 = v20;
  v39 = v23;
  if ( v21 > v25 )
  {
    v26 = EngMulDiv(v22, *(_DWORD *)(a1 + 132), v21);
    if ( v9 >= v26 )
    {
      if ( v9 > v26 )
      {
        v27 = EngMulDiv(v9 - v26, b[0], v47);
        v9 = v27;
        v50 = v27;
LABEL_16:
        v23 = v39;
        v20 = v43;
        v24 = v44;
        if ( v27 > v17 )
        {
          v9 = v48;
          v50 = v48;
          *a5 = 1;
        }
        goto LABEL_18;
      }
    }
    else
    {
      *a5 = 1;
    }
    v9 = -1;
    v50 = -1;
    v27 = -1;
    goto LABEL_16;
  }
LABEL_18:
  if ( c <= v23 )
  {
    v30 = v41;
    goto LABEL_29;
  }
  v28 = EngMulDiv(v20, v24, c);
  if ( v15 < v28 )
  {
    *a5 = 1;
LABEL_21:
    v29 = -1;
    goto LABEL_22;
  }
  if ( v15 <= v28 )
    goto LABEL_21;
  v29 = EngMulDiv(v15 - v28, c, v39);
LABEL_22:
  v30 = v41;
  v15 = v29;
  v38 = v29;
  if ( v29 > v18 )
  {
    v15 = v41;
    v38 = v41;
    *a5 = 1;
  }
LABEL_29:
  switch ( v49 )
  {
    case 2:
      v38 = v9;
      v9 = v12 + v18 - v15;
      v15 = v38;
      v50 = v9;
LABEL_35:
      v18 = v17;
      v17 = v30 - 1;
      break;
    case 3:
      v9 = v40 + v17 - v9;
      v31 = v18 - v15;
      v50 = v9;
      v15 = v12 + v18 - v15;
      v38 = v12 + v31;
      break;
    case 4:
      v50 = v15;
      v15 = v40 + v17 - v9;
      v9 = v50;
      v38 = v15;
      goto LABEL_35;
  }
  v32 = v46 == 0;
  v33 = v52;
  v34 = v52 + 1;
  *v52 = v9;
  *v34 = v15;
  if ( !v32 )
  {
    v35 = *(_QWORD *)(*(_QWORD *)(a1 + 392) + 80LL);
    if ( v35 )
    {
      ApiSetAdjustLinearity(v35 + 16, &v50, &v38, a1 + 192);
      v33 = v52;
      v9 = v50;
      v15 = v38;
      v34 = v52 + 1;
      *v52 = v50;
      *v34 = v15;
    }
    else
    {
      v33 = v52;
    }
  }
  result = (unsigned __int64)a5;
  v37 = v53;
  if ( *a5 )
  {
    result = *(_QWORD *)v33;
    *v53 = *(_QWORD *)v33;
  }
  if ( v51 )
  {
    if ( (int)*v37 <= v17 && (unsigned int)*v37 != -1 )
      v11 = 0;
    if ( v11 )
    {
      v12 = v40;
      v18 = v17;
      v34 = v33;
      v15 = v9;
    }
    result = (unsigned int)(v18 - v15);
    if ( v15 - v12 < (int)result )
      v18 = v12;
    *v34 = v18;
  }
  return result;
}
