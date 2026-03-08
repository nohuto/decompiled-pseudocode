/*
 * XREFs of VidSchiCompleteFlipEntry @ 0x1C000D060
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000BE30 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C000CDD0 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0010D10 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C0017F40 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C00183F4 (VidSchiCompletePendingFlipOnPlane.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0036748 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     VidSchiCancelIndependentFlips @ 0x1C003A50C (VidSchiCancelIndependentFlips.c)
 *     VidSchiRestartQueuedFlip @ 0x1C003C2A4 (VidSchiRestartQueuedFlip.c)
 *     ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x1C00489D8 (-VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C004A820 (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 *     ?VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x1C004AC28 (-VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVID.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C0004050 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00062E0 (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_VIDSCH_FLIP_STATUS@@PEAVHwQueueStagingList@@@Z @ 0x1C000DF90 (-VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_E.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000F7FC (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001124C (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00124D8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     VidSchiUnwaitContext @ 0x1C00136BC (VidSchiUnwaitContext.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C001665C (VidSchiPropagatePresentHistoryToken.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001BF00 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001C346 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C002F364 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x1C003478C (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C0034EA0 (-UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PE.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0037980 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     McTemplateK0pxqqpqx_EtwWriteTransfer @ 0x1C003978C (McTemplateK0pxqqpqx_EtwWriteTransfer.c)
 *     McTemplateK0qqt_EtwWriteTransfer @ 0x1C0039BD4 (McTemplateK0qqt_EtwWriteTransfer.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C003C8E4 (VidSchiTryEnterIndependentFlip.c)
 *     ?VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0049204 (-VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 */

__int64 __fastcall VidSchiCompleteFlipEntry(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        _BYTE *a8)
{
  __int64 v8; // r14
  _DWORD *v9; // r15
  _BYTE *v10; // r8
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r11
  unsigned int v14; // esi
  unsigned __int64 v15; // r9
  int v16; // r10d
  _DWORD *v17; // rax
  _DWORD *v18; // rbx
  unsigned int v19; // ecx
  unsigned int v20; // r10d
  bool v21; // r15
  int v22; // r12d
  __int64 v23; // rax
  int v24; // r15d
  __int64 v25; // rsi
  __int64 v26; // r14
  unsigned int i; // esi
  __int64 v28; // r12
  void *v29; // rcx
  _DWORD *v30; // r8
  unsigned int v31; // esi
  unsigned int v32; // r14d
  bool v33; // zf
  int v34; // eax
  unsigned int v35; // r12d
  unsigned __int64 v36; // rdx
  _DWORD *v37; // rbx
  __int64 v38; // rcx
  unsigned int v39; // r12d
  int v40; // eax
  unsigned __int64 v41; // r15
  _DWORD *v42; // r10
  unsigned int v43; // r13d
  bool v44; // cl
  unsigned int v45; // eax
  unsigned int v46; // r11d
  unsigned int v47; // esi
  unsigned int v48; // r14d
  int v49; // eax
  int v50; // r13d
  __int64 v51; // r12
  unsigned int v52; // r8d
  unsigned int j; // esi
  __int64 v54; // rcx
  __int64 v55; // r10
  __int64 v56; // rax
  __int64 v57; // r8
  int v58; // eax
  char v59; // cl
  __int64 v60; // r9
  int v61; // eax
  __int64 v62; // rdx
  int v63; // esi
  __int64 v64; // rdx
  __int64 v65; // rbx
  void *v66; // rcx
  unsigned int v67; // r10d
  unsigned int v68; // r11d
  int v69; // eax
  int v70; // r15d
  __int64 v71; // rsi
  unsigned int v72; // r12d
  int v73; // eax
  unsigned int v74; // r8d
  unsigned int v75; // esi
  int v76; // eax
  __int64 v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rsi
  int v80; // edi
  _QWORD *k; // rbx
  _QWORD *v82; // rcx
  int v83; // edx
  __int64 v84; // rbx
  int v85; // r14d
  _QWORD **v86; // rsi
  _QWORD *v87; // rax
  _QWORD **v88; // rax
  _QWORD *v89; // rcx
  _QWORD *v90; // r14
  __int64 v91; // rbx
  struct _KEVENT *v92; // r15
  KSPIN_LOCK *v93; // rsi
  KIRQL v94; // r13
  struct _KEVENT *v95; // r12
  struct _KEVENT **v96; // r14
  KIRQL v97; // r15
  struct _KEVENT *v98; // r12
  struct _KEVENT *v99; // r14
  KIRQL v100; // r12
  struct _KEVENT *v101; // r15
  struct _KEVENT *v102; // r14
  KIRQL v103; // r15
  struct _KEVENT *v104; // r12
  struct _KEVENT **v105; // rbx
  KIRQL v106; // di
  struct _KEVENT *v107; // rsi
  unsigned int v109; // ecx
  char *v110; // r13
  char *v111; // rcx
  char *v112; // rcx
  int v113; // eax
  int v114; // eax
  bool v115; // r9
  int v116; // ecx
  char *v117; // rax
  unsigned __int64 v118; // rcx
  unsigned __int64 v119; // r10
  __int64 v120; // r15
  __int64 v121; // rax
  bool v122; // cl
  __int64 v123; // rax
  int v124; // eax
  int v125; // eax
  int v126; // r8d
  int v127; // ecx
  int v128; // eax
  int v129; // eax
  int v130; // eax
  __int64 v131; // rcx
  __int64 v132; // rax
  unsigned int *v133; // rax
  unsigned int v134; // edx
  unsigned int v135; // r8d
  __int64 v136; // rdx
  unsigned int v137; // r10d
  int v138; // eax
  char v139; // cl
  int v140; // eax
  unsigned int v141; // r9d
  char v142; // cl
  unsigned int v143; // eax
  __int64 v144; // rcx
  __int64 v145; // r9
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *v146; // rax
  __int64 v147; // r8
  unsigned int v148; // eax
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax
  __int64 v150; // r8
  __int64 v151; // r14
  void *v152; // rcx
  bool v153; // si
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rcx
  char v157; // cl
  int v158; // eax
  int v159; // r8d
  int v160; // r10d
  __int64 v161; // r9
  __int64 v162; // rcx
  __int64 v163; // r8
  int v164; // eax
  unsigned int v165; // edx
  __int64 v166; // rbx
  unsigned int v167; // r11d
  __int64 v168; // r11
  int v169; // eax
  unsigned int *v170; // rax
  unsigned int v171; // edx
  unsigned int v172; // r8d
  unsigned int v173; // edx
  int v174; // eax
  char v175; // cl
  int v176; // eax
  unsigned int v177; // r10d
  char v178; // cl
  unsigned int v179; // eax
  unsigned __int64 v180; // rcx
  __int64 v181; // rdx
  __int64 v182; // rcx
  unsigned int v183; // ebx
  int v184; // r8d
  __int64 v185; // r10
  int v186; // ecx
  __int64 v187; // r11
  unsigned __int64 v188; // rdx
  __int64 v189; // rax
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // rdi
  __int64 v193; // rax
  __int64 v194; // rbx
  char v195; // cl
  int v196; // eax
  void (__fastcall *v197)(_QWORD, __int64, __int64, __int64); // rax
  _QWORD *v198; // rcx
  _QWORD *v199; // rdx
  _QWORD *v200; // rcx
  _QWORD *v201; // rdx
  int v202; // ecx
  int v203; // ecx
  int v204; // ecx
  int Flink; // ecx
  unsigned __int64 *v206; // [rsp+20h] [rbp-E0h]
  char v207; // [rsp+60h] [rbp-A0h]
  unsigned int v208; // [rsp+60h] [rbp-A0h]
  int v209; // [rsp+64h] [rbp-9Ch]
  int v210; // [rsp+64h] [rbp-9Ch]
  unsigned int v211; // [rsp+6Ch] [rbp-94h]
  unsigned int v212; // [rsp+70h] [rbp-90h]
  unsigned int v213; // [rsp+70h] [rbp-90h]
  unsigned int v214; // [rsp+74h] [rbp-8Ch]
  unsigned __int8 v215; // [rsp+74h] [rbp-8Ch]
  unsigned int v217; // [rsp+80h] [rbp-80h]
  unsigned int v218; // [rsp+84h] [rbp-7Ch]
  int v219; // [rsp+88h] [rbp-78h]
  __int64 v220; // [rsp+88h] [rbp-78h]
  unsigned int v221[2]; // [rsp+90h] [rbp-70h]
  __int64 v222; // [rsp+98h] [rbp-68h]
  _DWORD *v223; // [rsp+A0h] [rbp-60h]
  _DWORD *v224; // [rsp+A0h] [rbp-60h]
  unsigned int v225; // [rsp+A8h] [rbp-58h]
  int v226; // [rsp+ACh] [rbp-54h]
  unsigned int v227; // [rsp+B0h] [rbp-50h]
  unsigned int v228; // [rsp+B4h] [rbp-4Ch]
  unsigned __int64 v229; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v230; // [rsp+C0h] [rbp-40h]
  __int64 v231; // [rsp+C0h] [rbp-40h]
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v232; // [rsp+C8h] [rbp-38h]
  __int64 v235; // [rsp+130h] [rbp+30h]
  __int64 v236; // [rsp+138h] [rbp+38h]
  _DWORD *v237; // [rsp+140h] [rbp+40h]
  _DWORD *v238; // [rsp+148h] [rbp+48h]
  _QWORD v239[2]; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v240; // [rsp+168h] [rbp+68h]
  unsigned int v241; // [rsp+16Ch] [rbp+6Ch]
  unsigned int v242; // [rsp+170h] [rbp+70h]
  unsigned int v243; // [rsp+174h] [rbp+74h]
  unsigned int v244; // [rsp+178h] [rbp+78h]
  _QWORD v245[2]; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v246; // [rsp+190h] [rbp+90h]
  unsigned int v247; // [rsp+194h] [rbp+94h]
  int v248; // [rsp+198h] [rbp+98h]
  unsigned int v249; // [rsp+19Ch] [rbp+9Ch]
  unsigned int v250; // [rsp+1A0h] [rbp+A0h]
  __int64 v251; // [rsp+1A8h] [rbp+A8h]
  __int64 v252; // [rsp+1B0h] [rbp+B0h]
  _QWORD v253[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v254; // [rsp+1C8h] [rbp+C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v256; // [rsp+1F8h] [rbp+F8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v257; // [rsp+210h] [rbp+110h] BYREF
  struct _KLOCK_QUEUE_HANDLE v258; // [rsp+228h] [rbp+128h] BYREF
  struct _KLOCK_QUEUE_HANDLE v259; // [rsp+240h] [rbp+140h] BYREF
  struct _KLOCK_QUEUE_HANDLE v260; // [rsp+258h] [rbp+158h] BYREF
  _DWORD v261[44]; // [rsp+270h] [rbp+170h] BYREF

  v8 = a3;
  v9 = (_DWORD *)a4;
  v10 = a8;
  v11 = a2;
  v211 = v8;
  if ( a8 )
    *a8 = 0;
  if ( !*(_DWORD *)(a2 + 804) )
    return 0LL;
  v12 = *(_QWORD *)(a2 + 8 * v8 + 3200);
  v13 = v8;
  v222 = v12;
  *(_QWORD *)v221 = v8;
  if ( !a4 )
    return 0LL;
  v14 = a5;
  v217 = 0;
  v218 = 0;
  while ( 1 )
  {
    v15 = 0LL;
    v16 = 4673;
    v229 = 0LL;
    v17 = &v9[346 * v14];
    v238 = v17;
    v18 = v17 + 30;
    v19 = v17[293];
    v237 = v17 + 30;
    if ( v19 > 0xC || !_bittest(&v16, v19) )
    {
      v15 = *((_QWORD *)v17 + 145);
      v229 = v15;
    }
    v20 = a7;
    v21 = 0;
    v209 = 1;
    v22 = 1;
    v207 = 0;
    if ( !a7 )
    {
      if ( v19 - 10 <= 1 )
        goto LABEL_11;
LABEL_345:
      v9 = (_DWORD *)a4;
      goto LABEL_103;
    }
    if ( a7 == 6 || a7 == 9 )
    {
      v126 = 1;
      if ( v19 <= 0xC )
      {
        v125 = 4673;
        if ( _bittest(&v125, v19) )
          v126 = 0;
      }
      if ( a7 == 9 )
      {
        if ( v19 == 5 || v19 == 15 )
        {
          v209 = 1;
        }
        else
        {
          v22 = 0;
          v209 = 0;
        }
      }
      else if ( v19 == 5 || v19 == 15 || v19 == 13 )
      {
        v126 = 0;
      }
      if ( v19 - 7 <= 1 )
      {
        if ( *((_BYTE *)v18 + 1077) )
          ++*(_QWORD *)(v15 + 8 * v13 + 376);
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 808));
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 3080));
        if ( v18[263] == 8 && !*((_BYTE *)v18 + 1077) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v15 + 4 * v13 + 1444));
          v131 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 40) + 32LL)
                                       + 8LL * *(unsigned int *)(*(_QWORD *)(v15 + 32) + 4LL))
                           + 8 * v13
                           + 88);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 8 * v13 + 6480) + 8LL));
          _InterlockedIncrement((volatile signed __int32 *)(v131 + 8));
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 736));
          v132 = v11;
          if ( *(_BYTE *)(v11 + 2212) )
            v132 = v11 + 4 * v13;
          _InterlockedIncrement((volatile signed __int32 *)(v132 + 740));
          _InterlockedIncrement((volatile signed __int32 *)(v15 + 1572));
          _InterlockedIncrement((volatile signed __int32 *)(v15 + 4 * v13 + 1508));
        }
      }
LABEL_170:
      if ( !v126 )
      {
        v9 = (_DWORD *)a4;
LABEL_102:
        v10 = a8;
        goto LABEL_103;
      }
LABEL_202:
      LODWORD(v206) = ((_BYTE)v14 + 1) & 0x3F;
      *(_DWORD *)(a4 + 64) = (_DWORD)v206;
      VidSchiUpdateFlipQueueHistory(6LL, v11, (unsigned int)v8, a4, v206);
      v20 = a7;
LABEL_11:
      v23 = *(_QWORD *)(v11 + 16);
      if ( *(_BYTE *)(v23 + 4736) )
      {
        if ( *(_DWORD *)(v23 + 288) == 1 )
        {
          v209 = v22;
          v207 = v21;
          if ( v18[263] == 11 )
          {
            v207 = v21;
            v209 = v22;
            if ( (v18[284] & 0x1000) == 0 )
            {
              v209 = v22;
              v207 = v21;
              if ( !v20 )
              {
                v261[0] = -1;
                memset(&v261[1], 0, 0xA4uLL);
                `vector constructor iterator'(
                  &v261[2],
                  0x10uLL,
                  0xAuLL,
                  (void *(*)(void *))_MOCKDRIVERSTATE_SET_PLANE::_unnamed_type_PerPlane_::_unnamed_type_PerPlane_);
                v261[0] = v211;
                v133 = (unsigned int *)*((_QWORD *)v18 + 147);
                v239[0] = v11;
                v239[1] = v133;
                v134 = *v133;
                v135 = *v133 & 0x3FF;
                v33 = *(_BYTE *)(v11 + 156) == 0;
                v240 = v135;
                if ( v33 )
                  v136 = 0LL;
                else
                  v136 = (v134 >> 10) & 0x3FF;
                v137 = 0;
                v241 = v136;
                v33 = !_BitScanForward((unsigned int *)&v138, v135);
                v139 = -1;
                v242 = 0;
                if ( !v33 )
                  v139 = v138;
                v209 = v22;
                v33 = !_BitScanForward((unsigned int *)&v140, v136);
                v141 = v139;
                v142 = -1;
                if ( !v33 )
                  v142 = v140;
                v243 = v141;
                v143 = v142;
                v244 = v142;
                while ( v135 || (_DWORD)v136 )
                {
                  v209 = v22;
                  if ( v141 >= v143 )
                  {
                    v261[4 * v137 + 2] = v143;
                    v145 = 0LL;
                    LOBYTE(v261[4 * v137 + 3]) = 0;
                    v209 = v22;
                  }
                  else
                  {
                    v144 = *((_QWORD *)v18 + 147);
                    v261[4 * v137 + 2] = v141;
                    LOBYTE(v261[4 * v137 + 3]) = 1;
                    v145 = *(_QWORD *)(((unsigned __int64)v137 << 6)
                                     + v144
                                     + *(_DWORD *)(v144 + 4) * ((8 * *(_DWORD *)(v144 + 8) + 231) & 0xFFFFFFF8)
                                     + 24);
                  }
                  *(_QWORD *)&v261[4 * v137 + 4] = v145;
                  ++v261[1];
                  VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v239);
                  v143 = v244;
                  v136 = v241;
                  v135 = v240;
                  v141 = v243;
                  v137 = v242;
                }
                ((void (__fastcall *)(_QWORD, __int64, _DWORD *))DxgCoreInterface[84])(
                  *(_QWORD *)(v11 + 16),
                  v136,
                  v261);
                v20 = a7;
                v207 = v21;
                goto LABEL_15;
              }
            }
          }
        }
      }
      if ( v20 == 9 || v20 == 6 )
      {
        FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo(*((struct _D3DKMT_AUXILIARYPRESENTINFO **)v18
                                                                             + 166));
        if ( FlipManagerAuxiliaryPresentInfo )
        {
          *((_DWORD *)FlipManagerAuxiliaryPresentInfo + 11) = 1;
          if ( (byte_1C00769C4 & 1) != 0 )
            McTemplateK0qq_EtwWriteTransfer(
              FlipManagerAuxiliaryPresentInfo,
              &EventFlipManagerIFlipPresentCancel,
              v150,
              *((unsigned int *)FlipManagerAuxiliaryPresentInfo + 2),
              v18[264]);
        }
        v20 = a7;
        if ( a7 == 9 || a7 == 12 )
          goto LABEL_242;
LABEL_15:
        if ( (v18[284] & 0x10) != 0 )
          v24 = ((unsigned __int16)**((_DWORD **)v18 + 147) | (unsigned __int16)(**((_DWORD **)v18 + 147) >> 10)) & 0x3FF;
        else
          v24 = (1 << *(_DWORD *)(v11 + 152)) - 1;
        v214 = v24;
      }
      else
      {
        if ( v20 != 12 )
          goto LABEL_15;
        v146 = GetFlipManagerAuxiliaryPresentInfo(*((struct _D3DKMT_AUXILIARYPRESENTINFO **)v18 + 166));
        if ( v146 )
        {
          if ( v21 )
          {
            *((_DWORD *)v146 + 7) = 1;
            *((_DWORD *)v146 + 12) = 1;
            if ( (byte_1C00769C4 & 1) != 0 )
              McTemplateK0qqt_EtwWriteTransfer(
                (_DWORD)v146,
                1,
                v147,
                *((_DWORD *)v146 + 2),
                v18[264],
                (v18[284] & 0x100000) != 0);
          }
          else
          {
            *((_DWORD *)v146 + 11) = 1;
            if ( (byte_1C00769C4 & 1) != 0 )
              McTemplateK0qq_EtwWriteTransfer(
                v146,
                &EventFlipManagerIFlipPresentCancel,
                v147,
                *((unsigned int *)v146 + 2),
                v18[264]);
          }
        }
        v20 = a7;
LABEL_242:
        if ( !v22 )
          goto LABEL_15;
        v148 = VidSchiDecrementPendingFlipsForFlipEntry(
                 (struct _VIDSCH_GLOBAL *)v11,
                 (struct _VIDSCH_PRESENT_INFO *)v12,
                 (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v18);
        v20 = a7;
        v214 = v148;
      }
      if ( *(_DWORD **)(v12 + 120) == v18 )
        *(_QWORD *)(v12 + 120) = 0LL;
      if ( *(_DWORD **)(v11 + 3552) == v18 )
        *(_QWORD *)(v11 + 3552) = 0LL;
      v25 = *((_QWORD *)v18 + 145);
      v18[263] = v20;
      if ( v25 )
      {
        v151 = *(_QWORD *)(*((_QWORD *)v18 + 147) + 200LL);
        if ( v151 )
        {
          memset(&v254, 0, sizeof(v254));
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v25 + 16), &v254);
          _InterlockedIncrement((volatile signed __int32 *)(v151 + 12));
          v152 = *(void **)(v25 + 8);
          if ( v152 )
            CRefCountedBuffer::RefCountedBufferRelease(v152);
          *(_QWORD *)(v25 + 8) = v151;
          KeReleaseInStackQueuedSpinLock(&v254);
          v20 = a7;
        }
        *((_QWORD *)v18 + 145) = 0LL;
      }
      VidSchiSignalRuntimeFenceForCompletedFlipEntry(v11, v18, v20, a1);
      v26 = *((_QWORD *)v18 + 147);
      for ( i = 0; i < *(_DWORD *)(v11 + 152); ++i )
      {
        v28 = i * ((8 * *(_DWORD *)(v26 + 8) + 231) & 0xFFFFFFF8);
        v29 = *(void **)(v28 + v26 + 200);
        if ( v29 )
        {
          CRefCountedBuffer::RefCountedBufferRelease(v29);
          *(_QWORD *)(v28 + v26 + 200) = 0LL;
        }
      }
      v30 = (_DWORD *)*((_QWORD *)v18 + 147);
      v223 = v30;
      v31 = *v30 & 0x3FF;
      if ( *(_BYTE *)(v11 + 156) )
        v32 = (*v30 >> 10) & 0x3FF;
      else
        v32 = 0;
      v33 = !_BitScanForward((unsigned int *)&v34, v31);
      if ( v33 )
        LOBYTE(v34) = -1;
      v35 = (char)v34;
      v33 = !_BitScanForward((unsigned int *)&v34, v32);
      if ( v33 )
        LOBYTE(v34) = -1;
LABEL_33:
      v36 = (unsigned int)(char)v34;
      v212 = (char)v34;
      while ( v31 || v32 )
      {
        v109 = v36;
        if ( v35 < (unsigned int)v36 )
          v109 = v35;
        v110 = (char *)v30 + v109 * ((8 * v30[2] + 231) & 0xFFFFFFF8);
        v111 = (char *)*((_QWORD *)v110 + 26);
        if ( v111 )
        {
          VidSchiReleaseSyncObjectReference(v111, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v36);
          v36 = v212;
          v30 = v223;
          *((_QWORD *)v110 + 26) = 0LL;
        }
        v112 = (char *)*((_QWORD *)v110 + 28);
        if ( v112 )
        {
          if ( v35 >= (unsigned int)v36 )
          {
LABEL_181:
            v32 &= ~(1 << v36);
            v33 = !_BitScanForward((unsigned int *)&v34, v32);
            if ( v33 )
              LOBYTE(v34) = -1;
            goto LABEL_33;
          }
          VidSchiReleaseSyncObjectReference(v112, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v36);
          v36 = v212;
          v30 = v223;
          *((_QWORD *)v110 + 28) = 0LL;
        }
        if ( v35 >= (unsigned int)v36 )
          goto LABEL_181;
        v31 &= ~(1 << v35);
        v33 = !_BitScanForward((unsigned int *)&v113, v31);
        if ( v33 )
          LOBYTE(v113) = -1;
        v35 = (char)v113;
      }
      v37 = v237;
      v11 = a2;
      v38 = *((_QWORD *)v237 + 146);
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 12), 0xFFFFFFFF) == 1 )
        {
          if ( *(_QWORD *)v38 )
            ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v38, (PVOID)v38);
          else
            ExFreePoolWithTag((PVOID)v38, 0);
        }
        *((_QWORD *)v237 + 146) = 0LL;
      }
      v39 = a7;
      if ( a7 )
      {
        v12 = v222;
      }
      else
      {
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a2 + 1736), &LockHandle);
        v12 = v222;
        *(_DWORD *)(v222 + 44240) = v237[264];
        if ( (v237[284] & 0x20) == 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v222 + 16) + 4LL * *(_QWORD *)v221 + 508) = v237[264];
          *(_QWORD *)(*(_QWORD *)(v222 + 16) + 8LL * *(_QWORD *)v221 + 576) = *((_QWORD *)v237 + 141);
          *(_QWORD *)(*(_QWORD *)(v222 + 16) + 8LL * *(_QWORD *)v221 + 704) = *((_QWORD *)v237 + 139);
          *(_QWORD *)(*(_QWORD *)(v222 + 16) + 8LL * *(_QWORD *)v221 + 832) = *((_QWORD *)v237 + 140);
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
      v40 = v237[284];
      if ( (v40 & 0x20) != 0 && *((_QWORD *)v237 + 144) )
      {
        v153 = 1;
        switch ( a7 )
        {
          case 0u:
            goto LABEL_273;
          case 9u:
            if ( !v209 )
            {
              v153 = 0;
              break;
            }
LABEL_273:
            if ( !v207 )
              UpdateFlipManagerStatsOnFlipCompletion(a2, v237, v12, v211, a7);
            break;
          case 6u:
            if ( (v40 & 0x100000) == 0 )
            {
              v154 = GetFlipManagerAuxiliaryPresentInfo(*((struct _D3DKMT_AUXILIARYPRESENTINFO **)v237 + 166));
              if ( v154 )
                *((_DWORD *)v154 + 7) = 0;
              v155 = 0LL;
              if ( *((_QWORD *)v237 + 167) )
                v155 = (__int64)(v237 + 334);
              VidSchiPropagatePresentHistoryToken(
                (struct _VIDSCH_GLOBAL *)a2,
                *((PKSPIN_LOCK *)v237 + 143),
                *((struct _D3DKMT_PRESENTHISTORYTOKEN **)v237 + 144),
                1,
                (v237[284] & 0x40) != 0,
                0,
                0,
                *((_QWORD *)v237 + 145),
                *((_QWORD *)v237 + 147),
                0LL,
                v155,
                1);
            }
            goto LABEL_273;
          default:
            v153 = v207 != 0;
            break;
        }
        v156 = 0LL;
        if ( *((_QWORD *)v237 + 167) )
          v156 = (__int64)(v237 + 334);
        VidSchiPropagatePresentHistoryToken(
          (struct _VIDSCH_GLOBAL *)a2,
          *((PKSPIN_LOCK *)v237 + 143),
          *((struct _D3DKMT_PRESENTHISTORYTOKEN **)v237 + 144),
          v153,
          (v237[284] & 0x40) != 0,
          0,
          0,
          *((_QWORD *)v237 + 145),
          *((_QWORD *)v237 + 147),
          0LL,
          v156,
          0);
      }
      if ( bTracingEnabled && a7 )
      {
        v157 = -1;
        v33 = !_BitScanForward((unsigned int *)&v158, v214);
        v41 = v229;
        if ( !v33 )
          v157 = v158;
        v159 = v157;
        if ( v229 )
        {
          v36 = *(_QWORD *)(v229 + 8);
          v160 = *(_DWORD *)(a2 + 2544);
          if ( !v36 )
            v36 = v229;
        }
        else
        {
          LOBYTE(v160) = 0;
          v36 = 0LL;
        }
        v161 = *((_QWORD *)v237 + 147);
        if ( (byte_1C00769C1 & 1) != 0 )
        {
          v162 = *(_DWORD *)(v161 + 4) * ((8 * *(_DWORD *)(v161 + 8) + 231) & 0xFFFFFFF8);
          McTemplateK0pxqqpqx_EtwWriteTransfer(
            v162,
            v36,
            v159,
            *(_QWORD *)(a2 + 16),
            *(_QWORD *)(v162 + v161 + 40),
            v211,
            v237[264],
            v36,
            v160,
            v159);
        }
      }
      else
      {
        v41 = v229;
      }
      v42 = (_DWORD *)*((_QWORD *)v237 + 147);
      v224 = v42;
      if ( (*v42 & 0x3FF) != 0 )
      {
        v43 = v237[270];
        v227 = v43;
        v44 = a7 != 0;
        v45 = v237[271];
        v46 = 0;
        v228 = v45;
        v210 = 0;
        if ( v43 )
        {
          do
          {
            if ( (v43 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                v47 = *v42 & 0x3FF;
                v225 = v47;
                if ( *(_BYTE *)(v11 + 156) )
                  v48 = (*v42 >> 10) & 0x3FF;
                else
                  v48 = 0;
                v33 = !_BitScanForward((unsigned int *)&v49, v47);
                v50 = 0;
                v226 = 0;
                if ( v33 )
                  LOBYTE(v49) = -1;
                v51 = (unsigned int)(char)v49;
                v33 = !_BitScanForward((unsigned int *)&v49, v48);
                if ( v33 )
                  LOBYTE(v49) = -1;
                v52 = (char)v49;
                v208 = (char)v49;
                while ( v47 || v48 )
                {
                  if ( (unsigned int)v51 >= v52 )
                    goto LABEL_336;
                  v115 = v44;
                  v116 = v42[1];
                  v117 = (char *)v42 + v116 * ((8 * v42[2] + 231) & 0xFFFFFFF8);
                  v118 = (unsigned __int64)(v50 + v46 * v116) << 6;
                  v119 = *(_QWORD *)&v117[v118 + 72];
                  v36 = *(_QWORD *)&v117[v118 + 64];
                  v120 = *(_QWORD *)&v117[v118 + 48];
                  v230 = v119;
                  v232 = (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v36;
                  if ( a7 && v119 && v211 != -1 )
                  {
                    v163 = *(_QWORD *)(v11 + 8LL * *(_QWORD *)v221 + 3200);
                    v235 = v163;
                    if ( v163 )
                    {
                      v164 = *(_DWORD *)(v163 + 3088);
                      if ( _bittest(&v164, v51) )
                      {
                        v165 = 0;
                        do
                        {
                          if ( v165 )
                            v166 = *(_QWORD *)(v163 + 8 * v51 + 40);
                          else
                            v166 = *(_QWORD *)(v163 + 32);
                          v167 = *(_DWORD *)(v166 + 72);
                          ++v165;
                          v236 = v166;
                          v213 = v165;
                          v215 = v167;
                          if ( v167 != (((unsigned __int8)*(_DWORD *)(v166 + 68) - 1) & 0x3F) )
                          {
                            while ( 2 )
                            {
                              v168 = v166 + 1384LL * v167;
                              v252 = v168;
                              v169 = *(_DWORD *)(v168 + 1172);
                              if ( v169 == 5 || v169 == 15 )
                              {
                                v170 = *(unsigned int **)(v168 + 1296);
                                v245[0] = v11;
                                v245[1] = v170;
                                v171 = *v170;
                                v172 = *v170 & 0x3FF;
                                v33 = *(_BYTE *)(v11 + 156) == 0;
                                v246 = v172;
                                if ( v33 )
                                  v173 = 0;
                                else
                                  v173 = (v171 >> 10) & 0x3FF;
                                v33 = !_BitScanForward((unsigned int *)&v174, v172);
                                v175 = -1;
                                if ( !v33 )
                                  v175 = v174;
                                v33 = !_BitScanForward((unsigned int *)&v176, v173);
                                v177 = v175;
                                v178 = -1;
                                if ( !v33 )
                                  v178 = v176;
                                v247 = v173;
                                v179 = v178;
                                v250 = v178;
                                v248 = 0;
                                v249 = v177;
                                while ( v172 || v173 )
                                {
                                  if ( v177 < v179 )
                                  {
                                    v183 = *(_DWORD *)(v168 + 1216);
                                    v184 = 0;
                                    if ( v183 )
                                    {
                                      v185 = *(_QWORD *)(v168 + 1296);
                                      v251 = *(_QWORD *)(v120 + 96);
                                      v186 = *(_DWORD *)(v185 + 4);
                                      v219 = v186;
                                      v187 = v186 * ((8 * *(_DWORD *)(v185 + 8) + 231) & 0xFFFFFFF8);
                                      while ( 1 )
                                      {
                                        v188 = (unsigned __int64)(unsigned int)(v248 + v186 * v184) << 6;
                                        if ( v251 == *(_QWORD *)(*(_QWORD *)(v185 + v187 + v188 + 48) + 96LL) )
                                          break;
                                        v186 = v219;
                                        if ( ++v184 >= v183 )
                                          goto LABEL_324;
                                      }
                                      v52 = v208;
                                      v189 = v187 + v185;
                                      v119 = v230;
                                      v115 = 0;
                                      v46 = v210;
                                      if ( v230 >= *(_QWORD *)(v189 + v188 + 72) )
                                      {
                                        *(_QWORD *)(v189 + v188 + 72) = v230;
                                        v190 = *(_QWORD *)(*(_QWORD *)(v120 + 96) + 24LL);
                                        v191 = 2LL * *(unsigned int *)(v190 + 32);
                                        *(_OWORD *)(v190 + 8 * v191 + 40) = 0LL;
                                        *(_DWORD *)(v190 + 32) = ((unsigned __int8)*(_DWORD *)(v190 + 32) + 1) & 7;
                                        *(_DWORD *)(v190 + 8 * v191 + 40) = 4;
                                        *(_QWORD *)(v190 + 8 * v191 + 48) = v230;
                                      }
                                      v36 = (unsigned __int64)v232;
                                      goto LABEL_151;
                                    }
                                  }
LABEL_324:
                                  VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v245);
                                  v179 = v250;
                                  v173 = v247;
                                  v172 = v246;
                                  v177 = v249;
                                }
                                v166 = v236;
                                v215 = (v215 - 1) & 0x3F;
                                v167 = v215;
                                if ( v215 != (((unsigned __int8)*(_DWORD *)(v236 + 68) - 1) & 0x3F) )
                                  continue;
                              }
                              break;
                            }
                            v163 = v235;
                            v165 = v213;
                          }
                        }
                        while ( v165 < 2 );
                        v119 = v230;
                        v36 = (unsigned __int64)v232;
                        v46 = v210;
                      }
                      v180 = (v46 + ((unsigned __int64)(unsigned int)v51 << 6)) << 6;
                      if ( *(_QWORD *)(v180 + v163 + 3184) == *(_QWORD *)(v120 + 96) )
                      {
                        v115 = 0;
                        if ( v119 >= *(_QWORD *)(v180 + v163 + 3216) )
                        {
                          *(_QWORD *)(v180 + v163 + 3216) = v119;
                          v181 = *(_QWORD *)(*(_QWORD *)(v120 + 96) + 24LL);
                          v182 = 2LL * *(unsigned int *)(v181 + 32);
                          *(_OWORD *)(v181 + 8 * v182 + 40) = 0LL;
                          *(_DWORD *)(v181 + 32) = ((unsigned __int8)*(_DWORD *)(v181 + 32) + 1) & 7;
                          *(_DWORD *)(v181 + 8 * v182 + 40) = 3;
                          *(_QWORD *)(v181 + 8 * v182 + 48) = v119;
                          v36 = (unsigned __int64)v232;
                        }
                      }
                    }
                    v52 = v208;
                  }
LABEL_151:
                  v121 = *(_QWORD *)(v120 + 96);
                  v122 = *(_QWORD *)(v121 + 24) == 0LL;
                  _InterlockedDecrement((volatile signed __int32 *)(v120 + 104));
                  v123 = *(_QWORD *)(v121 + 16);
                  if ( v123 )
                    _InterlockedDecrement((volatile signed __int32 *)(v123 + 8));
                  if ( v115 && !v122 )
                  {
                    v192 = 2LL;
                    v193 = 0LL;
                    v253[0] = v36;
                    v220 = 0LL;
                    v253[1] = v119;
                    v194 = 0LL;
                    do
                    {
                      v231 = *(_QWORD *)((char *)v253 + v193);
                      if ( v231 )
                      {
                        if ( (int)VidSchiSignalSyncObjectsFromCpu(
                                    (struct HwQueueStagingList *)a1,
                                    1u,
                                    (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*(_QWORD *)(v120 + 96) + 24LL) + 8 * v194),
                                    0,
                                    &v253[v194],
                                    0LL) < 0 )
                        {
                          WdLogSingleEntry3(
                            1LL,
                            v194,
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v120 + 96) + 24LL) + v220),
                            v231);
                          ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
                            0LL,
                            0x40000LL,
                            0xFFFFFFFFLL,
                            L"Failed to signal Flip fence[%d] 0x%p value 0x%I64x",
                            v194,
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v120 + 96) + 24LL) + v220),
                            v231,
                            0LL,
                            0LL);
                        }
                        v193 = v220;
                      }
                      v193 += 8LL;
                      ++v194;
                      v220 = v193;
                      --v192;
                    }
                    while ( v192 );
                    v11 = a2;
                    v47 = v225;
                    v52 = v208;
                    v50 = v226;
                    v46 = v210;
                  }
                  v42 = v224;
                  if ( (unsigned int)v51 >= v52 )
                  {
LABEL_336:
                    v195 = -1;
                    v48 &= ~(1 << v52);
                    v33 = !_BitScanForward((unsigned int *)&v196, v48);
                    if ( !v33 )
                      v195 = v196;
                    v52 = v195;
                    v208 = v195;
                  }
                  else
                  {
                    v47 &= ~(1 << v51);
                    v33 = !_BitScanForward((unsigned int *)&v124, v47);
                    v225 = v47;
                    if ( v33 )
                      LOBYTE(v124) = -1;
                    v51 = (unsigned int)(char)v124;
                  }
                  v44 = a7 != 0;
                  v226 = ++v50;
                }
                v43 = v227;
                v45 = v228;
              }
              v210 = ++v46;
            }
            v43 >>= 1;
            v45 >>= 1;
            v227 = v43;
            v228 = v45;
          }
          while ( v43 );
          v37 = v237;
          v39 = a7;
          v41 = v229;
        }
        if ( v41 )
          VidSchiCheckPendingDeviceCommand((_QWORD *)v41);
        v12 = v222;
      }
      for ( j = 0; j < v37[273]; ++j )
      {
        v54 = *(_QWORD *)&v37[2 * j];
        if ( (v37[284] & 0x4000) != 0 )
        {
          if ( v54 )
          {
            VidSchiReleaseSyncObjectReference(
              (char *)v54,
              (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v36);
            *(_QWORD *)&v37[2 * j] = 0LL;
          }
        }
        else if ( v54 )
        {
          --*(_DWORD *)(v54 + 792);
        }
      }
      ++v217;
      _InterlockedExchangeAdd((volatile signed __int32 *)(v41 + 1572), 0xFFFFFFFF);
      v55 = 4LL * *(_QWORD *)v221;
      if ( *(_BYTE *)(v11 + 2212) )
        v56 = v55 + v11;
      else
        v56 = v11;
      _InterlockedDecrement((volatile signed __int32 *)(v56 + 740));
      _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 736), 0xFFFFFFFF);
      _InterlockedExchangeAdd((volatile signed __int32 *)(v41 + v55 + 1508), 0xFFFFFFFF);
      if ( (v37[284] & 0x10) != 0 )
        v57 = ((unsigned __int16)**((_DWORD **)v37 + 147) | (unsigned __int16)(**((_DWORD **)v37 + 147) >> 10)) & 0x3FF;
      else
        v57 = (unsigned int)((1 << *(_DWORD *)(v11 + 152)) - 1);
      v33 = !_BitScanForward((unsigned int *)&v58, v57);
      v59 = -1;
      v60 = (unsigned int)v57;
      if ( !v33 )
        v59 = v58;
      if ( (_DWORD)v57 )
      {
        do
        {
          --*(_DWORD *)(288LL * v59 + *(_QWORD *)(v11 + 8LL * *(_QWORD *)v221 + 3200) + 196);
          v61 = 1 << v59;
          v59 = -1;
          v60 = ~v61 & (unsigned int)v60;
          v33 = !_BitScanForward((unsigned int *)&v61, v60);
          if ( !v33 )
            v59 = v61;
        }
        while ( (_DWORD)v60 );
      }
      v218 |= v57;
      _InterlockedExchangeAdd((volatile signed __int32 *)(v41 + v55 + 1444), 0xFFFFFFFF);
      --*(_DWORD *)(v41 + 1576);
      v62 = *(unsigned int *)(*(_QWORD *)(v11 + 8LL * *(_QWORD *)v221 + 3200) + 44328LL);
      if ( (_DWORD)v62 != -1 )
      {
        v197 = *(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v11 + 3072);
        if ( v197 )
          v197(*(_QWORD *)(v11 + 3120), v62, v57, v60);
      }
      v9 = (_DWORD *)a4;
      v63 = 4;
      *(_DWORD *)(a4 + 76) = a5;
      v8 = *(_QWORD *)(v11 + 8LL * *(_QWORD *)v221 + 3200);
      if ( !v39 )
        v63 = 3;
      v64 = *(unsigned int *)(v8 + 144);
      v65 = *(_QWORD *)(v8 + 136) + 112 * v64;
      *(_DWORD *)(v8 + 144) = (v64 + 1) & (*(_DWORD *)(v8 + 128) - 1);
      v66 = *(void **)(v65 + 72);
      if ( v66 )
        memset(v66, 0, 8LL * *(unsigned int *)(v11 + 152));
      *(_DWORD *)v65 = v63;
      *(_DWORD *)(v65 + 16) = **((_DWORD **)v238 + 162) & 0x3FF;
      *(_DWORD *)(v65 + 20) = (**((_DWORD **)v238 + 162) >> 10) & 0x3FF;
      *(_BYTE *)(v65 + 24) = *(_BYTE *)(a4 + 80);
      *(_DWORD *)(v65 + 28) = a5;
      *(LARGE_INTEGER *)(v65 + 8) = KeQueryPerformanceCounter(0LL);
      v33 = *(_QWORD *)(v65 + 72) == 0LL;
      *(_BYTE *)(v65 + 36) = (v238[314] & 0x20) != 0;
      *(_DWORD *)(v65 + 40) = v238[293];
      *(_DWORD *)(v65 + 32) = v238[294];
      *(_DWORD *)(v65 + 44) = v238[315];
      *(_DWORD *)(v65 + 48) = *(_DWORD *)(v8 + 3032);
      *(_QWORD *)(v65 + 56) = *((_QWORD *)v238 + 177);
      *(_QWORD *)(v65 + 64) = *((_QWORD *)v238 + 178);
      if ( !v33 && v63 == 3 )
      {
        v67 = **((_DWORD **)v238 + 162) & 0x3FF;
        if ( *(_BYTE *)(v11 + 156) )
          v68 = (**((_DWORD **)v238 + 162) >> 10) & 0x3FF;
        else
          v68 = 0;
        v33 = !_BitScanForward((unsigned int *)&v69, v67);
        v70 = 0;
        if ( v33 )
          LOBYTE(v69) = -1;
        v71 = (unsigned int)(char)v69;
        v33 = !_BitScanForward((unsigned int *)&v69, v68);
        if ( v33 )
          LOBYTE(v69) = -1;
        v72 = (char)v69;
        while ( v67 || v68 )
        {
          if ( (unsigned int)v71 >= v72 )
          {
            v68 &= ~(1 << v72);
            v33 = !_BitScanForward((unsigned int *)&v128, v68);
            if ( v33 )
              LOBYTE(v128) = -1;
            v72 = (char)v128;
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)(v65 + 72) + 8 * v71) = *(_QWORD *)(v70
                                                                     * ((8 * *(_DWORD *)(*((_QWORD *)v238 + 162) + 8LL)
                                                                       + 231) & 0xFFFFFFF8)
                                                                     + *((_QWORD *)v238 + 162)
                                                                     + 24LL);
            v67 &= ~(1 << v71);
            v33 = !_BitScanForward((unsigned int *)&v114, v67);
            if ( v33 )
              LOBYTE(v114) = -1;
            v71 = (unsigned int)(char)v114;
          }
          ++v70;
        }
        v11 = a2;
        v12 = v222;
        v9 = (_DWORD *)a4;
      }
      v13 = *(_QWORD *)v221;
      v20 = a7;
      v14 = a5;
      *(_DWORD *)(v65 + 84) = *(_DWORD *)(v8 + 3092);
      v73 = *(_DWORD *)(v8 + 3088);
      LODWORD(v8) = v221[0];
      *(_DWORD *)(v65 + 80) = v73;
      *(_DWORD *)(v65 + 88) = v9[14];
      *(_DWORD *)(v65 + 92) = v9[15];
      *(_DWORD *)(v65 + 96) = v9[16];
      *(_DWORD *)(v65 + 100) = v9[17];
      *(_DWORD *)(v65 + 104) = v9[18];
      *(_DWORD *)(v65 + 108) = v9[19];
      goto LABEL_102;
    }
    if ( a7 != 12 )
      goto LABEL_345;
    if ( v19 - 2 <= 1 || v19 == 14 )
    {
      v130 = v17[314];
      v22 = 0;
      v209 = 0;
      v126 = (v18[284] >> 5) & 1;
      if ( *(_BYTE *)(v11 + 59) )
      {
        v21 = (v130 & 0x102020) == 1056800;
        v207 = v21;
      }
      goto LABEL_170;
    }
    if ( v19 != 5 && v19 != 15 )
      goto LABEL_345;
    v129 = v17[314];
    if ( (v129 & 0x20) == 0 )
      goto LABEL_345;
    if ( (v129 & 0x2000) != 0 && *(_BYTE *)(v11 + 59) )
    {
      v21 = 1;
      v207 = 1;
      goto LABEL_202;
    }
    v9 = (_DWORD *)a4;
    if ( v10 )
      *v10 = 1;
LABEL_103:
    if ( v14 == a6 )
      break;
    v14 = ((_BYTE)v14 + 1) & 0x3F;
    a5 = v14;
  }
  v74 = v217;
  if ( v217 )
  {
    v75 = v218;
    v33 = !_BitScanForward((unsigned int *)&v76, v218);
    if ( v33 )
      LOBYTE(v76) = -1;
    if ( v218 )
    {
      do
      {
        v77 = (unsigned int)(char)v76;
        v78 = *(int *)(288 * v77 + *(_QWORD *)(v11 + 8 * v13 + 3200) + 188);
        if ( (int)v78 > -1 && *(_DWORD *)(160 * v78 + *(_QWORD *)(v11 + 3328) + 112) == 1 )
        {
          VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)a1, (struct _VIDSCH_GLOBAL *)v11, v8, v77);
          v13 = *(_QWORD *)v221;
        }
        v75 &= ~(1 << v77);
        v33 = !_BitScanForward((unsigned int *)&v76, v75);
        if ( v33 )
          LOBYTE(v76) = -1;
      }
      while ( v75 );
      v12 = v222;
      v20 = a7;
      v74 = v217;
    }
  }
  *(_DWORD *)(v11 + 804) -= v74;
  *(_DWORD *)(v12 + 3076) -= v74;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 808), -v74);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 3080), -v74);
  if ( !v20
    && _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 78784), 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)(v11 + 2456), 1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v11 + 16) + 24LL));
    *(_QWORD *)(v11 + 2416) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v11 + 2424), CriticalWorkQueue);
  }
  v79 = *(_QWORD *)(v12 + 16);
  v80 = 0;
  if ( v79 )
  {
    for ( k = *(_QWORD **)(v79 + 72); k != (_QWORD *)(v79 + 72); v80 |= v83 )
    {
      v82 = k - 3;
      v83 = 0;
      if ( (k[20] & 0x10) != 0 )
      {
        *((_DWORD *)v82 + 46) &= ~0x10u;
        v83 = (unsigned __int8)VidSchiUnwaitContext(v82, 22944LL);
      }
      k = (_QWORD *)*k;
    }
    v84 = *(_QWORD *)(v79 + 32);
    v85 = 0;
    v86 = (_QWORD **)(v84 + 3520);
    while ( 1 )
    {
      v87 = *v86;
      if ( *v86 == v86 )
        break;
      if ( (_QWORD **)v87[1] != v86 || (v198 = (_QWORD *)*v87, *(_QWORD **)(*v87 + 8LL) != v87) )
LABEL_356:
        __fastfail(3u);
      *v86 = v198;
      v198[1] = v86;
      v87[1] = 0LL;
      *v87 = 0LL;
      v85 |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v87 - 5));
    }
    v88 = (_QWORD **)(v84 + 3536);
    while ( 1 )
    {
      v89 = *v88;
      if ( *v88 == v88 )
        break;
      if ( (_QWORD **)v89[1] != v88 )
        goto LABEL_356;
      v199 = (_QWORD *)*v89;
      if ( *(_QWORD **)(*v89 + 8LL) != v89 )
        goto LABEL_356;
      *v88 = v199;
      v199[1] = v88;
      *v89 = 0LL;
      v89[1] = 0LL;
      v200 = v89 + 19;
      if ( !*v200 )
      {
        v201 = *(_QWORD **)(a1 + 8);
        if ( *v201 != a1 )
          goto LABEL_356;
        *v200 = a1;
        v200[1] = v201;
        *v201 = v200;
        *(_QWORD *)(a1 + 8) = v200;
        *(_BYTE *)(a1 + 16) = 0;
      }
    }
    v80 |= v85;
  }
  v90 = *(_QWORD **)(v12 + 16);
  if ( v90 )
  {
    v91 = v90[4];
    v92 = (struct _KEVENT *)(v90 + 15);
    memset(&v256, 0, sizeof(v256));
    v93 = (KSPIN_LOCK *)(v91 + 1744);
    v94 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v91 + 1744), &v256);
    v95 = (struct _KEVENT *)v90[15];
    if ( *(struct _KEVENT **)&v92->Header.Lock == v92 )
    {
LABEL_127:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v256);
      KeLowerIrql(v94);
      memset(&v257, 0, sizeof(v257));
      v96 = (struct _KEVENT **)(v90 + 17);
      v97 = KfRaiseIrql(2u);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v91 + 1744), &v257);
      v98 = *v96;
      if ( *v96 == (struct _KEVENT *)v96 )
      {
LABEL_128:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v257);
        KeLowerIrql(v97);
        v99 = (struct _KEVENT *)(v91 + 1672);
        memset(&v258, 0, sizeof(v258));
        v100 = KfRaiseIrql(2u);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v91 + 1744), &v258);
        v101 = *(struct _KEVENT **)(v91 + 1672);
        if ( *(struct _KEVENT **)&v99->Header.Lock == v99 )
        {
LABEL_129:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v258);
          KeLowerIrql(v100);
          v102 = (struct _KEVENT *)(v91 + 1656);
          memset(&v259, 0, sizeof(v259));
          v103 = KfRaiseIrql(2u);
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v91 + 1744), &v259);
          v104 = *(struct _KEVENT **)(v91 + 1656);
          if ( *(struct _KEVENT **)&v102->Header.Lock == v102 )
          {
LABEL_130:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v259);
            KeLowerIrql(v103);
            *(_QWORD *)(v91 + 1504) = MEMORY[0xFFFFF78000000320];
            KeSetEvent((PRKEVENT)(v91 + 1472), 0, 0);
            *(_QWORD *)(v91 + 1616) = MEMORY[0xFFFFF78000000320];
            KeSetEvent((PRKEVENT)(v91 + 1584), 0, 0);
            if ( v80 )
            {
              *(_QWORD *)(v91 + 1224) = MEMORY[0xFFFFF78000000320];
              KeSetEvent((PRKEVENT)(v91 + 1192), 0, 0);
            }
            memset(&v260, 0, sizeof(v260));
            v105 = (struct _KEVENT **)(v91 + 1688);
            v106 = KfRaiseIrql(2u);
            KeAcquireInStackQueuedSpinLockAtDpcLevel(v93, &v260);
            v107 = *v105;
            if ( *v105 == (struct _KEVENT *)v105 )
            {
LABEL_133:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v260);
              KeLowerIrql(v106);
              return v217;
            }
            while ( 2 )
            {
              if ( LODWORD(v107->Header.WaitListHead.Blink) == 4 )
              {
                if ( *(_DWORD *)(*(_QWORD *)&v107[1].Header.Lock
                               + 4LL * LODWORD(v107[1].Header.WaitListHead.Blink)
                               + 1444) < *(_DWORD *)(*(_QWORD *)&v107[1].Header.Lock + 244LL) )
                  goto LABEL_392;
              }
              else if ( ((__int64)v107[1].Header.WaitListHead.Flink & 0x10) == 0
                     || (Flink = (int)v107[1].Header.WaitListHead.Blink->Flink,
                         (HIDWORD(v107[5].Header.WaitListHead.Blink) = Flink) == 0) )
              {
LABEL_392:
                ++v107[5].Header.LockNV;
                KeSetEvent(v107 + 4, 0, 0);
              }
              v107 = *(struct _KEVENT **)&v107->Header.Lock;
              if ( v107 == (struct _KEVENT *)v105 )
                goto LABEL_133;
              continue;
            }
          }
          while ( 2 )
          {
            if ( LODWORD(v104->Header.WaitListHead.Blink) == 4 )
            {
              if ( *(_DWORD *)(*(_QWORD *)&v104[1].Header.Lock + 4LL * LODWORD(v104[1].Header.WaitListHead.Blink) + 1444) < *(_DWORD *)(*(_QWORD *)&v104[1].Header.Lock + 244LL) )
                goto LABEL_383;
            }
            else if ( ((__int64)v104[1].Header.WaitListHead.Flink & 0x10) == 0
                   || (v204 = (int)v104[1].Header.WaitListHead.Blink->Flink,
                       (HIDWORD(v104[5].Header.WaitListHead.Blink) = v204) == 0) )
            {
LABEL_383:
              ++v104[5].Header.LockNV;
              KeSetEvent(v104 + 4, 0, 0);
            }
            v104 = *(struct _KEVENT **)&v104->Header.Lock;
            if ( v104 == v102 )
              goto LABEL_130;
            continue;
          }
        }
        while ( 2 )
        {
          if ( LODWORD(v101->Header.WaitListHead.Blink) == 4 )
          {
            if ( *(_DWORD *)(*(_QWORD *)&v101[1].Header.Lock + 4LL * LODWORD(v101[1].Header.WaitListHead.Blink) + 1444) < *(_DWORD *)(*(_QWORD *)&v101[1].Header.Lock + 244LL) )
              goto LABEL_176;
          }
          else if ( ((__int64)v101[1].Header.WaitListHead.Flink & 0x10) == 0
                 || (v127 = (int)v101[1].Header.WaitListHead.Blink->Flink,
                     (HIDWORD(v101[5].Header.WaitListHead.Blink) = v127) == 0) )
          {
LABEL_176:
            ++v101[5].Header.LockNV;
            KeSetEvent(v101 + 4, 0, 0);
          }
          v101 = *(struct _KEVENT **)&v101->Header.Lock;
          if ( v101 == v99 )
            goto LABEL_129;
          continue;
        }
      }
      while ( 2 )
      {
        if ( LODWORD(v98->Header.WaitListHead.Blink) == 4 )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v98[1].Header.Lock + 4LL * LODWORD(v98[1].Header.WaitListHead.Blink) + 1444) < *(_DWORD *)(*(_QWORD *)&v98[1].Header.Lock + 244LL) )
            goto LABEL_372;
        }
        else if ( ((__int64)v98[1].Header.WaitListHead.Flink & 0x10) == 0
               || (v203 = (int)v98[1].Header.WaitListHead.Blink->Flink,
                   (HIDWORD(v98[5].Header.WaitListHead.Blink) = v203) == 0) )
        {
LABEL_372:
          ++v98[5].Header.LockNV;
          KeSetEvent(v98 + 4, 0, 0);
        }
        v98 = *(struct _KEVENT **)&v98->Header.Lock;
        if ( v98 == (struct _KEVENT *)v96 )
          goto LABEL_128;
        continue;
      }
    }
    while ( 2 )
    {
      if ( LODWORD(v95->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v95[1].Header.Lock + 4LL * LODWORD(v95[1].Header.WaitListHead.Blink) + 1444) < *(_DWORD *)(*(_QWORD *)&v95[1].Header.Lock + 244LL) )
          goto LABEL_363;
      }
      else if ( ((__int64)v95[1].Header.WaitListHead.Flink & 0x10) == 0
             || (v202 = (int)v95[1].Header.WaitListHead.Blink->Flink,
                 (HIDWORD(v95[5].Header.WaitListHead.Blink) = v202) == 0) )
      {
LABEL_363:
        ++v95[5].Header.LockNV;
        KeSetEvent(v95 + 4, 0, 0);
      }
      v95 = *(struct _KEVENT **)&v95->Header.Lock;
      if ( v95 == v92 )
        goto LABEL_127;
      continue;
    }
  }
  return v217;
}
