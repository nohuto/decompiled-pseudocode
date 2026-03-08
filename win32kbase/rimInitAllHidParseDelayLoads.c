/*
 * XREFs of rimInitAllHidParseDelayLoads @ 0x1C008BB04
 * Callers:
 *     RIMInitialize @ 0x1C008B310 (RIMInitialize.c)
 * Callees:
 *     rimFindImageProcAddress @ 0x1C008BD70 (rimFindImageProcAddress.c)
 */

void __fastcall rimInitAllHidParseDelayLoads(__int64 a1)
{
  __int64 ImageProcAddress; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9

  if ( a1 )
  {
    ImageProcAddress = rimFindImageProcAddress(a1, "HidP_GetUsageValue");
    *(_QWORD *)(SGDGetUserSessionState(v4, v3, v5, v6) + 96) = ImageProcAddress;
    v7 = rimFindImageProcAddress(a1, "HidP_GetScaledUsageValue");
    *(_QWORD *)(SGDGetUserSessionState(v9, v8, v10, v11) + 104) = v7;
    v12 = rimFindImageProcAddress(a1, "HidP_GetUsageValueArray");
    *(_QWORD *)(SGDGetUserSessionState(v14, v13, v15, v16) + 112) = v12;
    v17 = rimFindImageProcAddress(a1, "HidP_GetUsages");
    *(_QWORD *)(SGDGetUserSessionState(v19, v18, v20, v21) + 120) = v17;
    v22 = rimFindImageProcAddress(a1, "HidP_GetUsagesEx");
    *(_QWORD *)(SGDGetUserSessionState(v24, v23, v25, v26) + 128) = v22;
    v27 = rimFindImageProcAddress(a1, "HidP_GetSpecificValueCaps");
    *(_QWORD *)(SGDGetUserSessionState(v29, v28, v30, v31) + 136) = v27;
    v32 = rimFindImageProcAddress(a1, "HidP_GetCollectionDescription");
    *(_QWORD *)(SGDGetUserSessionState(v34, v33, v35, v36) + 144) = v32;
    v37 = rimFindImageProcAddress(a1, "HidP_GetCaps");
    *(_QWORD *)(SGDGetUserSessionState(v39, v38, v40, v41) + 152) = v37;
    v42 = rimFindImageProcAddress(a1, "HidP_GetLinkCollectionNodes");
    *(_QWORD *)(SGDGetUserSessionState(v44, v43, v45, v46) + 160) = v42;
    v47 = rimFindImageProcAddress(a1, "HidP_FreeCollectionDescription");
    *(_QWORD *)(SGDGetUserSessionState(v49, v48, v50, v51) + 168) = v47;
    v52 = rimFindImageProcAddress(a1, "HidP_SetUsageValue");
    *(_QWORD *)(SGDGetUserSessionState(v54, v53, v55, v56) + 176) = v52;
    v57 = rimFindImageProcAddress(a1, "HidP_GetSpecificButtonCaps");
    *(_QWORD *)(SGDGetUserSessionState(v59, v58, v60, v61) + 184) = v57;
    v62 = rimFindImageProcAddress(a1, "HidP_SetUsages");
    *(_QWORD *)(SGDGetUserSessionState(v64, v63, v65, v66) + 192) = v62;
    v67 = rimFindImageProcAddress(a1, "HidP_UnsetUsages");
    *(_QWORD *)(SGDGetUserSessionState(v69, v68, v70, v71) + 200) = v67;
    v72 = rimFindImageProcAddress(a1, "HidP_UsageListDifference");
    *(_QWORD *)(SGDGetUserSessionState(v74, v73, v75, v76) + 208) = v72;
    v77 = rimFindImageProcAddress(a1, "HidP_GetValueCaps");
    *(_QWORD *)(SGDGetUserSessionState(v79, v78, v80, v81) + 216) = v77;
  }
}
