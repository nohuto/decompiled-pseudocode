/*
 * XREFs of InitMessageTables @ 0x1C0390BD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall InitMessageTables(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // dl
  unsigned __int16 v4; // di
  __int64 v5; // rdx
  unsigned __int16 v6; // ax
  unsigned int v7; // ecx
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 v11; // di
  __int64 v12; // rdx
  unsigned __int16 v13; // ax
  unsigned int v14; // ecx
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int16 v18; // di
  __int64 v19; // rdx
  unsigned __int16 v20; // ax
  unsigned int v21; // ecx
  __int64 v22; // rax
  unsigned __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  unsigned __int16 v26; // ax
  unsigned int v27; // ecx
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int16 v31; // ax
  unsigned __int16 v32; // di
  __int64 v33; // rdx
  unsigned __int16 v34; // ax
  unsigned int v35; // ecx
  __int64 v36; // rax
  unsigned __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int16 v39; // di
  __int64 v40; // rdx
  unsigned __int16 v41; // ax
  unsigned int v42; // ecx
  __int64 v43; // rax
  unsigned __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int16 v46; // di
  __int64 v47; // rdx
  unsigned __int16 v48; // ax
  unsigned int v49; // ecx
  __int64 v50; // rax
  unsigned __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int16 v53; // di
  __int64 v54; // rdx
  unsigned __int16 v55; // ax
  unsigned int v56; // ecx
  __int64 v57; // rax
  unsigned __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int16 v60; // di
  __int64 v61; // rdx
  unsigned __int16 v62; // ax
  unsigned int v63; // ecx
  __int64 v64; // rax
  unsigned __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int16 v67; // ax
  unsigned __int16 v68; // si
  __int64 v69; // rdx
  unsigned __int16 v70; // ax
  unsigned int v71; // ecx
  __int64 v72; // rax
  unsigned __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  unsigned __int16 v76; // ax
  unsigned int v77; // ecx
  __int64 v78; // rax
  unsigned __int64 v79; // r8
  __int64 v80; // r9
  unsigned __int16 v81; // di
  __int64 v82; // rdx
  unsigned __int16 v83; // ax
  unsigned int v84; // ecx
  __int64 v85; // rax
  unsigned __int64 v86; // r8
  __int64 v87; // r9
  unsigned __int16 v88; // di
  __int64 v89; // rdx
  unsigned __int16 v90; // ax
  unsigned int v91; // ecx
  __int64 v92; // rax
  unsigned __int64 v93; // r8
  __int64 v94; // r9
  unsigned __int16 v95; // di
  __int64 v96; // rdx
  unsigned __int16 v97; // ax
  unsigned int v98; // ecx
  __int64 result; // rax
  __int64 v100; // r9

  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v3 = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      a3,
      12,
      4,
      3,
      12,
      (__int64)&WPP_6ef41bf7ba8b3874ce66483ce5bf9e7b_Traceguids);
  v4 = 51;
  LODWORD(v5) = 0;
  v6 = 51;
  LODWORD(gSharedInfo[67]) = 0;
  do
  {
    v7 = v6;
    if ( (unsigned int)v6 > LODWORD(gSharedInfo[67]) )
      LODWORD(gSharedInfo[67]) = v6;
    else
      v7 = gSharedInfo[67];
    v5 = (unsigned int)(v5 + 1);
    v6 = word_1C02E5F10[v5];
  }
  while ( v6 );
  v8 = SharedAlloc((v7 >> 3) + 1, v5, a3);
  gSharedInfo[68] = v8;
  if ( v8 )
  {
    LODWORD(v10) = 0;
    do
    {
      v10 = (unsigned int)(v10 + 1);
      v9 = (unsigned __int64)v4 >> 3;
      *(_BYTE *)(v9 + gSharedInfo[68]) |= 1 << (v4 & 7);
      v4 = word_1C02E5F10[v10];
    }
    while ( v4 );
  }
  v11 = 6;
  LODWORD(v12) = 0;
  v13 = 6;
  LODWORD(gSharedInfo[69]) = 0;
  do
  {
    v14 = v13;
    if ( (unsigned int)v13 > LODWORD(gSharedInfo[69]) )
      LODWORD(gSharedInfo[69]) = v13;
    else
      v14 = gSharedInfo[69];
    v12 = (unsigned int)(v12 + 1);
    v13 = word_1C02E5E70[v12];
  }
  while ( v13 );
  v15 = SharedAlloc((v14 >> 3) + 1, v12, v9);
  gSharedInfo[70] = v15;
  if ( v15 )
  {
    LODWORD(v17) = 0;
    do
    {
      v17 = (unsigned int)(v17 + 1);
      v16 = (unsigned __int64)v11 >> 3;
      *(_BYTE *)(v16 + gSharedInfo[70]) |= 1 << (v11 & 7);
      v11 = word_1C02E5E70[v17];
    }
    while ( v11 );
  }
  v18 = 57;
  LODWORD(v19) = 0;
  v20 = 57;
  LODWORD(gSharedInfo[25]) = 0;
  do
  {
    v21 = v20;
    if ( (unsigned int)v20 > LODWORD(gSharedInfo[25]) )
      LODWORD(gSharedInfo[25]) = v20;
    else
      v21 = gSharedInfo[25];
    v19 = (unsigned int)(v19 + 1);
    v20 = word_1C02E62E0[v19];
  }
  while ( v20 );
  v22 = SharedAlloc((v21 >> 3) + 1, v19, v16);
  gSharedInfo[26] = v22;
  if ( v22 )
  {
    LODWORD(v24) = 0;
    do
    {
      v24 = (unsigned int)(v24 + 1);
      v23 = (unsigned __int64)v18 >> 3;
      *(_BYTE *)(v23 + gSharedInfo[26]) |= 1 << (v18 & 7);
      v18 = word_1C02E62E0[v24];
    }
    while ( v18 );
  }
  LODWORD(v25) = 0;
  v26 = 1;
  LODWORD(gSharedInfo[5]) = 0;
  do
  {
    v27 = v26;
    if ( (unsigned int)v26 > LODWORD(gSharedInfo[5]) )
      LODWORD(gSharedInfo[5]) = v26;
    else
      v27 = gSharedInfo[5];
    v25 = (unsigned int)(v25 + 1);
    v26 = word_1C02E6250[v25];
  }
  while ( v26 );
  v28 = SharedAlloc((v27 >> 3) + 1, v25, v23);
  gSharedInfo[6] = v28;
  if ( v28 )
  {
    LODWORD(v30) = 0;
    v31 = 1;
    do
    {
      v30 = (unsigned int)(v30 + 1);
      v29 = (unsigned __int64)v31 >> 3;
      *(_BYTE *)(v29 + gSharedInfo[6]) |= 1 << (v31 & 7);
      v31 = word_1C02E6250[v30];
    }
    while ( v31 );
  }
  v32 = 129;
  LODWORD(v33) = 0;
  v34 = 129;
  LODWORD(gSharedInfo[9]) = 0;
  do
  {
    v35 = v34;
    if ( (unsigned int)v34 > LODWORD(gSharedInfo[9]) )
      LODWORD(gSharedInfo[9]) = v34;
    else
      v35 = gSharedInfo[9];
    v33 = (unsigned int)(v33 + 1);
    v34 = word_1C02E6290[v33];
  }
  while ( v34 );
  v36 = SharedAlloc((v35 >> 3) + 1, v33, v29);
  gSharedInfo[10] = v36;
  if ( v36 )
  {
    LODWORD(v38) = 0;
    do
    {
      v38 = (unsigned int)(v38 + 1);
      v37 = (unsigned __int64)v32 >> 3;
      *(_BYTE *)(v37 + gSharedInfo[10]) |= 1 << (v32 & 7);
      v32 = word_1C02E6290[v38];
    }
    while ( v32 );
  }
  v39 = 15;
  LODWORD(v40) = 0;
  v41 = 15;
  LODWORD(gSharedInfo[11]) = 0;
  do
  {
    v42 = v41;
    if ( (unsigned int)v41 > LODWORD(gSharedInfo[11]) )
      LODWORD(gSharedInfo[11]) = v41;
    else
      v42 = gSharedInfo[11];
    v40 = (unsigned int)(v40 + 1);
    v41 = word_1C02E6280[v40];
  }
  while ( v41 );
  v43 = SharedAlloc((v42 >> 3) + 1, v40, v37);
  gSharedInfo[12] = v43;
  if ( v43 )
  {
    LODWORD(v45) = 0;
    do
    {
      v45 = (unsigned int)(v45 + 1);
      v44 = (unsigned __int64)v39 >> 3;
      *(_BYTE *)(v44 + gSharedInfo[12]) |= 1 << (v39 & 7);
      v39 = word_1C02E6280[v45];
    }
    while ( v39 );
  }
  v46 = 369;
  LODWORD(v47) = 0;
  v48 = 369;
  LODWORD(gSharedInfo[33]) = 0;
  do
  {
    v49 = v48;
    if ( (unsigned int)v48 > LODWORD(gSharedInfo[33]) )
      LODWORD(gSharedInfo[33]) = v48;
    else
      v49 = gSharedInfo[33];
    v47 = (unsigned int)(v47 + 1);
    v48 = word_1C02E6218[v47];
  }
  while ( v48 );
  v50 = SharedAlloc((v49 >> 3) + 1, v47, v44);
  gSharedInfo[34] = v50;
  if ( v50 )
  {
    LODWORD(v52) = 0;
    do
    {
      v52 = (unsigned int)(v52 + 1);
      v51 = (unsigned __int64)v46 >> 3;
      *(_BYTE *)(v51 + gSharedInfo[34]) |= 1 << (v46 & 7);
      v46 = word_1C02E6218[v52];
    }
    while ( v46 );
  }
  v53 = 132;
  LODWORD(v54) = 0;
  v55 = 132;
  LODWORD(gSharedInfo[19]) = 0;
  do
  {
    v56 = v55;
    if ( (unsigned int)v55 > LODWORD(gSharedInfo[19]) )
      LODWORD(gSharedInfo[19]) = v55;
    else
      v56 = gSharedInfo[19];
    v54 = (unsigned int)(v54 + 1);
    v55 = word_1C02E61D0[v54];
  }
  while ( v55 );
  v57 = SharedAlloc((v56 >> 3) + 1, v54, v51);
  gSharedInfo[20] = v57;
  if ( v57 )
  {
    LODWORD(v59) = 0;
    do
    {
      v59 = (unsigned int)(v59 + 1);
      v58 = (unsigned __int64)v53 >> 3;
      *(_BYTE *)(v58 + gSharedInfo[20]) |= 1 << (v53 & 7);
      v53 = word_1C02E61D0[v59];
    }
    while ( v53 );
  }
  v60 = 398;
  LODWORD(v61) = 0;
  v62 = 398;
  LODWORD(gSharedInfo[29]) = 0;
  do
  {
    v63 = v62;
    if ( (unsigned int)v62 > LODWORD(gSharedInfo[29]) )
      LODWORD(gSharedInfo[29]) = v62;
    else
      v63 = gSharedInfo[29];
    v61 = (unsigned int)(v61 + 1);
    v62 = word_1C02E6110[v61];
  }
  while ( v62 );
  v64 = SharedAlloc((v63 >> 3) + 1, v61, v58);
  gSharedInfo[30] = v64;
  if ( v64 )
  {
    LODWORD(v66) = 0;
    v67 = 398;
    do
    {
      v66 = (unsigned int)(v66 + 1);
      v65 = (unsigned __int64)v67 >> 3;
      *(_BYTE *)(v65 + gSharedInfo[30]) |= 1 << (v67 & 7);
      v67 = word_1C02E6110[v66];
    }
    while ( v67 );
  }
  v68 = 359;
  LODWORD(v69) = 0;
  v70 = 359;
  LODWORD(gSharedInfo[21]) = 0;
  do
  {
    v71 = v70;
    if ( (unsigned int)v70 > LODWORD(gSharedInfo[21]) )
      LODWORD(gSharedInfo[21]) = v70;
    else
      v71 = gSharedInfo[21];
    v69 = (unsigned int)(v69 + 1);
    v70 = word_1C02E6060[v69];
  }
  while ( v70 );
  v72 = SharedAlloc((v71 >> 3) + 1, v69, v65);
  gSharedInfo[22] = v72;
  if ( v72 )
  {
    LODWORD(v74) = 0;
    do
    {
      v74 = (unsigned int)(v74 + 1);
      v73 = (unsigned __int64)v68 >> 3;
      *(_BYTE *)(v73 + gSharedInfo[22]) |= 1 << (v68 & 7);
      v68 = word_1C02E6060[v74];
    }
    while ( v68 );
  }
  LODWORD(v75) = 0;
  v76 = 398;
  LODWORD(gSharedInfo[23]) = 0;
  do
  {
    v77 = v76;
    if ( (unsigned int)v76 > LODWORD(gSharedInfo[23]) )
      LODWORD(gSharedInfo[23]) = v76;
    else
      v77 = gSharedInfo[23];
    v75 = (unsigned int)(v75 + 1);
    v76 = word_1C02E6110[v75];
  }
  while ( v76 );
  v78 = SharedAlloc((v77 >> 3) + 1, v75, v73);
  gSharedInfo[24] = v78;
  if ( v78 )
  {
    LODWORD(v80) = 0;
    do
    {
      v80 = (unsigned int)(v80 + 1);
      v79 = (unsigned __int64)v60 >> 3;
      *(_BYTE *)(v79 + gSharedInfo[24]) |= 1 << (v60 & 7);
      v60 = word_1C02E6110[v80];
    }
    while ( v60 );
  }
  v81 = 198;
  LODWORD(v82) = 0;
  v83 = 198;
  LODWORD(gSharedInfo[27]) = 0;
  do
  {
    v84 = v83;
    if ( (unsigned int)v83 > LODWORD(gSharedInfo[27]) )
      LODWORD(gSharedInfo[27]) = v83;
    else
      v84 = gSharedInfo[27];
    v82 = (unsigned int)(v82 + 1);
    v83 = word_1C02E5FA0[v82];
  }
  while ( v83 );
  v85 = SharedAlloc((v84 >> 3) + 1, v82, v79);
  gSharedInfo[28] = v85;
  if ( v85 )
  {
    LODWORD(v87) = 0;
    do
    {
      v87 = (unsigned int)(v87 + 1);
      v86 = (unsigned __int64)v81 >> 3;
      *(_BYTE *)(v86 + gSharedInfo[28]) |= 1 << (v81 & 7);
      v81 = word_1C02E5FA0[v87];
    }
    while ( v81 );
  }
  v88 = 20;
  LODWORD(v89) = 0;
  v90 = 20;
  LODWORD(gSharedInfo[35]) = 0;
  do
  {
    v91 = v90;
    if ( (unsigned int)v90 > LODWORD(gSharedInfo[35]) )
      LODWORD(gSharedInfo[35]) = v90;
    else
      v91 = gSharedInfo[35];
    v89 = (unsigned int)(v89 + 1);
    v90 = word_1C02E5F78[v89];
  }
  while ( v90 );
  v92 = SharedAlloc((v91 >> 3) + 1, v89, v86);
  gSharedInfo[36] = v92;
  if ( v92 )
  {
    LODWORD(v94) = 0;
    do
    {
      v94 = (unsigned int)(v94 + 1);
      v93 = (unsigned __int64)v88 >> 3;
      *(_BYTE *)(v93 + gSharedInfo[36]) |= 1 << (v88 & 7);
      v88 = word_1C02E5F78[v94];
    }
    while ( v88 );
  }
  v95 = 2;
  LODWORD(v96) = 0;
  v97 = 2;
  LODWORD(gSharedInfo[37]) = 0;
  do
  {
    v98 = v97;
    if ( (unsigned int)v97 > LODWORD(gSharedInfo[37]) )
      LODWORD(gSharedInfo[37]) = v97;
    else
      v98 = gSharedInfo[37];
    v96 = (unsigned int)(v96 + 1);
    v97 = word_1C02E5F68[v96];
  }
  while ( v97 );
  result = SharedAlloc((v98 >> 3) + 1, v96, v93);
  gSharedInfo[38] = result;
  if ( result )
  {
    LODWORD(v100) = 0;
    do
    {
      v100 = (unsigned int)(v100 + 1);
      result = v95 & 7;
      *(_BYTE *)(((unsigned __int64)v95 >> 3) + gSharedInfo[38]) |= 1 << result;
      v95 = word_1C02E5F68[v100];
    }
    while ( v95 );
  }
  return result;
}
