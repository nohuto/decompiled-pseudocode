/*
 * XREFs of ?AlphaMultiply_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802BAA60
 * Callers:
 *     <none>
 * Callees:
 *     ??BCFloat16@@QEAAMXZ @ 0x1802B30A4 (--BCFloat16@@QEAAMXZ.c)
 */

void __fastcall AlphaMultiply_64bppABGRFloat(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int v2; // ebx
  unsigned __int16 *v3; // r11
  float v4; // xmm1_4
  float v5; // xmm1_4
  unsigned __int16 *v6; // r10
  unsigned int v7; // edx
  int v8; // r8d
  __int16 v9; // r8
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  float v14; // xmm1_4
  _WORD *v15; // r9
  __int64 v16; // r10
  unsigned __int16 *v17; // r11
  float v18; // edx
  int v19; // r8d
  __int16 v20; // r8
  float v21; // eax
  int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // edx
  int v26; // r8d
  __int16 v27; // r8
  unsigned int v28; // eax
  int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // ecx
  float v32; // xmm1_4
  __int64 v33; // r9
  __int64 v34; // r10
  unsigned __int16 *v35; // r11
  float v36; // edx
  int v37; // r8d
  __int16 v38; // r8
  float v39; // eax
  int v40; // ecx
  unsigned int v41; // edx
  unsigned int v42; // ecx
  unsigned int v43; // edx
  int v44; // r8d
  __int16 v45; // r8
  unsigned int v46; // eax
  int v47; // ecx
  unsigned int v48; // edx
  unsigned int v49; // ecx
  float v50; // xmm1_4
  __int64 v51; // r9
  __int64 v52; // r11
  float v53; // edx
  int v54; // r8d
  __int16 v55; // r8
  float v56; // eax
  int v57; // ecx
  unsigned int v58; // edx
  unsigned int v59; // ecx
  float v60; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 2);
  if ( v2 )
  {
    v3 = (unsigned __int16 *)(*((_QWORD *)a2 + 1) + 6LL);
    do
    {
      --v2;
      v4 = CFloat16::operator float(v3);
      if ( v4 != CFloat16::operator float((unsigned __int16 *)&word_1803E2048) )
      {
        v5 = CFloat16::operator float(v3);
        if ( v5 != CFloat16::operator float(word_1803E3338) )
        {
          v60 = (float)*v6;
          v7 = LODWORD(v60) & 0x7FFFFFFF;
          v8 = HIWORD(LODWORD(v60)) & 0x8000;
          if ( (LODWORD(v60) & 0x7FFFFFFFu) <= 0x47FFEFFF )
          {
            v10 = LODWORD(v60) & 0x7FFFFFFF;
            if ( v7 >= 0x38800000 )
            {
              v13 = v7 - 939520001;
            }
            else
            {
              v11 = 113 - (v7 >> 23);
              if ( v11 >= 24 )
                v12 = 0;
              else
                v12 = (LODWORD(v60) & 0x7FFFFF | 0x800000u) >> v11;
              v10 = v12;
              v13 = v12 + 4095;
            }
            v9 = ((((v10 >> 13) & 1) + v13) >> 13) | v8;
          }
          else
          {
            v9 = v8 | 0x7FFF;
          }
          LOWORD(v60) = v9;
          v14 = CFloat16::operator float(v3);
          v60 = v14 * CFloat16::operator float((unsigned __int16 *)&v60);
          v18 = fabs(v60);
          v19 = HIWORD(LODWORD(v60)) & 0x8000;
          if ( LODWORD(v18) <= 0x47FFEFFF )
          {
            v21 = v18;
            if ( LODWORD(v18) >= 0x38800000 )
            {
              v24 = LODWORD(v18) - 939520001;
            }
            else
            {
              v22 = 113 - (LODWORD(v18) >> 23);
              if ( v22 >= 24 )
                v23 = 0;
              else
                v23 = (LODWORD(v18) & 0x7FFFFF | 0x800000u) >> v22;
              v21 = *(float *)&v23;
              v24 = v23 + 4095;
            }
            v20 = ((((LODWORD(v21) >> 13) & 1) + v24) >> 13) | v19;
          }
          else
          {
            v20 = v19 | 0x7FFF;
          }
          *v15 = v20;
          v60 = (float)*(unsigned __int16 *)(v16 + 2);
          v25 = LODWORD(v60) & 0x7FFFFFFF;
          v26 = HIWORD(LODWORD(v60)) & 0x8000;
          if ( (LODWORD(v60) & 0x7FFFFFFFu) <= 0x47FFEFFF )
          {
            v28 = LODWORD(v60) & 0x7FFFFFFF;
            if ( v25 >= 0x38800000 )
            {
              v31 = v25 - 939520001;
            }
            else
            {
              v29 = 113 - (v25 >> 23);
              if ( v29 >= 24 )
                v30 = 0;
              else
                v30 = (LODWORD(v60) & 0x7FFFFF | 0x800000u) >> v29;
              v28 = v30;
              v31 = v30 + 4095;
            }
            v27 = ((((v28 >> 13) & 1) + v31) >> 13) | v26;
          }
          else
          {
            v27 = v26 | 0x7FFF;
          }
          LOWORD(v60) = v27;
          v32 = CFloat16::operator float(v17);
          v60 = v32 * CFloat16::operator float((unsigned __int16 *)&v60);
          v36 = fabs(v60);
          v37 = HIWORD(LODWORD(v60)) & 0x8000;
          if ( LODWORD(v36) <= 0x47FFEFFF )
          {
            v39 = v36;
            if ( LODWORD(v36) >= 0x38800000 )
            {
              v42 = LODWORD(v36) - 939520001;
            }
            else
            {
              v40 = 113 - (LODWORD(v36) >> 23);
              if ( v40 >= 24 )
                v41 = 0;
              else
                v41 = (LODWORD(v36) & 0x7FFFFF | 0x800000u) >> v40;
              v39 = *(float *)&v41;
              v42 = v41 + 4095;
            }
            v38 = ((((LODWORD(v39) >> 13) & 1) + v42) >> 13) | v37;
          }
          else
          {
            v38 = v37 | 0x7FFF;
          }
          *(_WORD *)(v33 + 2) = v38;
          v60 = (float)*(unsigned __int16 *)(v34 + 4);
          v43 = LODWORD(v60) & 0x7FFFFFFF;
          v44 = HIWORD(LODWORD(v60)) & 0x8000;
          if ( (LODWORD(v60) & 0x7FFFFFFFu) <= 0x47FFEFFF )
          {
            v46 = LODWORD(v60) & 0x7FFFFFFF;
            if ( v43 >= 0x38800000 )
            {
              v49 = v43 - 939520001;
            }
            else
            {
              v47 = 113 - (v43 >> 23);
              if ( v47 >= 24 )
                v48 = 0;
              else
                v48 = (LODWORD(v60) & 0x7FFFFF | 0x800000u) >> v47;
              v46 = v48;
              v49 = v48 + 4095;
            }
            v45 = ((((v46 >> 13) & 1) + v49) >> 13) | v44;
          }
          else
          {
            v45 = v44 | 0x7FFF;
          }
          LOWORD(v60) = v45;
          v50 = CFloat16::operator float(v35);
          v60 = v50 * CFloat16::operator float((unsigned __int16 *)&v60);
          v53 = fabs(v60);
          v54 = HIWORD(LODWORD(v60)) & 0x8000;
          if ( LODWORD(v53) <= 0x47FFEFFF )
          {
            v56 = v53;
            if ( LODWORD(v53) >= 0x38800000 )
            {
              v59 = LODWORD(v53) - 939520001;
            }
            else
            {
              v57 = 113 - (LODWORD(v53) >> 23);
              if ( v57 >= 24 )
                v58 = 0;
              else
                v58 = (LODWORD(v53) & 0x7FFFFF | 0x800000u) >> v57;
              v56 = *(float *)&v58;
              v59 = v58 + 4095;
            }
            v55 = ((((LODWORD(v56) >> 13) & 1) + v59) >> 13) | v54;
          }
          else
          {
            v55 = v54 | 0x7FFF;
          }
          *(_WORD *)(v51 + 4) = v55;
          v3 = (unsigned __int16 *)(v52 + 8);
        }
      }
    }
    while ( v2 );
  }
}
