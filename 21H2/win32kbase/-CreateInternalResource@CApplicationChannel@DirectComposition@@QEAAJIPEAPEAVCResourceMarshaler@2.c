/*
 * XREFs of ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00285B4
 * Callers:
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0004768 (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEB.c)
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C0028520 (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z.c)
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x1C005A0B8 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCReso.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C005C9EC (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C008322C (-EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAP.c)
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C00A43CC (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_.c)
 *     ?SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C01F5F94 (-SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition@@QEAAJPEAVCApplicationCh.c)
 * Callees:
 *     ??0CProjectedShadowSceneMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00054D0 (--0CProjectedShadowSceneMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CVisualMarshaler@DirectComposition@@IEAA@W4ResTypeID@1@@Z @ 0x1C0021BF0 (--0CVisualMarshaler@DirectComposition@@IEAA@W4ResTypeID@1@@Z.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0024A14 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C002948C (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0029550 (Win32AllocPoolWithQuotaZInit.c)
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0083FEC (--0CInteractionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C009644C (-AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@.c)
 *     ??0CAnimationLoggingManagerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C009DD84 (--0CAnimationLoggingManagerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x1C00B4D60 (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ??0CCursorVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01D3DFC (--0CCursorVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CHolographicViewerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01D3E2C (--0CHolographicViewerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01D3E80 (--0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CParticleEmitterVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01D3ED8 (--0CParticleEmitterVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSceneNodeMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01D3F18 (--0CSceneNodeMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CTextVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01D3F58 (--0CTextVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01EF25C (--0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateInternalResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  __int64 v5; // rsi
  unsigned int v6; // edx
  unsigned int v7; // edx
  DirectComposition::CVisualMarshaler *v8; // rax
  DirectComposition::CProjectedShadowSceneMarshaler *v9; // rax
  _DWORD *v10; // rbx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  __int64 v17; // rax
  void **v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  __int64 v25; // rax
  int inserted; // edi
  __int64 v27; // rax
  _DWORD *v28; // rcx
  unsigned int v30; // edx
  unsigned int v31; // edx
  unsigned int v32; // edx
  unsigned int v33; // edx
  __int64 v34; // rax
  unsigned int v35; // edx
  unsigned int v36; // edx
  unsigned int v37; // edx
  unsigned int v38; // edx
  unsigned int v39; // edx
  unsigned int v40; // edx
  unsigned int v41; // edx
  __int64 v42; // rax
  unsigned int v43; // edx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // edx
  unsigned int v47; // edx
  unsigned int v48; // edx
  unsigned int v49; // edx
  unsigned int v50; // edx
  unsigned int v51; // edx
  unsigned int v52; // edx
  __int64 v53; // rax
  unsigned int v54; // edx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // edx
  unsigned int v60; // edx
  unsigned int v61; // edx
  DirectComposition::CAnimationLoggingManagerMarshaler *v62; // rax
  unsigned int v63; // edx
  unsigned int v64; // edx
  unsigned int v65; // edx
  __int64 v66; // rax
  unsigned int v67; // edx
  unsigned int v68; // edx
  unsigned int v69; // edx
  unsigned int v70; // edx
  unsigned int v71; // edx
  unsigned int v72; // edx
  unsigned int v73; // edx
  __int64 v74; // rax
  unsigned int v75; // edx
  unsigned int v76; // edx
  unsigned int v77; // edx
  unsigned int v78; // edx
  unsigned int v79; // edx
  unsigned int v80; // edx
  __int64 v81; // rax
  __int64 v82; // rax
  DirectComposition::CInteractionMarshaler *v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rcx
  __int64 v86; // rdx
  _QWORD *v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  unsigned int v90; // edx
  unsigned int v91; // edx
  unsigned int v92; // edx
  unsigned int v93; // edx
  __int64 v94; // rax
  __int64 v95; // rax
  unsigned int v96; // edx
  unsigned int v97; // edx
  __int64 v98; // rax
  _DWORD *v99; // rax
  __int64 v100; // rax
  unsigned int v101; // edx
  unsigned int v102; // edx
  __int64 v103; // rax
  unsigned int v104; // edx
  unsigned int v105; // edx
  unsigned int v106; // edx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  unsigned int v110; // edx
  unsigned int v111; // edx
  unsigned int v112; // edx
  unsigned int v113; // edx
  unsigned int v114; // edx
  unsigned int v115; // edx
  unsigned int v116; // edx
  __int64 v117; // rax
  unsigned int v118; // edx
  unsigned int v119; // edx
  unsigned int v120; // edx
  unsigned int v121; // edx
  unsigned int v122; // edx
  unsigned int v123; // edx
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  unsigned int v127; // edx
  unsigned int v128; // edx
  unsigned int v129; // edx
  unsigned int v130; // edx
  unsigned int v131; // edx
  unsigned int v132; // edx
  unsigned int v133; // edx
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  void **v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  unsigned int v140; // edx
  __int64 v141; // rax
  DirectComposition::CProjectedShadowSceneMarshaler *v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  unsigned int v146; // edx
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  unsigned int v163; // edx
  unsigned int v164; // edx
  unsigned int v165; // edx
  unsigned int v166; // edx
  unsigned int v167; // edx
  unsigned int v168; // edx
  __int64 v169; // rax
  DirectComposition::CCursorVisualMarshaler *v170; // rax
  __int64 v171; // rax
  _DWORD *v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  unsigned int v177; // edx
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  DirectComposition::CHolographicViewerMarshaler *v182; // rax
  __int64 v183; // rax
  void **v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rax
  __int64 v191; // rax
  DirectComposition::CInteractionTrackerMarshaler *v192; // rax
  __int64 v193; // rax
  __int64 v194; // rax
  __int64 v195; // rax
  unsigned int v196; // edx
  unsigned int v197; // edx
  unsigned int v198; // edx
  unsigned int v199; // edx
  unsigned int v200; // edx
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rax
  __int64 v206; // rax
  unsigned int v207; // edx
  unsigned int v208; // edx
  __int64 v209; // rax
  __int64 v210; // rax
  __int64 v211; // rax
  DirectComposition::CNaturalAnimationMarshaler *v212; // rax
  DirectComposition::CParticleEmitterVisualMarshaler *v213; // rax
  __int64 v214; // rax
  __int64 v215; // rax
  __int64 v216; // rax
  __int64 v217; // rax
  __int64 v218; // rax
  __int64 v219; // rax
  __int64 v220; // rax
  __int64 v221; // rax
  __int64 v222; // rax
  void **v223; // rcx
  __int64 v224; // rax
  __int64 v225; // rax
  __int64 v226; // rax
  __int64 v227; // rcx
  __int64 v228; // rax
  __int64 v229; // rax
  __int64 v230; // rax
  __int64 v231; // rax
  __int64 v232; // rax
  unsigned int v233; // edx
  unsigned int v234; // edx
  unsigned int v235; // edx
  unsigned int v236; // edx
  unsigned int v237; // edx
  unsigned int v238; // edx
  unsigned int v239; // edx
  __int64 v240; // rax
  __int64 v241; // rax
  __int64 v242; // rax
  DirectComposition::CSceneNodeMarshaler *v243; // rax
  __int64 v244; // rax
  __int64 v245; // rax
  __int64 v246; // rax
  __int64 v247; // rax
  __int64 v248; // rax
  __int64 v249; // rax
  __int64 v250; // rax
  __int64 v251; // rax
  __int64 v252; // rax
  __int64 v253; // rax
  _DWORD *v254; // rax
  unsigned int v255; // edx
  __int64 v256; // rax
  __int64 v257; // rax
  __int64 v258; // rax
  DirectComposition::CTextVisualMarshaler *v259; // rax
  __int64 v260; // rax
  __int64 v261; // rax
  __int64 v262; // rax
  __int64 v263; // rax
  __int64 v264; // rax
  __int64 v265; // rax
  __int64 v266; // rax

  v5 = 0LL;
  if ( a2 <= 0x68 )
  {
    if ( a2 == 104 )
    {
      v89 = Win32AllocPoolWithQuotaZInit(0x80uLL);
      v10 = (_DWORD *)v89;
      if ( !v89 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v89 + 20) = 1LL;
      *(_QWORD *)(v89 + 48) = 0LL;
      *(_DWORD *)(v89 + 40) = 103;
      v18 = &DirectComposition::CManipulationTransformMarshaler::`vftable';
      goto LABEL_36;
    }
    if ( a2 > 0x32 )
    {
      if ( a2 > 0x50 )
      {
        if ( a2 > 0x5C )
        {
          v140 = a2 - 94;
          if ( !v140 )
          {
            v141 = Win32AllocPoolWithQuotaZInit(0x90uLL);
            v10 = (_DWORD *)v141;
            if ( !v141 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v141 + 20) = 1LL;
            *(_QWORD *)(v141 + 48) = 0LL;
            *(_DWORD *)(v141 + 40) = 205;
            v18 = &DirectComposition::CLegacyRenderTargetMarshaler::`vftable';
            goto LABEL_36;
          }
          v196 = v140 - 1;
          if ( !v196 )
          {
            v206 = Win32AllocPoolWithQuotaZInit(0x90uLL);
            v10 = (_DWORD *)v206;
            if ( !v206 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v206 + 20) = 1LL;
            *(_QWORD *)(v206 + 48) = 0LL;
            *(_DWORD *)(v206 + 40) = 205;
            v18 = &DirectComposition::CLegacyStereoRenderTargetMarshaler::`vftable';
            goto LABEL_36;
          }
          v197 = v196 - 2;
          if ( !v197 )
          {
            v205 = Win32AllocPoolWithQuotaZInit(0x80uLL);
            v10 = (_DWORD *)v205;
            if ( !v205 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v205 + 20) = 1LL;
            *(_QWORD *)(v205 + 48) = 0LL;
            *(_DWORD *)(v205 + 40) = 96;
            *(_QWORD *)(v205 + 72) = 2LL;
            *(_DWORD *)(v205 + 80) = 1;
            *(_QWORD *)(v205 + 88) = 0LL;
            *(_QWORD *)(v205 + 96) = 0LL;
            *(_QWORD *)(v205 + 104) = 0LL;
            v18 = &DirectComposition::CLinearGradientBrushMarshaler::`vftable';
            goto LABEL_36;
          }
          v198 = v197 - 2;
          if ( !v198 )
          {
            v204 = Win32AllocPoolWithQuotaZInit(0x98uLL);
            v10 = (_DWORD *)v204;
            if ( !v204 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v204 + 20) = 1LL;
            *(_QWORD *)(v204 + 48) = 0LL;
            *(_DWORD *)(v204 + 40) = 98;
            *(_DWORD *)(v204 + 72) = 0;
            *(_QWORD *)(v204 + 80) = 0LL;
            *(_QWORD *)(v204 + 88) = 0LL;
            *(_QWORD *)(v204 + 96) = 0LL;
            *(_DWORD *)(v204 + 104) = 0;
            v18 = &DirectComposition::CLinearTransferEffectMarshaler::`vftable';
            goto LABEL_36;
          }
          v199 = v198 - 1;
          if ( !v199 )
          {
            v203 = Win32AllocPoolWithQuotaZInit(0x70uLL);
            v10 = (_DWORD *)v203;
            if ( !v203 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v203 + 20) = 1LL;
            *(_QWORD *)(v203 + 48) = 0LL;
            *(_DWORD *)(v203 + 40) = 99;
            v18 = &DirectComposition::CLineGeometryMarshaler::`vftable';
            goto LABEL_36;
          }
          v200 = v199 - 1;
          if ( v200 )
          {
            if ( v200 != 2 )
              return (unsigned int)-1073741811;
            v201 = Win32AllocPoolWithQuotaZInit(0x120uLL);
            v10 = (_DWORD *)v201;
            if ( !v201 )
              return (unsigned int)-1073741801;
            *(_BYTE *)(v201 + 108) &= 0xF8u;
            *(_QWORD *)(v201 + 20) = 1LL;
            *(_QWORD *)(v201 + 48) = 0LL;
            *(_DWORD *)(v201 + 40) = 102;
            *(_QWORD *)v201 = &DirectComposition::CManipulationMarshaler::`vftable';
            *(_QWORD *)(v201 + 112) = 0LL;
            *(_DWORD *)(v201 + 120) = 0;
            *(_QWORD *)(v201 + 128) = 0LL;
            *(_QWORD *)(v201 + 136) = 0LL;
          }
          else
          {
            v202 = Win32AllocPoolWithQuotaZInit(0x58uLL);
            v10 = (_DWORD *)v202;
            if ( !v202 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v202 + 20) = 1LL;
            *(_QWORD *)(v202 + 48) = 0LL;
            *(_DWORD *)(v202 + 40) = 205;
            *(_QWORD *)v202 = &DirectComposition::CGenericMarshaler::`vftable';
            *(_DWORD *)(v202 + 56) = 101;
            *(_QWORD *)(v202 + 64) = 0LL;
            *(_QWORD *)(v202 + 72) = 0LL;
            *(_QWORD *)(v202 + 80) = 0LL;
          }
        }
        else
        {
          if ( a2 == 92 )
          {
            v139 = Win32AllocPoolWithQuotaZInit(0x40uLL);
            v10 = (_DWORD *)v139;
            if ( !v139 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v139 + 20) = 1LL;
            *(_QWORD *)(v139 + 48) = 0LL;
            *(_DWORD *)(v139 + 40) = 91;
            v18 = &DirectComposition::CLegacyAnimationTriggerMarshaler::`vftable';
            goto LABEL_36;
          }
          v46 = a2 - 81;
          if ( !v46 )
          {
            v195 = Win32AllocPoolWithQuotaZInit(0x40uLL);
            v10 = (_DWORD *)v195;
            if ( !v195 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v195 + 20) = 1LL;
            *(_QWORD *)(v195 + 48) = 0LL;
            *(_DWORD *)(v195 + 40) = 80;
            v18 = &DirectComposition::CHwndBitmapMarshaler::`vftable';
            goto LABEL_36;
          }
          v47 = v46 - 4;
          if ( !v47 )
          {
            v194 = Win32AllocPoolWithQuotaZInit(0x98uLL);
            v10 = (_DWORD *)v194;
            if ( !v194 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v194 + 20) = 1LL;
            *(_QWORD *)(v194 + 48) = 0LL;
            *(_DWORD *)(v194 + 40) = 84;
            v18 = &DirectComposition::CInjectionAnimationMarshaler::`vftable';
            goto LABEL_36;
          }
          v48 = v47 - 1;
          if ( v48 )
          {
            v49 = v48 - 1;
            if ( !v49 )
            {
              v83 = (DirectComposition::CInteractionMarshaler *)Win32AllocPoolWithQuotaZInit(0x150uLL);
              if ( !v83 )
                return (unsigned int)-1073741801;
              v9 = (DirectComposition::CProjectedShadowSceneMarshaler *)DirectComposition::CInteractionMarshaler::CInteractionMarshaler(v83);
              goto LABEL_9;
            }
            v50 = v49 - 1;
            if ( !v50 )
            {
              v192 = (DirectComposition::CInteractionTrackerMarshaler *)Win32AllocPoolWithQuotaZInit(0x1D0uLL);
              if ( !v192 )
                return (unsigned int)-1073741801;
              v9 = (DirectComposition::CProjectedShadowSceneMarshaler *)DirectComposition::CInteractionTrackerMarshaler::CInteractionTrackerMarshaler(v192);
              goto LABEL_9;
            }
            v51 = v50 - 1;
            if ( v51 )
            {
              v52 = v51 - 1;
              if ( v52 )
              {
                if ( v52 != 1 )
                  return (unsigned int)-1073741811;
                v82 = Win32AllocPoolWithQuotaZInit(0x188uLL);
                v10 = (_DWORD *)v82;
                if ( !v82 )
                  return (unsigned int)-1073741801;
                DirectComposition::CVisualMarshaler::CVisualMarshaler(v82, 90);
                v10[97] = 0;
                *(_QWORD *)v10 = &DirectComposition::CLayerVisualMarshaler::`vftable';
              }
              else
              {
                v53 = Win32AllocPoolWithQuotaZInit(0x140uLL);
                v10 = (_DWORD *)v53;
                if ( !v53 )
                  return (unsigned int)-1073741801;
                *(_QWORD *)(v53 + 20) = 1LL;
                *(_QWORD *)(v53 + 48) = 0LL;
                *(_DWORD *)(v53 + 40) = 89;
                *(_QWORD *)v53 = &DirectComposition::CKeyframeAnimationMarshaler::`vftable';
                *(_DWORD *)(v53 + 228) = 1065353216;
                *(_DWORD *)(v53 + 312) = 1065353216;
              }
            }
            else
            {
              v191 = Win32AllocPoolWithQuotaZInit(0x70uLL);
              v10 = (_DWORD *)v191;
              if ( !v191 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v191 + 20) = 1LL;
              *(_QWORD *)(v191 + 48) = 0LL;
              *(_DWORD *)(v191 + 40) = 88;
              *(_QWORD *)v191 = &DirectComposition::CInteractionTrackerBindingManagerMarshaler::`vftable';
              *(_BYTE *)(v191 + 80) = 1;
              *(_QWORD *)(v191 + 104) = 32LL;
            }
          }
          else
          {
            v193 = Win32AllocPoolWithQuotaZInit(0xA0uLL);
            v10 = (_DWORD *)v193;
            if ( !v193 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v193 + 20) = 1LL;
            *(_QWORD *)(v193 + 48) = 0LL;
            *(_DWORD *)(v193 + 40) = 85;
            *(_QWORD *)v193 = &DirectComposition::CInkMarshaler::`vftable';
            *(_BYTE *)(v193 + 120) = 1;
            *(_QWORD *)(v193 + 144) = 36LL;
          }
        }
      }
      else
      {
        if ( a2 == 80 )
        {
          v190 = Win32AllocPoolWithQuotaZInit(0x78uLL);
          v10 = (_DWORD *)v190;
          if ( !v190 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v190 + 20) = 1LL;
          *(_QWORD *)(v190 + 48) = 0LL;
          *(_DWORD *)(v190 + 40) = 79;
          *(_DWORD *)(v190 + 72) = 0;
          *(_QWORD *)(v190 + 80) = 0LL;
          *(_QWORD *)(v190 + 88) = 0LL;
          *(_QWORD *)(v190 + 96) = 0LL;
          *(_DWORD *)(v190 + 104) = 0;
          v18 = &DirectComposition::CHueRotationEffectMarshaler::`vftable';
          goto LABEL_36;
        }
        if ( a2 > 0x40 )
        {
          v127 = a2 - 68;
          if ( !v127 )
          {
            v189 = Win32AllocPoolWithQuotaZInit(0x70uLL);
            v10 = (_DWORD *)v189;
            if ( !v189 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v189 + 20) = 1LL;
            *(_QWORD *)(v189 + 48) = 0LL;
            *(_DWORD *)(v189 + 40) = 67;
            v18 = &DirectComposition::CClipGroupMarshaler::`vftable';
            goto LABEL_36;
          }
          v128 = v127 - 3;
          if ( !v128 )
          {
            v188 = Win32AllocPoolWithQuotaZInit(0x60uLL);
            v10 = (_DWORD *)v188;
            if ( !v188 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v188 + 20) = 1LL;
            *(_QWORD *)(v188 + 48) = 0LL;
            *(_DWORD *)(v188 + 40) = 70;
            v18 = &DirectComposition::CHolographicCompositionMarshaler::`vftable';
            goto LABEL_36;
          }
          v129 = v128 - 1;
          if ( !v129 )
          {
            v187 = Win32AllocPoolWithQuotaZInit(0x68uLL);
            v10 = (_DWORD *)v187;
            if ( !v187 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v187 + 20) = 1LL;
            *(_QWORD *)(v187 + 48) = 0LL;
            *(_DWORD *)(v187 + 40) = 71;
            v18 = &DirectComposition::CHolographicDisplayMarshaler::`vftable';
            goto LABEL_36;
          }
          v130 = v129 - 1;
          if ( !v130 )
          {
            v186 = Win32AllocPoolWithQuotaZInit(0x48uLL);
            v10 = (_DWORD *)v186;
            if ( !v186 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v186 + 20) = 1LL;
            *(_QWORD *)(v186 + 48) = 0LL;
            *(_DWORD *)(v186 + 40) = 72;
            v18 = &DirectComposition::CHolographicExclusiveModeMarshaler::`vftable';
            goto LABEL_36;
          }
          v131 = v130 - 1;
          if ( v131 )
          {
            v132 = v131 - 2;
            if ( v132 )
            {
              v133 = v132 - 1;
              if ( !v133 )
              {
                v182 = (DirectComposition::CHolographicViewerMarshaler *)Win32AllocPoolWithQuotaZInit(0x88uLL);
                if ( !v182 )
                  return (unsigned int)-1073741801;
                v9 = (DirectComposition::CProjectedShadowSceneMarshaler *)DirectComposition::CHolographicViewerMarshaler::CHolographicViewerMarshaler(v182);
                goto LABEL_9;
              }
              if ( v133 == 2 )
              {
                v134 = Win32AllocPoolWithQuotaZInit(0x38uLL);
                v10 = (_DWORD *)v134;
                if ( !v134 )
                  return (unsigned int)-1073741801;
                *(_QWORD *)(v134 + 20) = 1LL;
                *(_QWORD *)(v134 + 48) = 0LL;
                *(_DWORD *)(v134 + 40) = 78;
                v18 = &DirectComposition::CHoverPointerSourceMarshaler::`vftable';
                goto LABEL_36;
              }
              return (unsigned int)-1073741811;
            }
            v183 = Win32AllocPoolWithQuotaZInit(0x60uLL);
            v10 = (_DWORD *)v183;
            if ( !v183 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v183 + 20) = 1LL;
            *(_QWORD *)(v183 + 48) = 0LL;
            *(_DWORD *)(v183 + 40) = 75;
            v184 = &DirectComposition::CHolographicInteropTextureMarshaler::`vftable';
          }
          else
          {
            v185 = Win32AllocPoolWithQuotaZInit(0x68uLL);
            v10 = (_DWORD *)v185;
            if ( !v185 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v185 + 20) = 1LL;
            *(_QWORD *)(v185 + 48) = 0LL;
            *(_DWORD *)(v185 + 40) = 73;
            v184 = &DirectComposition::CHolographicExclusiveViewMarshaler::`vftable';
          }
          *(_QWORD *)v10 = v184;
          v10[4] |= 0x20u;
        }
        else if ( a2 == 64 )
        {
          v181 = Win32AllocPoolWithQuotaZInit(0xF0uLL);
          v10 = (_DWORD *)v181;
          if ( !v181 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v181 + 20) = 1LL;
          *(_QWORD *)(v181 + 48) = 0LL;
          *(_DWORD *)(v181 + 40) = 63;
          *(_QWORD *)v181 = &DirectComposition::CGenericInkMarshaler::`vftable';
          *(_BYTE *)(v181 + 64) = 1;
          *(_QWORD *)(v181 + 88) = 1LL;
          *(_BYTE *)(v181 + 104) = 1;
          *(_QWORD *)(v181 + 128) = 1LL;
          *(_BYTE *)(v181 + 180) = 0;
        }
        else
        {
          v19 = a2 - 51;
          if ( !v19 )
          {
            v138 = Win32AllocPoolWithQuotaZInit(0x48uLL);
            v10 = (_DWORD *)v138;
            if ( !v138 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v138 + 20) = 1LL;
            *(_QWORD *)(v138 + 48) = 0LL;
            *(_DWORD *)(v138 + 40) = 50;
            v18 = &DirectComposition::CDesktopTreeMarshaler::`vftable';
            goto LABEL_36;
          }
          v20 = v19 - 2;
          if ( v20 )
          {
            v21 = v20 - 2;
            if ( !v21 )
            {
              v57 = Win32AllocPoolWithQuotaZInit(0x68uLL);
              v10 = (_DWORD *)v57;
              if ( !v57 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v57 + 20) = 1LL;
              *(_QWORD *)(v57 + 48) = 0LL;
              *(_DWORD *)(v57 + 40) = 54;
              v18 = &DirectComposition::CEffectBrushMarshaler::`vftable';
              goto LABEL_36;
            }
            v22 = v21 - 1;
            if ( !v22 )
            {
              v100 = Win32AllocPoolWithQuotaZInit(0x58uLL);
              v10 = (_DWORD *)v100;
              if ( !v100 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v100 + 20) = 1LL;
              *(_QWORD *)(v100 + 48) = 0LL;
              *(_DWORD *)(v100 + 40) = 55;
              v18 = &DirectComposition::CEffectGroupMarshaler::`vftable';
              goto LABEL_36;
            }
            v23 = v22 - 1;
            if ( !v23 )
            {
              v180 = Win32AllocPoolWithQuotaZInit(0x70uLL);
              v10 = (_DWORD *)v180;
              if ( !v180 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v180 + 20) = 1LL;
              *(_QWORD *)(v180 + 48) = 0LL;
              *(_DWORD *)(v180 + 40) = 56;
              v18 = &DirectComposition::CEllipseGeometryMarshaler::`vftable';
              goto LABEL_36;
            }
            v24 = v23 - 1;
            if ( !v24 )
            {
              v25 = Win32AllocPoolWithQuotaZInit(0xE0uLL);
              v10 = (_DWORD *)v25;
              if ( !v25 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v25 + 20) = 1LL;
              *(_QWORD *)(v25 + 48) = 0LL;
              *(_DWORD *)(v25 + 40) = 57;
              v18 = &DirectComposition::CExpressionMarshaler::`vftable';
              goto LABEL_36;
            }
            v177 = v24 - 3;
            if ( !v177 )
            {
              v179 = Win32AllocPoolWithQuotaZInit(0x80uLL);
              v10 = (_DWORD *)v179;
              if ( !v179 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v179 + 20) = 1LL;
              *(_QWORD *)(v179 + 48) = 0LL;
              *(_DWORD *)(v179 + 40) = 60;
              *(_DWORD *)(v179 + 72) = 0;
              *(_QWORD *)(v179 + 80) = 0LL;
              *(_QWORD *)(v179 + 88) = 0LL;
              *(_QWORD *)(v179 + 96) = 0LL;
              *(_DWORD *)(v179 + 104) = 0;
              v18 = &DirectComposition::CFloodEffectMarshaler::`vftable';
              goto LABEL_36;
            }
            if ( v177 == 1 )
            {
              v178 = Win32AllocPoolWithQuotaZInit(0x80uLL);
              v10 = (_DWORD *)v178;
              if ( !v178 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v178 + 20) = 1LL;
              *(_QWORD *)(v178 + 48) = 0LL;
              *(_DWORD *)(v178 + 40) = 61;
              *(_DWORD *)(v178 + 72) = 0;
              *(_QWORD *)(v178 + 80) = 0LL;
              *(_QWORD *)(v178 + 88) = 0LL;
              *(_QWORD *)(v178 + 96) = 0LL;
              *(_DWORD *)(v178 + 104) = 0;
              v18 = &DirectComposition::CGaussianBlurEffectMarshaler::`vftable';
              goto LABEL_36;
            }
            return (unsigned int)-1073741811;
          }
          v109 = Win32AllocPoolWithQuotaZInit(0x78uLL);
          v10 = (_DWORD *)v109;
          if ( !v109 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v109 + 20) = 1LL;
          *(_QWORD *)(v109 + 48) = 0LL;
          *(_DWORD *)(v109 + 40) = 52;
          *(_QWORD *)v109 = &DirectComposition::CDropShadowMarshaler::`vftable';
          *(_QWORD *)(v109 + 112) = 1065353216LL;
          *(_DWORD *)(v109 + 92) = 1065353216;
          *(_DWORD *)(v109 + 96) = 1091567616;
        }
      }
    }
    else
    {
      if ( a2 == 50 )
      {
        v176 = Win32AllocPoolWithQuotaZInit(0x98uLL);
        v10 = (_DWORD *)v176;
        if ( !v176 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v176 + 20) = 1LL;
        *(_QWORD *)(v176 + 48) = 0LL;
        *(_DWORD *)(v176 + 40) = 205;
        v18 = &DirectComposition::CDDisplayRenderTargetMarshaler::`vftable';
        goto LABEL_36;
      }
      if ( a2 > 0x1E )
      {
        if ( a2 > 0x28 )
        {
          v163 = a2 - 41;
          if ( !v163 )
          {
            v175 = Win32AllocPoolWithQuotaZInit(0x60uLL);
            v10 = (_DWORD *)v175;
            if ( !v175 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v175 + 20) = 1LL;
            *(_QWORD *)(v175 + 48) = 0LL;
            *(_DWORD *)(v175 + 40) = 40;
            v18 = &DirectComposition::CCompositionTextLineMarshaler::`vftable';
            goto LABEL_36;
          }
          v164 = v163 - 2;
          if ( !v164 )
          {
            v174 = Win32AllocPoolWithQuotaZInit(0xA0uLL);
            v10 = (_DWORD *)v174;
            if ( !v174 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v174 + 20) = 1LL;
            *(_QWORD *)(v174 + 48) = 0LL;
            *(_DWORD *)(v174 + 40) = 42;
            v18 = &DirectComposition::CConditionalExpressionMarshaler::`vftable';
            goto LABEL_36;
          }
          v165 = v164 - 1;
          if ( !v165 )
          {
            v173 = Win32AllocPoolWithQuotaZInit(0x50uLL);
            v10 = (_DWORD *)v173;
            if ( !v173 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v173 + 20) = 1LL;
            *(_QWORD *)(v173 + 48) = 0LL;
            *(_DWORD *)(v173 + 40) = 43;
            v18 = &DirectComposition::CContainerShapeMarshaler::`vftable';
            goto LABEL_36;
          }
          v166 = v165 - 2;
          if ( !v166 )
          {
            v172 = (_DWORD *)Win32AllocPoolWithQuotaZInit(0x58uLL);
            v10 = v172;
            if ( !v172 )
              return (unsigned int)-1073741801;
            memset(v172, 0, 0x58uLL);
            v18 = &DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler::`vftable';
            v10[5] = 1;
            v10[10] = 205;
            goto LABEL_36;
          }
          v167 = v166 - 1;
          if ( !v167 )
          {
            v171 = Win32AllocPoolWithQuotaZInit(0x68uLL);
            v10 = (_DWORD *)v171;
            if ( !v171 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v171 + 20) = 1LL;
            *(_QWORD *)(v171 + 48) = 0LL;
            *(_DWORD *)(v171 + 40) = 205;
            v18 = &DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::`vftable';
            goto LABEL_36;
          }
          v168 = v167 - 1;
          if ( !v168 )
          {
            v170 = (DirectComposition::CCursorVisualMarshaler *)Win32AllocPoolWithQuotaZInit(0x190uLL);
            if ( !v170 )
              return (unsigned int)-1073741801;
            v9 = (DirectComposition::CProjectedShadowSceneMarshaler *)DirectComposition::CCursorVisualMarshaler::CCursorVisualMarshaler(v170);
            goto LABEL_9;
          }
          if ( v168 == 1 )
          {
            v169 = Win32AllocPoolWithQuotaZInit(0x48uLL);
            v10 = (_DWORD *)v169;
            if ( !v169 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v169 + 20) = 1LL;
            *(_QWORD *)(v169 + 48) = 0LL;
            *(_DWORD *)(v169 + 40) = 48;
            v18 = &DirectComposition::CDataSourceReaderMarshaler::`vftable';
            goto LABEL_36;
          }
        }
        else
        {
          if ( a2 == 40 )
          {
            v58 = Win32AllocPoolWithQuotaZInit(0x48uLL);
            v10 = (_DWORD *)v58;
            if ( !v58 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v58 + 20) = 1LL;
            *(_QWORD *)(v58 + 48) = 0LL;
            *(_DWORD *)(v58 + 40) = 39;
            v18 = &DirectComposition::CCompositionSurfaceBitmapMarshaler::`vftable';
            goto LABEL_36;
          }
          v110 = a2 - 31;
          if ( !v110 )
          {
            v162 = Win32AllocPoolWithQuotaZInit(0x58uLL);
            v10 = (_DWORD *)v162;
            if ( !v162 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v162 + 20) = 1LL;
            *(_QWORD *)(v162 + 48) = 0LL;
            *(_DWORD *)(v162 + 40) = 30;
            v18 = &DirectComposition::CCompositionCubeMapMarshaler::`vftable';
            goto LABEL_36;
          }
          v111 = v110 - 1;
          if ( !v111 )
          {
            v125 = Win32AllocPoolWithQuotaZInit(0x88uLL);
            v10 = (_DWORD *)v125;
            if ( !v125 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v125 + 20) = 1LL;
            *(_QWORD *)(v125 + 48) = 0LL;
            *(_DWORD *)(v125 + 40) = 31;
            v18 = &DirectComposition::CCompositionDistantLightMarshaler::`vftable';
            goto LABEL_36;
          }
          v112 = v111 - 1;
          if ( !v112 )
          {
            v161 = Win32AllocPoolWithQuotaZInit(0x60uLL);
            v10 = (_DWORD *)v161;
            if ( !v161 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v161 + 20) = 1LL;
            *(_QWORD *)(v161 + 48) = 0LL;
            *(_DWORD *)(v161 + 40) = 32;
            v18 = &DirectComposition::CCompositionGlyphRunMarshaler::`vftable';
            goto LABEL_36;
          }
          v113 = v112 - 1;
          if ( !v113 )
          {
            v160 = Win32AllocPoolWithQuotaZInit(0x60uLL);
            v10 = (_DWORD *)v160;
            if ( !v160 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v160 + 20) = 1LL;
            *(_QWORD *)(v160 + 48) = 0LL;
            *(_DWORD *)(v160 + 40) = 33;
            v18 = &DirectComposition::CCompositionLightMarshaler::`vftable';
            goto LABEL_36;
          }
          v114 = v113 - 1;
          if ( !v114 )
          {
            v159 = Win32AllocPoolWithQuotaZInit(0x60uLL);
            v10 = (_DWORD *)v159;
            if ( !v159 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v159 + 20) = 1LL;
            *(_QWORD *)(v159 + 48) = 0LL;
            *(_DWORD *)(v159 + 40) = 34;
            v18 = &DirectComposition::CCompositionMipmapSurfaceMarshaler::`vftable';
            goto LABEL_36;
          }
          v115 = v114 - 1;
          if ( !v115 )
          {
            v158 = Win32AllocPoolWithQuotaZInit(0xA0uLL);
            v10 = (_DWORD *)v158;
            if ( !v158 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v158 + 20) = 1LL;
            *(_QWORD *)(v158 + 48) = 0LL;
            *(_DWORD *)(v158 + 40) = 35;
            v18 = &DirectComposition::CCompositionPointLightMarshaler::`vftable';
            goto LABEL_36;
          }
          v116 = v115 - 2;
          if ( !v116 )
          {
            v157 = Win32AllocPoolWithQuotaZInit(0x70uLL);
            v10 = (_DWORD *)v157;
            if ( !v157 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v157 + 20) = 1LL;
            *(_QWORD *)(v157 + 48) = 0LL;
            *(_DWORD *)(v157 + 40) = 37;
            v18 = &DirectComposition::CCompositionSkyBoxBrushMarshaler::`vftable';
            goto LABEL_36;
          }
          if ( v116 == 1 )
          {
            v117 = Win32AllocPoolWithQuotaZInit(0xC8uLL);
            v10 = (_DWORD *)v117;
            if ( !v117 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v117 + 20) = 1LL;
            *(_QWORD *)(v117 + 48) = 0LL;
            *(_DWORD *)(v117 + 40) = 38;
            v18 = &DirectComposition::CCompositionSpotLightMarshaler::`vftable';
            goto LABEL_36;
          }
        }
        return (unsigned int)-1073741811;
      }
      if ( a2 == 30 )
      {
        v108 = Win32AllocPoolWithQuotaZInit(0x78uLL);
        v10 = (_DWORD *)v108;
        if ( !v108 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v108 + 20) = 1LL;
        *(_QWORD *)(v108 + 48) = 0LL;
        *(_DWORD *)(v108 + 40) = 29;
        v18 = &DirectComposition::CCompositionAmbientLightMarshaler::`vftable';
        goto LABEL_36;
      }
      if ( a2 > 0x10 )
      {
        v11 = a2 - 17;
        if ( !v11 )
        {
          v156 = Win32AllocPoolWithQuotaZInit(0x80uLL);
          v10 = (_DWORD *)v156;
          if ( !v156 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v156 + 20) = 1LL;
          *(_QWORD *)(v156 + 48) = 0LL;
          *(_DWORD *)(v156 + 40) = 16;
          v18 = &DirectComposition::CCaptureRenderTargetMarshaler::`vftable';
          goto LABEL_36;
        }
        v12 = v11 - 3;
        if ( !v12 )
        {
          v56 = Win32AllocPoolWithQuotaZInit(0x58uLL);
          v10 = (_DWORD *)v56;
          if ( !v56 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v56 + 20) = 1LL;
          *(_QWORD *)(v56 + 48) = 0LL;
          *(_DWORD *)(v56 + 40) = 19;
          v18 = &DirectComposition::CColorBrushMarshaler::`vftable';
          goto LABEL_36;
        }
        v13 = v12 - 1;
        if ( !v13 )
        {
          v155 = Win32AllocPoolWithQuotaZInit(0x50uLL);
          v10 = (_DWORD *)v155;
          if ( !v155 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v155 + 20) = 1LL;
          *(_QWORD *)(v155 + 48) = 0LL;
          *(_DWORD *)(v155 + 40) = 20;
          v18 = &DirectComposition::CColorGradientStopMarshaler::`vftable';
          goto LABEL_36;
        }
        v14 = v13 - 1;
        if ( !v14 )
        {
          v154 = Win32AllocPoolWithQuotaZInit(0xC8uLL);
          v10 = (_DWORD *)v154;
          if ( !v154 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v154 + 20) = 1LL;
          *(_QWORD *)(v154 + 48) = 0LL;
          *(_DWORD *)(v154 + 40) = 21;
          *(_DWORD *)(v154 + 72) = 0;
          *(_QWORD *)(v154 + 80) = 0LL;
          *(_QWORD *)(v154 + 88) = 0LL;
          *(_QWORD *)(v154 + 96) = 0LL;
          *(_DWORD *)(v154 + 104) = 0;
          v18 = &DirectComposition::CColorMatrixEffectMarshaler::`vftable';
          goto LABEL_36;
        }
        v15 = v14 - 4;
        if ( !v15 )
        {
          v95 = Win32AllocPoolWithQuotaZInit(0x68uLL);
          v10 = (_DWORD *)v95;
          if ( !v95 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v95 + 20) = 1LL;
          *(_QWORD *)(v95 + 48) = 0LL;
          *(_DWORD *)(v95 + 40) = 25;
          v18 = &DirectComposition::CCompiledEffectTemplateMarshaler::`vftable';
          goto LABEL_36;
        }
        v16 = v15 - 1;
        if ( !v16 )
        {
          v17 = Win32AllocPoolWithQuotaZInit(0x88uLL);
          v10 = (_DWORD *)v17;
          if ( !v17 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v17 + 20) = 1LL;
          *(_QWORD *)(v17 + 48) = 0LL;
          *(_DWORD *)(v17 + 40) = 26;
          v18 = &DirectComposition::CComponentTransform2DMarshaler::`vftable';
          goto LABEL_36;
        }
        v54 = v16 - 1;
        if ( !v54 )
        {
          v55 = Win32AllocPoolWithQuotaZInit(0xD8uLL);
          v10 = (_DWORD *)v55;
          if ( !v55 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v55 + 20) = 1LL;
          *(_QWORD *)(v55 + 48) = 0LL;
          *(_DWORD *)(v55 + 40) = 27;
          v18 = &DirectComposition::CComponentTransform3DMarshaler::`vftable';
          goto LABEL_36;
        }
        if ( v54 == 1 )
        {
          v153 = Win32AllocPoolWithQuotaZInit(0x78uLL);
          v10 = (_DWORD *)v153;
          if ( !v153 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v153 + 20) = 1LL;
          *(_QWORD *)(v153 + 48) = 0LL;
          *(_DWORD *)(v153 + 40) = 28;
          *(_DWORD *)(v153 + 72) = 0;
          *(_QWORD *)(v153 + 80) = 0LL;
          *(_QWORD *)(v153 + 88) = 0LL;
          *(_QWORD *)(v153 + 96) = 0LL;
          *(_DWORD *)(v153 + 104) = 0;
          v18 = &DirectComposition::CCompositeEffectMarshaler::`vftable';
          goto LABEL_36;
        }
        return (unsigned int)-1073741811;
      }
      if ( a2 == 16 )
      {
        v152 = Win32AllocPoolWithQuotaZInit(0x58uLL);
        v10 = (_DWORD *)v152;
        if ( !v152 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v152 + 20) = 1LL;
        *(_QWORD *)(v152 + 48) = 0LL;
        *(_DWORD *)(v152 + 40) = 15;
        *(_QWORD *)v152 = &DirectComposition::CCaptureControllerMarshaler::`vftable';
        *(_WORD *)(v152 + 72) = 257;
      }
      else
      {
        v59 = a2 - 1;
        if ( !v59 )
        {
          v151 = Win32AllocPoolWithQuotaZInit(0x98uLL);
          v10 = (_DWORD *)v151;
          if ( !v151 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v151 + 20) = 1LL;
          *(_QWORD *)(v151 + 48) = 0LL;
          *(_DWORD *)(v151 + 40) = 0;
          *(_DWORD *)(v151 + 72) = 0;
          *(_QWORD *)(v151 + 80) = 0LL;
          *(_QWORD *)(v151 + 88) = 0LL;
          *(_QWORD *)(v151 + 96) = 0LL;
          *(_DWORD *)(v151 + 104) = 0;
          v18 = &DirectComposition::CAffineTransform2DEffectMarshaler::`vftable';
          goto LABEL_36;
        }
        v60 = v59 - 1;
        if ( v60 )
        {
          v61 = v60 - 1;
          if ( !v61 )
          {
            v62 = (DirectComposition::CAnimationLoggingManagerMarshaler *)Win32AllocPoolWithQuotaZInit(0x108uLL);
            if ( !v62 )
              return (unsigned int)-1073741801;
            v9 = (DirectComposition::CProjectedShadowSceneMarshaler *)DirectComposition::CAnimationLoggingManagerMarshaler::CAnimationLoggingManagerMarshaler(v62);
            goto LABEL_9;
          }
          v104 = v61 - 1;
          if ( v104 )
          {
            v105 = v104 - 1;
            if ( !v105 )
            {
              v149 = Win32AllocPoolWithQuotaZInit(0x88uLL);
              v10 = (_DWORD *)v149;
              if ( !v149 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v149 + 20) = 1LL;
              *(_QWORD *)(v149 + 48) = 0LL;
              *(_DWORD *)(v149 + 40) = 4;
              *(_DWORD *)(v149 + 72) = 0;
              *(_QWORD *)(v149 + 80) = 0LL;
              *(_QWORD *)(v149 + 88) = 0LL;
              *(_QWORD *)(v149 + 96) = 0LL;
              *(_DWORD *)(v149 + 104) = 0;
              v18 = &DirectComposition::CArithmeticCompositeEffectMarshaler::`vftable';
              goto LABEL_36;
            }
            v106 = v105 - 3;
            if ( !v106 )
            {
              v107 = Win32AllocPoolWithQuotaZInit(0x48uLL);
              v10 = (_DWORD *)v107;
              if ( !v107 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v107 + 20) = 1LL;
              *(_QWORD *)(v107 + 48) = 0LL;
              *(_DWORD *)(v107 + 40) = 7;
              v18 = &DirectComposition::CBackdropBrushMarshaler::`vftable';
              goto LABEL_36;
            }
            v146 = v106 - 4;
            if ( !v146 )
            {
              v148 = Win32AllocPoolWithQuotaZInit(0x78uLL);
              v10 = (_DWORD *)v148;
              if ( !v148 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v148 + 20) = 1LL;
              *(_QWORD *)(v148 + 48) = 0LL;
              *(_DWORD *)(v148 + 40) = 11;
              *(_DWORD *)(v148 + 72) = 0;
              *(_QWORD *)(v148 + 80) = 0LL;
              *(_QWORD *)(v148 + 88) = 0LL;
              *(_QWORD *)(v148 + 96) = 0LL;
              *(_DWORD *)(v148 + 104) = 0;
              v18 = &DirectComposition::CBlendEffectMarshaler::`vftable';
              goto LABEL_36;
            }
            if ( v146 == 1 )
            {
              v147 = Win32AllocPoolWithQuotaZInit(0x80uLL);
              v10 = (_DWORD *)v147;
              if ( !v147 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(v147 + 20) = 1LL;
              *(_QWORD *)(v147 + 48) = 0LL;
              *(_DWORD *)(v147 + 40) = 12;
              *(_DWORD *)(v147 + 72) = 0;
              *(_QWORD *)(v147 + 80) = 0LL;
              *(_QWORD *)(v147 + 88) = 0LL;
              *(_QWORD *)(v147 + 96) = 0LL;
              *(_DWORD *)(v147 + 104) = 0;
              v18 = &DirectComposition::CBrightnessEffectMarshaler::`vftable';
              goto LABEL_36;
            }
            return (unsigned int)-1073741811;
          }
          v150 = Win32AllocPoolWithQuotaZInit(0x70uLL);
          v10 = (_DWORD *)v150;
          if ( !v150 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v150 + 20) = 1LL;
          *(_QWORD *)(v150 + 48) = 0LL;
          *(_DWORD *)(v150 + 40) = 3;
          *(_QWORD *)v150 = &DirectComposition::CAnimationTriggerMarshaler::`vftable';
          *(_QWORD *)(v150 + 80) = 0LL;
          *(_QWORD *)(v150 + 88) = 0LL;
          *(_DWORD *)(v150 + 96) = 0;
        }
        else
        {
          v84 = Win32AllocPoolWithQuotaZInit(0x100uLL);
          v5 = v84;
          if ( v84 )
          {
            *(_QWORD *)(v84 + 36) = 1LL;
            *(_QWORD *)(v84 + 64) = 0LL;
            *(_DWORD *)(v84 + 56) = 1;
            *(_QWORD *)v84 = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
            *(_QWORD *)(v84 + 16) = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
          }
          else
          {
            v5 = 0LL;
          }
          if ( v5 )
          {
            v85 = (_QWORD *)((char *)this + 336);
            v86 = *((_QWORD *)this + 42);
            v87 = (_QWORD *)(v5 + 128);
            if ( *(DirectComposition::CApplicationChannel **)(v86 + 8) != (DirectComposition::CApplicationChannel *)((char *)this + 336) )
              __fastfail(3u);
            *v87 = v86;
            *(_QWORD *)(v5 + 136) = v85;
            *(_QWORD *)(v86 + 8) = v87;
            *v85 = v87;
          }
          v10 = (_DWORD *)((v5 + 16) & -(__int64)(v5 != 0));
        }
      }
    }
    goto LABEL_37;
  }
  if ( a2 <= 0x99 )
  {
    if ( a2 == 153 )
    {
      v232 = Win32AllocPoolWithQuotaZInit(0x60uLL);
      v10 = (_DWORD *)v232;
      if ( !v232 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v232 + 20) = 1LL;
      *(_QWORD *)(v232 + 48) = 0LL;
      *(_DWORD *)(v232 + 40) = 152;
      v18 = &DirectComposition::CScaleTransform3DMarshaler::`vftable';
      goto LABEL_36;
    }
    if ( a2 <= 0x80 )
    {
      if ( a2 == 128 )
      {
        v221 = Win32AllocPoolWithQuotaZInit(0xC8uLL);
        v10 = (_DWORD *)v221;
        if ( !v221 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v221 + 20) = 1LL;
        *(_QWORD *)(v221 + 48) = 0LL;
        *(_DWORD *)(v221 + 40) = 127;
        v18 = &DirectComposition::CPrimitiveGroupLayerClipMarshaler::`vftable';
        goto LABEL_36;
      }
      if ( a2 > 0x76 )
      {
        v67 = a2 - 119;
        if ( !v67 )
        {
          v220 = Win32AllocPoolWithQuotaZInit(0xD0uLL);
          v10 = (_DWORD *)v220;
          if ( !v220 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v220 + 20) = 1LL;
          *(_QWORD *)(v220 + 48) = 0LL;
          *(_DWORD *)(v220 + 40) = 118;
          v18 = &DirectComposition::CParticleGeneratorMarshaler::`vftable';
          goto LABEL_36;
        }
        v68 = v67 - 1;
        if ( !v68 )
        {
          v219 = Win32AllocPoolWithQuotaZInit(0x50uLL);
          v10 = (_DWORD *)v219;
          if ( !v219 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v219 + 20) = 1LL;
          *(_QWORD *)(v219 + 48) = 0LL;
          *(_DWORD *)(v219 + 40) = 119;
          v18 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
          goto LABEL_36;
        }
        v69 = v68 - 1;
        if ( !v69 )
        {
          v218 = Win32AllocPoolWithQuotaZInit(0x50uLL);
          v10 = (_DWORD *)v218;
          if ( !v218 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v218 + 20) = 1LL;
          *(_QWORD *)(v218 + 48) = 0LL;
          *(_DWORD *)(v218 + 40) = 120;
          v18 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
          goto LABEL_36;
        }
        v70 = v69 - 1;
        if ( !v70 )
        {
          v217 = Win32AllocPoolWithQuotaZInit(0x50uLL);
          v10 = (_DWORD *)v217;
          if ( !v217 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v217 + 20) = 1LL;
          *(_QWORD *)(v217 + 48) = 0LL;
          *(_DWORD *)(v217 + 40) = 121;
          v18 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
          goto LABEL_36;
        }
        v71 = v70 - 1;
        if ( !v71 )
        {
          v216 = Win32AllocPoolWithQuotaZInit(0x50uLL);
          v10 = (_DWORD *)v216;
          if ( !v216 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v216 + 20) = 1LL;
          *(_QWORD *)(v216 + 48) = 0LL;
          *(_DWORD *)(v216 + 40) = 122;
          v18 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
          goto LABEL_36;
        }
        v72 = v71 - 1;
        if ( !v72 )
        {
          v215 = Win32AllocPoolWithQuotaZInit(0x70uLL);
          v10 = (_DWORD *)v215;
          if ( !v215 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v215 + 20) = 1LL;
          *(_QWORD *)(v215 + 48) = 0LL;
          *(_DWORD *)(v215 + 40) = 123;
          v18 = &DirectComposition::CPathGeometryMarshaler::`vftable';
          goto LABEL_36;
        }
        v73 = v72 - 2;
        if ( !v73 )
        {
          v214 = Win32AllocPoolWithQuotaZInit(0x48uLL);
          v10 = (_DWORD *)v214;
          if ( !v214 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v214 + 20) = 1LL;
          *(_QWORD *)(v214 + 48) = 0LL;
          *(_DWORD *)(v214 + 40) = 125;
          v18 = &DirectComposition::CPrimitiveColorMarshaler::`vftable';
          goto LABEL_36;
        }
        if ( v73 == 1 )
        {
          v74 = Win32AllocPoolWithQuotaZInit(0xC8uLL);
          v10 = (_DWORD *)v74;
          if ( !v74 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v74 + 20) = 1LL;
          *(_QWORD *)(v74 + 48) = 0LL;
          *(_DWORD *)(v74 + 40) = 126;
          v18 = &DirectComposition::CPrimitiveGroupLayerClipMarshaler::`vftable';
          goto LABEL_36;
        }
      }
      else
      {
        if ( a2 == 118 )
        {
          v213 = (DirectComposition::CParticleEmitterVisualMarshaler *)Win32AllocPoolWithQuotaZInit(0x228uLL);
          if ( !v213 )
            return (unsigned int)-1073741801;
          v9 = (DirectComposition::CProjectedShadowSceneMarshaler *)DirectComposition::CParticleEmitterVisualMarshaler::CParticleEmitterVisualMarshaler(v213);
          goto LABEL_9;
        }
        v43 = a2 - 105;
        if ( !v43 )
        {
          v44 = Win32AllocPoolWithQuotaZInit(0x58uLL);
          v10 = (_DWORD *)v44;
          if ( !v44 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v44 + 20) = 1LL;
          *(_QWORD *)(v44 + 48) = 0LL;
          *(_DWORD *)(v44 + 40) = 104;
          v18 = &DirectComposition::CMaskBrushMarshaler::`vftable';
          goto LABEL_36;
        }
        v90 = v43 - 2;
        if ( !v90 )
        {
          v135 = Win32AllocPoolWithQuotaZInit(0x60uLL);
          v10 = (_DWORD *)v135;
          if ( !v135 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v135 + 20) = 1LL;
          *(_QWORD *)(v135 + 48) = 0LL;
          *(_DWORD *)(v135 + 40) = 106;
          v18 = &DirectComposition::CMatrixTransformMarshaler::`vftable';
          goto LABEL_36;
        }
        v91 = v90 - 1;
        if ( !v91 )
        {
          v126 = Win32AllocPoolWithQuotaZInit(0x88uLL);
          v10 = (_DWORD *)v126;
          if ( !v126 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v126 + 20) = 1LL;
          *(_QWORD *)(v126 + 48) = 0LL;
          *(_DWORD *)(v126 + 40) = 107;
          v18 = &DirectComposition::CMatrixTransform3DMarshaler::`vftable';
          goto LABEL_36;
        }
        v92 = v91 - 2;
        if ( !v92 )
        {
          v212 = (DirectComposition::CNaturalAnimationMarshaler *)Win32AllocPoolWithQuotaZInit(0xC8uLL);
          if ( !v212 )
            return (unsigned int)-1073741801;
          v9 = (DirectComposition::CProjectedShadowSceneMarshaler *)DirectComposition::CNaturalAnimationMarshaler::CNaturalAnimationMarshaler(v212);
          goto LABEL_9;
        }
        v93 = v92 - 1;
        if ( !v93 )
        {
          v94 = Win32AllocPoolWithQuotaZInit(0x78uLL);
          v10 = (_DWORD *)v94;
          if ( !v94 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v94 + 20) = 1LL;
          *(_QWORD *)(v94 + 48) = 0LL;
          *(_DWORD *)(v94 + 40) = 110;
          v18 = &DirectComposition::CNineGridBrushMarshaler::`vftable';
          goto LABEL_36;
        }
        v207 = v93 - 2;
        if ( !v207 )
        {
          v211 = Win32AllocPoolWithQuotaZInit(0x50uLL);
          v10 = (_DWORD *)v211;
          if ( !v211 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v211 + 20) = 1LL;
          *(_QWORD *)(v211 + 48) = 0LL;
          *(_DWORD *)(v211 + 40) = 112;
          v18 = &DirectComposition::CParticleAttractorMarshaler::`vftable';
          goto LABEL_36;
        }
        v208 = v207 - 2;
        if ( !v208 )
        {
          v210 = Win32AllocPoolWithQuotaZInit(0x90uLL);
          v10 = (_DWORD *)v210;
          if ( !v210 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v210 + 20) = 1LL;
          *(_QWORD *)(v210 + 48) = 0LL;
          *(_DWORD *)(v210 + 40) = 114;
          v18 = &DirectComposition::CParticleBehaviorsMarshaler::`vftable';
          goto LABEL_36;
        }
        if ( v208 == 1 )
        {
          v209 = Win32AllocPoolWithQuotaZInit(0x50uLL);
          v10 = (_DWORD *)v209;
          if ( !v209 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v209 + 20) = 1LL;
          *(_QWORD *)(v209 + 48) = 0LL;
          *(_DWORD *)(v209 + 40) = 115;
          v18 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
          goto LABEL_36;
        }
      }
      return (unsigned int)-1073741811;
    }
    if ( a2 > 0x8E )
    {
      v75 = a2 - 143;
      if ( v75 )
      {
        v76 = v75 - 1;
        if ( !v76 )
        {
          v145 = Win32AllocPoolWithQuotaZInit(0x68uLL);
          v10 = (_DWORD *)v145;
          if ( !v145 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v145 + 20) = 1LL;
          *(_QWORD *)(v145 + 48) = 0LL;
          *(_DWORD *)(v145 + 40) = 205;
          v18 = &DirectComposition::CRemoteRenderTargetMarshaler::`vftable';
          goto LABEL_36;
        }
        v77 = v76 - 4;
        if ( !v77 )
        {
          v230 = Win32AllocPoolWithQuotaZInit(0x58uLL);
          v10 = (_DWORD *)v230;
          if ( !v230 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v230 + 20) = 1LL;
          *(_QWORD *)(v230 + 48) = 0LL;
          *(_DWORD *)(v230 + 40) = 147;
          v18 = &DirectComposition::CRotateTransformMarshaler::`vftable';
          goto LABEL_36;
        }
        v78 = v77 - 1;
        if ( !v78 )
        {
          v229 = Win32AllocPoolWithQuotaZInit(0x68uLL);
          v10 = (_DWORD *)v229;
          if ( !v229 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v229 + 20) = 1LL;
          *(_QWORD *)(v229 + 48) = 0LL;
          *(_DWORD *)(v229 + 40) = 148;
          v18 = &DirectComposition::CRotateTransform3DMarshaler::`vftable';
          goto LABEL_36;
        }
        v79 = v78 - 1;
        if ( !v79 )
        {
          v228 = Win32AllocPoolWithQuotaZInit(0x78uLL);
          v10 = (_DWORD *)v228;
          if ( !v228 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v228 + 20) = 1LL;
          *(_QWORD *)(v228 + 48) = 0LL;
          *(_DWORD *)(v228 + 40) = 149;
          *(_DWORD *)(v228 + 72) = 0;
          *(_QWORD *)(v228 + 80) = 0LL;
          *(_QWORD *)(v228 + 88) = 0LL;
          *(_QWORD *)(v228 + 96) = 0LL;
          *(_DWORD *)(v228 + 104) = 0;
          v18 = &DirectComposition::CSaturationEffectMarshaler::`vftable';
          goto LABEL_36;
        }
        v80 = v79 - 1;
        if ( v80 )
        {
          if ( v80 == 1 )
          {
            v81 = Win32AllocPoolWithQuotaZInit(0x58uLL);
            v10 = (_DWORD *)v81;
            if ( !v81 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v81 + 20) = 1LL;
            *(_QWORD *)(v81 + 48) = 0LL;
            *(_DWORD *)(v81 + 40) = 151;
            v18 = &DirectComposition::CScaleTransformMarshaler::`vftable';
            goto LABEL_36;
          }
          return (unsigned int)-1073741811;
        }
        v226 = Win32AllocPoolWithQuotaZInit(0x50uLL);
        v227 = v226;
        if ( v226 )
        {
          *(_QWORD *)(v226 + 36) = 1LL;
          *(_QWORD *)(v226 + 64) = 0LL;
          *(_DWORD *)(v226 + 56) = 150;
          *(_QWORD *)v226 = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
          *(_QWORD *)(v226 + 16) = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
        }
        else
        {
          v227 = 0LL;
        }
        v10 = (_DWORD *)((v227 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v227 >> 64));
      }
      else
      {
        v231 = Win32AllocPoolWithQuotaZInit(0x60uLL);
        v10 = (_DWORD *)v231;
        if ( !v231 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v231 + 20) = 1LL;
        *(_QWORD *)(v231 + 48) = 0LL;
        *(_DWORD *)(v231 + 40) = 142;
        *(_QWORD *)v231 = &DirectComposition::CRemoteAppRenderTargetMarshaler::`vftable';
        *(_DWORD *)(v231 + 56) = 3;
      }
      goto LABEL_37;
    }
    if ( a2 == 142 )
    {
      v88 = Win32AllocPoolWithQuotaZInit(0x70uLL);
      v10 = (_DWORD *)v88;
      if ( !v88 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v88 + 20) = 1LL;
      *(_QWORD *)(v88 + 48) = 0LL;
      *(_DWORD *)(v88 + 40) = 141;
      v18 = &DirectComposition::CRegionGeometryMarshaler::`vftable';
      goto LABEL_36;
    }
    v30 = a2 - 130;
    if ( !v30 )
    {
      v143 = Win32AllocPoolWithQuotaZInit(0x68uLL);
      v10 = (_DWORD *)v143;
      if ( !v143 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v143 + 20) = 1LL;
      *(_QWORD *)(v143 + 48) = 0LL;
      *(_DWORD *)(v143 + 40) = 129;
      v18 = &DirectComposition::CProjectedShadowCasterMarshaler::`vftable';
      goto LABEL_36;
    }
    v31 = v30 - 1;
    if ( !v31 )
    {
      v144 = Win32AllocPoolWithQuotaZInit(0x60uLL);
      v10 = (_DWORD *)v144;
      if ( !v144 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v144 + 20) = 1LL;
      *(_QWORD *)(v144 + 48) = 0LL;
      *(_DWORD *)(v144 + 40) = 130;
      *(_QWORD *)v144 = &DirectComposition::CProjectedShadowReceiverMarshaler::`vftable';
      *(_DWORD *)(v144 + 80) = 1;
      goto LABEL_37;
    }
    v32 = v31 - 1;
    if ( !v32 )
    {
      v142 = (DirectComposition::CProjectedShadowSceneMarshaler *)Win32AllocPoolWithQuotaZInit(0x88uLL);
      if ( !v142 )
        return (unsigned int)-1073741801;
      v9 = DirectComposition::CProjectedShadowSceneMarshaler::CProjectedShadowSceneMarshaler(v142);
      goto LABEL_9;
    }
    v33 = v32 - 2;
    if ( !v33 )
    {
      v34 = Win32AllocPoolWithQuotaZInit(0x70uLL);
      v10 = (_DWORD *)v34;
      if ( !v34 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v34 + 20) = 1LL;
      *(_QWORD *)(v34 + 48) = 0LL;
      *(_DWORD *)(v34 + 40) = 133;
      *(_QWORD *)v34 = &DirectComposition::CPropertySetMarshaler::`vftable';
      *(_QWORD *)(v34 + 72) = 0LL;
      *(_QWORD *)(v34 + 80) = 0LL;
      *(_QWORD *)(v34 + 88) = 0LL;
      *(_QWORD *)(v34 + 96) = 0LL;
      goto LABEL_37;
    }
    v63 = v33 - 1;
    if ( !v63 )
    {
      v225 = Win32AllocPoolWithQuotaZInit(0x70uLL);
      v10 = (_DWORD *)v225;
      if ( !v225 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v225 + 20) = 1LL;
      *(_QWORD *)(v225 + 48) = 0LL;
      *(_DWORD *)(v225 + 40) = 134;
      v18 = &DirectComposition::CProxyGeometryClipMarshaler::`vftable';
      goto LABEL_36;
    }
    v64 = v63 - 1;
    if ( !v64 )
    {
      v224 = Win32AllocPoolWithQuotaZInit(0x88uLL);
      v10 = (_DWORD *)v224;
      if ( !v224 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v224 + 20) = 1LL;
      *(_QWORD *)(v224 + 48) = 0LL;
      *(_DWORD *)(v224 + 40) = 135;
      *(_QWORD *)(v224 + 72) = 2LL;
      *(_DWORD *)(v224 + 80) = 1;
      *(_QWORD *)(v224 + 88) = 0LL;
      *(_QWORD *)(v224 + 96) = 0LL;
      *(_QWORD *)(v224 + 104) = 0LL;
      v18 = &DirectComposition::CRadialGradientBrushMarshaler::`vftable';
      goto LABEL_36;
    }
    v65 = v64 - 2;
    if ( !v65 )
    {
      v66 = Win32AllocPoolWithQuotaZInit(0x98uLL);
      v10 = (_DWORD *)v66;
      if ( !v66 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v66 + 20) = 1LL;
      *(_QWORD *)(v66 + 48) = 0LL;
      *(_DWORD *)(v66 + 40) = 137;
      v18 = &DirectComposition::CRectangleClipMarshaler::`vftable';
      goto LABEL_36;
    }
    if ( v65 != 3 )
      return (unsigned int)-1073741811;
    v222 = Win32AllocPoolWithQuotaZInit(0x180uLL);
    v10 = (_DWORD *)v222;
    if ( !v222 )
      return (unsigned int)-1073741801;
    DirectComposition::CVisualMarshaler::CVisualMarshaler(v222, 140);
    v223 = &DirectComposition::CRedirectVisualMarshaler::`vftable';
LABEL_376:
    *(_QWORD *)v10 = v223;
    goto LABEL_37;
  }
  if ( a2 <= 0xB4 )
  {
    if ( a2 == 180 )
    {
      v45 = Win32AllocPoolWithQuotaZInit(0x80uLL);
      v10 = (_DWORD *)v45;
      if ( !v45 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v45 + 20) = 1LL;
      *(_QWORD *)(v45 + 48) = 0LL;
      *(_DWORD *)(v45 + 40) = 179;
      v18 = &DirectComposition::CSurfaceBrushMarshaler::`vftable';
      goto LABEL_36;
    }
    if ( a2 <= 0xA8 )
    {
      if ( a2 == 168 )
      {
        v248 = Win32AllocPoolWithQuotaZInit(0x190uLL);
        v10 = (_DWORD *)v248;
        if ( !v248 )
          return (unsigned int)-1073741801;
        DirectComposition::CVisualMarshaler::CVisualMarshaler(v248, 167);
        v10[98] = 0;
        *(_QWORD *)v10 = &DirectComposition::CShapeVisualMarshaler::`vftable';
        goto LABEL_37;
      }
      v233 = a2 - 157;
      if ( !v233 )
      {
        v247 = Win32AllocPoolWithQuotaZInit(0x98uLL);
        v10 = (_DWORD *)v247;
        if ( !v247 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v247 + 20) = 1LL;
        *(_QWORD *)(v247 + 48) = 0LL;
        *(_DWORD *)(v247 + 40) = 156;
        v18 = &DirectComposition::CSceneMeshMarshaler::`vftable';
        goto LABEL_36;
      }
      v234 = v233 - 1;
      if ( !v234 )
      {
        v246 = Win32AllocPoolWithQuotaZInit(0x58uLL);
        v10 = (_DWORD *)v246;
        if ( !v246 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v246 + 20) = 1LL;
        *(_QWORD *)(v246 + 48) = 0LL;
        *(_DWORD *)(v246 + 40) = 157;
        v18 = &DirectComposition::CSceneMeshRendererComponentMarshaler::`vftable';
        goto LABEL_36;
      }
      v235 = v234 - 1;
      if ( !v235 )
      {
        v245 = Win32AllocPoolWithQuotaZInit(0xA8uLL);
        v10 = (_DWORD *)v245;
        if ( !v245 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v245 + 20) = 1LL;
        *(_QWORD *)(v245 + 48) = 0LL;
        *(_DWORD *)(v245 + 40) = 158;
        v18 = &DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::`vftable';
        goto LABEL_36;
      }
      v236 = v235 - 1;
      if ( !v236 )
      {
        v244 = Win32AllocPoolWithQuotaZInit(0x40uLL);
        v10 = (_DWORD *)v244;
        if ( !v244 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v244 + 20) = 1LL;
        *(_QWORD *)(v244 + 48) = 0LL;
        *(_DWORD *)(v244 + 40) = 159;
        v18 = &DirectComposition::CSceneModelTransformMarshaler::`vftable';
        goto LABEL_36;
      }
      v237 = v236 - 1;
      if ( !v237 )
      {
        v243 = (DirectComposition::CSceneNodeMarshaler *)Win32AllocPoolWithQuotaZInit(0x80uLL);
        if ( !v243 )
          return (unsigned int)-1073741801;
        v9 = (DirectComposition::CProjectedShadowSceneMarshaler *)DirectComposition::CSceneNodeMarshaler::CSceneNodeMarshaler(v243);
        goto LABEL_9;
      }
      v238 = v237 - 4;
      if ( !v238 )
      {
        v242 = Win32AllocPoolWithQuotaZInit(0x60uLL);
        v10 = (_DWORD *)v242;
        if ( !v242 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v242 + 20) = 1LL;
        *(_QWORD *)(v242 + 48) = 0LL;
        *(_DWORD *)(v242 + 40) = 164;
        v18 = &DirectComposition::CSceneSurfaceMaterialInputMarshaler::`vftable';
        goto LABEL_36;
      }
      v239 = v238 - 1;
      if ( v239 )
      {
        if ( v239 == 1 )
        {
          v240 = Win32AllocPoolWithQuotaZInit(0x88uLL);
          v10 = (_DWORD *)v240;
          if ( !v240 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v240 + 20) = 1LL;
          *(_QWORD *)(v240 + 48) = 0LL;
          *(_DWORD *)(v240 + 40) = 166;
          *(_DWORD *)(v240 + 72) = 0;
          *(_QWORD *)(v240 + 80) = 0LL;
          *(_QWORD *)(v240 + 88) = 0LL;
          *(_QWORD *)(v240 + 96) = 0LL;
          *(_DWORD *)(v240 + 104) = 0;
          v18 = &DirectComposition::CShadowEffectMarshaler::`vftable';
          goto LABEL_36;
        }
        return (unsigned int)-1073741811;
      }
      v241 = Win32AllocPoolWithQuotaZInit(0x180uLL);
      v10 = (_DWORD *)v241;
      if ( !v241 )
        return (unsigned int)-1073741801;
      DirectComposition::CVisualMarshaler::CVisualMarshaler(v241, 165);
      v223 = &DirectComposition::CSceneVisualMarshaler::`vftable';
    }
    else
    {
      v35 = a2 - 169;
      if ( !v35 )
      {
        v99 = (_DWORD *)Win32AllocPoolWithQuotaZInit(0x48uLL);
        v10 = v99;
        if ( !v99 )
          return (unsigned int)-1073741801;
        memset(v99, 0, 0x48uLL);
        v18 = &DirectComposition::CSharedSectionMarshaler::`vftable';
        v10[5] = 1;
        v10[10] = 205;
        goto LABEL_36;
      }
      v36 = v35 - 2;
      if ( !v36 )
      {
        v254 = (_DWORD *)Win32AllocPoolWithQuotaZInit(0x48uLL);
        v10 = v254;
        if ( !v254 )
          return (unsigned int)-1073741801;
        memset(v254, 0, 0x48uLL);
        v18 = &DirectComposition::CSharedSectionWrapperMarshaler::`vftable';
        v10[5] = 1;
        v10[10] = 205;
        goto LABEL_36;
      }
      v37 = v36 - 2;
      if ( !v37 )
      {
        v253 = Win32AllocPoolWithQuotaZInit(0x58uLL);
        v10 = (_DWORD *)v253;
        if ( !v253 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v253 + 20) = 1LL;
        *(_QWORD *)(v253 + 48) = 0LL;
        *(_DWORD *)(v253 + 40) = 172;
        v18 = &DirectComposition::CSkewTransformMarshaler::`vftable';
        goto LABEL_36;
      }
      v38 = v37 - 1;
      if ( !v38 )
      {
        v252 = Win32AllocPoolWithQuotaZInit(0x90uLL);
        v10 = (_DWORD *)v252;
        if ( !v252 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v252 + 20) = 1LL;
        *(_QWORD *)(v252 + 48) = 0LL;
        *(_DWORD *)(v252 + 40) = 173;
        v18 = &DirectComposition::CSnapshotMarshaler::`vftable';
        goto LABEL_36;
      }
      v39 = v38 - 2;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( !v40 )
        {
          v250 = Win32AllocPoolWithQuotaZInit(0x88uLL);
          v10 = (_DWORD *)v250;
          if ( !v250 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v250 + 20) = 1LL;
          *(_QWORD *)(v250 + 48) = 0LL;
          *(_DWORD *)(v250 + 40) = 176;
          v18 = &DirectComposition::CSpriteShapeMarshaler::`vftable';
          goto LABEL_36;
        }
        v41 = v40 - 1;
        if ( !v41 )
        {
          v42 = Win32AllocPoolWithQuotaZInit(0x188uLL);
          v10 = (_DWORD *)v42;
          if ( !v42 )
            return (unsigned int)-1073741801;
          DirectComposition::CVisualMarshaler::CVisualMarshaler(v42, 177);
          v10[96] = 0;
          *(_QWORD *)v10 = &DirectComposition::CSpriteVisualMarshaler::`vftable';
          goto LABEL_37;
        }
        if ( v41 != 1 )
          return (unsigned int)-1073741811;
        v249 = Win32AllocPoolWithQuotaZInit(0x180uLL);
        v10 = (_DWORD *)v249;
        if ( !v249 )
          return (unsigned int)-1073741801;
        DirectComposition::CVisualMarshaler::CVisualMarshaler(v249, 178);
        v223 = &DirectComposition::CSuperWetInkVisualMarshaler::`vftable';
      }
      else
      {
        v251 = Win32AllocPoolWithQuotaZInit(0x170uLL);
        v10 = (_DWORD *)v251;
        if ( !v251 )
          return (unsigned int)-1073741801;
        DirectComposition::CVisualMarshaler::CVisualMarshaler(v251, 175);
        v223 = &DirectComposition::CVisualMarshaler::`vftable';
      }
    }
    goto LABEL_376;
  }
  if ( a2 <= 0xC1 )
  {
    if ( a2 == 193 )
    {
      v262 = Win32AllocPoolWithQuotaZInit(0x58uLL);
      v10 = (_DWORD *)v262;
      if ( !v262 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v262 + 20) = 1LL;
      *(_QWORD *)(v262 + 48) = 0LL;
      *(_DWORD *)(v262 + 40) = 192;
      v18 = &DirectComposition::CViewBoxMarshaler::`vftable';
      goto LABEL_36;
    }
    v118 = a2 - 181;
    if ( !v118 )
    {
      v261 = Win32AllocPoolWithQuotaZInit(0x70uLL);
      v10 = (_DWORD *)v261;
      if ( !v261 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v261 + 20) = 1LL;
      *(_QWORD *)(v261 + 48) = 0LL;
      *(_DWORD *)(v261 + 40) = 180;
      v18 = &DirectComposition::CSynchronousSuperWetInkMarshaler::`vftable';
      goto LABEL_36;
    }
    v119 = v118 - 1;
    if ( !v119 )
    {
      v260 = Win32AllocPoolWithQuotaZInit(0xB8uLL);
      v10 = (_DWORD *)v260;
      if ( !v260 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v260 + 20) = 1LL;
      *(_QWORD *)(v260 + 48) = 0LL;
      *(_DWORD *)(v260 + 40) = 181;
      *(_DWORD *)(v260 + 72) = 0;
      *(_QWORD *)(v260 + 80) = 0LL;
      *(_QWORD *)(v260 + 88) = 0LL;
      *(_QWORD *)(v260 + 96) = 0LL;
      *(_DWORD *)(v260 + 104) = 0;
      v18 = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
      goto LABEL_36;
    }
    v120 = v119 - 2;
    if ( !v120 )
    {
      v259 = (DirectComposition::CTextVisualMarshaler *)Win32AllocPoolWithQuotaZInit(0x1D0uLL);
      if ( !v259 )
        return (unsigned int)-1073741801;
      v9 = (DirectComposition::CProjectedShadowSceneMarshaler *)DirectComposition::CTextVisualMarshaler::CTextVisualMarshaler(v259);
      goto LABEL_9;
    }
    v121 = v120 - 3;
    if ( v121 )
    {
      v122 = v121 - 1;
      if ( v122 )
      {
        v123 = v122 - 1;
        if ( !v123 )
        {
          v124 = Win32AllocPoolWithQuotaZInit(0x50uLL);
          v10 = (_DWORD *)v124;
          if ( !v124 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v124 + 20) = 1LL;
          *(_QWORD *)(v124 + 48) = 0LL;
          *(_DWORD *)(v124 + 40) = 188;
          v18 = &DirectComposition::CTranslateTransformMarshaler::`vftable';
          goto LABEL_36;
        }
        v255 = v123 - 1;
        if ( !v255 )
        {
          v257 = Win32AllocPoolWithQuotaZInit(0x58uLL);
          v10 = (_DWORD *)v257;
          if ( !v257 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v257 + 20) = 1LL;
          *(_QWORD *)(v257 + 48) = 0LL;
          *(_DWORD *)(v257 + 40) = 189;
          v18 = &DirectComposition::CTranslateTransform3DMarshaler::`vftable';
          goto LABEL_36;
        }
        if ( v255 == 1 )
        {
          v256 = Win32AllocPoolWithQuotaZInit(0x98uLL);
          v10 = (_DWORD *)v256;
          if ( !v256 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v256 + 20) = 1LL;
          *(_QWORD *)(v256 + 48) = 0LL;
          *(_DWORD *)(v256 + 40) = 190;
          *(_DWORD *)(v256 + 72) = 0;
          *(_QWORD *)(v256 + 80) = 0LL;
          *(_QWORD *)(v256 + 88) = 0LL;
          *(_QWORD *)(v256 + 96) = 0LL;
          *(_DWORD *)(v256 + 104) = 0;
          v18 = &DirectComposition::CTurbulenceEffectMarshaler::`vftable';
          goto LABEL_36;
        }
        return (unsigned int)-1073741811;
      }
      v136 = Win32AllocPoolWithQuotaZInit(0x68uLL);
      v10 = (_DWORD *)v136;
      if ( !v136 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v136 + 20) = 1LL;
      *(_QWORD *)(v136 + 48) = 0LL;
      *(_DWORD *)(v136 + 40) = 187;
      v137 = &DirectComposition::CTransformGroupMarshaler::`vftable';
    }
    else
    {
      v258 = Win32AllocPoolWithQuotaZInit(0x68uLL);
      v10 = (_DWORD *)v258;
      if ( !v258 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v258 + 20) = 1LL;
      *(_QWORD *)(v258 + 48) = 0LL;
      *(_DWORD *)(v258 + 40) = 186;
      v137 = &DirectComposition::CTransform3DGroupMarshaler::`vftable';
    }
    *(_QWORD *)v10 = v137;
    *((_QWORD *)v10 + 9) = 0LL;
    *((_QWORD *)v10 + 10) = 0LL;
    v10[22] = 0;
  }
  else
  {
    v6 = a2 - 194;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
      {
        v8 = (DirectComposition::CVisualMarshaler *)Win32AllocPoolWithQuotaZInit(0x170uLL);
        if ( v8 )
        {
          v9 = DirectComposition::CVisualMarshaler::CVisualMarshaler(v8);
LABEL_9:
          v10 = v9;
          goto LABEL_37;
        }
        return (unsigned int)-1073741801;
      }
      v96 = v7 - 1;
      if ( v96 )
      {
        v97 = v96 - 3;
        if ( !v97 )
        {
          v98 = Win32AllocPoolWithQuotaZInit(0x40uLL);
          v10 = (_DWORD *)v98;
          if ( !v98 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(v98 + 20) = 1LL;
          *(_QWORD *)(v98 + 48) = 0LL;
          *(_DWORD *)(v98 + 40) = 198;
          v18 = &DirectComposition::CVisualReferenceControllerMarshaler::`vftable';
          goto LABEL_36;
        }
        v101 = v97 - 1;
        if ( v101 )
        {
          v102 = v101 - 2;
          if ( !v102 )
          {
            v103 = Win32AllocPoolWithQuotaZInit(0x48uLL);
            v10 = (_DWORD *)v103;
            if ( !v103 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v103 + 20) = 1LL;
            *(_QWORD *)(v103 + 48) = 0LL;
            *(_DWORD *)(v103 + 40) = 201;
            v18 = &DirectComposition::CBackdropBrushMarshaler::`vftable';
            goto LABEL_36;
          }
          if ( v102 == 3 )
          {
            v263 = Win32AllocPoolWithQuotaZInit(0x50uLL);
            v10 = (_DWORD *)v263;
            if ( !v263 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(v263 + 20) = 1LL;
            *(_QWORD *)(v263 + 48) = 0LL;
            *(_DWORD *)(v263 + 40) = 204;
            v18 = &DirectComposition::CYCbCrSurfaceMarshaler::`vftable';
            goto LABEL_36;
          }
          return (unsigned int)-1073741811;
        }
        v264 = Win32AllocPoolWithQuotaZInit(0x60uLL);
        v10 = (_DWORD *)v264;
        if ( !v264 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v264 + 20) = 1LL;
        *(_QWORD *)(v264 + 48) = 0LL;
        *(_DWORD *)(v264 + 40) = 199;
        v18 = &DirectComposition::CVisualSurfaceMarshaler::`vftable';
      }
      else
      {
        v265 = Win32AllocPoolWithQuotaZInit(0x70uLL);
        v10 = (_DWORD *)v265;
        if ( !v265 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v265 + 20) = 1LL;
        *(_QWORD *)(v265 + 48) = 0LL;
        *(_DWORD *)(v265 + 40) = 195;
        v18 = &DirectComposition::CVisualCaptureMarshaler::`vftable';
      }
LABEL_36:
      *(_QWORD *)v10 = v18;
      goto LABEL_37;
    }
    v266 = Win32AllocPoolWithQuotaZInit(0xC8uLL);
    v10 = (_DWORD *)v266;
    if ( v266 )
    {
      *(_QWORD *)(v266 + 20) = 1LL;
      *(_QWORD *)(v266 + 48) = 0LL;
      *(_DWORD *)(v266 + 40) = 193;
      v18 = &DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::`vftable';
      goto LABEL_36;
    }
    v10 = 0LL;
  }
LABEL_37:
  if ( !v10 )
    return (unsigned int)-1073741801;
  inserted = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 32LL))(v10) )
    inserted = DirectComposition::CConnection::AcquireShellResourceAccess(*((DirectComposition::CConnection **)this + 5));
  v27 = *(_QWORD *)v10;
  v28 = v10;
  if ( inserted < 0 )
    goto LABEL_463;
  inserted = (*(__int64 (__fastcall **)(_DWORD *))v27)(v10);
  if ( inserted < 0 )
    goto LABEL_462;
  inserted = DirectComposition::CLinearObjectTableBase::InsertObject(
               (DirectComposition::CApplicationChannel *)((char *)this + 112),
               v10,
               v10 + 6);
  if ( inserted >= 0 && *((int *)this + 6) <= 2 )
  {
    *((_QWORD *)v10 + 1) = *((_QWORD *)this + 50);
    *((_QWORD *)this + 50) = v10;
  }
  if ( inserted < 0 )
  {
LABEL_462:
    v27 = *(_QWORD *)v10;
    v28 = v10;
LABEL_463:
    (*(void (__fastcall **)(_DWORD *, __int64))(v27 + 80))(v28, 1LL);
    return (unsigned int)inserted;
  }
  if ( v5 )
    DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
      this,
      *(struct DirectComposition::CAnimationTimeList **)(v5 + 80));
  *a3 = (struct DirectComposition::CResourceMarshaler *)v10;
  return (unsigned int)inserted;
}
