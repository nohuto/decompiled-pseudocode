/*
 * XREFs of ?AllocateSessionGlobalsArea@Full@Gre@@YA_NXZ @ 0x1C00EB048
 * Callers:
 *     AllocateEditionSessionGlobalsArea @ 0x1C00EB030 (AllocateEditionSessionGlobalsArea.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

bool __fastcall Gre::Full::AllocateSessionGlobalsArea(Gre::Full *this)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  _OWORD *v7; // rcx
  __int64 *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  _OWORD *v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rax
  _OWORD *v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int64 v41; // rax
  _OWORD *v42; // rcx
  __int64 *v43; // rax
  __int64 v44; // rdx
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int64 v53; // rax
  _OWORD *v54; // rcx
  __int64 *v55; // rax
  __int64 v56; // rdx
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int64 v65; // rax
  _OWORD *v66; // rcx
  __int64 *v67; // rax
  __int64 v68; // rdx
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int64 v77; // rax
  _OWORD *v78; // rdx
  __int64 *v79; // rcx
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm0
  __int128 v86; // xmm1
  __int128 v87; // xmm0
  __int64 v88; // rcx
  __int64 v90; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v91; // [rsp+30h] [rbp-D8h]
  _BYTE v92[34]; // [rsp+40h] [rbp-C8h] BYREF
  int v93; // [rsp+62h] [rbp-A6h]
  __int128 v94; // [rsp+66h] [rbp-A2h]
  __int128 v95; // [rsp+76h] [rbp-92h]
  __int128 v96; // [rsp+86h] [rbp-82h]
  __int64 v97; // [rsp+96h] [rbp-72h]
  int v98; // [rsp+9Eh] [rbp-6Ah]
  __int16 v99; // [rsp+A2h] [rbp-66h]
  int v100; // [rsp+A4h] [rbp-64h]
  _BYTE v101[520]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v102; // [rsp+2B0h] [rbp+1A8h]
  __int64 v103; // [rsp+2B8h] [rbp+1B0h]

  v1 = SGDGetSessionState(this);
  v2 = Win32AllocPoolZInit(23672LL, 860309319LL);
  *(_QWORD *)(v1 + 32) = v2;
  if ( v2 )
  {
    v90 = 0LL;
    v93 = 0;
    v100 = 0;
    v4 = *(_QWORD *)(SGDGetSessionState(v3) + 32);
    *(_QWORD *)(v4 + 13256) = -1LL;
    *(_QWORD *)(v4 + 8576) = v4 + 8488;
    *(_QWORD *)(v4 + 8592) = &unk_1C03132F0;
    *(_DWORD *)(v4 + 8692) = 1;
    *(_DWORD *)(v4 + 8724) = 1;
    *(_DWORD *)(v4 + 8736) = 1;
    *(_DWORD *)(v4 + 8740) = 1;
    *(_OWORD *)(v4 + 13320) = 0LL;
    *(_DWORD *)(v4 + 14080) = -1;
    *(_QWORD *)(v4 + 13912) = v4 + 13912;
    *(_QWORD *)(v4 + 13920) = v4 + 13912;
    *(_QWORD *)(v4 + 13928) = v4 + 13928;
    *(_QWORD *)(v4 + 13936) = v4 + 13928;
    *(_QWORD *)&v92[24] = 0LL;
    *(_WORD *)&v92[32] = 0;
    v91 = *(_OWORD *)L"FontPackageDontCare";
    v97 = 0LL;
    *(_QWORD *)&v92[16] = *(_QWORD *)L"are";
    v94 = 0LL;
    v98 = 0;
    v95 = 0LL;
    v99 = 0;
    v96 = 0LL;
    *(_OWORD *)v92 = *(_OWORD *)L"ageDontCare";
    memset_0(v101, 0, sizeof(v101));
    v5 = 5LL;
    v102 = 0LL;
    v6 = 5LL;
    v103 = 0LL;
    v7 = (_OWORD *)(v4 + 14088);
    v8 = &v90;
    do
    {
      v9 = *((_OWORD *)v8 + 1);
      *v7 = *(_OWORD *)v8;
      v10 = *((_OWORD *)v8 + 2);
      v7[1] = v9;
      v11 = *((_OWORD *)v8 + 3);
      v7[2] = v10;
      v12 = *((_OWORD *)v8 + 4);
      v7[3] = v11;
      v13 = *((_OWORD *)v8 + 5);
      v7[4] = v12;
      v14 = *((_OWORD *)v8 + 6);
      v7[5] = v13;
      v15 = *((_OWORD *)v8 + 7);
      v8 += 16;
      v7[6] = v14;
      v7 += 8;
      *(v7 - 1) = v15;
      --v6;
    }
    while ( v6 );
    v16 = *(_OWORD *)v8;
    v17 = v8[2];
    LODWORD(v90) = 0;
    *v7 = v16;
    *((_QWORD *)v7 + 2) = v17;
    memset(&v92[16], 0, 18);
    v91 = *(_OWORD *)L"FontPackageRoman";
    HIDWORD(v90) = 16;
    *(_OWORD *)v92 = *(_OWORD *)L"ageRoman";
    v93 = 0;
    v97 = 0LL;
    v98 = 0;
    v99 = 0;
    v94 = 0LL;
    v100 = 0;
    v95 = 0LL;
    v96 = 0LL;
    memset_0(v101, 0, sizeof(v101));
    v18 = (_OWORD *)(v4 + 14752);
    v102 = 0LL;
    v19 = &v90;
    v103 = 0LL;
    v20 = 5LL;
    do
    {
      v21 = *((_OWORD *)v19 + 1);
      *v18 = *(_OWORD *)v19;
      v22 = *((_OWORD *)v19 + 2);
      v18[1] = v21;
      v23 = *((_OWORD *)v19 + 3);
      v18[2] = v22;
      v24 = *((_OWORD *)v19 + 4);
      v18[3] = v23;
      v25 = *((_OWORD *)v19 + 5);
      v18[4] = v24;
      v26 = *((_OWORD *)v19 + 6);
      v18[5] = v25;
      v27 = *((_OWORD *)v19 + 7);
      v19 += 16;
      v18[6] = v26;
      v18 += 8;
      *(v18 - 1) = v27;
      --v20;
    }
    while ( v20 );
    v28 = *(_OWORD *)v19;
    v29 = v19[2];
    LODWORD(v90) = 0;
    *v18 = v28;
    *((_QWORD *)v18 + 2) = v29;
    memset(&v92[16], 0, 18);
    v91 = *(_OWORD *)L"FontPackageSwiss";
    HIDWORD(v90) = 32;
    *(_OWORD *)v92 = *(_OWORD *)L"ageSwiss";
    v93 = 0;
    v97 = 0LL;
    v98 = 0;
    v99 = 0;
    v94 = 0LL;
    v100 = 0;
    v95 = 0LL;
    v96 = 0LL;
    memset_0(v101, 0, sizeof(v101));
    v30 = (_OWORD *)(v4 + 15416);
    v102 = 0LL;
    v31 = &v90;
    v103 = 0LL;
    v32 = 5LL;
    do
    {
      v33 = *((_OWORD *)v31 + 1);
      *v30 = *(_OWORD *)v31;
      v34 = *((_OWORD *)v31 + 2);
      v30[1] = v33;
      v35 = *((_OWORD *)v31 + 3);
      v30[2] = v34;
      v36 = *((_OWORD *)v31 + 4);
      v30[3] = v35;
      v37 = *((_OWORD *)v31 + 5);
      v30[4] = v36;
      v38 = *((_OWORD *)v31 + 6);
      v30[5] = v37;
      v39 = *((_OWORD *)v31 + 7);
      v31 += 16;
      v30[6] = v38;
      v30 += 8;
      *(v30 - 1) = v39;
      --v32;
    }
    while ( v32 );
    v40 = *(_OWORD *)v31;
    v41 = v31[2];
    LODWORD(v90) = 0;
    *v30 = v40;
    *((_QWORD *)v30 + 2) = v41;
    *(_DWORD *)&v92[16] = *(_DWORD *)L"n";
    v91 = *(_OWORD *)L"FontPackageModern";
    HIDWORD(v90) = 48;
    *(_QWORD *)&v92[20] = 0LL;
    v94 = 0LL;
    *(_DWORD *)&v92[28] = 0;
    v95 = 0LL;
    *(_WORD *)&v92[32] = 0;
    v96 = 0LL;
    v93 = 0;
    *(_OWORD *)v92 = *(_OWORD *)L"ageModern";
    v97 = 0LL;
    v98 = 0;
    v99 = 0;
    v100 = 0;
    memset_0(v101, 0, sizeof(v101));
    v42 = (_OWORD *)(v4 + 16080);
    v102 = 0LL;
    v43 = &v90;
    v103 = 0LL;
    v44 = 5LL;
    do
    {
      v45 = *((_OWORD *)v43 + 1);
      *v42 = *(_OWORD *)v43;
      v46 = *((_OWORD *)v43 + 2);
      v42[1] = v45;
      v47 = *((_OWORD *)v43 + 3);
      v42[2] = v46;
      v48 = *((_OWORD *)v43 + 4);
      v42[3] = v47;
      v49 = *((_OWORD *)v43 + 5);
      v42[4] = v48;
      v50 = *((_OWORD *)v43 + 6);
      v42[5] = v49;
      v51 = *((_OWORD *)v43 + 7);
      v43 += 16;
      v42[6] = v50;
      v42 += 8;
      *(v42 - 1) = v51;
      --v44;
    }
    while ( v44 );
    v52 = *(_OWORD *)v43;
    v53 = v43[2];
    LODWORD(v90) = 0;
    *v42 = v52;
    *((_QWORD *)v42 + 2) = v53;
    *(_DWORD *)&v92[16] = *(_DWORD *)L"t";
    v91 = *(_OWORD *)L"FontPackageScript";
    HIDWORD(v90) = 64;
    *(_QWORD *)&v92[20] = 0LL;
    v94 = 0LL;
    *(_DWORD *)&v92[28] = 0;
    v95 = 0LL;
    *(_WORD *)&v92[32] = 0;
    v96 = 0LL;
    v93 = 0;
    *(_OWORD *)v92 = *(_OWORD *)L"ageScript";
    v97 = 0LL;
    v98 = 0;
    v99 = 0;
    v100 = 0;
    memset_0(v101, 0, sizeof(v101));
    v54 = (_OWORD *)(v4 + 16744);
    v102 = 0LL;
    v55 = &v90;
    v103 = 0LL;
    v56 = 5LL;
    do
    {
      v57 = *((_OWORD *)v55 + 1);
      *v54 = *(_OWORD *)v55;
      v58 = *((_OWORD *)v55 + 2);
      v54[1] = v57;
      v59 = *((_OWORD *)v55 + 3);
      v54[2] = v58;
      v60 = *((_OWORD *)v55 + 4);
      v54[3] = v59;
      v61 = *((_OWORD *)v55 + 5);
      v54[4] = v60;
      v62 = *((_OWORD *)v55 + 6);
      v54[5] = v61;
      v63 = *((_OWORD *)v55 + 7);
      v55 += 16;
      v54[6] = v62;
      v54 += 8;
      *(v54 - 1) = v63;
      --v56;
    }
    while ( v56 );
    v64 = *(_OWORD *)v55;
    v65 = v55[2];
    LODWORD(v90) = 0;
    *v54 = v64;
    *((_QWORD *)v54 + 2) = v65;
    *(_QWORD *)&v92[24] = *(unsigned int *)L"e";
    v91 = *(_OWORD *)L"FontPackageDecorative";
    HIDWORD(v90) = 80;
    *(_QWORD *)&v92[16] = *(_QWORD *)L"ative";
    v94 = 0LL;
    v95 = 0LL;
    *(_WORD *)&v92[32] = 0;
    v96 = 0LL;
    v93 = 0;
    *(_OWORD *)v92 = *(_OWORD *)L"ageDecorative";
    v97 = 0LL;
    v98 = 0;
    v99 = 0;
    v100 = 0;
    memset_0(v101, 0, sizeof(v101));
    v66 = (_OWORD *)(v4 + 17408);
    v102 = 0LL;
    v67 = &v90;
    v103 = 0LL;
    v68 = 5LL;
    do
    {
      v69 = *((_OWORD *)v67 + 1);
      *v66 = *(_OWORD *)v67;
      v70 = *((_OWORD *)v67 + 2);
      v66[1] = v69;
      v71 = *((_OWORD *)v67 + 3);
      v66[2] = v70;
      v72 = *((_OWORD *)v67 + 4);
      v66[3] = v71;
      v73 = *((_OWORD *)v67 + 5);
      v66[4] = v72;
      v74 = *((_OWORD *)v67 + 6);
      v66[5] = v73;
      v75 = *((_OWORD *)v67 + 7);
      v67 += 16;
      v66[6] = v74;
      v66 += 8;
      *(v66 - 1) = v75;
      --v68;
    }
    while ( v68 );
    v76 = *(_OWORD *)v67;
    v77 = v67[2];
    LODWORD(v90) = 0;
    *v66 = v76;
    *((_QWORD *)v66 + 2) = v77;
    HIDWORD(v90) = 255;
    v91 = *(_OWORD *)L"FontPackage";
    *(_QWORD *)v92 = *(_QWORD *)L"age";
    memset(&v92[8], 0, 26);
    v94 = 0LL;
    v93 = 0;
    v95 = 0LL;
    v97 = 0LL;
    v96 = 0LL;
    v98 = 0;
    v99 = 0;
    v100 = 0;
    memset_0(v101, 0, sizeof(v101));
    v78 = (_OWORD *)(v4 + 18072);
    v102 = 0LL;
    v79 = &v90;
    v103 = 0LL;
    do
    {
      v80 = *((_OWORD *)v79 + 1);
      *v78 = *(_OWORD *)v79;
      v81 = *((_OWORD *)v79 + 2);
      v78[1] = v80;
      v82 = *((_OWORD *)v79 + 3);
      v78[2] = v81;
      v83 = *((_OWORD *)v79 + 4);
      v78[3] = v82;
      v84 = *((_OWORD *)v79 + 5);
      v78[4] = v83;
      v85 = *((_OWORD *)v79 + 6);
      v78[5] = v84;
      v86 = *((_OWORD *)v79 + 7);
      v79 += 16;
      v78[6] = v85;
      v78 += 8;
      *(v78 - 1) = v86;
      --v5;
    }
    while ( v5 );
    v87 = *(_OWORD *)v79;
    v88 = v79[2];
    LOBYTE(v2) = 1;
    *v78 = v87;
    *((_QWORD *)v78 + 2) = v88;
    *(_DWORD *)(v4 + 20248) = -1;
    *(_QWORD *)(v4 + 20256) = -1LL;
    *(_DWORD *)(v4 + 23416) = 1;
    *(_DWORD *)(v4 + 23604) = 15;
    *(_DWORD *)(v4 + 23648) = 3;
  }
  return v2;
}
