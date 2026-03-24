/*
 * XREFs of ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEBVCMILMatrix@@PEA_NPEAH@Z @ 0x180017A48
 * Callers:
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18001735C (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x180211900 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 */

void __fastcall CRoundedRectangleShape::CalcEdgesAndControlPoints(
        CRoundedRectangleShape *this,
        struct MilPoint2F *a2,
        const struct CMILMatrix *a3,
        bool *a4,
        int *a5)
{
  char v8; // cl
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm6_4
  float v13; // xmm9_4
  float v14; // xmm8_4
  float *v15; // r9
  float v16; // xmm8_4
  float v17; // xmm9_4
  float *v18; // rax
  float v19; // xmm8_4
  float v20; // xmm2_4
  float *v21; // r8
  float v22; // xmm3_4
  float v23; // xmm2_4
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v33; // [rsp+38h] [rbp-D0h]
  __int128 v34; // [rsp+48h] [rbp-C0h]
  __int128 v35; // [rsp+58h] [rbp-B0h]
  __int128 v36; // [rsp+68h] [rbp-A0h]
  __int128 v37; // [rsp+78h] [rbp-90h]
  __int128 v38; // [rsp+88h] [rbp-80h]
  __int128 v39; // [rsp+98h] [rbp-70h]
  __int128 v40; // [rsp+A8h] [rbp-60h]
  __int128 v41; // [rsp+B8h] [rbp-50h]

  *(_DWORD *)a4 = 0;
  *a5 = 0;
  v8 = *((_BYTE *)this + 64);
  v9 = *((float *)this + 6);
  v10 = *((float *)this + 4);
  v11 = *((float *)this + 5);
  if ( v8 )
  {
    v9 = v9 + v10;
    v12 = v11 + *((float *)this + 7);
  }
  else
  {
    v12 = *((float *)this + 7);
  }
  v13 = *((float *)this + 8);
  LODWORD(v32) = *((_DWORD *)this + 4);
  *((float *)&v32 + 1) = v11;
  *((_QWORD *)&v33 + 1) = __PAIR64__(LODWORD(v11), LODWORD(v9));
  *(_QWORD *)&v36 = __PAIR64__(LODWORD(v12), LODWORD(v10));
  *((_QWORD *)&v37 + 1) = __PAIR64__(LODWORD(v12), LODWORD(v9));
  if ( v13 > 0.0 )
  {
    v14 = *((float *)this + 9);
    if ( v14 > 0.0 )
    {
      *a4 = 1;
      ++*a5;
      v8 = *((_BYTE *)this + 64);
      *((float *)&v34 + 1) = v14 + v11;
      *((float *)&v32 + 2) = v13 + v10;
      *(float *)&v34 = v10;
      *((float *)&v32 + 3) = v11;
      *(float *)&v38 = v10;
      *((float *)&v38 + 1) = (float)(v14 + v11) - (float)(v14 * 0.55228478);
      *((float *)&v38 + 3) = v11;
      *((float *)&v38 + 2) = (float)(v13 + v10) - (float)(v13 * 0.55228478);
    }
  }
  v15 = (float *)((char *)this + (-(__int64)(v8 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 40);
  v16 = *v15;
  if ( *v15 > 0.0 )
  {
    v17 = v15[1];
    if ( v17 > 0.0 )
    {
      a4[1] = 1;
      ++*a5;
      v8 = *((_BYTE *)this + 64);
      *((float *)&v34 + 3) = v17 + v11;
      *(float *)&v33 = v9 - v16;
      *((float *)&v33 + 1) = v11;
      *((float *)&v34 + 2) = v9;
      *(_QWORD *)((char *)&v39 + 4) = __PAIR64__(LODWORD(v9), LODWORD(v11));
      *((float *)&v39 + 3) = (float)(v17 + v11) - (float)(v17 * 0.55228478);
      *(float *)&v39 = (float)(v16 * 0.55228478) + (float)(v9 - v16);
    }
  }
  v18 = v15 + 2;
  if ( v8 )
    v18 = v15;
  v19 = *v18;
  if ( *v18 > 0.0 )
  {
    v20 = v18[1];
    if ( v20 > 0.0 )
    {
      a4[2] = 1;
      ++*a5;
      v8 = *((_BYTE *)this + 64);
      *((float *)&v36 + 2) = v10 + v19;
      *((float *)&v36 + 3) = v12;
      *(float *)&v35 = v10;
      *((float *)&v35 + 1) = v12 - v20;
      *((float *)&v41 + 1) = v12;
      *(float *)&v41 = (float)(v10 + v19) - (float)(v19 * 0.55228478);
      *(float *)&v40 = v10;
      *((float *)&v40 + 1) = (float)(v20 * 0.55228478) + (float)(v12 - v20);
    }
  }
  v21 = v18 + 2;
  if ( v8 )
    v21 = v18;
  v22 = *v21;
  if ( *v21 > 0.0 )
  {
    v23 = v21[1];
    if ( v23 > 0.0 )
    {
      a4[3] = 1;
      ++*a5;
      *((float *)&v35 + 2) = v9;
      *((float *)&v35 + 3) = v12 - v23;
      *((float *)&v37 + 1) = v12;
      *(float *)&v37 = v9 - v22;
      *((float *)&v40 + 2) = v9;
      *((float *)&v41 + 3) = v12;
      *((float *)&v40 + 3) = (float)(v23 * 0.55228478) + (float)(v12 - v23);
      *((float *)&v41 + 2) = (float)(v22 * 0.55228478) + (float)(v9 - v22);
    }
  }
  if ( a3 )
  {
    CMILMatrix::Transform(a3, (const struct MilPoint2F *)&v32, a2, 0x14u);
  }
  else
  {
    v24 = v33;
    *(_OWORD *)a2 = v32;
    v25 = v34;
    *((_OWORD *)a2 + 1) = v24;
    v26 = v35;
    *((_OWORD *)a2 + 2) = v25;
    v27 = v36;
    *((_OWORD *)a2 + 3) = v26;
    v28 = v37;
    *((_OWORD *)a2 + 4) = v27;
    v29 = v38;
    *((_OWORD *)a2 + 5) = v28;
    v30 = v40;
    *((_OWORD *)a2 + 6) = v29;
    *((_OWORD *)a2 + 7) = v39;
    v31 = v41;
    *((_OWORD *)a2 + 8) = v30;
    *((_OWORD *)a2 + 9) = v31;
  }
}
