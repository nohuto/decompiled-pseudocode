NTSTATUS InitializePowerGlobals(void)
{
  NTSTATUS result; // eax
  __int64 v1; // rcx
  NTSTATUS v2; // edi
  char v3; // bl
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  BOOL v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  BOOL v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  unsigned __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  _QWORD OutputBuffer[8]; // [rsp+30h] [rbp-40h] BYREF

  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  result = ZwPowerInformation(SessionPowerInit, 0LL, 0, OutputBuffer, 0x40u);
  v2 = result;
  if ( result >= 0 )
  {
    v3 = OutputBuffer[7];
    *(_BYTE *)SGDGetUserGdiSessionState(v1) = v3;
    v4 = 1000 * LODWORD(OutputBuffer[2]);
    *(_DWORD *)(SGDGetUserSessionState(v6, v5, v7, v8) + 2864) = v4;
    v9 = LODWORD(OutputBuffer[3]) == 1;
    *(_DWORD *)(SGDGetUserSessionState(v11, v10, v12, v13) + 2956) = v9;
    v14 = HIDWORD(OutputBuffer[3]) == 0;
    *(_DWORD *)(SGDGetUserSessionState(v16, v15, v17, v18) + 2968) = v14;
    v19 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_DWORD *)(SGDGetUserSessionState(v21, v20, v22, v23) + 2988) = v19;
    *(_DWORD *)(SGDGetUserSessionState(v25, v24, v26, v27) + 2964) = 0;
    v32 = SGDGetUserSessionState(v29, v28, v30, v31);
    v33 = LOBYTE(OutputBuffer[6]);
    *(_DWORD *)(v32 + 2996) = LOBYTE(OutputBuffer[6]);
    LODWORD(v19) = HIDWORD(OutputBuffer[6]) != 0;
    *(_DWORD *)(SGDGetUserSessionState(v33, v34, v35, v36) + 3000) = v19;
    *(_DWORD *)(SGDGetUserSessionState(v38, v37, v39, v40) + 3080) = 1;
    *(_QWORD *)(SGDGetUserSessionState(v42, v41, v43, v44) + 3024) = 0LL;
    v45 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
    v46 = (v45 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    *(_QWORD *)(SGDGetUserSessionState(v45, v46, v47, v48) + 3040) = v46;
    *(_QWORD *)(SGDGetUserSessionState(v50, v49, v51, v52) + 3048) = 0LL;
    *(_QWORD *)(SGDGetUserSessionState(v54, v53, v55, v56) + 3056) = 0LL;
    *(_QWORD *)(SGDGetUserSessionState(v58, v57, v59, v60) + 3064) = 0LL;
    v61 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
    v62 = (v61 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    *(_QWORD *)(SGDGetUserSessionState(v61, v62, v63, v64) + 3032) = v62;
    *(_DWORD *)(SGDGetUserSessionState(v66, v65, v67, v68) + 3072) = 0;
    v69 = OutputBuffer[0];
    *(_QWORD *)(SGDGetUserSessionState(v71, v70, v72, v73) + 2928) = v69;
    v74 = OutputBuffer[1];
    *(_QWORD *)(SGDGetUserSessionState(v76, v75, v77, v78) + 2896) = v74;
    LODWORD(v74) = 1000 * HIDWORD(OutputBuffer[2]);
    *(_DWORD *)(SGDGetUserSessionState(v80, v79, v81, v82) + 2872) = v74;
    v87 = SGDGetUserSessionState(v84, v83, v85, v86);
    v88 = LODWORD(OutputBuffer[5]);
    *(_DWORD *)(v87 + 3104) = OutputBuffer[5];
    v92 = SGDGetUserSessionState(v88, v89, v90, v91);
    v93 = HIDWORD(OutputBuffer[4]);
    *(_DWORD *)(v92 + 3096) = HIDWORD(OutputBuffer[4]);
    v97 = SGDGetUserSessionState(v93, v94, v95, v96);
    v98 = LODWORD(OutputBuffer[4]);
    *(_DWORD *)(v97 + 3088) = OutputBuffer[4];
    v102 = SGDGetUserSessionState(v98, v99, v100, v101);
    v103 = HIDWORD(OutputBuffer[5]);
    *(_DWORD *)(v102 + 3108) = HIDWORD(OutputBuffer[5]);
    v107 = SGDGetUserSessionState(v103, v104, v105, v106);
    v108 = BYTE1(OutputBuffer[6]);
    *(_DWORD *)(v107 + 3004) = BYTE1(OutputBuffer[6]);
    *(_DWORD *)(SGDGetUserSessionState(v108, v109, v110, v111) + 3008) = 0;
    v116 = SGDGetUserSessionState(v113, v112, v114, v115);
    v117 = BYTE1(OutputBuffer[7]);
    *(_DWORD *)(v116 + 3012) = BYTE1(OutputBuffer[7]);
    *(_BYTE *)(SGDGetUserSessionState(v117, v118, v119, v120) + 2856) = 1;
    LODWORD(v74) = *(_DWORD *)(SGDGetUserSessionState(v122, v121, v123, v124) + 3088);
    *(_DWORD *)(SGDGetUserSessionState(v126, v125, v127, v128) + 3116) = v74;
    *(_DWORD *)(SGDGetUserSessionState(v130, v129, v131, v132) + 3120) = -1;
    *(_DWORD *)(SGDGetUserSessionState(v134, v133, v135, v136) + 3124) = -1;
    *(_DWORD *)(SGDGetUserSessionState(v138, v137, v139, v140) + 3128) = -1;
    LODWORD(v74) = *(_DWORD *)(SGDGetUserSessionState(v142, v141, v143, v144) + 3096);
    *(_DWORD *)(SGDGetUserSessionState(v146, v145, v147, v148) + 3132) = v74;
    *(_DWORD *)(SGDGetUserSessionState(v150, v149, v151, v152) + 3136) = -1;
    *(_DWORD *)(SGDGetUserSessionState(v154, v153, v155, v156) + 3140) = -1;
    *(_DWORD *)(SGDGetUserSessionState(v158, v157, v159, v160) + 3144) = -1;
    *(_BYTE *)(SGDGetUserSessionState(v162, v161, v163, v164) + 3148) = 0;
    *(_DWORD *)(SGDGetUserSessionState(v166, v165, v167, v168) + 3112) = -1;
    return v2;
  }
  return result;
}
