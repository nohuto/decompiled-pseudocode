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
  __int64 *v28; // r12
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  char *v31; // rax
  char *v32; // rax
  _QWORD *v33; // r14
  __int64 *v34; // r13
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  char *v39; // rax
  _QWORD *v40; // rax
  char *v41; // rax
  __int64 v42; // r8
  unsigned __int64 v43; // rdx
  __int64 v44; // rdi
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // r8
  int v48; // r10d
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  signed __int64 v52; // r8
  __int64 v53; // rcx
  unsigned __int64 v54; // r8
  __int64 v55; // rdi
  unsigned __int64 v56; // r10
  unsigned __int64 v57; // r11
  unsigned __int64 v58; // rbx
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // r8
  int v61; // edx
  __int64 v62; // rax
  __int64 v63; // r8
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  __int64 v66; // rcx
  unsigned __int64 v67; // rax
  char *v68; // rdi
  char *v69; // rax
  __int64 *v70; // rbx
  char *v71; // rax
  unsigned __int64 *v72; // rax
  unsigned __int64 *v73; // rax
  __int64 v74; // rbx
  char *v75; // rdi
  __int64 *v76; // rdx
  __int64 v77; // rbx
  __int64 v78; // r10
  __int64 v79; // r9
  char *v80; // rax
  char *v81; // rax
  char *v82; // rax
  char *v83; // rbx
  char *v84; // rax
  char *v85; // rax
  char *v86; // rax
  char *v87; // rax
  _QWORD *result; // rax
  __int64 v89; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v90; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v91; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *i; // [rsp+38h] [rbp-C8h]
  _QWORD *v93; // [rsp+40h] [rbp-C0h]
  char v94[24]; // [rsp+48h] [rbp-B8h] BYREF
  char v95[32]; // [rsp+60h] [rbp-A0h] BYREF
  char v96[80]; // [rsp+80h] [rbp-80h] BYREF
  char v97[24]; // [rsp+D0h] [rbp-30h] BYREF
  char v98[24]; // [rsp+E8h] [rbp-18h] BYREF
  char v99[80]; // [rsp+100h] [rbp+0h] BYREF
  char v100[80]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v101[10]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v102[80]; // [rsp+1F0h] [rbp+F0h] BYREF
  char v103[80]; // [rsp+240h] [rbp+140h] BYREF
  char v104[80]; // [rsp+290h] [rbp+190h] BYREF
  char v105[80]; // [rsp+2E0h] [rbp+1E0h] BYREF
  char v106[80]; // [rsp+330h] [rbp+230h] BYREF
  char v107[80]; // [rsp+380h] [rbp+280h] BYREF

  v90 = a4;
  v6 = (_QWORD *)a3;
  v91 = a3;
  v93 = a2;
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
    if ( v8 != &v89 )
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
    memset_0(a1, 0, 0x1B0uLL);
    if ( a1 + 53 != &v89 )
      a1[53] = v18;
    if ( v19 != &v89 )
      *v19 = v20;
    if ( a1 + 51 != &v89 )
      a1[51] = v17;
    if ( a1 + 52 != &v89 )
      a1[52] = v21;
    v22 = a1 + 48;
    if ( a1 + 48 != v19 )
      *v22 = *v19;
    v23 = Div128by64(1LL, 0LL, *v22, &v89);
    if ( a1 + 49 != &v89 )
      a1[49] = v23;
    Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(a1 + 18, a1 + 53);
    v89 = 0x100000000LL;
    Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(a1 + 36, &v89);
    v7 = a1 + 2;
    v6 = (_QWORD *)v91;
  }
  v24 = Prediction::operator*<Prediction::CFixPred,3>(v94, (__int64)(a1 + 18), a1);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 12, (__int64)v24);
  v25 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v91, a1, (__int64)(a1 + 12));
  v26 = a1 + 45;
  if ( a1 + 45 != (_QWORD *)v25 )
    *v26 = *(_QWORD *)v25;
  v27 = *v26;
  v28 = a1 + 48;
  v29 = *v26 + a1[48];
  if ( v26 != &v91 )
  {
    *v26 = v29;
    v27 = v29;
  }
  v30 = Div128by64(1LL, 0LL, v27, &v91);
  if ( v26 != &v91 )
    *v26 = v30;
  v31 = Prediction::operator*<Prediction::CFixPred,3>(v94, (__int64)(a1 + 12), a1 + 45);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 9, (__int64)v31);
  v32 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v91, a1 + 6, (__int64)a1);
  v33 = a1 + 46;
  if ( a1 + 46 != (_QWORD *)v32 )
    *v33 = *(_QWORD *)v32;
  v34 = a1 + 47;
  if ( a1 + 47 != &v90 )
    *v34 = *(_QWORD *)v90 - *v33;
  v35 = Prediction::operator*<Prediction::CFixPred,3>(v94, (__int64)(a1 + 9), a1 + 47);
  v36 = Prediction::operator+<Prediction::CFixPred,3>(v95, (__int64)(a1 + 6), (__int64)v35);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 6, (__int64)v36);
  v37 = Prediction::operator^<Prediction::CFixPred,3>(v96, (__int64)(a1 + 9), (__int64)(a1 + 12));
  v38 = Prediction::operator-<Prediction::CFixPred,3>(v99, (__int64)(a1 + 18), (__int64)v37);
  v39 = Prediction::operator*<Prediction::CFixPred,3>(v100, (__int64)v38, a1 + 49);
  v40 = Prediction::Tri<Prediction::CFixPred,3>(v101, (__int64)v39);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::operator=(a1 + 18, (__int64)v40);
  v41 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v90, a1 + 15, (__int64)a1);
  v42 = *v34;
  v43 = -*(_QWORD *)v41;
  v44 = (*v34 ^ *(_QWORD *)v41) >> 63;
  if ( *(__int64 *)v41 >= 0 )
    v43 = *(_QWORD *)v41;
  v45 = -v42;
  if ( v42 >= 0 )
    v45 = *v34;
  v46 = (unsigned int)v45 * (unsigned __int64)(unsigned int)v43;
  v47 = (unsigned int)v43 * HIDWORD(v45);
  v48 = HIDWORD(v43) * HIDWORD(v45);
  v49 = HIDWORD(v46) + (unsigned int)v45 * HIDWORD(v43);
  v50 = a1[50];
  v51 = v44 ^ ((unsigned int)(v49 + v47) | ((unsigned __int64)(unsigned int)((((unsigned int)v49 + v47) >> 32)
                                                                           + v48
                                                                           + HIDWORD(v49)) << 32));
  v52 = v51 - v44;
  if ( (_DWORD)v46 )
    v52 = v51;
  if ( v52 >= v50 )
  {
    v50 = v52;
    if ( v52 > a1[51] )
      v50 = a1[51];
  }
  v53 = a1[52];
  v54 = -v53;
  v55 = (v50 ^ v53) >> 63;
  if ( v53 >= 0 )
    v54 = a1[52];
  v56 = abs64(v50);
  v57 = HIDWORD(v54);
  v58 = (unsigned int)v56 * (unsigned __int64)(unsigned int)v54;
  v59 = HIDWORD(v58) + (unsigned int)v56 * HIDWORD(v54);
  v60 = (unsigned int)v59 + (unsigned int)v54 * HIDWORD(v56);
  v61 = v57 * HIDWORD(v56) + HIDWORD(v59);
  v62 = (unsigned int)v60;
  HIDWORD(v59) = HIDWORD(v60);
  v63 = *v28;
  v64 = v55 ^ (v62 | ((unsigned __int64)(unsigned int)(HIDWORD(v59) + v61) << 32));
  v65 = v64 - v55;
  if ( (_DWORD)v58 )
    v65 = v64;
  v66 = v63 + v65;
  if ( v28 != &v90 )
  {
    *v28 = v66;
    v63 = v66;
  }
  v67 = Div128by64(1LL, 0LL, v63, &v90);
  if ( a1 + 49 != &v90 )
    a1[49] = v67;
  v68 = Prediction::operator^<Prediction::CFixPred,3>((char *)v101, (__int64)(a1 + 9), (__int64)(a1 + 9));
  v69 = Prediction::operator^<Prediction::CFixPred,3>(v100, (__int64)a1, (__int64)(a1 + 9));
  v70 = (__int64 *)Prediction::operator-<Prediction::CFixPred,3>(v99, (__int64)(a1 + 36), (__int64)v69);
  v71 = Prediction::operator^<Prediction::CFixPred,3>(v104, (__int64)(a1 + 9), (__int64)a1);
  v72 = (unsigned __int64 *)Prediction::operator-<Prediction::CFixPred,3>(v105, (__int64)(a1 + 36), (__int64)v71);
  v73 = (unsigned __int64 *)Prediction::operator*<Prediction::CFixPred,3>((__int64)v106, v72, a1 + 27);
  v74 = Prediction::operator*<Prediction::CFixPred,3>((__int64)v107, v73, v70);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>(v96);
  v75 = &v68[-v74];
  v76 = (__int64 *)v96;
  v77 = v74 - (_QWORD)v96;
  v78 = 3LL;
  do
  {
    v79 = 3LL;
    do
    {
      if ( v76 != &v90 )
        *v76 = *(__int64 *)((char *)v76 + v77) + *(_QWORD *)&v75[(_QWORD)v76 + v77];
      ++v76;
      --v79;
    }
    while ( v79 );
    --v78;
  }
  while ( v78 );
  v80 = Prediction::operator-<Prediction::CFixPred,3>(v102, (__int64)v96, (__int64)(a1 + 18));
  v81 = Prediction::operator*<Prediction::CFixPred,3>(v103, (__int64)v80, a1 + 49);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::operator=(a1 + 27, (__int64)v81);
  v82 = Prediction::operator*<Prediction::CFixPred,3>(v95, (__int64)(a1 + 27), a1);
  v83 = Prediction::operator*<Prediction::CFixPred,3>(v94, (__int64)v82, a1 + 47);
  v84 = Prediction::operator^<Prediction::CFixPred,3>(v103, (__int64)(a1 + 9), (__int64)a1);
  v85 = Prediction::operator-<Prediction::CFixPred,3>(v102, (__int64)(a1 + 36), (__int64)v84);
  v86 = Prediction::operator*<Prediction::CFixPred,3>(v97, (__int64)v85, a1 + 15);
  v87 = Prediction::operator+<Prediction::CFixPred,3>(v98, (__int64)v86, (__int64)v83);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 15, (__int64)v87);
  result = v93;
  *v93 = *v33;
  return result;
}
