/*
 * XREFs of ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C02FA220
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C020EC30 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x1C0001A68 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNTARGETMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x1C0001AE0 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPN__@@P6AJPEAXPEAU1@@ZPEAX@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPN__@@Q6AJPEAX0@Z1@Z @ 0x1C0001BD0 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPN__@@P6AJPEAXPEAU1@@ZPEAX@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPN__@.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_SOURCE_MODE@@P6AJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@Q6AJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@0@Z1@Z @ 0x1C001CEA0 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_SOURCE_MODE@@P6AJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEBU1@.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C001CF2C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DxgkQueryDmmInterface @ 0x1C016A964 (DxgkQueryDmmInterface.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C016ABF0 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C016D28C (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C01B0684 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01E984C (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C020F03C (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C02FC6CC (_PopulateDisplayModeFromPresentPath.c)
 */

__int64 __fastcall OBTAIN_PREFERRED_MODES_ON_PATH::operator()(
        _QWORD *a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3)
{
  int PreferredMonitorSourceModeOnTarget; // eax
  __int64 v5; // rdx
  DXGADAPTER *v7; // rcx
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rbx
  DXGADAPTER *v11; // rcx
  __int64 v12; // r13
  __int64 (__fastcall *v13)(DXGADAPTER *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *); // rax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edx
  DXGADAPTER *v18; // rcx
  int VideoOutputTechnology; // eax
  __int64 v20; // rdx
  __int64 (__fastcall *v21)(__int64, __int64, __int64 *, __int64 *); // rax
  int v22; // eax
  __int64 v23; // r15
  __int64 (__fastcall *v24)(__int64, __int64 *); // rax
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // edx
  int v29; // eax
  __int64 v30; // rdx
  __int64 (__fastcall *v31)(__int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *); // rax
  int v32; // eax
  __int64 v33; // r15
  __int64 (__fastcall *v34)(__int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *); // rax
  int v35; // eax
  const wchar_t *v36; // r9
  __int64 v37; // r8
  int v38; // eax
  int v39; // eax
  int v40; // ebx
  int v41; // eax
  int v42; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v43; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v44; // eax
  int v45; // eax
  unsigned int *v46; // rbx
  int v47; // eax
  __int64 v48; // r8
  int v49; // eax
  int v50; // eax
  __int64 v51; // r8
  unsigned int *v52; // r12
  unsigned int v53; // eax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v56; // rax
  int UniqueModes; // eax
  __int64 v58; // rbx
  int v59; // [rsp+20h] [rbp-E0h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v60[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v61; // [rsp+58h] [rbp-A8h]
  char v62; // [rsp+59h] [rbp-A7h] BYREF
  char v63[6]; // [rsp+5Ah] [rbp-A6h] BYREF
  __int64 v64; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v65; // [rsp+68h] [rbp-98h] BYREF
  __int64 v66; // [rsp+70h] [rbp-90h] BYREF
  __int64 v67; // [rsp+78h] [rbp-88h] BYREF
  __int64 v68; // [rsp+80h] [rbp-80h] BYREF
  char v69[8]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int *v70; // [rsp+90h] [rbp-70h]
  void (__fastcall *v71)(__int64, unsigned int *); // [rsp+98h] [rbp-68h]
  __int64 v72; // [rsp+A0h] [rbp-60h]
  int v73; // [rsp+A8h] [rbp-58h]
  unsigned int *v74; // [rsp+B0h] [rbp-50h]
  char v75[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v76; // [rsp+C0h] [rbp-40h]
  void (__fastcall *v77)(__int64, __int64); // [rsp+C8h] [rbp-38h]
  __int64 v78; // [rsp+D0h] [rbp-30h]
  int v79; // [rsp+D8h] [rbp-28h]
  char v80[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v81; // [rsp+E8h] [rbp-18h]
  void (__fastcall *v82)(__int64, __int64); // [rsp+F0h] [rbp-10h]
  __int64 v83; // [rsp+F8h] [rbp-8h]
  int v84; // [rsp+100h] [rbp+0h]
  char v85[8]; // [rsp+108h] [rbp+8h] BYREF
  unsigned int *v86; // [rsp+110h] [rbp+10h]
  void (__fastcall *v87)(__int64, unsigned int *); // [rsp+118h] [rbp+18h]
  __int64 v88; // [rsp+120h] [rbp+20h]
  int v89; // [rsp+128h] [rbp+28h]
  struct _D3DKMT_DISPLAYMODE **v90; // [rsp+130h] [rbp+30h]
  char v91[8]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v92; // [rsp+140h] [rbp+40h]
  void (__fastcall *v93)(__int64, __int64); // [rsp+148h] [rbp+48h]
  __int64 v94; // [rsp+150h] [rbp+50h]
  int v95; // [rsp+158h] [rbp+58h]
  struct _D3DKMT_DISPLAYMODE v96; // [rsp+160h] [rbp+60h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v97; // [rsp+190h] [rbp+90h] BYREF

  v90 = a2;
  v74 = a3;
  memset(&v97, 0, sizeof(v97));
  PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(
                                         (DXGADAPTER *)*a1,
                                         *((_DWORD *)a1 + 3),
                                         &v97);
  if ( PreferredMonitorSourceModeOnTarget >= 0 )
  {
    v7 = (DXGADAPTER *)*a1;
    v64 = 0LL;
    v8 = DxgkQueryDmmInterface(v7, v5, &v64);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v64;
      v11 = (DXGADAPTER *)*a1;
      v67 = 0LL;
      v12 = 0LL;
      *(_QWORD *)v60 = 0LL;
      v13 = *(__int64 (__fastcall **)(DXGADAPTER *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *))(v64 + 40);
      v92 = 0LL;
      v93 = 0LL;
      v94 = 0LL;
      v95 = 0;
      v91[0] = 0;
      v14 = v13(v11, v60, &v67);
      v9 = v14;
      if ( v14 >= 0 )
      {
        DXGDMM::AutoRelease<D3DKMDT_HVIDPN__ *,long (*)(void *,D3DKMDT_HVIDPN__ *),void *>::Own(
          (__int64)v91,
          *(__int64 *)v60,
          *(_QWORD *)(v10 + 64),
          *a1);
        v12 = v92;
        v66 = 0LL;
        v65 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))v67)(v92, &v66, &v65);
        v9 = v15;
        if ( v15 >= 0 )
        {
          v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _WORD, int))(v65 + 40))(
                  v66,
                  *((unsigned int *)a1 + 2),
                  *((unsigned int *)a1 + 3),
                  1LL,
                  0,
                  2);
          v17 = *((_DWORD *)a1 + 3);
          v9 = v16;
          if ( v16 >= 0 )
          {
            v18 = (DXGADAPTER *)*a1;
            v60[0] = D3DKMDT_VOT_HD15;
            VideoOutputTechnology = DmmGetVideoOutputTechnology(v18, v17, 0LL, v60);
            v9 = VideoOutputTechnology;
            if ( VideoOutputTechnology >= 0 )
            {
              if ( v60[0] == D3DKMDT_VOT_MIRACAST
                || v60[0] == D3DKMDT_VOT_INDIRECT_WIRED
                || (v61 = 0, v60[0] == (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED)) )
              {
                v61 = 1;
              }
              v20 = *((unsigned int *)a1 + 2);
              v68 = 0LL;
              v64 = 0LL;
              v21 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v67 + 8);
              v76 = 0LL;
              v77 = 0LL;
              v78 = 0LL;
              v79 = 0;
              v75[0] = 0;
              v22 = v21(v12, v20, &v64, &v68);
              v9 = v22;
              if ( v22 >= 0 )
              {
                DXGDMM::AutoRelease<D3DKMDT_HVIDPNSOURCEMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNSOURCEMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
                  (__int64)v75,
                  v64,
                  *(_QWORD *)(v67 + 16),
                  v12);
                v23 = v76;
                v64 = 0LL;
                v86 = 0LL;
                v24 = *(__int64 (__fastcall **)(__int64, __int64 *))(v68 + 8);
                v87 = 0LL;
                v88 = 0LL;
                v89 = 0;
                v85[0] = 0;
                v25 = v24(v76, &v64);
                v9 = v25;
                if ( v25 >= 0 )
                {
                  while ( 1 )
                  {
                    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_SOURCE_MODE const *,long (*)(D3DKMDT_HVIDPNSOURCEMODESET__ *,_D3DKMDT_VIDPN_SOURCE_MODE const *),D3DKMDT_HVIDPNSOURCEMODESET__ *>::Own(
                      (__int64)v85,
                      v64,
                      *(_QWORD *)(v68 + 32),
                      v23);
                    v52 = v86;
                    if ( !v86 )
                      break;
                    v26 = v86[1];
                    if ( ((v26 - 1) & 0xFFFFFFFC) == 0 && v26 != 2 )
                    {
                      v27 = v86[2];
                      if ( v27 == v86[4] )
                      {
                        v28 = v86[3];
                        if ( v28 == v86[5]
                          && v86[7] - 21 <= 1
                          && v27 == v97.VideoSignalInfo.ActiveSize.cx
                          && v28 == v97.VideoSignalInfo.ActiveSize.cy )
                        {
                          LOBYTE(v51) = 1;
                          v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v68 + 40))(v23, *v86, v51);
                          if ( v29 >= 0 )
                          {
                            v30 = *((unsigned int *)a1 + 3);
                            v64 = 0LL;
                            *(_QWORD *)v60 = 0LL;
                            v31 = *(__int64 (__fastcall **)(__int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *))(v67 + 24);
                            v81 = 0LL;
                            v82 = 0LL;
                            v83 = 0LL;
                            v84 = 0;
                            v80[0] = 0;
                            v32 = v31(v12, v30, v60, &v64);
                            v9 = v32;
                            if ( v32 < 0 )
                            {
                              WdLogSingleEntry3(2LL, v12, *((unsigned int *)a1 + 3), v32);
                              DxgkLogInternalTriageEvent(
                                0LL,
                                0x40000,
                                -1,
                                (__int64)L"Failed to acquire target mode set from VidPn 0x%I64x for Target 0x%I64x (Status = 0x%I64x).",
                                v12,
                                *((unsigned int *)a1 + 3),
                                v9,
                                0LL,
                                0LL);
                              goto LABEL_84;
                            }
                            DXGDMM::AutoRelease<D3DKMDT_HVIDPNTARGETMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNTARGETMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
                              (__int64)v80,
                              *(__int64 *)v60,
                              *(_QWORD *)(v67 + 32),
                              v12);
                            v33 = v81;
                            *(_QWORD *)v60 = 0LL;
                            v70 = 0LL;
                            v34 = *(__int64 (__fastcall **)(__int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v64 + 8);
                            v71 = 0LL;
                            v72 = 0LL;
                            v73 = 0;
                            v69[0] = 0;
                            v35 = v34(v81, v60);
                            v9 = v35;
                            if ( v35 < 0 )
                            {
                              WdLogSingleEntry2(2LL, v33, v35);
                              v36 = L"Failed to acquire first target mode info from target mode set 0x%I64x (Status = 0x%I64x).";
LABEL_34:
                              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v36, v33, v9, 0LL, 0LL, 0LL);
LABEL_35:
                              if ( v69[0] )
                                v71(v72, v70);
                              if ( v80[0] )
                                v82(v83, v33);
                              v23 = v76;
                              goto LABEL_84;
                            }
                            while ( 1 )
                            {
                              DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
                                (__int64)v69,
                                *(__int64 *)v60,
                                *(_QWORD *)(v64 + 32),
                                v33);
                              v46 = v70;
                              if ( !v70 )
                                break;
                              LOBYTE(v48) = v61;
                              v62 = 0;
                              if ( (*(int (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))(v64 + 80))(
                                     v70,
                                     &v97,
                                     v48,
                                     &v62) >= 0
                                && v62 )
                              {
                                LOBYTE(v37) = 1;
                                v38 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v64 + 48))(v33, *v46, v37);
                                if ( v38 >= 0 )
                                {
                                  *(_QWORD *)v60 = 0LL;
                                  v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v65 + 24))(
                                          v66,
                                          *((unsigned int *)a1 + 2),
                                          *((unsigned int *)a1 + 3),
                                          v60);
                                  v9 = v39;
                                  if ( v39 < 0 )
                                  {
                                    WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v39);
                                    DxgkLogInternalTriageEvent(
                                      0LL,
                                      0x40000,
                                      -1,
                                      (__int64)L"Failed to acquire VidPn path info from source 0x%I64x to target 0x%I64x ("
                                                "Status = 0x%I64x).",
                                      *((unsigned int *)a1 + 2),
                                      *((unsigned int *)a1 + 3),
                                      v9,
                                      0LL,
                                      0LL);
                                    goto LABEL_35;
                                  }
                                  v40 = *(_DWORD *)(*(_QWORD *)v60 + 16LL);
                                  (*(void (__fastcall **)(__int64))(v65 + 32))(v66);
                                  if ( (v40 & 1) != 0 )
                                  {
                                    LOBYTE(v59) = 1;
                                    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int))(v65 + 64))(
                                            v66,
                                            *((unsigned int *)a1 + 2),
                                            *((unsigned int *)a1 + 3),
                                            1LL,
                                            v59);
                                    v9 = v41;
                                    if ( v41 < 0 )
                                    {
                                      WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v41);
                                      DxgkLogInternalTriageEvent(
                                        0LL,
                                        0x40000,
                                        -1,
                                        (__int64)L"Failed to pin D3DKMDT_VPPS_IDENTITY on path from source 0x%I64x to targ"
                                                  "et 0x%I64x (Status = 0x%I64x).",
                                        *((unsigned int *)a1 + 2),
                                        *((unsigned int *)a1 + 3),
                                        v9,
                                        0LL,
                                        0LL);
                                    }
                                    else
                                    {
                                      *(_QWORD *)v60 = 0LL;
                                      v42 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v65 + 24))(
                                              v66,
                                              *((unsigned int *)a1 + 2),
                                              *((unsigned int *)a1 + 3),
                                              v60);
                                      v9 = v42;
                                      if ( v42 < 0 )
                                      {
                                        WdLogSingleEntry3(
                                          2LL,
                                          *((unsigned int *)a1 + 2),
                                          *((unsigned int *)a1 + 3),
                                          v42);
                                        DxgkLogInternalTriageEvent(
                                          0LL,
                                          0x40000,
                                          -1,
                                          (__int64)L"Failed to acquire path info on path from source 0x%I64x to target 0x%"
                                                    "I64x (Status = 0x%I64x).",
                                          *((unsigned int *)a1 + 2),
                                          *((unsigned int *)a1 + 3),
                                          v9,
                                          0LL,
                                          0LL);
                                      }
                                      else
                                      {
                                        v43 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)(*(_QWORD *)v60 + 24LL);
                                        (*(void (__fastcall **)(__int64))(v65 + 32))(v66);
                                        v44 = D3DKMDT_VOT_SVIDEO;
                                        v60[0] = D3DKMDT_VOT_SVIDEO;
                                        while ( 1 )
                                        {
                                          if ( BmlIsSupportedPathRotation(v44, v43) )
                                          {
                                            v63[0] = 0;
                                            memset(&v96, 0, sizeof(v96));
                                            PopulateDisplayModeFromPresentPath(
                                              (_DWORD)v52,
                                              (_DWORD)v70,
                                              1,
                                              v60[0],
                                              1,
                                              1,
                                              0,
                                              2,
                                              (__int64)&v96,
                                              (__int64)v63);
                                            LODWORD(v9) = MODE_UNION_LIST::AddUniqueMode(
                                                            (MODE_UNION_LIST *)(a1 + 3),
                                                            &v96);
                                            if ( (int)v9 < 0 )
                                              break;
                                            if ( v63[0] )
                                            {
                                              ++v96.IntegerRefreshRate;
                                              *(_DWORD *)&v96.Flags |= 2u;
                                              LODWORD(v9) = MODE_UNION_LIST::AddUniqueMode(
                                                              (MODE_UNION_LIST *)(a1 + 3),
                                                              &v96);
                                              if ( (int)v9 < 0 )
                                                break;
                                            }
                                          }
                                          v44 = v60[0] + 1;
                                          v60[0] = v44;
                                          if ( v44 > D3DKMDT_VOT_DVI )
                                          {
                                            v45 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v65 + 72))(
                                                    v66,
                                                    *((unsigned int *)a1 + 2),
                                                    *((unsigned int *)a1 + 3),
                                                    0LL);
                                            v9 = v45;
                                            if ( v45 >= 0 )
                                              goto LABEL_55;
                                            WdLogSingleEntry3(
                                              2LL,
                                              *((unsigned int *)a1 + 2),
                                              *((unsigned int *)a1 + 3),
                                              v45);
                                            DxgkLogInternalTriageEvent(
                                              0LL,
                                              0x40000,
                                              -1,
                                              (__int64)L"Unable to unpin content scaling on path from source 0x%I64x to ta"
                                                        "rget 0x%I64x (Status = 0x%I64x).",
                                              *((unsigned int *)a1 + 2),
                                              *((unsigned int *)a1 + 3),
                                              v9,
                                              0LL,
                                              0LL);
                                            goto LABEL_35;
                                          }
                                        }
                                      }
                                    }
                                    goto LABEL_35;
                                  }
LABEL_55:
                                  v46 = v70;
                                }
                                else
                                {
                                  WdLogSingleEntry3(3LL, *v46, v33, v38);
                                }
                              }
                              *(_QWORD *)v60 = 0LL;
                              v47 = (*(__int64 (__fastcall **)(__int64, unsigned int *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v64 + 16))(
                                      v33,
                                      v46,
                                      v60);
                              v9 = v47;
                              if ( v47 < 0 )
                              {
                                WdLogSingleEntry2(2LL, v33, v47);
                                v36 = L"Failed to acquire next target mode info on target mode set 0x%I64x (Status = 0x%I64x).";
                                goto LABEL_34;
                              }
                            }
                            v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v64 + 56))(v33, 0LL);
                            v9 = v49;
                            if ( v49 < 0 )
                            {
                              WdLogSingleEntry2(2LL, v33, v49);
                              v36 = L"Failed to Dunpin target mode set 0x%I64x (Status = 0x%I64x).";
                              goto LABEL_34;
                            }
                            if ( v69[0] )
                              v71(v72, 0LL);
                            if ( v80[0] )
                              v82(v83, v33);
                            v23 = v76;
                          }
                          else
                          {
                            WdLogSingleEntry3(3LL, *v52, v23, v29);
                          }
                        }
                      }
                    }
                    v64 = 0LL;
                    v50 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v68 + 16))(v23, v52, &v64);
                    v9 = v50;
                    if ( v50 < 0 )
                    {
                      WdLogSingleEntry2(2LL, v23, v50);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Failed to acquire next source mode info from source mode set 0x%I64x (Status = 0x%I64x).",
                        v23,
                        v9,
                        0LL,
                        0LL,
                        0LL);
                      goto LABEL_84;
                    }
                  }
                  v53 = *((_DWORD *)a1 + 10);
                  if ( v53 )
                  {
                    v55 = v53;
                    v54 = v53 * (unsigned __int64)(unsigned int)((_DWORD)v86 + 44);
                    if ( !is_mul_ok(v55, (unsigned int)((_DWORD)v86 + 44)) )
                      v54 = (unsigned __int64)v86 - 1;
                    v56 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v54, 0x4B677844u, 256LL);
                    *v90 = v56;
                    if ( !v56 )
                    {
                      WdLogSingleEntry1(6LL, 1863LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262145,
                        -1,
                        (__int64)L"Unable to allocate mode list memory.",
                        1863LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      LODWORD(v9) = -1073741801;
                      goto LABEL_84;
                    }
                    UniqueModes = MODE_UNION_LIST::GetUniqueModes(
                                    (const void **)a1 + 3,
                                    *((unsigned int *)a1 + 10),
                                    v56,
                                    v74);
                    if ( UniqueModes < 0 )
                    {
                      v58 = UniqueModes;
                      WdLogSingleEntry1(1LL, UniqueModes);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"Failed to get unique modes (Status = 0x%I64x).",
                        v58,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                  }
                  else
                  {
                    *v74 = 0;
                  }
                  LODWORD(v9) = 0;
LABEL_84:
                  if ( v85[0] )
                    v87(v88, v52);
                }
                else
                {
                  WdLogSingleEntry2(2LL, v23, v25);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Failed to acquire first mode info from source mode set 0x%I64x (Status = 0x%I64x).",
                    v23,
                    v9,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( v75[0] )
                  v77(v78, v23);
              }
              else
              {
                WdLogSingleEntry3(2LL, v12, *((unsigned int *)a1 + 2), v22);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed to acquire VidPn source mode set from VidPn 0x%I64x for VidPn source ID 0x%I64x (Status = 0x%I64x).",
                  v12,
                  *((unsigned int *)a1 + 2),
                  v9,
                  0LL,
                  0LL);
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, VideoOutputTechnology);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed call to DmmGetVideoOutputTechnology(Status = 0x%I64x)",
                v9,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          else
          {
            WdLogSingleEntry4(2LL, *((unsigned int *)a1 + 2), v17, v12, v16);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to Add VidPn path from source 0x%I64x to target 0x%I64x on VidPn 0x%I64x (Status=0x%I64x).",
              *((unsigned int *)a1 + 2),
              *((unsigned int *)a1 + 3),
              v12,
              v9,
              0LL);
          }
        }
        else
        {
          WdLogSingleEntry3(2LL, v12, *a1, v15);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to get VidPn topology from hVidPn 0x%I64x on Adapter 0x%I64x (Status=0x%I64x).",
            v12,
            *a1,
            v9,
            0LL,
            0LL);
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, *a1, v14);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed call to create an empty VidPN on adapter 0x%I64x (status = 0x%I64x).",
          *a1,
          v9,
          0LL,
          0LL,
          0LL);
      }
      if ( v91[0] )
        v93(v94, v12);
    }
    else
    {
      WdLogSingleEntry2(2LL, *a1, v8);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to QueryDxgDmmInterface on hAdapter 0x%I64x (status = 0x%I64x).",
        *a1,
        v9,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v9;
  }
  else
  {
    WdLogSingleEntry3(3LL, *a1, *((unsigned int *)a1 + 3), PreferredMonitorSourceModeOnTarget);
    return 0LL;
  }
}
