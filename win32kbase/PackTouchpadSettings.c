_DWORD *__fastcall PackTouchpadSettings(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r12d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r14d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // edi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // r15d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // esi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // r13d
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  int v71; // ebp
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  int v76; // edx
  _DWORD *result; // rax
  unsigned int v78; // [rsp+20h] [rbp-68h]
  unsigned int v79; // [rsp+24h] [rbp-64h]
  unsigned int v80; // [rsp+28h] [rbp-60h]
  unsigned int v81; // [rsp+2Ch] [rbp-5Ch]
  unsigned int v82; // [rsp+30h] [rbp-58h]
  unsigned int v83; // [rsp+34h] [rbp-54h]
  unsigned int v85; // [rsp+98h] [rbp+10h]
  unsigned int v86; // [rsp+A0h] [rbp+18h]
  unsigned int v87; // [rsp+A8h] [rbp+20h]

  v4 = a1;
  v5 = (_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4);
  v4[6] = v5[4200];
  v4[7] = v5[4201];
  v6 = (unsigned int)v5[4202];
  v4[8] = v6;
  v4[9] = v5[4204];
  v78 = *(_DWORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 16812);
  v79 = *(_DWORD *)(SGDGetUserSessionState(v78, v10, v11, v12) + 16812);
  v85 = *(_DWORD *)(SGDGetUserSessionState(v79, v13, v14, v15) + 16812);
  v86 = *(_DWORD *)(SGDGetUserSessionState(v85, v16, v17, v18) + 16812);
  v22 = *(_DWORD *)(SGDGetUserSessionState(v86, v19, v20, v21) + 16812);
  v27 = *(_DWORD *)(SGDGetUserSessionState(v24, v23, v25, v26) + 16812);
  v32 = *(_DWORD *)(SGDGetUserSessionState(v29, v28, v30, v31) + 16812);
  v87 = *(_DWORD *)(SGDGetUserSessionState(v34, v33, v35, v36) + 16812);
  v40 = *(_DWORD *)(SGDGetUserSessionState(v87, v37, v38, v39) + 16812);
  LODWORD(v4) = *(_DWORD *)(SGDGetUserSessionState(v42, v41, v43, v44) + 16812);
  v49 = *(_DWORD *)(SGDGetUserSessionState(v46, v45, v47, v48) + 16812);
  v83 = *(_DWORD *)(SGDGetUserSessionState(v51, v50, v52, v53) + 16820);
  v80 = *(_DWORD *)(SGDGetUserSessionState(v83, v54, v55, v56) + 16820);
  v60 = *(_DWORD *)(SGDGetUserSessionState(v80, v57, v58, v59) + 16820);
  v82 = *(_DWORD *)(SGDGetUserSessionState(v62, v61, v63, v64) + 16820);
  v81 = *(_DWORD *)(SGDGetUserSessionState(v82, v65, v66, v67) + 16820);
  v71 = *(_DWORD *)(SGDGetUserSessionState(v81, v68, v69, v70) + 16820);
  v76 = ((v83 & 1 | v82 & 8 | v81 & 0x10 | v80 & 2 | v60 & 4 | v71 & 0x20 | *(_DWORD *)(SGDGetUserSessionState(
                                                                                          v73,
                                                                                          v72,
                                                                                          v74,
                                                                                          v75)
                                                                                      + 16820) & 0x40) << 11) | v79 & 2 | v78 & 1 | v87 & 0x80 | v86 & 8 | v40 & 0x100 | v49 & 0x400 | v22 & 0x10 | (unsigned __int16)v4 & 0x200 | v27 & 0x20 | v32 & 0x40 | v85 & 4;
  result = a1;
  a1[10] = v76;
  return result;
}
