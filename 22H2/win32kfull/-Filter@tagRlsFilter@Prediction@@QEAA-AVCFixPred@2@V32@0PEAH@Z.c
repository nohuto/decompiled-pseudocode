/*
 * XREFs of ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01EBCF4
 * Callers:
 *     ?InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01EC398 (-InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTI.c)
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01ECF3C (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01EAFD4 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01EB138 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction_ea_1C01EB138.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01EB248 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBV.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01EB340 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV-$Squar.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AVCFixPred@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01EB458 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AVCFixPred@0@AEBV-$Vector@VCFixPred@Prediction@@$0.c)
 *     ??$?GVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01EB548 (--$-GVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$?HVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01EB5C0 (--$-HVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z.c)
 *     ??$?TVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01EB628 (--$-TVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV-.c)
 *     ??$Tri@VCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01EB73C (--$Tri@VCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEB.c)
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01EB7CC (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     ??4?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z @ 0x1C01EB87C (--4-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z @ 0x1C01EB8B8 (--4-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Div128by64@@YA_J_J_K0AEA_J@Z @ 0x1C01EBC50 (-Div128by64@@YA_J_J_K0AEA_J@Z.c)
 *     ?diag@?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAXAEBVCFixPred@2@@Z @ 0x1C01EDDC4 (-diag@-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAXAEBVCFixPred@2@@Z.c)
 */

_QWORD *__fastcall Prediction::tagRlsFilter::Filter(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _QWORD *v6; // r11
  __int64 *v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // r8
  __int64 v10; // rax
  int v11; // r9d
  __int64 *v12; // rdx
  BOOL v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 *v19; // r12
  __int64 v20; // rdi
  __int64 v21; // r14
  __int64 *v22; // r8
  unsigned __int64 v23; // rax
  char *v24; // rax
  char *v25; // rax
  __int64 *v26; // rbx
  __int64 v27; // r8
  __int64 *v28; // r14
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  char *v31; // rax
  char *v32; // rax
  _QWORD *v33; // r13
  __int64 v34; // rax
  __int64 *v35; // r12
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  char *v39; // rax
  char *v40; // rax
  _QWORD *v41; // rax
  char *v42; // rax
  __int64 v43; // r8
  unsigned __int64 v44; // rdx
  __int64 v45; // rdi
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // r8
  int v49; // r11d
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  signed __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rdi
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // r10
  unsigned __int64 v58; // r11
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // r8
  int v62; // edx
  __int64 v63; // rax
  __int64 v64; // r8
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  __int64 v67; // rcx
  unsigned __int64 v68; // rax
  char *v69; // rdi
  char *v70; // rax
  __int64 *v71; // rbx
  char *v72; // rax
  unsigned __int64 *v73; // rax
  unsigned __int64 *v74; // rax
  __int64 v75; // rbx
  char *v76; // rdi
  __int64 *v77; // rdx
  __int64 v78; // rbx
  __int64 v79; // r10
  __int64 v80; // r9
  char *v81; // rax
  char *v82; // rax
  __int64 v83; // rcx
  char *v84; // rax
  char *v85; // rbx
  char *v86; // rax
  char *v87; // rax
  char *v88; // rax
  char *v89; // rax
  _QWORD *result; // rax
  __int64 v91; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v92; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v93; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *i; // [rsp+38h] [rbp-C8h]
  _QWORD *v95; // [rsp+40h] [rbp-C0h]
  char v96[24]; // [rsp+48h] [rbp-B8h] BYREF
  char v97[32]; // [rsp+60h] [rbp-A0h] BYREF
  char v98[80]; // [rsp+80h] [rbp-80h] BYREF
  char v99[24]; // [rsp+D0h] [rbp-30h] BYREF
  char v100[24]; // [rsp+E8h] [rbp-18h] BYREF
  char v101[80]; // [rsp+100h] [rbp+0h] BYREF
  char v102[80]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v103[10]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v104[80]; // [rsp+1F0h] [rbp+F0h] BYREF
  char v105[80]; // [rsp+240h] [rbp+140h] BYREF
  char v106[80]; // [rsp+290h] [rbp+190h] BYREF
  char v107[80]; // [rsp+2E0h] [rbp+1E0h] BYREF
  char v108[80]; // [rsp+330h] [rbp+230h] BYREF
  char v109[80]; // [rsp+380h] [rbp+280h] BYREF

  v92 = a4;
  v6 = (_QWORD *)a3;
  v93 = a3;
  v95 = a2;
  *a5 = 0;
  v7 = a1 + 2;
  for ( i = a5; ; *i = 1 )
  {
    v8 = a1 + 3;
    v9 = a1 + 1;
    v10 = *v7;
    v11 = 2;
    v12 = v7;
    do
    {
      if ( v12 != v9 )
        *v12 = *v9;
      if ( v12 + 3 != v9 + 3 )
        v12[3] = v9[3];
      --v9;
      --v12;
      --v11;
    }
    while ( v11 );
    if ( a1 != v6 )
      *a1 = *v6;
    if ( v8 != &v91 )
      *v8 = v10;
    v13 = 1;
    v14 = a1;
    v15 = 3LL;
    do
    {
      v13 = v13 && *v14 && (v16 = v14[3]) != 0 && (*v14 ^ v16) < 0;
      ++v14;
      --v15;
    }
    while ( v15 );
    if ( !v13 )
      break;
    v17 = a1[51];
    v18 = a1[53];
    v19 = a1 + 50;
    v20 = a1[50];
    v21 = a1[52];
    memset(a1, 0, 0x1B0uLL);
    if ( a1 + 53 != &v91 )
      a1[53] = v18;
    if ( v19 != &v91 )
      *v19 = v20;
    if ( a1 + 51 != &v91 )
      a1[51] = v17;
    if ( a1 + 52 != &v91 )
      a1[52] = v21;
    v22 = a1 + 48;
    if ( a1 + 48 != v19 )
      *v22 = *v19;
    v23 = Div128by64(1LL, 0LL, *v22, &v91);
    if ( a1 + 49 != &v91 )
      a1[49] = v23;
    Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(a1 + 18, a1 + 53);
    v91 = 0x100000000LL;
    Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(a1 + 36, &v91);
    v7 = a1 + 2;
    v6 = (_QWORD *)v93;
  }
  v24 = Prediction::operator*<Prediction::CFixPred,3>(v96, (__int64)(a1 + 18), a1);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 12, (__int64)v24);
  v25 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v93, a1, (__int64)(a1 + 12));
  v26 = a1 + 45;
  if ( a1 + 45 == (_QWORD *)v25 )
  {
    v27 = a1[45];
  }
  else
  {
    v27 = *(_QWORD *)v25;
    *v26 = *(_QWORD *)v25;
  }
  v28 = a1 + 48;
  v29 = v27 + a1[48];
  if ( v26 != &v93 )
  {
    *v26 = v29;
    v27 = v29;
  }
  v30 = Div128by64(1LL, 0LL, v27, &v93);
  if ( v26 != &v93 )
    *v26 = v30;
  v31 = Prediction::operator*<Prediction::CFixPred,3>(v96, (__int64)(a1 + 12), a1 + 45);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 9, (__int64)v31);
  v32 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v93, a1 + 6, (__int64)a1);
  v33 = a1 + 46;
  if ( a1 + 46 == (_QWORD *)v32 )
  {
    v34 = a1[46];
  }
  else
  {
    v34 = *(_QWORD *)v32;
    *v33 = v34;
  }
  v35 = a1 + 47;
  if ( a1 + 47 != &v92 )
    *v35 = *(_QWORD *)v92 - v34;
  v36 = Prediction::operator*<Prediction::CFixPred,3>(v96, (__int64)(a1 + 9), a1 + 47);
  v37 = Prediction::operator+<Prediction::CFixPred,3>(v97, (__int64)(a1 + 6), (__int64)v36);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 6, (__int64)v37);
  v38 = Prediction::operator^<Prediction::CFixPred,3>(v98, (__int64)(a1 + 9), (__int64)(a1 + 12));
  v39 = Prediction::operator-<Prediction::CFixPred,3>(v101, (__int64)(a1 + 18), (__int64)v38);
  v40 = Prediction::operator*<Prediction::CFixPred,3>(v102, (__int64)v39, a1 + 49);
  v41 = Prediction::Tri<Prediction::CFixPred,3>(v103, (__int64)v40);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::operator=(a1 + 18, (__int64)v41);
  v42 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v92, a1 + 15, (__int64)a1);
  v43 = *v35;
  v44 = -*(_QWORD *)v42;
  v45 = (*v35 ^ *(_QWORD *)v42) >> 63;
  if ( *(__int64 *)v42 >= 0 )
    v44 = *(_QWORD *)v42;
  v46 = -v43;
  if ( v43 >= 0 )
    v46 = *v35;
  v47 = (unsigned int)v44 * (unsigned __int64)(unsigned int)v46;
  v48 = HIDWORD(v46);
  v49 = HIDWORD(v44) * HIDWORD(v46);
  v50 = HIDWORD(v47) + (unsigned int)v46 * HIDWORD(v44);
  v51 = a1[50];
  v52 = v45 ^ ((unsigned int)(v50 + v44 * v48) | ((unsigned __int64)(unsigned int)((((unsigned int)v50
                                                                                   + (unsigned int)v44 * v48) >> 32)
                                                                                 + v49
                                                                                 + HIDWORD(v50)) << 32));
  v53 = v52 - v45;
  if ( (_DWORD)v47 )
    v53 = v52;
  if ( v53 >= v51 )
  {
    v51 = v53;
    if ( v53 > a1[51] )
      v51 = a1[51];
  }
  v54 = a1[52];
  v55 = (v54 ^ v51) >> 63;
  v56 = -v54;
  if ( v54 >= 0 )
    v56 = a1[52];
  v57 = abs64(v51);
  v58 = HIDWORD(v56);
  v59 = (unsigned int)v57 * (unsigned __int64)(unsigned int)v56;
  v60 = HIDWORD(v59) + (unsigned int)v57 * HIDWORD(v56);
  v61 = (unsigned int)v60 + (unsigned int)v56 * HIDWORD(v57);
  v62 = v58 * HIDWORD(v57) + HIDWORD(v60);
  v63 = (unsigned int)v61;
  HIDWORD(v60) = HIDWORD(v61);
  v64 = *v28;
  v65 = v55 ^ (v63 | ((unsigned __int64)(unsigned int)(HIDWORD(v60) + v62) << 32));
  v66 = v65 - v55;
  if ( (_DWORD)v59 )
    v66 = v65;
  v67 = v64 + v66;
  if ( v28 != &v92 )
  {
    *v28 = v67;
    v64 = v67;
  }
  v68 = Div128by64(1LL, 0LL, v64, &v92);
  if ( a1 + 49 != &v92 )
    a1[49] = v68;
  v69 = Prediction::operator^<Prediction::CFixPred,3>((char *)v103, (__int64)(a1 + 9), (__int64)(a1 + 9));
  v70 = Prediction::operator^<Prediction::CFixPred,3>(v102, (__int64)a1, (__int64)(a1 + 9));
  v71 = (__int64 *)Prediction::operator-<Prediction::CFixPred,3>(v101, (__int64)(a1 + 36), (__int64)v70);
  v72 = Prediction::operator^<Prediction::CFixPred,3>(v106, (__int64)(a1 + 9), (__int64)a1);
  v73 = (unsigned __int64 *)Prediction::operator-<Prediction::CFixPred,3>(v107, (__int64)(a1 + 36), (__int64)v72);
  v74 = (unsigned __int64 *)Prediction::operator*<Prediction::CFixPred,3>((__int64)v108, v73, a1 + 27);
  v75 = Prediction::operator*<Prediction::CFixPred,3>((__int64)v109, v74, v71);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>(v98);
  v76 = &v69[-v75];
  v77 = (__int64 *)v98;
  v78 = v75 - (_QWORD)v98;
  v79 = 3LL;
  do
  {
    v80 = 3LL;
    do
    {
      if ( v77 != &v92 )
        *v77 = *(__int64 *)((char *)v77 + v78) + *(_QWORD *)&v76[(_QWORD)v77 + v78];
      ++v77;
      --v80;
    }
    while ( v80 );
    --v79;
  }
  while ( v79 );
  v81 = Prediction::operator-<Prediction::CFixPred,3>(v104, (__int64)v98, (__int64)(a1 + 18));
  v82 = Prediction::operator*<Prediction::CFixPred,3>(v105, (__int64)v81, a1 + 49);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::operator=(a1 + 27, (__int64)v82);
  v84 = Prediction::operator*<Prediction::CFixPred,3>(v97, v83, a1);
  v85 = Prediction::operator*<Prediction::CFixPred,3>(v96, (__int64)v84, a1 + 47);
  v86 = Prediction::operator^<Prediction::CFixPred,3>(v105, (__int64)(a1 + 9), (__int64)a1);
  v87 = Prediction::operator-<Prediction::CFixPred,3>(v104, (__int64)(a1 + 36), (__int64)v86);
  v88 = Prediction::operator*<Prediction::CFixPred,3>(v99, (__int64)v87, a1 + 15);
  v89 = Prediction::operator+<Prediction::CFixPred,3>(v100, (__int64)v88, (__int64)v85);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 15, (__int64)v89);
  result = v95;
  *v95 = *v33;
  return result;
}
