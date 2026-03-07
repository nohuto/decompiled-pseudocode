void __fastcall AlphaDivide_64bppABGRFloat(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  unsigned __int16 *v2; // rbx
  float v3; // xmm1_4
  int v4; // r11d
  float v5; // xmm1_4
  unsigned __int16 *v6; // r10
  float v7; // edx
  int v8; // r8d
  __int16 v9; // r8
  float v10; // eax
  int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  int v14; // eax
  float v15; // edx
  unsigned int v16; // r8d
  __int16 v17; // r8
  float v18; // eax
  int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // ecx
  float v22; // xmm1_4
  _WORD *v23; // r9
  __int64 v24; // r10
  float v25; // edx
  int v26; // r8d
  __int16 v27; // r8
  float v28; // eax
  int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // edx
  int v33; // r8d
  __int16 v34; // r8
  unsigned int v35; // eax
  int v36; // ecx
  unsigned int v37; // edx
  unsigned int v38; // ecx
  float v39; // xmm1_4
  __int64 v40; // r9
  __int64 v41; // r10
  float v42; // edx
  int v43; // r8d
  __int16 v44; // r8
  float v45; // eax
  int v46; // ecx
  unsigned int v47; // edx
  unsigned int v48; // ecx
  unsigned int v49; // edx
  int v50; // r8d
  __int16 v51; // r8
  unsigned int v52; // eax
  int v53; // ecx
  unsigned int v54; // edx
  unsigned int v55; // ecx
  float v56; // xmm1_4
  __int64 v57; // r9
  float v58; // edx
  int v59; // r8d
  __int16 v60; // r8
  float v61; // eax
  int v62; // ecx
  unsigned int v63; // edx
  unsigned int v64; // ecx
  float v65; // [rsp+50h] [rbp+30h] BYREF
  float v66; // [rsp+58h] [rbp+38h] BYREF

  if ( *((_DWORD *)a1 + 2) )
  {
    v2 = (unsigned __int16 *)(*((_QWORD *)a2 + 1) + 6LL);
    do
    {
      v3 = CFloat16::operator float(v2);
      if ( v3 != CFloat16::operator float((unsigned __int16 *)&word_1803E2048) )
      {
        v5 = CFloat16::operator float(v2);
        if ( v5 != CFloat16::operator float(word_1803E3338) )
        {
          v65 = 1.0 / CFloat16::operator float(v2);
          v7 = fabs(v65);
          v8 = HIWORD(LODWORD(v65)) & 0x8000;
          if ( LODWORD(v7) <= 0x47FFEFFF )
          {
            v10 = v7;
            if ( LODWORD(v7) >= 0x38800000 )
            {
              v13 = LODWORD(v7) - 939520001;
            }
            else
            {
              v11 = 113 - (LODWORD(v7) >> 23);
              if ( v11 >= 24 )
                v12 = 0;
              else
                v12 = (LODWORD(v7) & 0x7FFFFF | 0x800000u) >> v11;
              v10 = *(float *)&v12;
              v13 = v12 + 4095;
            }
            v9 = ((((LODWORD(v10) >> 13) & 1) + v13) >> 13) | v8;
          }
          else
          {
            v9 = v8 | 0x7FFF;
          }
          v14 = *v6;
          LOWORD(v65) = v9;
          v66 = (float)v14;
          v15 = fabs((float)v14);
          v16 = HIWORD(COERCE_UNSIGNED_INT((float)v14)) & 0x8000;
          if ( LODWORD(v15) <= 0x47FFEFFF )
          {
            v18 = v15;
            if ( LODWORD(v15) >= 0x38800000 )
            {
              v21 = LODWORD(v15) - 939520001;
            }
            else
            {
              v19 = 113 - (LODWORD(v15) >> 23);
              if ( v19 >= 24 )
                v20 = 0;
              else
                v20 = (LODWORD(v15) & 0x7FFFFF | 0x800000u) >> v19;
              v18 = *(float *)&v20;
              v21 = v20 + 4095;
            }
            v17 = ((((LODWORD(v18) >> 13) & 1) + v21) >> 13) | v16;
          }
          else
          {
            v17 = v16 | 0x7FFF;
          }
          LOWORD(v66) = v17;
          v22 = CFloat16::operator float((unsigned __int16 *)&v66);
          v66 = v22 * CFloat16::operator float((unsigned __int16 *)&v65);
          v25 = fabs(v66);
          v26 = HIWORD(LODWORD(v66)) & 0x8000;
          if ( LODWORD(v25) <= 0x47FFEFFF )
          {
            v28 = v25;
            if ( LODWORD(v25) >= 0x38800000 )
            {
              v31 = LODWORD(v25) - 939520001;
            }
            else
            {
              v29 = 113 - (LODWORD(v25) >> 23);
              if ( v29 >= 24 )
                v30 = 0;
              else
                v30 = (LODWORD(v25) & 0x7FFFFF | 0x800000u) >> v29;
              v28 = *(float *)&v30;
              v31 = v30 + 4095;
            }
            v27 = ((((LODWORD(v28) >> 13) & 1) + v31) >> 13) | v26;
          }
          else
          {
            v27 = v26 | 0x7FFF;
          }
          *v23 = v27;
          v66 = (float)*(unsigned __int16 *)(v24 + 2);
          v32 = LODWORD(v66) & 0x7FFFFFFF;
          v33 = HIWORD(LODWORD(v66)) & 0x8000;
          if ( (LODWORD(v66) & 0x7FFFFFFFu) <= 0x47FFEFFF )
          {
            v35 = LODWORD(v66) & 0x7FFFFFFF;
            if ( v32 >= 0x38800000 )
            {
              v38 = v32 - 939520001;
            }
            else
            {
              v36 = 113 - (v32 >> 23);
              if ( v36 >= 24 )
                v37 = 0;
              else
                v37 = (LODWORD(v66) & 0x7FFFFF | 0x800000u) >> v36;
              v35 = v37;
              v38 = v37 + 4095;
            }
            v34 = ((((v35 >> 13) & 1) + v38) >> 13) | v33;
          }
          else
          {
            v34 = v33 | 0x7FFF;
          }
          LOWORD(v66) = v34;
          v39 = CFloat16::operator float((unsigned __int16 *)&v66);
          v66 = v39 * CFloat16::operator float((unsigned __int16 *)&v65);
          v42 = fabs(v66);
          v43 = HIWORD(LODWORD(v66)) & 0x8000;
          if ( LODWORD(v42) <= 0x47FFEFFF )
          {
            v45 = v42;
            if ( LODWORD(v42) >= 0x38800000 )
            {
              v48 = LODWORD(v42) - 939520001;
            }
            else
            {
              v46 = 113 - (LODWORD(v42) >> 23);
              if ( v46 >= 24 )
                v47 = 0;
              else
                v47 = (LODWORD(v42) & 0x7FFFFF | 0x800000u) >> v46;
              v45 = *(float *)&v47;
              v48 = v47 + 4095;
            }
            v44 = ((((LODWORD(v45) >> 13) & 1) + v48) >> 13) | v43;
          }
          else
          {
            v44 = v43 | 0x7FFF;
          }
          *(_WORD *)(v40 + 2) = v44;
          v66 = (float)*(unsigned __int16 *)(v41 + 4);
          v49 = LODWORD(v66) & 0x7FFFFFFF;
          v50 = HIWORD(LODWORD(v66)) & 0x8000;
          if ( (LODWORD(v66) & 0x7FFFFFFFu) <= 0x47FFEFFF )
          {
            v52 = LODWORD(v66) & 0x7FFFFFFF;
            if ( v49 >= 0x38800000 )
            {
              v55 = v49 - 939520001;
            }
            else
            {
              v53 = 113 - (v49 >> 23);
              if ( v53 >= 24 )
                v54 = 0;
              else
                v54 = (LODWORD(v66) & 0x7FFFFF | 0x800000u) >> v53;
              v52 = v54;
              v55 = v54 + 4095;
            }
            v51 = ((((v52 >> 13) & 1) + v55) >> 13) | v50;
          }
          else
          {
            v51 = v50 | 0x7FFF;
          }
          LOWORD(v66) = v51;
          v56 = CFloat16::operator float((unsigned __int16 *)&v66);
          v65 = v56 * CFloat16::operator float((unsigned __int16 *)&v65);
          v58 = fabs(v65);
          v59 = HIWORD(LODWORD(v65)) & 0x8000;
          if ( LODWORD(v58) <= 0x47FFEFFF )
          {
            v61 = v58;
            if ( LODWORD(v58) >= 0x38800000 )
            {
              v64 = LODWORD(v58) - 939520001;
            }
            else
            {
              v62 = 113 - (LODWORD(v58) >> 23);
              if ( v62 >= 24 )
                v63 = 0;
              else
                v63 = (LODWORD(v58) & 0x7FFFFF | 0x800000u) >> v62;
              v61 = *(float *)&v63;
              v64 = v63 + 4095;
            }
            v60 = ((((LODWORD(v61) >> 13) & 1) + v64) >> 13) | v59;
          }
          else
          {
            v60 = v59 | 0x7FFF;
          }
          *(_WORD *)(v57 + 4) = v60;
          v2 += 4;
        }
      }
    }
    while ( v4 );
  }
}
