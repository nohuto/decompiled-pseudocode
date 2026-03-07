__int64 RIMInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  _QWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // rax
  __int64 Image; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  int v102; // ebx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  int v111; // ebx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  int v120; // ebx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  int v129; // ebx
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  int v138; // ebx
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9

  vInitRIMPnpThreadDelayBugCheckConfig();
  KeQueryPerformanceCounter(&gliQpcFreq);
  v4 = SGDGetUserSessionState(v1, v0, v2, v3);
  *(_QWORD *)(v4 + 224) = 0LL;
  *(_QWORD *)(v4 + 232) = 0LL;
  v9 = SGDGetUserSessionState(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 240) = 0LL;
  *(_QWORD *)(v9 + 248) = 0LL;
  v14 = SGDGetUserSessionState(v11, v10, v12, v13);
  *(_QWORD *)(v14 + 272) = 0LL;
  *(_QWORD *)(v14 + 280) = 0LL;
  v19 = SGDGetUserSessionState(v16, v15, v17, v18);
  *(_QWORD *)(v19 + 288) = 0LL;
  *(_QWORD *)(v19 + 296) = 0LL;
  v24 = (_QWORD *)(SGDGetUserSessionState(v21, v20, v22, v23) + 304);
  v24[1] = v24;
  *v24 = v24;
  v29 = (_QWORD *)(SGDGetUserSessionState(v26, v25, v27, v28) + 320);
  v29[1] = v29;
  *v29 = v29;
  v34 = (_QWORD *)(SGDGetUserSessionState(v31, v30, v32, v33) + 336);
  v34[1] = v34;
  *v34 = v34;
  v39 = SGDGetUserSessionState(v36, v35, v37, v38);
  *(_OWORD *)(v39 + 376) = 0LL;
  *(_OWORD *)(v39 + 392) = 0LL;
  *(_OWORD *)(v39 + 408) = 0LL;
  *(_BYTE *)(SGDGetUserSessionState(v41, v40, v42, v43) + 368) = 1;
  *(_DWORD *)(SGDGetUserSessionState(v45, v44, v46, v47) + 28) = 18;
  v52 = (_QWORD *)(SGDGetUserSessionState(v49, v48, v50, v51) + 376);
  v52[1] = v52;
  *v52 = v52;
  v57 = (_QWORD *)(SGDGetUserSessionState(v54, v53, v55, v56) + 392);
  v57[1] = v57;
  *v57 = v57;
  v62 = (_QWORD *)(SGDGetUserSessionState(v59, v58, v60, v61) + 408);
  v62[1] = v62;
  *v62 = v62;
  Image = rimLoadImage();
  *(_QWORD *)(SGDGetUserSessionState(v65, v64, v66, v67) + 88) = Image;
  if ( *(_QWORD *)(SGDGetUserSessionState(v69, v68, v70, v71) + 88) )
  {
    v76 = SGDGetUserSessionState(v73, v72, v74, v75);
    rimInitAllHidParseDelayLoads(*(_QWORD *)(v76 + 88));
  }
  v77 = SGDGetUserSessionState(v73, v72, v74, v75);
  *(_QWORD *)(v77 + 256) = 0LL;
  *(_QWORD *)(v77 + 264) = 0LL;
  RIMInitOneCoreEditionData();
  *(_QWORD *)(SGDGetUserSessionState(v79, v78, v80, v81) + 424) = 0LL;
  *(_DWORD *)(SGDGetUserSessionState(v83, v82, v84, v85) + 432) = 0;
  *(_DWORD *)(SGDGetUserSessionState(v87, v86, v88, v89) + 436) = 3;
  *(_QWORD *)(SGDGetUserSessionState(v91, v90, v92, v93) + 448) = 0LL;
  *(_DWORD *)(SGDGetUserSessionState(v95, v94, v96, v97) + 464) = 0;
  *(_DWORD *)(SGDGetUserSessionState(v99, v98, v100, v101) + 472) = 1;
  v102 = (unsigned __int8)IsMouseIVEnabled();
  *(_DWORD *)(SGDGetUserSessionState(v104, v103, v105, v106) + 468) = v102;
  *(_DWORD *)(SGDGetUserSessionState(v108, v107, v109, v110) + 480) = 2;
  v111 = (unsigned __int8)IsKeyboardIVEnabled();
  *(_DWORD *)(SGDGetUserSessionState(v113, v112, v114, v115) + 476) = v111;
  *(_DWORD *)(SGDGetUserSessionState(v117, v116, v118, v119) + 488) = 16;
  v120 = (unsigned __int8)IsTouchIVEnabled();
  *(_DWORD *)(SGDGetUserSessionState(v122, v121, v123, v124) + 484) = v120;
  *(_DWORD *)(SGDGetUserSessionState(v126, v125, v127, v128) + 496) = 4;
  v129 = (unsigned __int8)IsPenIVEnabled();
  *(_DWORD *)(SGDGetUserSessionState(v131, v130, v132, v133) + 492) = v129;
  *(_DWORD *)(SGDGetUserSessionState(v135, v134, v136, v137) + 504) = 8;
  v138 = (unsigned __int8)IsPTPIVEnabled();
  *(_DWORD *)(SGDGetUserSessionState(v140, v139, v141, v142) + 500) = v138;
  *(_BYTE *)(SGDGetUserSessionState(v144, v143, v145, v146) + 352) = 1;
  return 0LL;
}
