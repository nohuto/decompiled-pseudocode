/*
 * XREFs of ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C01204C0
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C011FCA0 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C027E7F8 (DxgkRedrawCursorForPostCompositon.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0004C60 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0004D20 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004DC0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0006764 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000DA1C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C003A510 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00DFEB4 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0107B00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C01217A4 (MonitorGetMonitorOrientationsFromTarget.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C01218F8 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C0121A00 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C0121AA0 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C012E928 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C015C100 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_103e920f2f8a7257353075347c127b30_@@CAJPEAVOUTPUTDUPL_MGR@@P82@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z12II@Z @ 0x1C015C3E4 (-_lambda_invoker_cdecl_@_lambda_103e920f2f8a7257353075347c127b30_@@CAJPEAVOUTPUTDUPL_MGR@@P82@EA.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C02136D4 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z @ 0x1C0213CF4 (-GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C027D800 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C027DEF0 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 */

__int64 __fastcall SetPointerShapeForDisplaySource(
        struct DISPLAY_SOURCE *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        struct SESSION_VIEW *a4,
        void *const a5,
        unsigned int a6,
        unsigned int a7,
        bool a8,
        bool a9)
{
  _DXGKARG_SETPOINTERPOSITION v9; // xmm0
  struct DISPLAY_SOURCE *v10; // r12
  __int64 v11; // rax
  __int64 v13; // rsi
  unsigned int v14; // r14d
  struct DXGADAPTER *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v20; // rbx
  __int64 Width; // rdx
  __int64 XHot; // rcx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r15
  __int64 v28; // rcx
  bool v29; // bl
  bool v30; // r15
  __int64 v31; // r13
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct _ERESOURCE *v39; // rbx
  bool v40; // r15
  int v41; // r12d
  int v42; // r13d
  bool v43; // sf
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // rbx
  __int64 v47; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // r12d
  __int64 v49; // r13
  __int64 v50; // r15
  __int64 v51; // r15
  __int64 v52; // rdx
  _QWORD *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // r13
  __int64 v57; // rdx
  __int64 v58; // r8
  void (__fastcall ***v59)(_QWORD, __int64); // rcx
  int v60; // ebx
  char v61; // al
  UINT v62; // r8d
  UINT v63; // ecx
  __int64 v64; // rcx
  __int64 v65; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v66; // r13
  void *v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  void *v71; // rcx
  __int64 v72; // rbx
  struct _DXGKARG_SETPOINTERSHAPE *v73; // r15
  struct SESSION_VIEW *v74; // rbx
  const struct tagRECT *v75; // rdx
  __int64 v76; // r12
  int v77; // r12d
  void *v78; // rcx
  int v79; // r9d
  int v80; // r15d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v81; // edx
  int v82; // ecx
  int v83; // r8d
  int v84; // r10d
  int v85; // r11d
  __int64 v86; // rcx
  int v87; // ebx
  int v88; // eax
  __int64 v89; // rdx
  int v90; // r15d
  int v91; // r9d
  INT v92; // edx
  INT v93; // r8d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v94; // ebx
  int v95; // ecx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r15
  __int64 v99; // rdx
  __int64 v100; // rcx
  struct DXGTHREAD *v101; // rbx
  struct DXGTHREAD *Current; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  _QWORD *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  struct DISPLAY_SOURCE *v111; // rcx
  __int64 v112; // r15
  __int64 v113; // rdx
  __int64 v114; // rcx
  struct DXGTHREAD *ThreadProperty; // rbx
  struct _KTHREAD *v116; // r12
  int CurrentProcessSessionId; // r13d
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rbx
  void *v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 ThreadWin32Thread; // rax
  int v130; // r13d
  __int64 v131; // rdx
  __int64 v132; // rcx
  _QWORD *v133; // rax
  __int64 v134; // rdx
  __int64 Y; // rcx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  struct SESSION_VIEW *v139; // rcx
  struct DISPLAY_SOURCE *v140; // rcx
  DISPLAY_SOURCE *v141; // r10
  __int64 v142; // rbx
  __int64 VidPnSourceId; // r12
  char v144; // r15
  INT v145; // r8d
  INT X; // r9d
  INT v147; // r13d
  __int64 v148; // rcx
  __int64 v149; // rbx
  int v150; // eax
  int v151; // eax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r12
  int PairingAdapters; // eax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // rbx
  struct DXGADAPTER *v159; // rsi
  __int64 v160; // rax
  __int64 v161; // r15
  struct DXGADAPTER *v162; // rbx
  __int64 v163; // rdx
  signed __int64 v164; // rcx
  struct DXGADAPTER *v165; // rcx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // rdx
  __int64 v169; // rcx
  struct DXGADAPTER *v170; // rcx
  struct DXGADAPTER *v171; // rcx
  struct DXGADAPTER *v172; // rcx
  struct DXGADAPTER *v173; // rcx
  _QWORD *v175; // rax
  int v176; // eax
  unsigned __int64 v177; // rcx
  SIZE_T v178; // rax
  SIZE_T v179; // rax
  PVOID v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rax
  _QWORD *v185; // rax
  int v186; // eax
  __int64 v187; // rax
  int v188; // r9d
  __int64 v189; // rax
  __int64 v190; // rax
  UINT Height; // r8d
  UINT YHot; // eax
  _QWORD *v193; // rax
  int v194; // r13d
  __int64 v195; // rax
  struct _DXGKARG_SETPOINTERSHAPE *PristineCursor; // rax
  __int64 v197; // rax
  __int64 v198; // rax
  _QWORD *v199; // rax
  __int64 v200; // rax
  __int64 v201; // rdx
  __int64 v202; // rcx
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rax
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // rax
  __int64 v209; // rcx
  __int64 v210; // rax
  __int64 v211; // rax
  __int64 v212; // rax
  __int64 v213; // rax
  __int64 v214; // rax
  __int64 v215; // rax
  __int64 v216; // rax
  __int64 v217; // rax
  __int64 v218; // rax
  __int64 v219; // rdx
  __int64 v220; // rcx
  _QWORD *v221; // rax
  __int64 v222; // rdx
  __int64 v223; // rax
  __int64 v224; // rax
  INT v225; // eax
  int v226; // edx
  int v227; // r8d
  __int64 v228; // rax
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v230; // rbx
  _QWORD *v231; // rax
  unsigned __int8 v232; // cl
  _QWORD *v233; // rax
  __int64 v234; // rax
  __int64 v235; // rax
  __int64 v236; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  _QWORD *v239; // rax
  unsigned __int8 v240; // cl
  _QWORD *v241; // rax
  __int64 v242; // rax
  __int64 v243; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v244; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v245; // rbx
  void *pPixels; // rcx
  _QWORD *v247; // rax
  _QWORD *v248; // rax
  __int64 v249; // rax
  _QWORD *v250; // rax
  _QWORD *v251; // rax
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // rax
  __int64 v256; // rax
  _QWORD *v257; // rax
  __int64 v258; // rdx
  __int64 v259; // rax
  _QWORD *v260; // rax
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  struct _DXGKARG_SETPOINTERSHAPE *v262; // [rsp+30h] [rbp-D8h]
  struct _DXGK_DRIVERCAPS *v263; // [rsp+38h] [rbp-D0h]
  int *v264; // [rsp+40h] [rbp-C8h]
  char v265; // [rsp+48h] [rbp-C0h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v266; // [rsp+4Ch] [rbp-BCh]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v267; // [rsp+4Ch] [rbp-BCh]
  unsigned int v268; // [rsp+50h] [rbp-B8h]
  int v269; // [rsp+50h] [rbp-B8h]
  int v270; // [rsp+50h] [rbp-B8h]
  char v271; // [rsp+54h] [rbp-B4h]
  int v272; // [rsp+58h] [rbp-B0h]
  INT v273; // [rsp+58h] [rbp-B0h]
  unsigned __int8 CurrentIrql; // [rsp+58h] [rbp-B0h]
  unsigned __int8 v275; // [rsp+58h] [rbp-B0h]
  unsigned int v276; // [rsp+58h] [rbp-B0h]
  __int64 v279; // [rsp+70h] [rbp-98h]
  INT v280; // [rsp+70h] [rbp-98h]
  INT v281; // [rsp+70h] [rbp-98h]
  int v282[2]; // [rsp+78h] [rbp-90h] BYREF
  const struct _DXGKARG_SETPOINTERPOSITION *v283; // [rsp+80h] [rbp-88h]
  struct DXGADAPTER *v284; // [rsp+88h] [rbp-80h] BYREF
  void *v285; // [rsp+90h] [rbp-78h]
  __int64 v286; // [rsp+98h] [rbp-70h] BYREF
  char v287; // [rsp+A0h] [rbp-68h]
  int v288; // [rsp+A8h] [rbp-60h]
  int v289; // [rsp+ACh] [rbp-5Ch]
  __int128 v290; // [rsp+B0h] [rbp-58h]
  int v291; // [rsp+C0h] [rbp-48h]
  unsigned int v292; // [rsp+C4h] [rbp-44h]
  struct DXGADAPTER *v293; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v294; // [rsp+D0h] [rbp-38h]
  __int64 v295; // [rsp+D8h] [rbp-30h] BYREF
  struct SESSION_VIEW *v296; // [rsp+E0h] [rbp-28h]
  int v297; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v298; // [rsp+F0h] [rbp-18h]
  char v299; // [rsp+F8h] [rbp-10h]
  int v300; // [rsp+100h] [rbp-8h] BYREF
  __int64 v301; // [rsp+108h] [rbp+0h]
  char v302; // [rsp+110h] [rbp+8h]
  struct tagRECT v303; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v304; // [rsp+128h] [rbp+20h] BYREF
  __int128 v305; // [rsp+130h] [rbp+28h] BYREF
  __int64 v306; // [rsp+140h] [rbp+38h]
  _QWORD v307[2]; // [rsp+148h] [rbp+40h] BYREF
  char v308; // [rsp+158h] [rbp+50h]
  unsigned __int64 v309; // [rsp+160h] [rbp+58h] BYREF
  _DXGKARG_SETPOINTERPOSITION v310; // [rsp+168h] [rbp+60h] BYREF
  char v311; // [rsp+178h] [rbp+70h] BYREF
  char v312; // [rsp+179h] [rbp+71h]
  char v313[8]; // [rsp+180h] [rbp+78h] BYREF
  __int64 v314; // [rsp+188h] [rbp+80h]
  struct DXGADAPTER *v315; // [rsp+190h] [rbp+88h]
  char v316; // [rsp+198h] [rbp+90h]
  __int64 v317; // [rsp+1A0h] [rbp+98h]
  char v318[8]; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 v319; // [rsp+1C8h] [rbp+C0h]
  struct DXGADAPTER *v320; // [rsp+1D0h] [rbp+C8h]
  char v321; // [rsp+1D8h] [rbp+D0h]
  char *v322; // [rsp+1E0h] [rbp+D8h]
  char v323; // [rsp+208h] [rbp+100h] BYREF
  char v324; // [rsp+209h] [rbp+101h]
  char v325[8]; // [rsp+210h] [rbp+108h] BYREF
  __int64 v326; // [rsp+218h] [rbp+110h]
  struct DXGADAPTER *v327; // [rsp+220h] [rbp+118h]
  char v328; // [rsp+228h] [rbp+120h]
  __int64 v329; // [rsp+230h] [rbp+128h]
  char v330[8]; // [rsp+250h] [rbp+148h] BYREF
  __int64 v331; // [rsp+258h] [rbp+150h]
  struct DXGADAPTER *v332; // [rsp+260h] [rbp+158h]
  char v333; // [rsp+268h] [rbp+160h]
  char *v334; // [rsp+270h] [rbp+168h]
  char v335[8]; // [rsp+298h] [rbp+190h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2A0h] [rbp+198h] BYREF
  char v337[8]; // [rsp+2D0h] [rbp+1C8h] BYREF
  struct _KAPC_STATE v338; // [rsp+2D8h] [rbp+1D0h] BYREF

  v9 = *a2;
  v10 = this;
  v306 = 0LL;
  v11 = *((_QWORD *)this + 1);
  v310 = v9;
  v296 = a4;
  v13 = *(_QWORD *)(v11 + 16);
  v283 = a2;
  v285 = a5;
  v305 = 0LL;
  if ( !v13 )
  {
    v181 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v181 + 24) = 1090LL;
    WdLogEvent5_WdAssertion(v181);
  }
  if ( !*(_QWORD *)(v13 + 2696) )
  {
    v182 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v182 + 24) = 1091LL;
    WdLogEvent5_WdAssertion(v182);
  }
  v14 = 0;
  v324 = 0;
  v329 = 0LL;
  v327 = (struct DXGADAPTER *)v13;
  v328 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24));
  v332 = (struct DXGADAPTER *)v13;
  v326 = -1LL;
  v333 = 0;
  v334 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24));
  v331 = -1LL;
  v271 = 0;
  v15 = (struct DXGADAPTER *)v13;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 184) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v332 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v17, 72);
      KeWaitForSingleObject((char *)v332 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v332, 0LL);
    v15 = v332;
  }
  v334 = 0LL;
  v333 = 1;
  if ( *((_DWORD *)v15 + 50) != 1 )
    goto LABEL_260;
  if ( v327 != v332 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v325, 0LL);
    v15 = (struct DXGADAPTER *)*((unsigned int *)v327 + 50);
    if ( (_DWORD)v15 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v325);
LABEL_260:
      COREACCESS::Release((COREACCESS *)v330);
      v14 = -1073741130;
      goto LABEL_221;
    }
  }
  v324 = 1;
  v18 = *(_QWORD *)(v13 + 2696);
  v286 = v18 + 400;
  v287 = 0;
  if ( v18 == -400 )
  {
    v183 = WdLogNewEntry5_WdAssertion(v15, a2);
    *(_QWORD *)(v183 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v183);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v286 + 16) == CurrentThread )
  {
    v184 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v184 + 24) = 769LL;
    WdLogEvent5_WdAssertion(v184);
  }
  if ( v287 )
  {
    v185 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2);
    v185[5] = &v286;
    v185[3] = 275LL;
    v185[4] = 4LL;
    v185[6] = 0LL;
    v185[7] = 0LL;
    WdLogEvent5_WdCriticalError(v185);
  }
  v20 = v286;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v20 + 16) == KeGetCurrentThread() )
  {
    v186 = *(_DWORD *)(v20 + 24);
    if ( v186 <= 0 )
    {
      v187 = WdLogNewEntry5_WdAssertion(XHot, Width);
      *(_QWORD *)(v187 + 24) = 661LL;
      WdLogEvent5_WdAssertion(v187);
      v186 = *(_DWORD *)(v20 + 24);
    }
    v24 = v186 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v188 = *(_DWORD *)(v20 + 28);
        if ( v188 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(XHot, &EventBlockThread, v23, v188);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v20 + 8));
      ExAcquirePushLockExclusiveEx(v20, 0LL);
    }
    if ( *(_QWORD *)(v20 + 16) )
    {
      v189 = WdLogNewEntry5_WdAssertion(XHot, Width);
      *(_QWORD *)(v189 + 24) = 685LL;
      WdLogEvent5_WdAssertion(v189);
    }
    if ( *(_DWORD *)(v20 + 24) )
    {
      v190 = WdLogNewEntry5_WdAssertion(XHot, Width);
      *(_QWORD *)(v190 + 24) = 686LL;
      WdLogEvent5_WdAssertion(v190);
    }
    *(_QWORD *)(v20 + 16) = KeGetCurrentThread();
    v24 = 1;
  }
  *(_DWORD *)(v20 + 24) = v24;
  v287 = 1;
  if ( a9 )
  {
    if ( a3->Flags.Value != 2 )
      goto LABEL_283;
    Width = a3->Width;
    XHot = *(_QWORD *)(*((_QWORD *)v10 + 1) + 16LL);
    if ( (unsigned int)Width > *(_DWORD *)(XHot + 2016) )
      goto LABEL_283;
    Height = a3->Height;
    if ( Height > *(_DWORD *)(XHot + 2020) )
      goto LABEL_283;
    if ( a3->Pitch != 4 * (_DWORD)Width )
      goto LABEL_283;
    XHot = *(unsigned int *)(*(_QWORD *)(XHot + 2696) + 80LL);
    if ( a3->VidPnSourceId >= (unsigned int)XHot )
      goto LABEL_283;
    if ( !a3->pPixels )
      goto LABEL_283;
    XHot = a3->XHot;
    if ( (unsigned int)XHot >= (unsigned int)Width )
      goto LABEL_283;
    YHot = a3->YHot;
    if ( YHot >= Height )
      goto LABEL_283;
    *((_DWORD *)v10 + 937) = XHot;
    *((_DWORD *)v10 + 938) = YHot;
    if ( (_DWORD)XHot == -1 && YHot == -1 )
      goto LABEL_283;
    Width = (unsigned int)(XHot + a2->X);
    if ( (int)Width < *((_DWORD *)v296 + 6)
      || (int)Width >= *((_DWORD *)v296 + 8)
      || (Width = a2->Y + YHot, (int)Width < *((_DWORD *)v296 + 7))
      || (int)Width >= *((_DWORD *)v296 + 9) )
    {
LABEL_283:
      v193 = (_QWORD *)WdLogNewEntry5_WdError(XHot, Width);
      v193[3] = *(int *)(v13 + 320);
      v193[4] = *(unsigned int *)(v13 + 316);
      v193[5] = *((unsigned int *)v10 + 4);
      WdLogEvent5_WdError(v193);
LABEL_284:
      v194 = -1073741811;
LABEL_291:
      LODWORD(v76) = v194;
      goto LABEL_241;
    }
  }
  if ( a8 )
  {
    if ( *(_DWORD *)(v13 + 1872) < 0x7000u )
    {
      v195 = WdLogNewEntry5_WdAssertion(XHot, Width);
      *(_QWORD *)(v195 + 24) = 1137LL;
      WdLogEvent5_WdAssertion(v195);
    }
    PristineCursor = DISPLAY_SOURCE::GetPristineCursor(v10, 0);
    a3 = PristineCursor;
    if ( !PristineCursor->pPixels )
      goto LABEL_284;
    v292 = PristineCursor->Width;
    v291 = PristineCursor->Height * ((PristineCursor->Flags.Value & 1) + 1);
  }
  else
  {
    v291 = a7;
    v25 = a6;
    v292 = a6;
  }
  if ( (*(_DWORD *)(v13 + 348) & 0x100) == 0 )
  {
    v25 = **(unsigned int **)(v13 + 2600);
    if ( (v25 & 8) != 0 )
    {
LABEL_290:
      v194 = -1073741823;
      goto LABEL_291;
    }
  }
  v26 = *((unsigned int *)v10 + 4);
  v310.VidPnSourceId = v26;
  v27 = *(_QWORD *)(v13 + 2696);
  if ( (unsigned int)v26 >= *(_DWORD *)(v27 + 80) )
  {
    v197 = WdLogNewEntry5_WdAssertion(v25, Width);
    *(_QWORD *)(v197 + 24) = 6068LL;
    WdLogEvent5_WdAssertion(v197);
  }
  v28 = 3968 * v26;
  if ( !*(_BYTE *)(3968 * v26 + *(_QWORD *)(v27 + 112) + 720) )
  {
    v175 = (_QWORD *)WdLogNewEntry5_WdError(v28, Width);
    LODWORD(v76) = -1073741823;
    v175[3] = -1073741823LL;
    v175[4] = *((unsigned int *)this + 4);
    v175[5] = a3->Flags.Value;
    v175[6] = a5;
    WdLogEvent5_WdError(v175);
    goto LABEL_241;
  }
  if ( (*(_DWORD *)(v13 + 348) & 0x20) != 0 && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v13 + 2696)) )
    goto LABEL_290;
  v29 = 1;
  v265 = 1;
  v30 = 1;
  v268 = *((_DWORD *)v10 + 267);
  if ( v268 == -1 )
    goto LABEL_293;
  v31 = *(_QWORD *)(v13 + 2696);
  if ( !v31 )
  {
    v198 = WdLogNewEntry5_WdError(v28, Width);
    *(_QWORD *)(v198 + 24) = 9262LL;
    WdLogEvent5_WdError(v198);
LABEL_293:
    v42 = -1073741811;
    goto LABEL_294;
  }
  v32 = *(_QWORD *)(v31 + 96);
  if ( v32 )
  {
    if ( v32 == -168 )
    {
      v204 = WdLogNewEntry5_WdAssertion(v28, Width);
      WdLogEvent5_WdAssertion(v204);
    }
    KeAcquireGuardedMutex((PKGUARDED_MUTEX)(v32 + 168));
    v34 = v32 + 128;
    v35 = *(_QWORD *)(v32 + 128);
    if ( v35 == v32 + 128 )
      goto LABEL_300;
    v36 = v35 - 16;
    if ( !v35 )
      v36 = 0LL;
    if ( !v36 )
      goto LABEL_300;
    while ( *(_DWORD *)(v36 + 44) != v268 )
    {
      v33 = *(_QWORD *)(v36 + 16);
      if ( v33 != v34 )
      {
        v36 = v33 - 16;
        if ( !v33 )
          v36 = 0LL;
        if ( v36 )
          continue;
      }
      goto LABEL_300;
    }
    if ( *(_DWORD *)(v36 + 432) != 1 )
      v36 = *(_QWORD *)(v36 + 440);
    if ( v36 )
    {
      if ( v32 == -168 )
      {
        v211 = WdLogNewEntry5_WdAssertion(v34, v33);
        WdLogEvent5_WdAssertion(v211);
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v32 + 168));
      if ( *(_DWORD *)(v36 + 432) != 1 )
      {
        v212 = WdLogNewEntry5_WdAssertion(v38, v37);
        WdLogEvent5_WdAssertion(v212);
      }
      v39 = (struct _ERESOURCE *)(v36 + 296);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v36 + 296), 1u);
      v40 = *(_DWORD *)(v36 + 592) || (*(_DWORD *)(v36 + 40) & 0x80u) != 0;
      ExReleaseResourceLite(v39);
      KeLeaveCriticalRegion();
      if ( v40 )
      {
        v30 = 1;
        v29 = 1;
        goto LABEL_54;
      }
    }
    else
    {
LABEL_300:
      v205 = WdLogNewEntry5_WdTrace(v34, v33);
      *(_QWORD *)(v205 + 24) = v268;
      *(_QWORD *)(v205 + 32) = v32;
      if ( v32 == -168 )
      {
        v208 = WdLogNewEntry5_WdAssertion(v207, v206);
        WdLogEvent5_WdAssertion(v208);
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v32 + 168));
      v210 = WdLogNewEntry5_WdDmmEvent(v209);
      *(_QWORD *)(v210 + 24) = v268;
      *(_QWORD *)(v210 + 32) = v13;
      WdLogEvent5_WdDmmEvent(v210);
    }
    v30 = *(_BYTE *)(v31 + 250) == 0;
    v29 = *(_BYTE *)(v31 + 249) == 0;
LABEL_54:
    v265 = v29;
    v41 = 0;
    goto LABEL_55;
  }
  v200 = WdLogNewEntry5_WdError(v28, Width);
  *(_QWORD *)(v200 + 24) = v13;
  WdLogEvent5_WdError(v200);
  v41 = -1073741811;
  v203 = WdLogNewEntry5_WdAssertion(v202, v201);
  *(_QWORD *)(v203 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v203);
LABEL_55:
  v42 = v41;
  v43 = v41 < 0;
  v10 = this;
  if ( v43 )
  {
LABEL_294:
    v199 = (_QWORD *)WdLogNewEntry5_WdError(v28, Width);
    v199[3] = *((unsigned int *)v10 + 4);
    v199[4] = *(int *)(v13 + 320);
    v199[5] = *(unsigned int *)(v13 + 316);
    v199[6] = v42;
    WdLogEvent5_WdError(v199);
  }
  if ( v29 && v30 && !*((_BYTE *)v10 + 668) )
  {
    LODWORD(v76) = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v13 + 2696), a3);
    if ( (int)v76 < 0 )
      goto LABEL_241;
    goto LABEL_129;
  }
  v44 = *((unsigned int *)v10 + 4);
  v45 = *((_QWORD *)v10 + 1);
  v272 = *((_DWORD *)v10 + 4);
  *(_QWORD *)&v290 = v45;
  if ( v29 )
  {
    CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v45, (unsigned int)v44, 1LL);
    v266 = CurrentOrientation;
    goto LABEL_75;
  }
  if ( !*(_BYTE *)(v45 + 249) )
  {
    CurrentOrientation = D3DKMDT_VPPR_IDENTITY;
    v266 = D3DKMDT_VPPR_IDENTITY;
    goto LABEL_75;
  }
  v46 = 3968 * v44;
  v279 = v44;
  v47 = *(unsigned int *)(3968 * v44 + *(_QWORD *)(v45 + 112) + 1040);
  if ( (_DWORD)v47 == 1 )
    goto LABEL_60;
  v47 = (unsigned int)(v47 - 2);
  if ( (_DWORD)v47 )
  {
    v47 = (unsigned int)(v47 - 1);
    if ( (_DWORD)v47 )
    {
      if ( (_DWORD)v47 != 1 )
      {
        v213 = WdLogNewEntry5_WdError(v47, Width);
        *(_QWORD *)(v213 + 24) = *(int *)(v46 + *(_QWORD *)(v45 + 112) + 1040);
        *(_QWORD *)(v213 + 32) = *(_QWORD *)(v45 + 16);
        WdLogEvent5_WdError(v213);
LABEL_60:
        CurrentOrientation = D3DKMDT_VPPR_IDENTITY;
        goto LABEL_61;
      }
      CurrentOrientation = D3DKMDT_VPPR_ROTATE270;
    }
    else
    {
      CurrentOrientation = D3DKMDT_VPPR_ROTATE180;
    }
  }
  else
  {
    CurrentOrientation = D3DKMDT_VPPR_ROTATE90;
  }
LABEL_61:
  v49 = *(_QWORD *)(v45 + 16);
  v266 = CurrentOrientation;
  if ( !v49 )
  {
    v214 = WdLogNewEntry5_WdError(v47, Width);
    *(_QWORD *)(v214 + 24) = 0LL;
    WdLogEvent5_WdError(v214);
    goto LABEL_75;
  }
  v50 = *(_QWORD *)(v49 + 2696);
  if ( !v50 || (v51 = *(_QWORD *)(v50 + 88)) == 0 )
  {
    v215 = WdLogNewEntry5_WdError(v47, Width);
    *(_QWORD *)(v215 + 24) = v49;
    WdLogEvent5_WdError(v215);
    goto LABEL_75;
  }
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v51 + 40));
  v54 = *(_QWORD *)(v51 + 88);
  if ( !v54 )
  {
    v295 = 0LL;
    goto LABEL_315;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v54 + 32));
  v55 = *(_QWORD *)(v51 + 88);
  v295 = v55;
  if ( !v55 )
  {
LABEL_315:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v53, v52) + 24) = v49;
LABEL_327:
    auto_rc<DMMVIDPN const>::reset(&v295, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v51 + 40), v222);
    goto LABEL_75;
  }
  v56 = v55 + 96;
  v288 = -1;
  v57 = *(_QWORD *)(v55 + 120);
  v58 = v55 + 120;
  if ( v57 == v55 + 120 )
    goto LABEL_325;
  v53 = (_QWORD *)(v57 - 8);
  if ( v57 == 8 )
  {
LABEL_319:
    if ( v57 != v58 && v57 != 8 )
    {
      v218 = WdLogNewEntry5_WdTrace(v53, v57);
      v220 = v279;
      *(_QWORD *)(v218 + 24) = v279;
      *(_QWORD *)(v218 + 32) = v56;
LABEL_326:
      v221 = (_QWORD *)WdLogNewEntry5_WdTrace(v220, v219);
      v221[3] = 0LL;
      v221[4] = v279;
      v221[5] = v56;
      v221[6] = -1071774919LL;
      goto LABEL_327;
    }
LABEL_325:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v53, v57) + 24) = v56;
    goto LABEL_326;
  }
  while ( *(_DWORD *)(v53[11] + 24LL) != v272 )
  {
    v216 = v53[1];
    v53 = (_QWORD *)(v216 - 8);
    if ( v216 == v58 )
      v53 = 0LL;
    if ( !v53 )
      goto LABEL_319;
  }
  v288 = *(_DWORD *)(v53[12] + 24LL);
  v59 = (void (__fastcall ***)(_QWORD, __int64))(v55 + 24);
  v60 = _InterlockedDecrement((volatile signed __int32 *)(v55 + 32));
  if ( v60 )
  {
    if ( v60 < 0 )
    {
      v217 = WdLogNewEntry5_WdError(v59, v57);
      *(_QWORD *)(v217 + 24) = v60;
      WdLogEvent5_WdError(v217);
    }
  }
  else if ( v59 )
  {
    (**v59)(v59, 1LL);
  }
  v294 = v288;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v51 + 40), v57);
  v282[0] = 0;
  if ( (int)MonitorGetMonitorOrientationsFromTarget(*(_QWORD *)(v290 + 16), v294, v282) < 0 )
  {
    v61 = 0;
    v282[0] = 0;
  }
  else
  {
    v61 = v282[0];
  }
  CurrentOrientation = ((v61 + (_BYTE)CurrentOrientation - 1) & 3) + 1;
  v266 = CurrentOrientation;
LABEL_75:
  v62 = *(_DWORD *)(v13 + 2016);
  if ( a3->Width > v62 )
    goto LABEL_290;
  v63 = a3->Height;
  Width = *(unsigned int *)(v13 + 2020);
  if ( v63 > (unsigned int)Width )
    goto LABEL_290;
  Width = v62 * (unsigned int)Width;
  if ( a3->Pitch * ((a3->Flags.Value & 1) + 1) * v63 > 4 * (unsigned __int64)(unsigned int)Width )
  {
    LODWORD(v76) = -1073741823;
    goto LABEL_241;
  }
  v64 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v64 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v64 + 168)) )
  {
    v223 = WdLogNewEntry5_WdAssertion(v65, Width);
    *(_QWORD *)(v223 + 24) = 5136LL;
    WdLogEvent5_WdAssertion(v223);
  }
  if ( !*((_QWORD *)this + 101) )
  {
    v177 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 2016LL)
                        * *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 2020LL));
    v178 = 4 * v177;
    if ( !is_mul_ok(v177, 4uLL) )
      v178 = -1LL;
    *((_QWORD *)this + 101) = operator new[](v178, 0x4B677844u, PagedPool);
  }
  v66 = (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 784);
  v67 = (void *)*((_QWORD *)this + 101);
  if ( !v67 )
  {
    LODWORD(v76) = -1073741801;
    goto LABEL_241;
  }
  memset(v67, 0, 4 * *(unsigned int *)(v13 + 2020) * (unsigned __int64)*(unsigned int *)(v13 + 2016));
  v68 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v68 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v68 + 168)) )
  {
    v224 = WdLogNewEntry5_WdAssertion(v70, v69);
    *(_QWORD *)(v224 + 24) = 5161LL;
    WdLogEvent5_WdAssertion(v224);
  }
  v71 = (void *)*((_QWORD *)this + 106);
  v72 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( v71 )
    goto LABEL_87;
  v179 = 4LL * (unsigned int)(*(_DWORD *)(v72 + 2016) * *(_DWORD *)(v72 + 2020));
  if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v72 + 2016) * *(_DWORD *)(v72 + 2020)), 4uLL) )
    v179 = -1LL;
  v180 = operator new[](v179, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 106) = v180;
  v71 = v180;
  if ( v180 )
LABEL_87:
    memset(v71, 0, 4 * *(unsigned int *)(v72 + 2020) * (unsigned __int64)*(unsigned int *)(v72 + 2016));
  v73 = (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824);
  if ( !*((_QWORD *)this + 106) )
  {
    LODWORD(v76) = -1073741801;
    goto LABEL_241;
  }
  v74 = v296;
  v282[1] = 0;
  v75 = (const struct tagRECT *)((char *)v296 + 24);
  if ( !*((_BYTE *)this + 668) )
  {
    LODWORD(v76) = ScaleCursorShape(
                     (const struct tagRECT *)((char *)this + 652),
                     v75,
                     CurrentOrientation,
                     a3,
                     v73,
                     v66,
                     (const struct _DXGK_DRIVERCAPS *)(v13 + 1992),
                     &v282[1]);
    if ( (int)v76 >= 0 )
      goto LABEL_91;
LABEL_241:
    v176 = v76;
LABEL_242:
    v14 = v176;
    goto LABEL_219;
  }
  v303.right = *((_DWORD *)this + 168);
  v303.bottom = *((_DWORD *)this + 169);
  *(_QWORD *)&v303.left = 0LL;
  LODWORD(v76) = ScaleCursorShape(
                   &v303,
                   v75,
                   CurrentOrientation,
                   a3,
                   v73,
                   v66,
                   (const struct _DXGK_DRIVERCAPS *)(v13 + 1992),
                   &v282[1]);
  if ( (int)v76 < 0 )
    goto LABEL_241;
LABEL_91:
  v77 = v266;
  if ( v282[1] )
  {
    if ( v266 != D3DKMDT_VPPR_IDENTITY && !v265 )
    {
      RotateCursorShape(v73, v66, v266, (const struct _DXGK_DRIVERCAPS *)(v13 + 1992));
      goto LABEL_95;
    }
LABEL_94:
    v78 = (void *)*((_QWORD *)this + 101);
    v66->Flags.Value = v73->Flags.Value;
    *((_DWORD *)this + 197) = v73->Width;
    *((_DWORD *)this + 198) = v73->Height;
    *((_DWORD *)this + 199) = v73->Pitch;
    memmove(v78, v73->pPixels, v73->Pitch * v73->Height * ((v73->Flags.Value & 1) + 1));
    *((_DWORD *)this + 204) = v73->XHot;
    *((_DWORD *)this + 205) = v73->YHot;
    goto LABEL_95;
  }
  if ( v266 == D3DKMDT_VPPR_IDENTITY || v265 )
  {
    v73 = a3;
    goto LABEL_94;
  }
  RotateCursorShape(a3, v66, v266, (const struct _DXGK_DRIVERCAPS *)(v13 + 1992));
LABEL_95:
  v79 = *((_DWORD *)v74 + 9) - *((_DWORD *)v74 + 7);
  v80 = *((_DWORD *)this + 165) - *((_DWORD *)this + 163);
  v81 = *((_DWORD *)this + 169);
  v82 = *((_DWORD *)this + 168);
  v267 = *((_DWORD *)this + 166) - *((_DWORD *)this + 164);
  v83 = *((_DWORD *)v74 + 8) - *((_DWORD *)v74 + 6);
  v273 = v81;
  v280 = v82;
  v290 = *(_OWORD *)((char *)this + 652);
  v269 = v80;
  if ( *((_BYTE *)this + 668) )
  {
    v80 = v82;
    v269 = v82;
    v86 = (unsigned int)v81;
    v267 = v81;
    v85 = 0;
    LODWORD(v290) = 0;
    v84 = 0;
    v289 = 0;
  }
  else
  {
    v84 = DWORD1(v290);
    v85 = v290;
    v86 = (unsigned int)v267;
    v273 = HIDWORD(v290);
    v280 = DWORD2(v290);
    v289 = DWORD1(v290);
  }
  if ( ((v77 - 1) & 0xFFFFFFFD) != 0 )
  {
    v87 = (int)v86 * v283->X / v83;
    v88 = v80 * v283->Y;
LABEL_251:
    v89 = (unsigned int)(v88 >> 31);
    LODWORD(v89) = v88 % v79;
    v90 = v88 / v79;
    goto LABEL_102;
  }
  v86 = (unsigned int)(v80 * v283->X);
  if ( v83 == 1280 )
    v87 = (int)v86 / 1280;
  else
    v87 = (int)v86 / v83;
  v88 = v267 * v283->Y;
  if ( v79 != 1024 )
    goto LABEL_251;
  v89 = (v88 >> 31) & 0x3FF;
  v90 = v88 / 1024;
LABEL_102:
  if ( v265 )
  {
    v310.X = v87 + v85;
    v225 = v90 + v84;
LABEL_350:
    v310.Y = v225;
    goto LABEL_112;
  }
  if ( v77 < 2 )
    goto LABEL_104;
  if ( v77 == 2 )
  {
    v91 = v269;
    v92 = v90 + v85;
    v227 = v84 - *((_DWORD *)this + 198) - v87;
    v94 = v267;
    v93 = v267 + v227;
    goto LABEL_108;
  }
  v86 = (unsigned int)(v77 - 3);
  if ( v77 == 3 )
  {
    v91 = v269;
    v226 = v85 - *((_DWORD *)this + 197) - v87;
    v94 = v267;
    v92 = v269 + v226;
    v93 = v267 + v84 - *((_DWORD *)this + 198) - v90;
    goto LABEL_108;
  }
  if ( v77 == 4 )
  {
    v91 = v269;
    v93 = v87 + v84;
    v92 = v269 + v85 - *((_DWORD *)this + 197) - v90;
  }
  else
  {
LABEL_104:
    if ( v77 != 1 )
    {
      v228 = WdLogNewEntry5_WdAssertion(v86, v89);
      *(_QWORD *)(v228 + 24) = 686LL;
      WdLogEvent5_WdAssertion(v228);
      v84 = v289;
      v85 = v290;
    }
    v91 = v269;
    v92 = v87 + v85;
    v93 = v90 + v84;
  }
  v94 = v267;
LABEL_108:
  v95 = v92 + *((_DWORD *)this + 197);
  v310.Y = v93;
  v310.X = v92;
  if ( v95 < v85 || v92 > v280 || v93 + *((_DWORD *)this + 198) < v84 || v93 > v273 )
  {
    v310.X = v85 + v91 / 2;
    v225 = v84 + v94 / 2;
    goto LABEL_350;
  }
LABEL_112:
  FillClipParams(v66, this, &v310, (struct CURSOR_CLIP_PARAMS *)&v305);
  if ( HIDWORD(v306) )
  {
    ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(this, 1);
    v230 = ClippedCursor;
    if ( !ClippedCursor->pPixels )
    {
      LODWORD(v76) = -1073741801;
      goto LABEL_241;
    }
    ClipCurrentCursor(v66, ClippedCursor, (struct CURSOR_CLIP_PARAMS *)&v305);
    v230->VidPnSourceId = *((_DWORD *)this + 4);
    LODWORD(v76) = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v13 + 2696), v230);
    if ( (int)v76 < 0 )
      goto LABEL_241;
    *((_BYTE *)this + 726) = 1;
  }
  else
  {
    *((_DWORD *)this + 200) = *((_DWORD *)this + 4);
    v98 = *(_QWORD *)(v13 + 2696);
    v297 = -1;
    v298 = 0LL;
    if ( (qword_1C00B19B0 & 2) != 0 )
    {
      v299 = 1;
      v297 = 5018;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v96, &EventProfilerEnter, v97, 5018);
    }
    else
    {
      v299 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v297, 5018LL);
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v98 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v98 + 16) + 4364LL));
    CurrentIrql = KeGetCurrentIrql();
    v101 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(v100, v99), (v101 = Current) != 0LL) )
      v270 = *((_DWORD *)Current + 8);
    else
      v270 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v335,
      *(struct DXGADAPTER **)(v98 + 16));
    v76 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETPOINTERSHAPE *))(*(_QWORD *)(v98 + 16) + 472LL))(
            *(_QWORD *)(*(_QWORD *)(v98 + 16) + 272LL),
            v66);
    if ( v335[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v231 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v104, v103);
      v231[3] = 275LL;
      v231[4] = 16LL;
      v231[5] = v98;
      v231[6] = CurrentIrql;
      v232 = KeGetCurrentIrql();
      v231[7] = v232;
      WdLogEvent5_WdCriticalError(v231);
    }
    if ( v101 && *((_DWORD *)v101 + 8) != v270 )
    {
      v233 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v104, v103);
      v233[3] = 275LL;
      v233[4] = 38LL;
      v233[5] = *((int *)v101 + 8);
      v233[6] = v270;
      v233[7] = 0LL;
      WdLogEvent5_WdCriticalError(v233);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v98 + 16) + 4364LL));
    v105 = (_QWORD *)WdLogNewEntry5_WdTrace(v104, v103);
    v105[3] = v76;
    v106 = *(_QWORD *)(*(_QWORD *)(v98 + 16) + 272LL);
    v105[4] = v106;
    v105[5] = v66->Flags.Value;
    v105[6] = *((unsigned int *)this + 197);
    v107 = *((unsigned int *)this + 198);
    v105[7] = v107;
    if ( (_DWORD)v76 && (_DWORD)v76 != -1073741801 && (_DWORD)v76 != -1073741637 )
    {
      v234 = WdLogNewEntry5_WdError(v107, v106);
      *(_QWORD *)(v234 + 24) = v76;
      WdLogEvent5_WdError(v234);
    }
    DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v98 + 16));
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v297, v108);
    if ( v299 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v109, &EventProfilerExit, v110, v297);
    if ( (int)v76 < 0 )
      goto LABEL_241;
    v111 = this;
    *((_BYTE *)this + 726) = 0;
  }
LABEL_129:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v264) = v310.Flags.0;
    LODWORD(v263) = v310.Y;
    LODWORD(v262) = v310.X;
    LODWORD(Timeout) = v310.VidPnSourceId;
    McTemplateK0pqtqq_EtwWriteTransfer((__int64)v111, &EventSetPointerPosition, v110, v285, Timeout, v262, v263, v264);
  }
  v112 = *(_QWORD *)(v13 + 2696);
  v300 = -1;
  v301 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v302 = 1;
    v300 = 5019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)v111, &EventProfilerEnter, v110, 5019);
  }
  else
  {
    v302 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v300, 5019LL);
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v112 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v112 + 16) + 4364LL));
  v275 = KeGetCurrentIrql();
  ThreadProperty = 0LL;
  if ( v275 >= 2u )
    goto LABEL_253;
  v116 = KeGetCurrentThread();
  if ( !v116 )
  {
    v235 = WdLogNewEntry5_WdAssertion(v114, v113);
    *(_QWORD *)(v235 + 24) = 507LL;
    WdLogEvent5_WdAssertion(v235);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v114, v113);
  CurrentProcess = PsGetCurrentProcess(v119, v118, v120, v121);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(v116) == CurrentProcessSessionId
    && ProcessDxgProcess
    && (v124 = *(void **)(ProcessDxgProcess + 88)) != 0LL
    && v124 != &gDxgkWin32kEngInterface
    && (!(unsigned __int8)KeIsAttachedProcess()
     || (v236 = PsGetCurrentProcess(v126, v125, v127, v128),
         ProcessSessionId = PsGetProcessSessionIdEx(v236),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = PsGetThreadWin32Thread(v116)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    ThreadProperty = *(struct DXGTHREAD **)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    ThreadProperty = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
    if ( !ThreadProperty )
    {
      ThreadProperty = DxgkThreadObjectCreateDxgThread();
      if ( !ThreadProperty )
      {
        ThreadProperty = 0LL;
        goto LABEL_253;
      }
    }
    ObfDereferenceObject(ThreadProperty);
  }
  if ( ThreadProperty )
  {
    v130 = *((_DWORD *)ThreadProperty + 8);
    goto LABEL_148;
  }
LABEL_253:
  v130 = 0;
LABEL_148:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v337,
    *(struct DXGADAPTER **)(v112 + 16));
  v76 = (*(int (__fastcall **)(_QWORD, _DXGKARG_SETPOINTERPOSITION *))(*(_QWORD *)(v112 + 16) + 464LL))(
          *(_QWORD *)(*(_QWORD *)(v112 + 16) + 272LL),
          &v310);
  if ( v337[0] )
    KeUnstackDetachProcess(&v338);
  if ( v275 != KeGetCurrentIrql() )
  {
    v239 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v132, v131);
    v239[3] = 275LL;
    v239[4] = 16LL;
    v239[5] = v112;
    v239[6] = v275;
    v240 = KeGetCurrentIrql();
    v239[7] = v240;
    WdLogEvent5_WdCriticalError(v239);
  }
  if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v130 )
  {
    v241 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v132, v131);
    v241[3] = 275LL;
    v241[4] = 38LL;
    v241[5] = *((int *)ThreadProperty + 8);
    v241[6] = v130;
    v241[7] = 0LL;
    WdLogEvent5_WdCriticalError(v241);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v112 + 16) + 4364LL));
  v133 = (_QWORD *)WdLogNewEntry5_WdTrace(v132, v131);
  v133[3] = v76;
  v134 = *(_QWORD *)(*(_QWORD *)(v112 + 16) + 272LL);
  v133[4] = v134;
  v133[5] = *(_BYTE *)&v310.Flags.0 & 1;
  v133[6] = v310.X;
  Y = v310.Y;
  v133[7] = v310.Y;
  if ( (_DWORD)v76 )
  {
    v242 = WdLogNewEntry5_WdError(Y, v134);
    *(_QWORD *)(v242 + 24) = v76;
    WdLogEvent5_WdError(v242);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v112 + 16));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v300, v136);
  if ( v302 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v137, &EventProfilerExit, v138, v300);
  if ( (int)v76 < 0 )
    goto LABEL_241;
  v139 = (struct SESSION_VIEW *)*((_QWORD *)v296 + 6);
  if ( v139 == (struct SESSION_VIEW *)((char *)v296 + 48) )
    v140 = 0LL;
  else
    v140 = (struct SESSION_VIEW *)((char *)v139 - 56);
  v141 = this;
  if ( this == v140 )
    v271 = 1;
  v142 = *(_QWORD *)(v13 + 2696);
  VidPnSourceId = v310.VidPnSourceId;
  v144 = *(_BYTE *)&v310.Flags.0 & 1;
  Width = (unsigned int)v283->X;
  v145 = v310.Y;
  X = v310.X;
  v147 = v283->Y;
  v276 = v283->X;
  v281 = v310.Y;
  LODWORD(v290) = v310.X;
  if ( v310.VidPnSourceId >= *(_DWORD *)(v142 + 80) )
  {
    v243 = WdLogNewEntry5_WdAssertion(v140, Width);
    *(_QWORD *)(v243 + 24) = 5753LL;
    WdLogEvent5_WdAssertion(v243);
    Width = v276;
    v145 = v281;
    X = v290;
    v141 = this;
  }
  v148 = 3968 * VidPnSourceId;
  *(_BYTE *)(*(_QWORD *)(v142 + 112) + 3968 * VidPnSourceId + 725) = v144;
  if ( v144 )
  {
    *(_DWORD *)(*(_QWORD *)(v142 + 112) + v148 + 728) = X;
    *(_DWORD *)(*(_QWORD *)(v142 + 112) + v148 + 732) = v145;
    *(_DWORD *)(*(_QWORD *)(v142 + 112) + v148 + 680) = Width;
    *(_DWORD *)(*(_QWORD *)(v142 + 112) + v148 + 684) = v147;
  }
  if ( !a8 && *(_DWORD *)(v13 + 1872) >= 0x7000u )
  {
    v244 = DISPLAY_SOURCE::GetPristineCursor(v141, a3->Pitch * a3->Height * ((a3->Flags.Value & 1) + 1));
    v245 = v244;
    pPixels = (void *)v244->pPixels;
    if ( !pPixels )
    {
      v176 = -1073741801;
      goto LABEL_242;
    }
    v244->Flags.Value = a3->Flags.Value;
    v244->Width = a3->Width;
    v244->Height = a3->Height;
    v244->Pitch = a3->Pitch;
    memmove(pPixels, a3->pPixels, a3->Pitch * a3->Height * ((a3->Flags.Value & 1) + 1));
    v245->XHot = a3->XHot;
    v245->YHot = a3->YHot;
  }
  if ( !v271 )
    goto LABEL_219;
  if ( !v287 )
  {
    v247 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v148, Width);
    v247[5] = &v286;
    v247[3] = 275LL;
    v247[4] = 4LL;
    v247[6] = 0LL;
    v247[7] = 0LL;
    WdLogEvent5_WdCriticalError(v247);
  }
  v149 = v286;
  v287 = 0;
  if ( *(struct _KTHREAD **)(v286 + 16) != KeGetCurrentThread() )
  {
    v248 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v148, Width);
    v248[3] = 275LL;
    v248[4] = 4LL;
    v248[5] = v149;
    v248[6] = 0LL;
    v248[7] = 0LL;
    WdLogEvent5_WdCriticalError(v248);
  }
  v150 = *(_DWORD *)(v149 + 24);
  if ( v150 <= 0 )
  {
    v249 = WdLogNewEntry5_WdAssertion(v148, Width);
    *(_QWORD *)(v249 + 24) = 705LL;
    WdLogEvent5_WdAssertion(v249);
    v150 = *(_DWORD *)(v149 + 24);
  }
  v151 = v150 - 1;
  *(_DWORD *)(v149 + 24) = v151;
  if ( !v151 )
  {
    *(_QWORD *)(v149 + 16) = 0LL;
    ExReleasePushLockExclusiveEx(v149, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v327 != v332 )
    COREACCESS::Release((COREACCESS *)v325);
  if ( !v333 )
  {
    v250 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v153, v152);
    v250[5] = v330;
    v250[3] = 275LL;
    v250[4] = 4LL;
    v250[6] = 0LL;
    v250[7] = 0LL;
    WdLogEvent5_WdCriticalError(v250);
  }
  v333 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v332 + 23) )
    DXGADAPTER::ReleaseCoreResource(v332, v334);
  v334 = 0LL;
  v324 = 0;
  v154 = v283->VidPnSourceId;
  v293 = 0LL;
  v284 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters((struct DXGADAPTER *)v13, (unsigned int)v154, &v293, &v304, &v284, &v309, 0);
  v158 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v251 = (_QWORD *)WdLogNewEntry5_WdError(v157, v156);
    v251[3] = v13;
    v251[4] = v154;
    v251[5] = v158;
    WdLogEvent5_WdError(v251);
    v255 = WdLogNewEntry5_WdWarning(v253, v252, v254);
    *(_QWORD *)(v255 + 24) = v13;
    *(_QWORD *)(v255 + 32) = v158;
    WdLogEvent5_WdWarning(v255);
    goto LABEL_219;
  }
  v159 = v284;
  if ( !v293 || !v284 )
  {
    v256 = WdLogNewEntry5_WdAssertion(v157, v156);
    *(_QWORD *)(v256 + 24) = 3143LL;
    WdLogEvent5_WdAssertion(v256);
  }
  v160 = *((_QWORD *)v159 + 337);
  v307[1] = v159;
  v161 = *(_QWORD *)(v160 + 104);
  _InterlockedIncrement64((volatile signed __int64 *)v159 + 3);
  v307[0] = -1LL;
  KeEnterCriticalRegion();
  v162 = v284;
  ExAcquirePushLockSharedEx((char *)v284 + 136, 0LL);
  v308 = 1;
  v312 = 0;
  v315 = v162;
  v316 = 0;
  v317 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)v159 + 3);
  v320 = v284;
  v314 = -1LL;
  v321 = 0;
  v322 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)v159 + 3);
  v319 = -1LL;
  v164 = _InterlockedExchangeAdd64((volatile signed __int64 *)v293 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v164 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v293 + 2), v293);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v159 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v284 + 2), v284);
  if ( v321 )
  {
    v257 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v164, v163);
    v257[5] = v318;
    v257[3] = 275LL;
    v257[4] = 4LL;
    v257[6] = 0LL;
    v257[7] = 0LL;
    WdLogEvent5_WdCriticalError(v257);
  }
  v165 = v320;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v320 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v320 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v166, &EventBlockThread, v167, 72);
      KeWaitForSingleObject((char *)v320 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v320, 0LL);
    v165 = v320;
  }
  v322 = 0LL;
  v321 = 1;
  if ( *((_DWORD *)v165 + 50) == 1 )
  {
    if ( v315 == v320
      || (COREACCESS::AcquireShared((COREACCESS *)v313, 0LL),
          v165 = (struct DXGADAPTER *)*((unsigned int *)v315 + 50),
          (_DWORD)v165 == 1) )
    {
      v312 = 1;
      if ( (unsigned int)v154 < *(_DWORD *)(v161 + 52) )
      {
        _lambda_103e920f2f8a7257353075347c127b30_::_lambda_invoker_cdecl_(
          v161,
          (unsigned int)OUTPUTDUPL_MGR::ProcessPointerShapeChange,
          (_DWORD)v283,
          (_DWORD)a3,
          v292,
          v291);
        if ( v312 )
        {
          if ( v315 != v320 )
            COREACCESS::Release((COREACCESS *)v313);
          if ( !v321 )
          {
            v260 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v169, v168);
            v260[5] = v318;
            v260[3] = 275LL;
            v260[4] = 4LL;
            v260[6] = 0LL;
            v260[7] = 0LL;
            WdLogEvent5_WdCriticalError(v260);
          }
          v321 = 0;
          v170 = v320;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v320 + 23) )
          {
            DXGADAPTER::ReleaseCoreResource(v320, v322);
            v170 = v320;
          }
          v322 = 0LL;
          v312 = 0;
        }
        else
        {
          v170 = v320;
        }
        if ( v170 )
        {
          if ( v321 )
          {
            COREACCESS::Release((COREACCESS *)v318);
            v170 = v320;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v170 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v170 + 2), v170);
        }
        v171 = v315;
        if ( v315 )
        {
          if ( v316 )
          {
            COREACCESS::Release((COREACCESS *)v313);
            v171 = v315;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v171 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v171 + 2), v171);
        }
        ExReleasePushLockSharedEx((char *)v162 + 136, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v159 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v284 + 2), v284);
        goto LABEL_219;
      }
      v259 = WdLogNewEntry5_WdError(v165, v163);
      *(_QWORD *)(v259 + 24) = v154;
      WdLogEvent5_WdError(v259);
      goto LABEL_383;
    }
    COREACCESS::Release((COREACCESS *)v313);
  }
  COREACCESS::Release((COREACCESS *)v318);
LABEL_383:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v311, v258);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v307);
LABEL_219:
  if ( v287 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v286, Width);
LABEL_221:
  if ( v324 )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v323);
  v172 = v332;
  if ( v332 )
  {
    if ( v333 )
    {
      COREACCESS::Release((COREACCESS *)v330);
      v172 = v332;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v172 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v172 + 2), v172);
  }
  v173 = v327;
  if ( v327 )
  {
    if ( v328 )
    {
      COREACCESS::Release((COREACCESS *)v325);
      v173 = v327;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v173 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v173 + 2), v173);
  }
  return v14;
}
