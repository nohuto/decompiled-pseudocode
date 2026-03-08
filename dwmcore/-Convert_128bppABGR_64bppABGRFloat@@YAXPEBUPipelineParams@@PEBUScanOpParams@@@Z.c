/*
 * XREFs of ?Convert_128bppABGR_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802B9B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Convert_128bppABGR_64bppABGRFloat(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int v2; // r11d
  _DWORD *v3; // r10
  _WORD *i; // r9
  unsigned int v5; // edx
  int v6; // r8d
  __int16 v7; // r8
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // edx
  int v13; // r8d
  __int16 v14; // r8
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // edx
  int v20; // r8d
  __int16 v21; // r8
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // edx
  int v27; // r8d
  __int16 v28; // r8
  unsigned int v29; // eax
  int v30; // ecx
  unsigned int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // [rsp+20h] [rbp+8h]
  unsigned int v34; // [rsp+20h] [rbp+8h]
  unsigned int v35; // [rsp+20h] [rbp+8h]

  v2 = *((_DWORD *)a1 + 2);
  v3 = (_DWORD *)*((_QWORD *)a2 + 1);
  for ( i = *(_WORD **)a2; v2; i += 4 )
  {
    --v2;
    v5 = *v3 & 0x7FFFFFFF;
    v6 = HIWORD(*v3) & 0x8000;
    if ( v5 <= 0x47FFEFFF )
    {
      v8 = *v3 & 0x7FFFFFFF;
      if ( v5 >= 0x38800000 )
      {
        v11 = v5 - 939520001;
      }
      else
      {
        v9 = 113 - (v5 >> 23);
        if ( v9 >= 24 )
          v10 = 0;
        else
          v10 = (*v3 & 0x7FFFFF | 0x800000u) >> v9;
        v8 = v10;
        v11 = v10 + 4095;
      }
      v7 = ((((v8 >> 13) & 1) + v11) >> 13) | v6;
    }
    else
    {
      v7 = v6 | 0x7FFF;
    }
    *i = v7;
    v33 = v3[1];
    v12 = v33 & 0x7FFFFFFF;
    v13 = HIWORD(v33) & 0x8000;
    if ( (v33 & 0x7FFFFFFF) <= 0x47FFEFFF )
    {
      v15 = v33 & 0x7FFFFFFF;
      if ( v12 >= 0x38800000 )
      {
        v18 = v12 - 939520001;
      }
      else
      {
        v16 = 113 - (v12 >> 23);
        if ( v16 >= 24 )
          v17 = 0;
        else
          v17 = (v33 & 0x7FFFFF | 0x800000) >> v16;
        v15 = v17;
        v18 = v17 + 4095;
      }
      v14 = ((((v15 >> 13) & 1) + v18) >> 13) | v13;
    }
    else
    {
      v14 = v13 | 0x7FFF;
    }
    i[1] = v14;
    v34 = v3[2];
    v19 = v34 & 0x7FFFFFFF;
    v20 = HIWORD(v34) & 0x8000;
    if ( (v34 & 0x7FFFFFFF) <= 0x47FFEFFF )
    {
      v22 = v34 & 0x7FFFFFFF;
      if ( v19 >= 0x38800000 )
      {
        v25 = v19 - 939520001;
      }
      else
      {
        v23 = 113 - (v19 >> 23);
        if ( v23 >= 24 )
          v24 = 0;
        else
          v24 = (v34 & 0x7FFFFF | 0x800000) >> v23;
        v22 = v24;
        v25 = v24 + 4095;
      }
      v21 = ((((v22 >> 13) & 1) + v25) >> 13) | v20;
    }
    else
    {
      v21 = v20 | 0x7FFF;
    }
    i[2] = v21;
    v35 = v3[3];
    v26 = v35 & 0x7FFFFFFF;
    v27 = HIWORD(v35) & 0x8000;
    if ( (v35 & 0x7FFFFFFF) <= 0x47FFEFFF )
    {
      v29 = v35 & 0x7FFFFFFF;
      if ( v26 >= 0x38800000 )
      {
        v32 = v26 - 939520001;
      }
      else
      {
        v30 = 113 - (v26 >> 23);
        if ( v30 >= 24 )
          v31 = 0;
        else
          v31 = (v35 & 0x7FFFFF | 0x800000) >> v30;
        v29 = v31;
        v32 = v31 + 4095;
      }
      v28 = ((((v29 >> 13) & 1) + v32) >> 13) | v27;
    }
    else
    {
      v28 = v27 | 0x7FFF;
    }
    i[3] = v28;
    v3 += 4;
  }
}
