void __fastcall ApplyRangeColorKey<GpCCRf16>(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r11d
  __int64 v8; // r10
  __int64 v9; // r12
  int v10; // edi
  __int64 v11; // r9
  double v12; // xmm0_8
  __int64 v13; // r9
  float v14; // xmm1_4
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  double v18; // xmm0_8
  double v19; // xmm0_8
  float v20; // xmm1_4
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  double v24; // xmm0_8
  _QWORD *v25; // r14
  double v26; // xmm0_8
  float v27; // xmm1_4
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  double v31; // xmm0_8
  double v32; // xmm0_8
  float v33; // xmm1_4
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  double v37; // xmm0_8
  double v38; // xmm0_8
  float v39; // xmm1_4
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  double v43; // xmm0_8
  double v44; // xmm0_8
  float v45; // xmm1_4
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  double v49; // xmm0_8
  double v50; // xmm0_8
  __int64 v51; // r9
  float v52; // xmm1_4
  __int64 v53; // rdx
  __int64 v54; // r8
  double v55; // xmm0_8
  double v56; // xmm0_8
  float v57; // xmm1_4
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  double v61; // xmm0_8

  v6 = 0;
  v8 = a1;
  if ( *(int *)(a1 + 12) > 0 )
  {
    v9 = (unsigned int)a2;
    do
    {
      v10 = 0;
      if ( *(int *)(v8 + 8) > 0 )
      {
        v11 = a4 + 2;
        do
        {
          v12 = CFloat16::operator float(a5 + 6, a2, a3, v11);
          v14 = *(float *)&v12;
          v18 = CFloat16::operator float(v13 + 4, v15, v16, v13);
          if ( *(float *)&v18 >= v14 )
          {
            v19 = CFloat16::operator float(v17 + 4, a2, a3, v17);
            v20 = *(float *)&v19;
            v24 = CFloat16::operator float(a6 + 6, v21, v22, v23);
            if ( *(float *)&v24 >= v20 )
            {
              v25 = (_QWORD *)(v17 - 2);
              v26 = CFloat16::operator float(a5, a2, a3, v17);
              v27 = *(float *)&v26;
              v31 = CFloat16::operator float(v25, v28, v29, v30);
              if ( *(float *)&v31 >= v27 )
              {
                v32 = CFloat16::operator float(v25, a2, a3, v17);
                v33 = *(float *)&v32;
                v37 = CFloat16::operator float(a6, v34, v35, v36);
                if ( *(float *)&v37 >= v33 )
                {
                  v38 = CFloat16::operator float(a5 + 2, a2, a3, v17);
                  v39 = *(float *)&v38;
                  v43 = CFloat16::operator float(v42, v40, v41, v42);
                  if ( *(float *)&v43 >= v39 )
                  {
                    v44 = CFloat16::operator float(v17, a2, a3, v17);
                    v45 = *(float *)&v44;
                    v49 = CFloat16::operator float(a6 + 2, v46, v47, v48);
                    if ( *(float *)&v49 >= v45 )
                    {
                      v50 = CFloat16::operator float(a5 + 4, a2, a3, v17);
                      v52 = *(float *)&v50;
                      v55 = CFloat16::operator float(v51 + 2, v53, v54, v51);
                      if ( *(float *)&v55 >= v52 )
                      {
                        v56 = CFloat16::operator float(v17 + 2, a2, a3, v17);
                        v57 = *(float *)&v56;
                        v61 = CFloat16::operator float(a6 + 4, v58, v59, v60);
                        if ( *(float *)&v61 >= v57 )
                          *v25 = 0LL;
                      }
                    }
                  }
                }
              }
            }
          }
          v11 = v17 + 8;
          ++v10;
        }
        while ( v10 < *(_DWORD *)(v8 + 8) );
      }
      a4 += v9;
      ++v6;
    }
    while ( v6 < *(_DWORD *)(v8 + 12) );
  }
}
