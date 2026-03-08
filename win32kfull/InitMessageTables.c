/*
 * XREFs of InitMessageTables @ 0x1C03B6E70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 InitMessageTables()
{
  char v0; // dl
  unsigned __int16 v1; // di
  __int64 v2; // r8
  unsigned __int16 v3; // ax
  unsigned int v4; // edx
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int16 v8; // di
  __int64 v9; // r8
  unsigned __int16 v10; // ax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int16 v15; // di
  __int64 v16; // r8
  unsigned __int16 v17; // ax
  unsigned int v18; // edx
  unsigned int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r8
  unsigned __int16 v23; // ax
  unsigned int v24; // edx
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // r9
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // di
  __int64 v30; // r8
  unsigned __int16 v31; // ax
  unsigned int v32; // edx
  unsigned int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // r9
  unsigned __int16 v36; // di
  __int64 v37; // r8
  unsigned __int16 v38; // ax
  unsigned int v39; // edx
  unsigned int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // r9
  unsigned __int16 v43; // di
  __int64 v44; // r8
  unsigned __int16 v45; // ax
  unsigned int v46; // edx
  unsigned int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // r9
  unsigned __int16 v50; // di
  __int64 v51; // r8
  unsigned __int16 v52; // ax
  unsigned int v53; // edx
  unsigned int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // r9
  unsigned __int16 v57; // di
  __int64 v58; // r8
  unsigned __int16 v59; // ax
  unsigned int v60; // edx
  unsigned int v61; // ecx
  __int64 v62; // rax
  __int64 v63; // r9
  unsigned __int16 v64; // ax
  unsigned __int16 v65; // si
  __int64 v66; // r8
  unsigned __int16 v67; // ax
  unsigned int v68; // edx
  unsigned int v69; // ecx
  __int64 v70; // rax
  __int64 v71; // r9
  __int64 v72; // r8
  unsigned __int16 v73; // ax
  unsigned int v74; // edx
  unsigned int v75; // ecx
  __int64 v76; // rax
  __int64 v77; // r9
  unsigned __int16 v78; // di
  __int64 v79; // r8
  unsigned __int16 v80; // ax
  unsigned int v81; // edx
  unsigned int v82; // ecx
  __int64 v83; // rax
  __int64 v84; // r9
  unsigned __int16 v85; // di
  __int64 v86; // r8
  unsigned __int16 v87; // ax
  unsigned int v88; // edx
  unsigned int v89; // ecx
  __int64 v90; // rax
  __int64 v91; // r9
  unsigned __int16 v92; // di
  __int64 v93; // r8
  unsigned __int16 v94; // ax
  unsigned int v95; // edx
  unsigned int v96; // ecx
  __int64 result; // rax
  __int64 v98; // r9

  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || (v0 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v0 = 0;
  }
  if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      12,
      4,
      3,
      12,
      (__int64)&WPP_ec7b7e6d7dea360f8b258b91fa3b2ce6_Traceguids);
  v1 = 51;
  LODWORD(v2) = 0;
  v3 = 51;
  v4 = 0;
  LODWORD(gSharedInfo[67]) = 0;
  do
  {
    v5 = v4;
    if ( v3 > v4 )
    {
      LODWORD(gSharedInfo[67]) = v3;
      v5 = v3;
    }
    v2 = (unsigned int)(v2 + 1);
    v4 = v5;
    v3 = word_1C0314C50[v2];
  }
  while ( v3 );
  v6 = SharedAlloc((v5 >> 3) + 1, v5);
  gSharedInfo[68] = v6;
  if ( v6 )
  {
    LODWORD(v7) = 0;
    do
    {
      v7 = (unsigned int)(v7 + 1);
      *(_BYTE *)(((unsigned __int64)v1 >> 3) + gSharedInfo[68]) |= 1 << (v1 & 7);
      v1 = word_1C0314C50[v7];
    }
    while ( v1 );
  }
  v8 = 6;
  LODWORD(v9) = 0;
  v10 = 6;
  v11 = 0;
  LODWORD(gSharedInfo[69]) = 0;
  do
  {
    v12 = v11;
    if ( v10 > v11 )
    {
      LODWORD(gSharedInfo[69]) = v10;
      v12 = v10;
    }
    v9 = (unsigned int)(v9 + 1);
    v11 = v12;
    v10 = word_1C0314BB0[v9];
  }
  while ( v10 );
  v13 = SharedAlloc((v12 >> 3) + 1, v12);
  gSharedInfo[70] = v13;
  if ( v13 )
  {
    LODWORD(v14) = 0;
    do
    {
      v14 = (unsigned int)(v14 + 1);
      *(_BYTE *)(((unsigned __int64)v8 >> 3) + gSharedInfo[70]) |= 1 << (v8 & 7);
      v8 = word_1C0314BB0[v14];
    }
    while ( v8 );
  }
  v15 = 57;
  LODWORD(v16) = 0;
  v17 = 57;
  v18 = 0;
  LODWORD(gSharedInfo[25]) = 0;
  do
  {
    v19 = v18;
    if ( v17 > v18 )
    {
      LODWORD(gSharedInfo[25]) = v17;
      v19 = v17;
    }
    v16 = (unsigned int)(v16 + 1);
    v18 = v19;
    v17 = word_1C0315020[v16];
  }
  while ( v17 );
  v20 = SharedAlloc((v19 >> 3) + 1, v19);
  gSharedInfo[26] = v20;
  if ( v20 )
  {
    LODWORD(v21) = 0;
    do
    {
      v21 = (unsigned int)(v21 + 1);
      *(_BYTE *)(((unsigned __int64)v15 >> 3) + gSharedInfo[26]) |= 1 << (v15 & 7);
      v15 = word_1C0315020[v21];
    }
    while ( v15 );
  }
  LODWORD(v22) = 0;
  v23 = 1;
  v24 = 0;
  LODWORD(gSharedInfo[5]) = 0;
  do
  {
    v25 = v24;
    if ( v23 > v24 )
    {
      LODWORD(gSharedInfo[5]) = v23;
      v25 = v23;
    }
    v22 = (unsigned int)(v22 + 1);
    v24 = v25;
    v23 = word_1C0314F90[v22];
  }
  while ( v23 );
  v26 = SharedAlloc((v25 >> 3) + 1, v25);
  gSharedInfo[6] = v26;
  if ( v26 )
  {
    LODWORD(v27) = 0;
    v28 = 1;
    do
    {
      v27 = (unsigned int)(v27 + 1);
      *(_BYTE *)(((unsigned __int64)v28 >> 3) + gSharedInfo[6]) |= 1 << (v28 & 7);
      v28 = word_1C0314F90[v27];
    }
    while ( v28 );
  }
  v29 = 129;
  LODWORD(v30) = 0;
  v31 = 129;
  v32 = 0;
  LODWORD(gSharedInfo[9]) = 0;
  do
  {
    v33 = v32;
    if ( v31 > v32 )
    {
      LODWORD(gSharedInfo[9]) = v31;
      v33 = v31;
    }
    v30 = (unsigned int)(v30 + 1);
    v32 = v33;
    v31 = word_1C0314FD0[v30];
  }
  while ( v31 );
  v34 = SharedAlloc((v33 >> 3) + 1, v33);
  gSharedInfo[10] = v34;
  if ( v34 )
  {
    LODWORD(v35) = 0;
    do
    {
      v35 = (unsigned int)(v35 + 1);
      *(_BYTE *)(((unsigned __int64)v29 >> 3) + gSharedInfo[10]) |= 1 << (v29 & 7);
      v29 = word_1C0314FD0[v35];
    }
    while ( v29 );
  }
  v36 = 15;
  LODWORD(v37) = 0;
  v38 = 15;
  v39 = 0;
  LODWORD(gSharedInfo[11]) = 0;
  do
  {
    v40 = v39;
    if ( v38 > v39 )
    {
      LODWORD(gSharedInfo[11]) = v38;
      v40 = v38;
    }
    v37 = (unsigned int)(v37 + 1);
    v39 = v40;
    v38 = word_1C0314FC0[v37];
  }
  while ( v38 );
  v41 = SharedAlloc((v40 >> 3) + 1, v40);
  gSharedInfo[12] = v41;
  if ( v41 )
  {
    LODWORD(v42) = 0;
    do
    {
      v42 = (unsigned int)(v42 + 1);
      *(_BYTE *)(((unsigned __int64)v36 >> 3) + gSharedInfo[12]) |= 1 << (v36 & 7);
      v36 = word_1C0314FC0[v42];
    }
    while ( v36 );
  }
  v43 = 369;
  LODWORD(v44) = 0;
  v45 = 369;
  v46 = 0;
  LODWORD(gSharedInfo[33]) = 0;
  do
  {
    v47 = v46;
    if ( v45 > v46 )
    {
      LODWORD(gSharedInfo[33]) = v45;
      v47 = v45;
    }
    v44 = (unsigned int)(v44 + 1);
    v46 = v47;
    v45 = word_1C0314F58[v44];
  }
  while ( v45 );
  v48 = SharedAlloc((v47 >> 3) + 1, v47);
  gSharedInfo[34] = v48;
  if ( v48 )
  {
    LODWORD(v49) = 0;
    do
    {
      v49 = (unsigned int)(v49 + 1);
      *(_BYTE *)(((unsigned __int64)v43 >> 3) + gSharedInfo[34]) |= 1 << (v43 & 7);
      v43 = word_1C0314F58[v49];
    }
    while ( v43 );
  }
  v50 = 132;
  LODWORD(v51) = 0;
  v52 = 132;
  v53 = 0;
  LODWORD(gSharedInfo[19]) = 0;
  do
  {
    v54 = v53;
    if ( v52 > v53 )
    {
      LODWORD(gSharedInfo[19]) = v52;
      v54 = v52;
    }
    v51 = (unsigned int)(v51 + 1);
    v53 = v54;
    v52 = word_1C0314F10[v51];
  }
  while ( v52 );
  v55 = SharedAlloc((v54 >> 3) + 1, v54);
  gSharedInfo[20] = v55;
  if ( v55 )
  {
    LODWORD(v56) = 0;
    do
    {
      v56 = (unsigned int)(v56 + 1);
      *(_BYTE *)(((unsigned __int64)v50 >> 3) + gSharedInfo[20]) |= 1 << (v50 & 7);
      v50 = word_1C0314F10[v56];
    }
    while ( v50 );
  }
  v57 = 398;
  LODWORD(v58) = 0;
  v59 = 398;
  v60 = 0;
  LODWORD(gSharedInfo[29]) = 0;
  do
  {
    v61 = v60;
    if ( v59 > v60 )
    {
      LODWORD(gSharedInfo[29]) = v59;
      v61 = v59;
    }
    v58 = (unsigned int)(v58 + 1);
    v60 = v61;
    v59 = word_1C0314E50[v58];
  }
  while ( v59 );
  v62 = SharedAlloc((v61 >> 3) + 1, v61);
  gSharedInfo[30] = v62;
  if ( v62 )
  {
    LODWORD(v63) = 0;
    v64 = 398;
    do
    {
      v63 = (unsigned int)(v63 + 1);
      *(_BYTE *)(((unsigned __int64)v64 >> 3) + gSharedInfo[30]) |= 1 << (v64 & 7);
      v64 = word_1C0314E50[v63];
    }
    while ( v64 );
  }
  v65 = 359;
  LODWORD(v66) = 0;
  v67 = 359;
  v68 = 0;
  LODWORD(gSharedInfo[21]) = 0;
  do
  {
    v69 = v68;
    if ( v67 > v68 )
    {
      LODWORD(gSharedInfo[21]) = v67;
      v69 = v67;
    }
    v66 = (unsigned int)(v66 + 1);
    v68 = v69;
    v67 = word_1C0314DA0[v66];
  }
  while ( v67 );
  v70 = SharedAlloc((v69 >> 3) + 1, v69);
  gSharedInfo[22] = v70;
  if ( v70 )
  {
    LODWORD(v71) = 0;
    do
    {
      v71 = (unsigned int)(v71 + 1);
      *(_BYTE *)(((unsigned __int64)v65 >> 3) + gSharedInfo[22]) |= 1 << (v65 & 7);
      v65 = word_1C0314DA0[v71];
    }
    while ( v65 );
  }
  LODWORD(v72) = 0;
  v73 = 398;
  v74 = 0;
  LODWORD(gSharedInfo[23]) = 0;
  do
  {
    v75 = v74;
    if ( v73 > v74 )
    {
      LODWORD(gSharedInfo[23]) = v73;
      v75 = v73;
    }
    v72 = (unsigned int)(v72 + 1);
    v74 = v75;
    v73 = word_1C0314E50[v72];
  }
  while ( v73 );
  v76 = SharedAlloc((v75 >> 3) + 1, v75);
  gSharedInfo[24] = v76;
  if ( v76 )
  {
    LODWORD(v77) = 0;
    do
    {
      v77 = (unsigned int)(v77 + 1);
      *(_BYTE *)(((unsigned __int64)v57 >> 3) + gSharedInfo[24]) |= 1 << (v57 & 7);
      v57 = word_1C0314E50[v77];
    }
    while ( v57 );
  }
  v78 = 198;
  LODWORD(v79) = 0;
  v80 = 198;
  v81 = 0;
  LODWORD(gSharedInfo[27]) = 0;
  do
  {
    v82 = v81;
    if ( v80 > v81 )
    {
      LODWORD(gSharedInfo[27]) = v80;
      v82 = v80;
    }
    v79 = (unsigned int)(v79 + 1);
    v81 = v82;
    v80 = word_1C0314CE0[v79];
  }
  while ( v80 );
  v83 = SharedAlloc((v82 >> 3) + 1, v82);
  gSharedInfo[28] = v83;
  if ( v83 )
  {
    LODWORD(v84) = 0;
    do
    {
      v84 = (unsigned int)(v84 + 1);
      *(_BYTE *)(((unsigned __int64)v78 >> 3) + gSharedInfo[28]) |= 1 << (v78 & 7);
      v78 = word_1C0314CE0[v84];
    }
    while ( v78 );
  }
  v85 = 20;
  LODWORD(v86) = 0;
  v87 = 20;
  v88 = 0;
  LODWORD(gSharedInfo[35]) = 0;
  do
  {
    v89 = v88;
    if ( v87 > v88 )
    {
      LODWORD(gSharedInfo[35]) = v87;
      v89 = v87;
    }
    v86 = (unsigned int)(v86 + 1);
    v88 = v89;
    v87 = word_1C0314CB8[v86];
  }
  while ( v87 );
  v90 = SharedAlloc((v89 >> 3) + 1, v89);
  gSharedInfo[36] = v90;
  if ( v90 )
  {
    LODWORD(v91) = 0;
    do
    {
      v91 = (unsigned int)(v91 + 1);
      *(_BYTE *)(((unsigned __int64)v85 >> 3) + gSharedInfo[36]) |= 1 << (v85 & 7);
      v85 = word_1C0314CB8[v91];
    }
    while ( v85 );
  }
  v92 = 2;
  LODWORD(v93) = 0;
  v94 = 2;
  v95 = 0;
  LODWORD(gSharedInfo[37]) = 0;
  do
  {
    v96 = v95;
    if ( v94 > v95 )
    {
      LODWORD(gSharedInfo[37]) = v94;
      v96 = v94;
    }
    v93 = (unsigned int)(v93 + 1);
    v95 = v96;
    v94 = word_1C0314CA8[v93];
  }
  while ( v94 );
  result = SharedAlloc((v96 >> 3) + 1, v96);
  gSharedInfo[38] = result;
  if ( result )
  {
    LODWORD(v98) = 0;
    do
    {
      v98 = (unsigned int)(v98 + 1);
      result = v92 & 7;
      *(_BYTE *)(((unsigned __int64)v92 >> 3) + gSharedInfo[38]) |= 1 << result;
      v92 = word_1C0314CA8[v98];
    }
    while ( v92 );
  }
  return result;
}
