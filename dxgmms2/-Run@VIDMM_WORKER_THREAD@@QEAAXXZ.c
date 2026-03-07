// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_WORKER_THREAD::Run(VIDMM_WORKER_THREAD *this)
{
  VIDMM_WORKER_THREAD *v1; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  VIDMM_PAGING_QUEUE *v3; // r12
  struct _KEVENT *v4; // rcx
  __int64 v5; // rcx
  char *v6; // rdi
  unsigned __int8 v7; // r13
  unsigned __int8 v8; // r15
  unsigned __int8 v9; // r14
  __int64 v10; // rcx
  int v11; // eax
  VIDMM_GLOBAL *v12; // rdi
  unsigned int v13; // ebx
  union _LARGE_INTEGER *v14; // rbx
  NTSTATUS v15; // r14d
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rdi
  _QWORD **v23; // rbx
  _QWORD **v24; // r14
  _QWORD *v25; // rax
  __int64 v26; // r8
  struct VIDMM_PAGING_QUEUE_PACKET *v27; // rdi
  struct VIDMM_DEVICE *v28; // r14
  _DWORD *v29; // rcx
  char *v30; // r15
  VIDMM_PAGING_QUEUE *v31; // r13
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // r8
  VIDMM_WORKER_THREAD *v36; // r13
  char *v37; // r15
  __int64 v38; // rax
  VIDMM_WORKER_THREAD *v39; // r13
  char *v40; // r15
  __int64 v41; // rdi
  int v42; // ebx
  char v43; // dl
  VIDMM_PAGING_QUEUE *v44; // r8
  char v45; // cl
  VIDMM_PAGING_QUEUE **v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rcx
  char *v49; // r15
  __int64 v50; // r9
  _QWORD *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  char *v55; // r13
  unsigned __int8 v56; // bl
  bool v57; // zf
  __int64 v58; // rdx
  __int64 v59; // rax
  _DWORD *v60; // rbx
  int v61; // eax
  __int64 v62; // rcx
  int v63; // r9d
  __int64 v64; // rdi
  int *v65; // rdi
  unsigned int v66; // r13d
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  int v70; // edx
  VIDMM_PROCESS_BUDGET_STATE *v71; // r8
  unsigned __int64 *v72; // r9
  VIDMM_PROCESS_BUDGET_STATE *v73; // r11
  unsigned __int64 v74; // r10
  __int64 v75; // r11
  unsigned __int64 v76; // r13
  unsigned int v77; // edi
  unsigned __int64 v78; // rcx
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // r9
  _BYTE *v82; // r10
  _BYTE *v83; // r8
  struct _RTL_BALANCED_NODE *v84; // rax
  _QWORD *i; // rdx
  __int64 v86; // rbx
  _QWORD **v87; // rcx
  _QWORD *v88; // rax
  __int64 v89; // rbx
  struct VIDMM_PAGING_QUEUE_PACKET **v90; // rcx
  __int64 v91; // rcx
  VIDMM_PAGING_QUEUE *v92; // rcx
  VIDMM_PAGING_QUEUE **v93; // rax
  struct _KEVENT *v94; // rcx
  __int64 v95; // rcx
  char *v96; // rdx
  unsigned __int8 v97; // bl
  LARGE_INTEGER v98; // r14
  unsigned __int64 v99; // r12
  __int64 v100; // rdi
  unsigned __int64 v101; // r13
  unsigned __int64 v102; // rax
  int v103; // ecx
  unsigned int v104; // r15d
  LARGE_INTEGER v105; // rax
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rdx
  unsigned __int64 v109; // rax
  VIDMM_PROCESS_BUDGET_STATE *v110; // rdx
  VIDMM_PROCESS_BUDGET_STATE *v111; // rax
  unsigned __int64 v112; // rdx
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rdx
  unsigned __int64 v115; // rcx
  int v116; // eax
  int v117; // eax
  int v118; // r9d
  int v119; // edx
  int v120; // eax
  VIDMM_GLOBAL *v121; // r14
  char v122; // r12
  unsigned int v123; // r15d
  __int64 v124; // r11
  __int64 v125; // r8
  struct _RTL_BALANCED_NODE *v126; // rax
  _QWORD *k; // r8
  __int64 v128; // r9
  unsigned __int64 v129; // rcx
  unsigned __int64 v130; // r10
  unsigned __int64 v131; // rax
  char v132; // al
  _QWORD **v133; // rcx
  _QWORD *v134; // rax
  unsigned __int64 v135; // rcx
  char v136; // al
  _QWORD *m; // rcx
  __int64 v138; // r8
  struct _RTL_BALANCED_NODE *v139; // rax
  _QWORD *n; // rcx
  __int64 v141; // r8
  unsigned __int64 v142; // r9
  unsigned __int64 v143; // r10
  unsigned __int64 v144; // rax
  char v145; // al
  _QWORD **v146; // rdx
  _QWORD *v147; // rax
  _QWORD *ii; // rdx
  VIDMM_GLOBAL *v149; // rdi
  __int64 v150; // rbx
  __int64 v151; // rcx
  __int64 v152; // r8
  bool v153; // di
  VIDMM_GLOBAL *v154; // rbx
  __int64 v155; // rdi
  char v156; // bl
  VIDMM_GLOBAL *v157; // rdi
  VIDMM_GLOBAL *v158; // r14
  __int64 v159; // rcx
  __int64 v160; // r8
  VIDMM_GLOBAL *v161; // rax
  char *v162; // rcx
  VIDMM_GLOBAL *v163; // rdi
  VIDMM_GLOBAL *v164; // rbx
  _QWORD *v165; // rax
  __int64 v166; // r14
  __int64 v167; // rcx
  VIDMM_GLOBAL *v168; // rcx
  struct VIDMM_ALLOC *NextPendingTermination; // rbx
  VIDMM_GLOBAL *v170; // rbx
  unsigned __int64 v171; // rcx
  char v172; // al
  _QWORD *j; // rcx
  unsigned int v174; // r8d
  unsigned int v175; // ecx
  __int64 v176; // rdx
  __int64 v177; // r15
  __int64 v178; // r15
  __int64 v179; // rbx
  __int64 v180; // rbx
  __int64 v181; // rax
  __int64 v182; // rdi
  int v183; // ebx
  char v184; // dl
  VIDMM_PAGING_QUEUE *v185; // r8
  char v186; // cl
  VIDMM_PAGING_QUEUE **v187; // rax
  VIDMM_GLOBAL *v188; // rcx
  __int64 v189; // rdi
  int v190; // ebx
  unsigned __int8 v191; // r11
  char v192; // dl
  VIDMM_PAGING_QUEUE *v193; // r8
  VIDMM_PAGING_QUEUE **v194; // r9
  VIDMM_GLOBAL *v195; // rcx
  unsigned __int64 v196; // rax
  __int64 v197; // r10
  VIDMM_GLOBAL *v198; // r12
  __int64 v199; // r8
  VIDMM_GLOBAL **v200; // rax
  struct _VIDMM_GLOBAL_ALLOC *v201; // r13
  VIDMM_GLOBAL *v202; // r15
  VIDMM_GLOBAL **v203; // rcx
  __int64 v204; // rax
  __int64 v205; // rcx
  VIDMM_SEGMENT *v206; // rcx
  VIDMM_GLOBAL **v207; // rcx
  char v208; // r14
  char v209; // bl
  VIDMM_PAGING_QUEUE **v210; // r10
  VIDMM_PAGING_QUEUE **v211; // r10
  int v212; // r9d
  struct _KEVENT *v213; // rcx
  int v214; // r9d
  int v215; // r9d
  int v216; // r8d
  __int64 v217; // rdi
  int v218; // r8d
  __int64 v219; // rdx
  __int64 v220; // rax
  __int64 v221; // rcx
  __int64 v222; // rcx
  __int64 v223; // rbx
  DXGPUSHLOCK *v224; // r14
  _QWORD **v225; // rdi
  _QWORD **v226; // rbx
  _QWORD *v227; // rax
  struct _KEVENT *v228; // rcx
  int v229; // r9d
  VIDMM_PAGING_QUEUE **v230; // r10
  VIDMM_PAGING_QUEUE **v231; // r10
  _QWORD **v232; // rdi
  _QWORD *kk; // rbx
  VIDMM_GLOBAL **v234; // rcx
  _QWORD *v235; // rax
  __int64 v236; // rax
  __int64 v237; // rax
  __int64 v238; // rax
  __int64 v239; // rax
  VIDMM_PAGING_QUEUE **v240; // rax
  VIDMM_PAGING_QUEUE **v241; // rax
  __int64 v242; // rcx
  _QWORD *v243; // rax
  __int64 v244; // rcx
  __int64 v245; // rcx
  __int64 v246; // rax
  __int64 v247; // rax
  __int64 v248; // rcx
  VIDMM_COMMIT_TELEMETRY *v249; // rcx
  _QWORD *v250; // rax
  VIDMM_COMMIT_TELEMETRY *v251; // rcx
  int v252; // ebx
  int v253; // eax
  struct VIDMM_SEGMENT *DefragSegment; // rax
  struct VIDMM_SEGMENT *v255; // r13
  char IsProcessCommitRelinquished; // al
  char v257; // dl
  const CHAR *v258; // r8
  struct VIDMM_DEVICE *v259; // rax
  unsigned __int8 v260; // al
  __int64 v261; // r9
  struct VIDMM_DEVICE *v262; // rbx
  __int64 v263; // rdx
  __int64 v264; // rcx
  unsigned int v265; // r14d
  __int64 v266; // rcx
  __int64 v267; // r8
  unsigned int v268; // edi
  unsigned int v269; // r14d
  __int64 v270; // rdi
  unsigned int jj; // r15d
  __int64 v272; // rax
  __int64 v273; // r13
  int v274; // eax
  unsigned __int8 v275; // [rsp+30h] [rbp-D0h]
  char v276; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v277; // [rsp+50h] [rbp-B0h]
  bool v278; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 v279; // [rsp+52h] [rbp-AEh]
  unsigned __int8 v280; // [rsp+53h] [rbp-ADh]
  char v281; // [rsp+54h] [rbp-ACh]
  char v282; // [rsp+55h] [rbp-ABh]
  bool v283; // [rsp+56h] [rbp-AAh] BYREF
  int v284; // [rsp+58h] [rbp-A8h]
  bool v285; // [rsp+5Ch] [rbp-A4h] BYREF
  int v286; // [rsp+60h] [rbp-A0h]
  int v287; // [rsp+64h] [rbp-9Ch]
  bool v288; // [rsp+68h] [rbp-98h] BYREF
  struct VIDMM_PAGING_QUEUE_PACKET *v289; // [rsp+70h] [rbp-90h]
  unsigned int v290; // [rsp+78h] [rbp-88h]
  char *v291; // [rsp+80h] [rbp-80h]
  struct VIDMM_ALLOC *v292; // [rsp+88h] [rbp-78h] BYREF
  bool *v293; // [rsp+90h] [rbp-70h]
  unsigned __int64 v294; // [rsp+98h] [rbp-68h]
  _DWORD *v295; // [rsp+A0h] [rbp-60h]
  int v296; // [rsp+A8h] [rbp-58h] BYREF
  VIDMM_PROCESS_BUDGET_STATE *v297; // [rsp+B0h] [rbp-50h]
  _DWORD ThreadInformation[2]; // [rsp+B8h] [rbp-48h] BYREF
  char v299[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v300; // [rsp+C8h] [rbp-38h]
  int v301; // [rsp+D0h] [rbp-30h]
  struct VIDMM_DEVICE *v302; // [rsp+D8h] [rbp-28h]
  int v303; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v304; // [rsp+E8h] [rbp-18h]
  union _LARGE_INTEGER v305; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v306; // [rsp+F8h] [rbp-8h]
  struct VIDMM_ALLOC *v307; // [rsp+100h] [rbp+0h] BYREF
  PVOID Object; // [rsp+108h] [rbp+8h] BYREF
  __int64 v309; // [rsp+110h] [rbp+10h]
  int v310; // [rsp+128h] [rbp+28h]
  int v311; // [rsp+140h] [rbp+40h]
  char v312[8]; // [rsp+148h] [rbp+48h] BYREF
  DXGPUSHLOCK *v313; // [rsp+150h] [rbp+50h]
  int v314; // [rsp+158h] [rbp+58h]
  _QWORD v315[14]; // [rsp+180h] [rbp+80h] BYREF
  int v316; // [rsp+1F0h] [rbp+F0h]
  unsigned __int8 v318; // [rsp+268h] [rbp+168h]
  unsigned __int8 v319; // [rsp+270h] [rbp+170h]
  char v320; // [rsp+270h] [rbp+170h]
  char v321; // [rsp+270h] [rbp+170h]
  unsigned __int8 v322; // [rsp+278h] [rbp+178h]
  int v323; // [rsp+278h] [rbp+178h]

  v1 = this;
  CurrentThread = KeGetCurrentThread();
  *((_QWORD *)v1 + 1) = CurrentThread;
  KeSetActualBasePriorityThread(CurrentThread, 15LL);
  ThreadInformation[0] = 1;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination|0x20, ThreadInformation, 4u);
  v3 = 0LL;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)v1 + 22) + 24LL), Executive, 0, 0, 0LL);
  v4 = (struct _KEVENT *)(*((_QWORD *)v1 + 22) + 48LL);
  *((_DWORD *)v1 + 6) = 1;
  KeSetEvent(v4, 0, 0);
  v6 = (char *)v1 + 56;
  v309 = *((_QWORD *)v1 + 22);
  v5 = v309;
  v7 = 0;
  *((_QWORD *)v1 + 24) = 0x8000000000000000uLL;
  v8 = 0;
  v319 = 0;
  v318 = 0;
  Object = (PVOID)(v5 + 24);
  v9 = 0;
  v285 = 0;
  v283 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v1 + 56, 0LL);
  *((_QWORD *)v1 + 8) = KeGetCurrentThread();
  do
  {
LABEL_8:
    *((_QWORD *)v1 + 2) = 0LL;
    if ( v8 || v283 || v9 )
      *((_QWORD *)v1 + 24) = 0LL;
    v305 = *(union _LARGE_INTEGER *)((char *)v1 + 192);
    if ( v305.QuadPart == 0x8000000000000000uLL )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v235 = (_QWORD *)WdLogNewEntry5_WdTrace(v10);
        v235[3] = v8;
        v235[4] = v283;
        v235[5] = v9;
      }
      v14 = 0LL;
    }
    else
    {
      v14 = &v305;
    }
    *((_QWORD *)v6 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
    ++*((_QWORD *)v1 + 32);
    v15 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, v14, 0LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6, 0LL);
    *((_QWORD *)v6 + 1) = KeGetCurrentThread();
    v16 = *(_QWORD *)v1;
    v17 = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(v16 + 4632) = v17 * KeQueryTimeIncrement();
    v19 = *(_QWORD *)v1;
    v20 = *(_QWORD *)(*(_QWORD *)v1 + 4632LL);
    if ( v20 - *(_QWORD *)(*(_QWORD *)v1 + 7176LL) > qword_1C0076450 )
    {
      *(_QWORD *)(v19 + 7160) = 0LL;
      *(_DWORD *)(v19 + 7168) = 0;
      *(_QWORD *)(v19 + 7176) = v20;
    }
    v283 = 0;
    v282 = 0;
    *((_BYTE *)v1 + 184) = 0;
    v287 = 0;
    v281 = 0;
    if ( v15 )
    {
      if ( v15 == 258 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v237 = WdLogNewEntry5_WdTrace(v19);
          v19 = *((_QWORD *)v1 + 24);
          *(_QWORD *)(v237 + 24) = v19;
        }
        goto LABEL_22;
      }
    }
    else if ( *((_DWORD *)v1 + 7) != *((_DWORD *)v1 + 6) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v236 = WdLogNewEntry5_WdTrace(v19);
        *(_QWORD *)(v236 + 24) = *((int *)v1 + 6);
        *(_QWORD *)(v236 + 32) = *((int *)v1 + 7);
      }
      v19 = *((unsigned int *)v1 + 7);
      v20 = 1LL;
      *((_DWORD *)v1 + 50) = 1;
      if ( (unsigned int)(v19 - 2) <= 3 )
      {
        KeWaitForSingleObject((PVOID)(*(_QWORD *)v1 + 41184LL), Executive, 0, 0, 0LL);
        v223 = *(_QWORD *)v1;
        v224 = (DXGPUSHLOCK *)(*(_QWORD *)v1 + 40056LL);
        DXGPUSHLOCK::AcquireExclusive(v224);
        v225 = (_QWORD **)(v223 + 40040);
        while ( 1 )
        {
          v226 = (_QWORD **)*v225;
          if ( (_QWORD **)(*v225)[1] != v225 )
            goto LABEL_25;
          v227 = *v226;
          if ( (_QWORD **)(*v226)[1] != v226 )
            goto LABEL_25;
          *v225 = v227;
          v227[1] = v225;
          if ( v226 == v225 )
            break;
          (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD *, _QWORD *, _QWORD *))(*v226[2] + 24LL))(
            v226[2],
            0LL,
            v226[3],
            v226[4],
            v226[5]);
          operator delete(v226);
        }
        *((_QWORD *)v224 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v224, 0LL);
        KeLeaveCriticalRegion();
      }
      else if ( (_DWORD)v19 == 1 )
      {
        v213 = (struct _KEVENT *)*((_QWORD *)v1 + 22);
        *((_DWORD *)v1 + 6) = 1;
        KeSetEvent(v213 + 2, 0, 0);
      }
      goto LABEL_21;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v238 = WdLogNewEntry5_WdTrace(v19);
      v19 = *((int *)v1 + 6);
      *(_QWORD *)(v238 + 24) = v19;
    }
    *((_DWORD *)v1 + 50) = 0;
LABEL_21:
    v8 = 1;
    v318 = 1;
LABEL_22:
    if ( *((_QWORD *)v1 + 24) && (byte_1C00769C2 & 0x40) != 0 )
      McTemplateK0iq_EtwWriteTransfer(v19, v20, v18);
    v21 = *(_QWORD *)v1;
    *((_QWORD *)v1 + 24) = 0x8000000000000000uLL;
    v22 = v21 + 40056;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v21 + 40056));
    v23 = (_QWORD **)(v21 + 40040);
    while ( 1 )
    {
      v24 = (_QWORD **)*v23;
      if ( (_QWORD **)(*v23)[1] != v23 )
        goto LABEL_25;
      v25 = *v24;
      if ( (_QWORD **)(*v24)[1] != v24 )
        goto LABEL_25;
      *v23 = v25;
      v25[1] = v23;
      if ( v24 == v23 )
        break;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD *, _QWORD *, _QWORD *))(*v24[2] + 24LL))(
        v24[2],
        0LL,
        v24[3],
        v24[4],
        v24[5]);
      operator delete(v24);
    }
    *(_QWORD *)(v22 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v22, 0LL);
    KeLeaveCriticalRegion();
    if ( !v8 && !v7 && !v285 )
      goto LABEL_224;
    v27 = 0LL;
    v289 = 0LL;
    v28 = 0LL;
    v322 = 0;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v1 + 144, 0LL);
    v30 = (char *)v1 + 112;
    *((_QWORD *)v1 + 19) = KeGetCurrentThread();
    v31 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)v1 + 14);
    if ( v31 != (VIDMM_WORKER_THREAD *)((char *)v1 + 112) )
    {
      v189 = *(_QWORD *)v1;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v189 + 41136, 0LL);
      v190 = *(_DWORD *)(v189 + 41176);
      *(_QWORD *)(v189 + 41144) = 0LL;
      ExReleasePushLockExclusiveEx(v189 + 41136, 0LL);
      KeLeaveCriticalRegion();
      v191 = 1;
      v192 = 0;
      v193 = v31;
      do
      {
        v3 = v193;
        if ( !v190
          || (v239 = *((_QWORD *)v193 + 4), !*(_BYTE *)(v239 + 24))
          || *(_DWORD *)(v239 + 48) != 203
          || (v29 = *(_DWORD **)(*(_QWORD *)(v239 + 64) + 96LL), (*v29 & 0x20000) == 0) )
        {
          v192 = 1;
          v191 = 0;
        }
        v194 = *(VIDMM_PAGING_QUEUE ***)v193;
        if ( *(char **)v193 == v30 )
          break;
        if ( v194[1] != v193 )
          goto LABEL_25;
        v240 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v193 + 1);
        if ( *v240 != v193 )
          goto LABEL_25;
        *v240 = (VIDMM_PAGING_QUEUE *)v194;
        v194[1] = (VIDMM_PAGING_QUEUE *)v240;
        v241 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v1 + 15);
        if ( *v241 != (VIDMM_PAGING_QUEUE *)v30 )
          goto LABEL_25;
        *((_QWORD *)v193 + 1) = v241;
        *(_QWORD *)v193 = v30;
        *v241 = v193;
        *((_QWORD *)v1 + 15) = v193;
        if ( v194 != (VIDMM_PAGING_QUEUE **)v31 )
          v193 = (VIDMM_PAGING_QUEUE *)v194;
        v29 = 0LL;
        if ( v194 != (VIDMM_PAGING_QUEUE **)v31 )
          v29 = (_DWORD *)v191;
        v191 = (unsigned __int8)v29;
      }
      while ( (_BYTE)v29 );
      if ( v192 )
      {
        if ( v3 )
          goto LABEL_55;
      }
      else
      {
        v3 = 0LL;
      }
      v27 = 0LL;
    }
    if ( ((*((_DWORD *)v1 + 7) - 1) & 0xFFFFFFFD) == 0 )
    {
      v32 = *(_QWORD *)v1;
      v301 = 0;
      v300 = v32 + 44512;
      if ( v32 != -44512 && *(struct _KTHREAD **)(v32 + 44520) == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 1453LL);
        DxgkLogInternalTriageEvent(v242, 262146LL);
      }
      v33 = v300;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v33, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v229 = *(_DWORD *)(v33 + 24);
          if ( v229 != -1 && (byte_1C00769C1 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v34, &EventBlockThread, v35, v229);
        }
        ExAcquirePushLockSharedEx(v33, 0LL);
      }
      _InterlockedIncrement((volatile signed __int32 *)(v33 + 16));
      v301 = 1;
      if ( *(_QWORD *)(v32 + 44544) == v32 + 44544 )
      {
        if ( *(_QWORD *)(v32 + 44560) == v32 + 44560 )
        {
          if ( *(_QWORD *)(v32 + 44576) == v32 + 44576 )
          {
            if ( !*(_BYTE *)(*(_QWORD *)(v32 + 24) + 2870LL) && !*(_BYTE *)(*(_QWORD *)(v32 + 16) + 1025LL)
              || *(_QWORD *)(v32 + 44592) == v32 + 44592 )
            {
              v322 = 0;
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v299);
              v28 = 0LL;
              goto LABEL_41;
            }
            v216 = 4;
          }
          else
          {
            v216 = 3;
          }
        }
        else
        {
          v216 = 2;
        }
      }
      else
      {
        v216 = 1;
      }
      v322 = 1;
      v217 = *(_QWORD *)(v32 + 16 * ((unsigned int)(v216 - 1) + 2784LL)) - 192LL;
      if ( VIDMM_GLOBAL::IsTdrPending((VIDMM_GLOBAL *)v32) )
      {
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v299);
      }
      else
      {
        if ( v218 == 2 )
        {
          v243 = *(_QWORD **)(v217 + 248);
          if ( v243 )
          {
            v244 = v243[29];
            if ( v244 > *(_QWORD *)(*v243 + 4632LL) )
            {
              VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v32, *(_QWORD *)(v32 + 4632) - v244, 8);
              v217 = 0LL;
            }
          }
        }
        else if ( v218 == 3 )
        {
          v219 = *(_QWORD *)(v32 + 4632);
          v220 = *(_QWORD *)(v217 + 224);
          v221 = *(_QWORD *)v32;
          if ( v219 < v220 )
          {
            VIDMM_WORKER_THREAD::SetTimeout(v221, v219 - v220, 6);
            v217 = 0LL;
          }
          else
          {
            VIDMM_WORKER_THREAD::SetTimeout(v221, 0LL, 6);
          }
        }
        if ( v301 == 1 )
        {
          v222 = v300;
          v301 = 0;
          _InterlockedDecrement((volatile signed __int32 *)(v300 + 16));
          ExReleasePushLockSharedEx(v222, 0LL);
        }
        else
        {
          if ( v301 != 2 )
            goto LABEL_374;
          v245 = v300;
          v301 = 0;
          *(_QWORD *)(v300 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v245, 0LL);
        }
        KeLeaveCriticalRegion();
      }
LABEL_374:
      v28 = (struct VIDMM_DEVICE *)v217;
      if ( v217 && (*(_DWORD *)(v217 + 60) & 7) == 1 )
        goto LABEL_48;
LABEL_41:
      v36 = (VIDMM_WORKER_THREAD *)*((_QWORD *)v1 + 12);
      v37 = (char *)v1 + 96;
      if ( v36 == (VIDMM_WORKER_THREAD *)((char *)v1 + 96) )
        goto LABEL_42;
      v182 = *(_QWORD *)v1;
      v321 = 1;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v182 + 41136, 0LL);
      v183 = *(_DWORD *)(v182 + 41176);
      *(_QWORD *)(v182 + 41144) = 0LL;
      ExReleasePushLockExclusiveEx(v182 + 41136, 0LL);
      KeLeaveCriticalRegion();
      v184 = 0;
      v185 = v36;
      do
      {
        v3 = v185;
        if ( v183
          && (v246 = *((_QWORD *)v185 + 4), *(_BYTE *)(v246 + 24))
          && *(_DWORD *)(v246 + 48) == 203
          && (**(_DWORD **)(*(_QWORD *)(v246 + 64) + 96LL) & 0x20000) != 0 )
        {
          v186 = v321;
        }
        else
        {
          v186 = 0;
          v184 = 1;
          v321 = 0;
        }
        v187 = *(VIDMM_PAGING_QUEUE ***)v185;
        if ( *(char **)v185 == v37 )
          break;
        if ( v187[1] != v185 )
          goto LABEL_25;
        v230 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v185 + 1);
        if ( *v230 != v185 )
          goto LABEL_25;
        *v230 = (VIDMM_PAGING_QUEUE *)v187;
        v187[1] = (VIDMM_PAGING_QUEUE *)v230;
        v231 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v1 + 13);
        if ( *v231 != (VIDMM_PAGING_QUEUE *)v37 )
          goto LABEL_25;
        *(_QWORD *)v185 = v37;
        *((_QWORD *)v185 + 1) = v231;
        *v231 = v185;
        *((_QWORD *)v1 + 13) = v185;
        if ( v187 == (VIDMM_PAGING_QUEUE **)v36 )
          break;
        v185 = (VIDMM_PAGING_QUEUE *)v187;
      }
      while ( v186 );
      if ( !v184 )
      {
LABEL_42:
        v3 = 0LL;
      }
      else if ( v3 )
      {
        goto LABEL_55;
      }
      if ( *((_BYTE *)v1 + 240) )
      {
        v38 = *(_QWORD *)v1;
        *((_BYTE *)v1 + 240) = 0;
        *((_QWORD *)v1 + 31) = *(_QWORD *)(v38 + 4632);
      }
      if ( v28 && *(_QWORD *)(*(_QWORD *)v1 + 4632LL) - *((_QWORD *)v1 + 31) >= qword_1C0076510 )
        goto LABEL_378;
      v39 = (VIDMM_WORKER_THREAD *)*((_QWORD *)v1 + 10);
      v40 = (char *)v1 + 80;
      if ( v39 == (VIDMM_WORKER_THREAD *)((char *)v1 + 80) )
        goto LABEL_47;
      v41 = *(_QWORD *)v1;
      v320 = 1;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v41 + 41136, 0LL);
      v42 = *(_DWORD *)(v41 + 41176);
      *(_QWORD *)(v41 + 41144) = 0LL;
      ExReleasePushLockExclusiveEx(v41 + 41136, 0LL);
      KeLeaveCriticalRegion();
      v43 = 0;
      v44 = v39;
      do
      {
        v3 = v44;
        if ( v42
          && (v247 = *((_QWORD *)v44 + 4), *(_BYTE *)(v247 + 24))
          && *(_DWORD *)(v247 + 48) == 203
          && (**(_DWORD **)(*(_QWORD *)(v247 + 64) + 96LL) & 0x20000) != 0 )
        {
          v45 = v320;
        }
        else
        {
          v45 = 0;
          v43 = 1;
          v320 = 0;
        }
        v46 = *(VIDMM_PAGING_QUEUE ***)v44;
        if ( *(char **)v44 == v40 )
          break;
        if ( v46[1] != v44 )
          goto LABEL_25;
        v210 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v44 + 1);
        if ( *v210 != v44 )
          goto LABEL_25;
        *v210 = (VIDMM_PAGING_QUEUE *)v46;
        v46[1] = (VIDMM_PAGING_QUEUE *)v210;
        v211 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v1 + 11);
        if ( *v211 != (VIDMM_PAGING_QUEUE *)v40 )
          goto LABEL_25;
        *(_QWORD *)v44 = v40;
        *((_QWORD *)v44 + 1) = v211;
        *v211 = v44;
        *((_QWORD *)v1 + 11) = v44;
        if ( v46 == (VIDMM_PAGING_QUEUE **)v39 )
          break;
        v44 = (VIDMM_PAGING_QUEUE *)v46;
      }
      while ( v45 );
      if ( !v43 )
      {
LABEL_47:
        *((_BYTE *)v1 + 240) = 1;
        v3 = 0LL;
LABEL_48:
        v27 = v289;
LABEL_58:
        *((_QWORD *)v1 + 2) = v28;
        *((_QWORD *)v1 + 19) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v1 + 144, 0LL);
        KeLeaveCriticalRegion();
        v26 = v322;
        v319 = v322;
        if ( v28 )
        {
          if ( (byte_1C00769C2 & 0x40) != 0 )
            McTemplateK0ppp_EtwWriteTransfer(v10, &EventVidMmSelectOperation, v322, *((_QWORD *)v28 + 3), v3, v27);
          if ( v3 )
          {
            if ( g_IsInternalReleaseOrDbg )
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v10) + 24) = v3;
            if ( *((_BYTE *)v27 + 24) && *((_DWORD *)v27 + 12) == 206 )
            {
              v179 = MEMORY[0xFFFFF78000000320];
              *((_QWORD *)v27 + 18) = v179 * KeQueryTimeIncrement();
            }
          }
          else if ( g_IsInternalReleaseOrDbg )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v10) + 24) = v28;
          }
          memset((char *)v1 + 288, 0, 0x80uLL);
          *((_QWORD *)v1 + 33) = v28;
          *((_QWORD *)v1 + 34) = v3;
          *((_QWORD *)v1 + 35) = v27;
          *((LARGE_INTEGER *)v1 + 37) = KeQueryPerformanceCounter(0LL);
        }
        goto LABEL_68;
      }
      if ( !v3 )
      {
LABEL_378:
        *((_BYTE *)v1 + 240) = 1;
        goto LABEL_48;
      }
LABEL_55:
      v27 = (struct VIDMM_PAGING_QUEUE_PACKET *)*((_QWORD *)v3 + 4);
      v47 = (_QWORD *)((char *)v3 + 32);
      v28 = (struct VIDMM_DEVICE *)*((_QWORD *)v3 + 17);
      v289 = v27;
      if ( *((VIDMM_PAGING_QUEUE **)v27 + 1) != (VIDMM_PAGING_QUEUE *)((char *)v3 + 32) )
        goto LABEL_25;
      v48 = *(_QWORD *)v27;
      if ( *(struct VIDMM_PAGING_QUEUE_PACKET **)(*(_QWORD *)v27 + 8LL) != v27 )
        goto LABEL_25;
      *v47 = v48;
      *(_QWORD *)(v48 + 8) = v47;
      *(_QWORD *)v27 = 0LL;
      *((_QWORD *)v27 + 1) = 0LL;
      goto LABEL_58;
    }
    v3 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)v1 + 10);
    if ( v3 != (VIDMM_WORKER_THREAD *)((char *)v1 + 80) )
    {
      while ( *((_DWORD *)v3 + 29) != 3 )
      {
        v3 = *(VIDMM_PAGING_QUEUE **)v3;
        if ( v3 == (VIDMM_WORKER_THREAD *)((char *)v1 + 80) )
          goto LABEL_363;
      }
      goto LABEL_55;
    }
LABEL_363:
    v3 = 0LL;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_58;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v29) + 24) = *((int *)v1 + 7);
    *((_QWORD *)v1 + 2) = 0LL;
    *((_QWORD *)v1 + 19) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v1 + 144, 0LL);
    KeLeaveCriticalRegion();
    v27 = 0LL;
    v289 = 0LL;
    v319 = 0;
LABEL_68:
    v49 = (char *)v1 + 208;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_69:
        *((_QWORD *)v49 + 1) = 0LL;
        *((_QWORD *)v49 + 2) = 0LL;
        *(_QWORD *)v49 = 0LL;
        v49[24] = 0;
        ++*((_DWORD *)v1 + 88);
        v292 = 0LL;
        v278 = 0;
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v10);
        v279 = 0;
        v286 = 2;
        if ( v28 )
        {
          v50 = *((_QWORD *)v28 + 2);
          v279 = 0;
          if ( v50 )
          {
            v26 = 0LL;
            if ( *(_DWORD *)(*(_QWORD *)v28 + 7016LL) )
            {
              while ( 1 )
              {
                v51 = (_QWORD *)(*(_QWORD *)(v50 + 48) + 296LL * (unsigned int)v26);
                if ( v51[25] > v51[3] || v51[26] > v51[4] )
                  break;
                v26 = (unsigned int)(v26 + 1);
                if ( (unsigned int)v26 >= *(_DWORD *)(*(_QWORD *)v28 + 7016LL) )
                  goto LABEL_77;
              }
              v279 = 1;
            }
LABEL_77:
            v52 = *(_QWORD *)(*(_QWORD *)(v50 + 40) + 32LL);
            if ( (*(_DWORD *)(v52 + 424) & 4) != 0 )
              v286 = 0;
            else
              v286 = 2 - ((*(_DWORD *)(v52 + 432) & 1) != 0);
          }
          else
          {
            v286 = 2;
          }
        }
        v53 = 0LL;
        v54 = 3 * (v279 + 2LL * v287);
        v10 = 12LL;
        if ( v286 != 2 )
          v53 = 12LL;
        v55 = (char *)&unk_1C0057540 + 48 * v287 + 24 * v279 + v53;
        v291 = v55;
        if ( !v3 )
          break;
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(12LL);
        v56 = v55[8];
        v293 = (bool *)(v55 + 8);
        if ( (byte_1C00769C1 & 1) != 0 )
          McTemplateK0ppx_EtwWriteTransfer(v10, v54, v26, v3, v27, *((_QWORD *)v27 + 5));
        v57 = *((_BYTE *)v27 + 24) == 0;
        v58 = *((int *)v27 + 12);
        v59 = *((_QWORD *)v27 + 4);
        v295 = (_DWORD *)((char *)v27 + 48);
        if ( v57 )
        {
          WdLogSingleEntry4(4LL, v58, v27, *((unsigned __int8 *)v27 + 25), v59);
          v195 = *(VIDMM_GLOBAL **)v1;
          v60 = (_DWORD *)((char *)v27 + 48);
          v278 = 0;
          v292 = 0LL;
          v63 = VIDMM_GLOBAL::ProcessSystemCommand(
                  v195,
                  (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)v27 + 48),
                  *((unsigned __int8 *)v27 + 25),
                  *((_QWORD *)v27 + 4),
                  *((struct _VIDSCH_SYNC_OBJECT **)v3 + 11));
          v284 = v63;
          goto LABEL_123;
        }
        WdLogSingleEntry5(4LL, v58, v27, *((_QWORD *)v27 + 8), *((_QWORD *)v27 + 7), v59);
        v275 = v56;
        v60 = (_DWORD *)((char *)v27 + 48);
        v61 = VIDMM_GLOBAL::ProcessDeferredCommand(
                *(VIDMM_GLOBAL **)v1,
                (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)v27 + 48),
                &v278,
                *((_BYTE *)v27 + 25),
                *((_QWORD *)v27 + 4),
                *((struct _VIDSCH_SYNC_OBJECT **)v3 + 11),
                v275,
                &v292);
        v57 = *((_BYTE *)v27 + 24) == 0;
        v63 = v61;
        v284 = v61;
        if ( v57 )
        {
          v64 = *((_QWORD *)v27 + 9);
          if ( !v64 )
          {
            v64 = *((_QWORD *)v289 + 8);
            if ( v64 )
              v64 = *(_QWORD *)(v64 + 8);
          }
        }
        else
        {
          v64 = *((_QWORD *)v27 + 7);
        }
        v65 = *(int **)(v64 + 16);
        v66 = 0;
        v276 = 0;
        if ( !*(_DWORD *)(*(_QWORD *)v65 + 7016LL) )
          goto LABEL_122;
        do
        {
          v297 = (VIDMM_PROCESS_BUDGET_STATE *)(*((_QWORD *)v65 + 6) + 296LL * v66);
          if ( v65 != (int *)-360LL && *((struct _KTHREAD **)v65 + 46) == KeGetCurrentThread() )
          {
            WdLogSingleEntry1(1LL, 1453LL);
            DxgkLogInternalTriageEvent(v248, 262146LL);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v65 + 90, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v212 = v65[96];
              if ( v212 != -1 && (byte_1C00769C1 & 1) != 0 )
                McTemplateK0q_EtwWriteTransfer(v67, &EventBlockThread, v68, v212);
            }
            ExAcquirePushLockSharedEx(v65 + 90, 0LL);
          }
          _InterlockedIncrement(v65 + 94);
          v69 = *(_QWORD *)v65;
          v70 = 0;
          v71 = v297;
          v290 = 0;
          v72 = (unsigned __int64 *)((char *)v297 + 184);
          v73 = (VIDMM_PROCESS_BUDGET_STATE *)(1616LL * v66 + *(_QWORD *)(v69 + 40224) + 504LL);
          v297 = v73;
          while ( 1 )
          {
            v74 = *(v72 - 6);
            if ( v70 == 1 )
            {
              v196 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v71);
              v74 = v196 + v197;
            }
            v75 = *(unsigned int *)v73;
            v294 = *v72;
            if ( v74 > v294 * (v75 + 100) / 0x64 || v74 < v294 * (100 - v75) / 0x64 )
              break;
            ++v72;
            v70 = v290 + 1;
            v73 = (VIDMM_PROCESS_BUDGET_STATE *)((char *)v297 + 24);
            v290 = v70;
            v297 = (VIDMM_PROCESS_BUDGET_STATE *)((char *)v297 + 24);
            if ( v70 >= 2 )
              goto LABEL_99;
          }
          v276 = 1;
LABEL_99:
          _InterlockedDecrement(v65 + 94);
          v316 = 0;
          ExReleasePushLockSharedEx(v65 + 90, 0LL);
          KeLeaveCriticalRegion();
          ++v66;
          v294 = *(_QWORD *)v65;
        }
        while ( v66 < *(_DWORD *)(v294 + 7016) );
        v49 = (char *)v1 + 208;
        if ( !v276 )
          goto LABEL_121;
        ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
        v76 = v294;
        v77 = 0;
        v290 = *(_DWORD *)(v294 + 7016);
        if ( !v290 )
        {
LABEL_120:
          v310 = 0;
          ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
          goto LABEL_121;
        }
        v78 = *(_QWORD *)(v294 + 40224);
        v294 = v78;
LABEL_103:
        v79 = v77;
        v80 = 1616LL * v77;
        v81 = 0LL;
        v82 = (_BYTE *)(v80 + v78 + 688);
        v83 = (_BYTE *)(v80 + v78 + 520);
        while ( 1 )
        {
          if ( (*v83 & 1) == 0 )
          {
            if ( *v82 )
              goto LABEL_461;
            goto LABEL_277;
          }
          v84 = VIDMM_PARTITION::_PartitionTree;
          for ( i = 0LL; v84; v84 = v84->Children[0] )
            i = v84->Children;
          if ( i )
            break;
LABEL_277:
          ++v81;
          v82 += 344;
          v83 += 24;
          if ( v81 >= 2 )
          {
            if ( ++v77 >= v290 )
              goto LABEL_120;
            v78 = v294;
            goto LABEL_103;
          }
        }
        v86 = 344 * v79;
        while ( !*(_BYTE *)(*(_QWORD *)(i[5] + 384LL * *(unsigned int *)(*(_QWORD *)(v76 + 24) + 240LL) + 24) + v86 + 136) )
        {
          v87 = (_QWORD **)i[1];
          v88 = i;
          if ( v87 )
          {
            i = (_QWORD *)i[1];
            for ( j = *v87; j; j = (_QWORD *)*j )
              i = j;
          }
          else
          {
            for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL); i; i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( (_QWORD *)*i == v88 )
                break;
              v88 = i;
            }
          }
          if ( !i )
          {
            v79 = v77;
            goto LABEL_277;
          }
        }
LABEL_461:
        v310 = 0;
        ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
        _InterlockedIncrement64((volatile signed __int64 *)(v76 + 44624));
        v62 = *(_QWORD *)v76;
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)v76 + 8LL) )
          KeSetEvent(*(PRKEVENT *)(v62 + 176), 0, 0);
LABEL_121:
        v63 = v284;
        v60 = v295;
LABEL_122:
        v27 = v289;
LABEL_123:
        if ( (byte_1C00769C1 & 1) != 0 )
        {
          McTemplateK0ppxx_EtwWriteTransfer(v62, &EventPagingQueueComplete, v26, v3, v27, *((_QWORD *)v27 + 5), 0LL);
          v63 = v284;
        }
        if ( v63 == -1071775232 )
        {
          v284 = 0;
LABEL_130:
          if ( *((_BYTE *)v27 + 24) )
            goto LABEL_131;
        }
        else
        {
          if ( !*((_BYTE *)v27 + 24) || v278 && !*((_BYTE *)v27 + 128) || !*((_QWORD *)v27 + 9) )
          {
            if ( v63 >= 0 )
              goto LABEL_130;
LABEL_144:
            v10 = v318;
            if ( v28 )
            {
              v96 = (char *)v293;
              goto LABEL_146;
            }
            goto LABEL_147;
          }
          v284 = 0;
LABEL_131:
          if ( *v60 == 206 )
          {
            v180 = MEMORY[0xFFFFF78000000320];
            v181 = v180 * KeQueryTimeIncrement();
            *((_QWORD *)v27 + 19) = v181;
            if ( v181 - *((_QWORD *)v27 + 17) > 1000000 )
            {
              VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v49, *(struct VIDMM_GLOBAL **)v1, v28, 0LL);
              VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(v249, v27);
              *((_QWORD *)v49 + 1) = 0LL;
              *((_QWORD *)v49 + 2) = 0LL;
              *(_QWORD *)v49 = 0LL;
              v49[24] = 0;
            }
          }
        }
        v89 = *((_QWORD *)v3 + 10);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v89 + 144, 0LL);
        *(_QWORD *)(v89 + 152) = KeGetCurrentThread();
        v90 = (struct VIDMM_PAGING_QUEUE_PACKET **)*((_QWORD *)v3 + 3);
        if ( *v90 != (VIDMM_PAGING_QUEUE *)((char *)v3 + 16) )
          goto LABEL_25;
        *(_QWORD *)v27 = (char *)v3 + 16;
        *((_QWORD *)v27 + 1) = v90;
        *v90 = v27;
        *((_QWORD *)v3 + 3) = v27;
        if ( *((VIDMM_PAGING_QUEUE **)v3 + 4) == (VIDMM_PAGING_QUEUE *)((char *)v3 + 32) )
        {
          v91 = *((int *)v3 + 28);
          if ( (_DWORD)v91 )
          {
            if ( (_DWORD)v91 != 1 )
            {
              g_DxgMmsBugcheckExportIndex = 1;
              WdLogSingleEntry5(0LL, 270LL, 58LL, v3, v91, 0LL);
            }
            if ( g_IsInternalReleaseOrDbg )
            {
              v250 = (_QWORD *)WdLogNewEntry5_WdTrace(v91);
              v250[3] = v3;
              v250[4] = *((int *)v3 + 28);
              v250[5] = 0LL;
            }
            v92 = *(VIDMM_PAGING_QUEUE **)v3;
            if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)v3 + 8LL) == v3 )
            {
              v93 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v3 + 1);
              if ( *v93 == v3 )
              {
                *v93 = v92;
                *((_QWORD *)v92 + 1) = v93;
                v94 = (struct _KEVENT *)*((_QWORD *)v3 + 15);
                *(_QWORD *)v3 = 0LL;
                *((_QWORD *)v3 + 1) = 0LL;
                *((_DWORD *)v3 + 28) = 0;
                KeSetEvent(v94, 0, 0);
                goto LABEL_142;
              }
            }
LABEL_25:
            __fastfail(3u);
          }
        }
LABEL_142:
        --*(_DWORD *)(*((_QWORD *)v3 + 17) + 72LL);
        --*(_DWORD *)(*((_QWORD *)v3 + 10) + 168LL);
        v95 = *((_QWORD *)v3 + 10) + 144LL;
        *(_QWORD *)(v95 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v95, 0LL);
        KeLeaveCriticalRegion();
        if ( (*((_DWORD *)v28 + 15) & 7) != 1 )
        {
          v63 = v284;
          goto LABEL_144;
        }
        v26 = v322;
        v27 = 0LL;
        v281 = 0;
        v3 = 0LL;
        v289 = 0LL;
      }
      if ( !v28 )
        break;
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(12LL);
      v63 = VIDMM_DEVICE::Resume(v28, v55[8], &v278, &v292);
      v284 = v63;
      if ( v322 || (v318 = 0, *((_DWORD *)v1 + 42)) )
        v318 = 1;
      v293 = (bool *)(v55 + 8);
      v96 = v55 + 8;
LABEL_146:
      if ( (byte_1C00769C2 & 0x40) != 0 )
      {
        v97 = v279;
        McTemplateK0qqtqttp_EtwWriteTransfer(
          v278,
          (unsigned __int8)*v96,
          v26,
          v63,
          v287,
          v279,
          v286,
          *v96,
          v278,
          (char)v292);
        v63 = v284;
      }
      else
      {
LABEL_147:
        v97 = v279;
      }
      if ( v63 >= 0 )
        goto LABEL_149;
      if ( v281 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 54LL, v28, v3, v27);
        v63 = v284;
      }
      WdLogSingleEntry4(3LL, v27, v28, v63, v278);
      v57 = !v278;
      *((_BYTE *)v1 + 184) = 1;
      if ( v57 )
      {
LABEL_506:
        v281 = 1;
        v259 = v28;
        if ( !v3 || !*((_BYTE *)v27 + 24) )
          goto LABEL_511;
        v57 = *((_QWORD *)v27 + 9) == 0LL;
        *((_BYTE *)v27 + 128) = 1;
        if ( !v57 )
          goto LABEL_514;
        v259 = (struct VIDMM_DEVICE *)*((_QWORD *)v27 + 7);
        if ( !v259 )
        {
          v259 = *(struct VIDMM_DEVICE **)(*((_QWORD *)v27 + 8) + 8LL);
LABEL_511:
          if ( !v259 )
            goto LABEL_514;
        }
        v10 = *((_QWORD *)v259 + 4);
        if ( v10 )
          VidSchMarkDeviceAsError(v10);
LABEL_514:
        if ( !v278 )
        {
          if ( v3 )
            VIDMM_PAGING_QUEUE::ReclaimPacket(v3, v27);
          goto LABEL_149;
        }
        v287 = 0;
      }
      else
      {
        while ( 1 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v10);
          VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v49, *(struct VIDMM_GLOBAL **)v1, v28, v292);
          if ( !v97 )
            VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(v251, *v293);
          v252 = v287;
          v302 = 0LL;
          v284 = v287;
          v253 = VIDMM_WORKER_THREAD::HandleRecoverablePageInFailure(v1, v28, v292);
          if ( !v253 )
          {
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v10);
            goto LABEL_69;
          }
          if ( v253 == -1071775484 )
            break;
          if ( (**((_DWORD **)v292 + 12) & 0x20000) != 0 )
          {
            if ( *((_BYTE *)v27 + 24) )
            {
              if ( *((_DWORD *)v27 + 12) == 203 && *((_DWORD *)v27 + 20) == 5 )
              {
                v10 = *(_QWORD *)(*(_QWORD *)v1 + 40224LL);
                if ( (*(_BYTE *)(1616LL * (*(_DWORD *)(**(_QWORD **)v292 + 68LL) & 0x3F) + v10 + 445) & 0x10) == 0 )
                {
                  if ( g_IsInternalReleaseOrDbg )
                    WdLogNewEntry5_WdTrace(v10);
                  *((_DWORD *)v27 + 20) = 6;
                  v287 = v252;
                  goto LABEL_69;
                }
              }
            }
          }
          VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound((VIDMM_COMMIT_TELEMETRY *)v49, *v293);
          if ( v286 <= 0 )
          {
            DefragSegment = VIDMM_GLOBAL::GetDefragSegment(
                              *(VIDMM_GLOBAL **)v1,
                              *(_WORD *)(**(_QWORD **)v292 + 68LL) & 0x3F,
                              *(_DWORD *)(**(_QWORD **)v292 + 60LL));
            v255 = DefragSegment;
            if ( DefragSegment )
            {
              WdLogSingleEntry1(4LL, DefragSegment);
              VIDMM_WORKER_THREAD::DefragmentSegment(v1, v255);
              v287 = v252;
              goto LABEL_69;
            }
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v10);
            v277 = v322;
            v280 = v318;
            if ( !dword_1C00765C0 || KdRefreshDebuggerNotPresent() )
              goto LABEL_506;
            v294 = *(_QWORD *)(*(_QWORD *)v292 + 8LL);
            IsProcessCommitRelinquished = PsIsProcessCommitRelinquished(*(_QWORD *)v294);
            v257 = IsProcessCommitRelinquished;
            if ( g_UnrecoverablePagingFailureDebugMode )
            {
              v10 = v280;
              v260 = v322;
              v318 = v280;
              if ( !v257 )
                goto LABEL_506;
LABEL_520:
              v318 = v10;
              v322 = v260;
              v261 = *(_QWORD *)(v294 + 32);
              if ( v261 )
              {
                v318 = v10;
                v322 = v260;
                if ( !*(_BYTE *)(v261 + 588) )
                {
                  DbgPrintEx(
                    0x65u,
                    0,
                    "\n"
                    "We broke in to the debugger as a unrecoverable paging failure occurred after a process had its\n"
                    "virtual address space torn down, yet we do not detect ourselves in the frozen state for that process"
                    ".\n"
                    "DXGPROCESS 0x%I64p and Mm should be inspected for how we reached this state.\n");
                  __debugbreak();
                  v318 = v280;
                  v322 = v277;
                }
              }
              goto LABEL_506;
            }
            if ( IsProcessCommitRelinquished )
            {
              v260 = v322;
              v10 = v280;
              goto LABEL_520;
            }
            v258 = "\n"
                   "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                   "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                   "Paging operation type: Failure to process paging packet \"?? ((dxgmms2!VIDMM_PAGING_QUEUE_PACKET*)0x%"
                   "p)\"\n"
                   "from paging queue \"?? ((dxgmms2!VIDMM_PAGING_QUEUE*)0x%p)\".\n";
            if ( !v27 )
              v258 = "\n"
                     "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                     "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                     "Paging operation type: Failure to resume device\n";
            DbgPrintEx(0x65u, 0, v258, v28, v27, v3);
            DbgPrintEx(
              0x65u,
              0,
              "\n"
              "We broke into the debugger to allow a chance for debugging this issue.\n"
              "\n"
              "To disable debug breaks on unrecoverable paging packet failures, run \"?? dxgmms2!g_UnrecoverablePagingFai"
              "lureDebugMode=1\"\n"
              "or \"ed 0x%p 1\"\n"
              "To re-attempt the failed paging packet execution for debugging purposes, run \"?? dxgmms2!g_UnrecoverableP"
              "agingFailureDebugMode=2\"\n"
              "or \"ed 0x%p 2\"\n"
              "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_UnrecoverablePagingFailureDeb"
              "ugMode=3\"\n"
              "or \"ed 0x%p 3\"\n"
              "!!! Note that option 2 will result in an unrecoverable machine state that should be rebooted after steppin"
              "g through the code is done.!!!\n"
              "\n",
              (const void *)&g_UnrecoverablePagingFailureDebugMode,
              (const void *)&g_UnrecoverablePagingFailureDebugMode,
              (const void *)&g_UnrecoverablePagingFailureDebugMode);
            __debugbreak();
            v26 = v322;
            if ( g_UnrecoverablePagingFailureDebugMode == 2 )
            {
              v287 = v284;
              v318 = v280;
              goto LABEL_69;
            }
            if ( g_UnrecoverablePagingFailureDebugMode != 3 )
            {
              v318 = v280;
              goto LABEL_506;
            }
            v252 = v284;
            v318 = v280;
          }
          else
          {
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v10);
            --v286;
          }
          v287 = v252;
          if ( !v278 )
            goto LABEL_506;
          v97 = v279;
        }
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v10);
        v262 = v302;
        if ( (*((_DWORD *)v28 + 15) & 7) == 0 && VIDMM_DEVICE::IsBetterYieldCandidate(v28, v302) )
        {
          VIDMM_DEVICE::Yield(v262, v28);
          goto LABEL_69;
        }
        VIDMM_DEVICE::Yield(v28, v262);
        if ( v262 != v28 )
        {
          if ( v3 )
            VIDMM_PAGING_QUEUE::RewindPacket(v3, v27);
          v263 = *(_QWORD *)(*(_QWORD *)v1 + 4632LL) - *((_QWORD *)v262 + 29);
          if ( v263 > *((_QWORD *)v1 + 24) )
          {
            *((_QWORD *)v1 + 24) = v263;
            *((_DWORD *)v1 + 50) = 8;
          }
          VIDMM_WORKER_THREAD::EndOperation(v1, 0, 0);
          v8 = v318;
          v3 = 0LL;
          v7 = v319;
          v9 = v282;
          goto LABEL_7;
        }
      }
    }
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(12LL);
    v318 = 0;
LABEL_149:
    if ( *((_QWORD *)v1 + 33) )
    {
      v98 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *((_QWORD *)v1 + 37));
      v99 = *((_QWORD *)v1 + 39);
      v100 = *(_QWORD *)(*((_QWORD *)v1 + 33) + 16LL);
      v101 = *((_QWORD *)v1 + 38);
      LODWORD(v289) = *((_DWORD *)v1 + 90);
      LODWORD(v293) = *((_DWORD *)v1 + 89);
      v284 = *((_DWORD *)v1 + 94);
      v306 = *((_QWORD *)v1 + 43);
      v286 = *((_DWORD *)v1 + 93);
      v297 = (VIDMM_PROCESS_BUDGET_STATE *)*((_QWORD *)v1 + 42);
      v290 = *((_DWORD *)v1 + 92);
      v291 = (char *)*((_QWORD *)v1 + 41);
      v323 = *((_DWORD *)v1 + 91);
      v294 = *((_QWORD *)v1 + 40);
      LODWORD(v295) = *((_DWORD *)v1 + 88);
      v102 = *((_QWORD *)v1 + 36);
      if ( v102 > 0x100000000LL )
      {
        v104 = 21;
      }
      else
      {
        v57 = !_BitScanReverse((unsigned int *)&v103, v102 >> 12);
        ThreadInformation[1] = v103;
        if ( v57 )
          v104 = 0;
        else
          v104 = v103 + 1;
      }
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v1 + 3584, 0LL);
      *((_QWORD *)v1 + 449) = KeGetCurrentThread();
      v105 = v98;
      v106 = v294;
      ++*((_DWORD *)v1 + v104 + 104);
      if ( *((_QWORD *)v1 + v104 + 63) > v98.QuadPart )
        v105 = *(LARGE_INTEGER *)((char *)v1 + 8 * v104 + 504);
      *((_QWORD *)v1 + v104 + 85) += v98.QuadPart;
      *((LARGE_INTEGER *)v1 + v104 + 63) = v105;
      *((_DWORD *)v1 + v104 + 214) += v323;
      v107 = v106;
      if ( *((_QWORD *)v1 + v104 + 118) > v106 )
        v107 = *((_QWORD *)v1 + v104 + 118);
      *((_QWORD *)v1 + v104 + 140) += v106;
      v108 = (unsigned __int64)v291;
      *((_QWORD *)v1 + v104 + 118) = v107;
      *((_DWORD *)v1 + v104 + 324) += v290;
      v109 = v108;
      if ( *((_QWORD *)v1 + v104 + 173) > v108 )
        v109 = *((_QWORD *)v1 + v104 + 173);
      *((_QWORD *)v1 + v104 + 195) += v108;
      v110 = v297;
      *((_QWORD *)v1 + v104 + 173) = v109;
      *((_DWORD *)v1 + v104 + 434) += v286;
      v111 = v110;
      if ( *((_QWORD *)v1 + v104 + 228) > (unsigned __int64)v110 )
        v111 = (VIDMM_PROCESS_BUDGET_STATE *)*((_QWORD *)v1 + v104 + 228);
      *((_QWORD *)v1 + v104 + 250) += v110;
      v112 = v306;
      *((_QWORD *)v1 + v104 + 228) = v111;
      *((_DWORD *)v1 + v104 + 544) += v284;
      v113 = v112;
      if ( *((_QWORD *)v1 + v104 + 283) > v112 )
        v113 = *((_QWORD *)v1 + v104 + 283);
      *((_QWORD *)v1 + v104 + 305) += v112;
      *((_QWORD *)v1 + v104 + 283) = v113;
      v114 = v99;
      v115 = v101;
      *((_DWORD *)v1 + v104 + 654) += (_DWORD)v293;
      if ( *((_QWORD *)v1 + v104 + 338) > v101 )
        v115 = *((_QWORD *)v1 + v104 + 338);
      *((_QWORD *)v1 + v104 + 360) += v101;
      v116 = (int)v289;
      *((_QWORD *)v1 + v104 + 338) = v115;
      *((_DWORD *)v1 + v104 + 764) += v116;
      if ( *((_QWORD *)v1 + v104 + 393) > v99 )
        v114 = *((_QWORD *)v1 + v104 + 393);
      *((_QWORD *)v1 + v104 + 415) += v99;
      v117 = (int)v295;
      v3 = 0LL;
      *((_QWORD *)v1 + v104 + 393) = v114;
      *((_DWORD *)v1 + v104 + 874) += v117;
      *((_QWORD *)v1 + 449) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v1 + 3584, 0LL);
      KeLeaveCriticalRegion();
      if ( v100 )
      {
        v118 = *((_DWORD *)v1 + 94);
        v26 = *((unsigned int *)v1 + 97);
        v119 = *((_DWORD *)v1 + 96);
        v10 = v281 != 0;
        v120 = *((_DWORD *)v1 + 95);
        *(_DWORD *)(v100 + 1752) += v120;
        *(_DWORD *)(v100 + 1756) += v119;
        *(_DWORD *)(v100 + 1760) += v26;
        *(_DWORD *)(v100 + 1764) += v118;
        *(_DWORD *)(v100 + 1768) += v10;
        if ( v120 || v119 || (_DWORD)v26 || v118 || (_DWORD)v10 )
          *(_BYTE *)(v100 + 1772) = 1;
      }
      *((_QWORD *)v1 + 33) = 0LL;
    }
    else
    {
      v3 = 0LL;
    }
    if ( *((_DWORD *)v1 + 7) != 1 )
      goto LABEL_223;
    v121 = *(VIDMM_GLOBAL **)v1;
    v311 = 0;
    v122 = 0;
    ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
    v123 = 0;
    if ( *((_DWORD *)v121 + 1754) )
    {
      do
      {
        v124 = 1616LL * v123;
        v125 = v124 + *((_QWORD *)v121 + 5028);
        if ( (*(_BYTE *)(v125 + 520) & 1) != 0 )
        {
          v126 = VIDMM_PARTITION::_PartitionTree;
          for ( k = 0LL; v126; v126 = v126->Children[0] )
            k = v126->Children;
          while ( k )
          {
            v128 = 344LL * v123 + *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)v121 + 3) + 240LL) + k[5] + 24);
            v129 = *(_QWORD *)(v128 + 16);
            v132 = 0;
            if ( v129 )
            {
              v130 = 100LL * *(_QWORD *)(v128 + 120);
              v131 = v129 == 3971335373 ? v130 / 0xECB5C4CD : v130 / v129;
              if ( (__int64)(100 - v131) < (unsigned int)dword_1C00764E8 )
                v132 = 1;
            }
            if ( v132 != *(_BYTE *)(v128 + 136) )
            {
              v122 = 1;
              *(_BYTE *)(v128 + 136) = v132;
            }
            v133 = (_QWORD **)k[1];
            v134 = k;
            if ( v133 )
            {
              k = (_QWORD *)k[1];
              for ( m = *v133; m; m = (_QWORD *)*m )
                k = m;
            }
            else
            {
              for ( k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL); k; k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*k == v134 )
                  break;
                v134 = k;
              }
            }
          }
        }
        else
        {
          v135 = *(_QWORD *)(v125 + 568);
          if ( v135 )
            v136 = (__int64)(100 - 100LL * *(_QWORD *)(v125 + 672) / v135) < (unsigned int)dword_1C00764E8;
          else
            v136 = 0;
          if ( v136 != *(_BYTE *)(v125 + 688) )
          {
            v122 = 1;
            *(_BYTE *)(v125 + 688) = v136;
          }
        }
        v138 = *((_QWORD *)v121 + 5028);
        if ( (*(_BYTE *)(v124 + v138 + 544) & 1) != 0 )
        {
          v139 = VIDMM_PARTITION::_PartitionTree;
          for ( n = 0LL; v139; v139 = v139->Children[0] )
            n = v139->Children;
          while ( n )
          {
            v141 = 344LL * v123 + *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)v121 + 3) + 240LL) + n[5] + 24);
            v142 = *(_QWORD *)(v141 + 16);
            v145 = 0;
            if ( v142 )
            {
              v143 = 100LL * *(_QWORD *)(v141 + 120);
              v144 = v142 == 3971335373 ? v143 / 0xECB5C4CD : v143 / v142;
              if ( (__int64)(100 - v144) < (unsigned int)dword_1C00764E8 )
                v145 = 1;
            }
            if ( v145 != *(_BYTE *)(v141 + 136) )
            {
              v122 = 1;
              *(_BYTE *)(v141 + 136) = v145;
            }
            v146 = (_QWORD **)n[1];
            v147 = n;
            if ( v146 )
            {
              n = (_QWORD *)n[1];
              for ( ii = *v146; ii; ii = (_QWORD *)*ii )
                n = ii;
            }
            else
            {
              for ( n = (_QWORD *)(n[2] & 0xFFFFFFFFFFFFFFFCuLL); n; n = (_QWORD *)(n[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*n == v147 )
                  break;
                v147 = n;
              }
            }
          }
        }
        else
        {
          v171 = *(_QWORD *)(v124 + v138 + 912);
          if ( v171 )
            v172 = (__int64)(100 - 100LL * *(_QWORD *)(v124 + v138 + 1016) / v171) < (unsigned int)dword_1C00764E8;
          else
            v172 = 0;
          if ( v172 != *(_BYTE *)(v124 + v138 + 1032) )
          {
            v122 = 1;
            *(_BYTE *)(v124 + v138 + 1032) = v172;
          }
        }
        ++v123;
      }
      while ( v123 < *((_DWORD *)v121 + 1754) );
      v1 = this;
    }
    v311 = 0;
    ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
    v57 = ((unsigned __int8)v122 | *((_BYTE *)v1 + 184)) == 0;
    *((_BYTE *)v1 + 184) |= v122;
    if ( !v57 )
      VIDMM_GLOBAL::RequestNewBudget(*(VIDMM_GLOBAL **)v1, 0);
    VIDMM_GLOBAL::HandlePromotionCandidates(*(VIDMM_GLOBAL **)v1, &v285);
    v149 = *(VIDMM_GLOBAL **)v1;
    v150 = *(_QWORD *)v1 + 44512LL;
    if ( *(_QWORD *)v1 != -44512LL && *(struct _KTHREAD **)(*(_QWORD *)v1 + 44520LL) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1453LL);
      v3 = 0LL;
      DxgkLogInternalTriageEvent(v264, 262146LL);
    }
    else
    {
      v3 = 0LL;
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v150, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v215 = *(_DWORD *)(v150 + 24);
        if ( v215 != -1 && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v151, &EventBlockThread, v152, v215);
      }
      ExAcquirePushLockSharedEx(v150, 0LL);
    }
    _InterlockedIncrement((volatile signed __int32 *)(v150 + 16));
    v153 = *((_QWORD *)v149 + 5568) == (_QWORD)v149 + 44544;
    _InterlockedDecrement((volatile signed __int32 *)(v150 + 16));
    ExReleasePushLockSharedEx(v150, 0LL);
    KeLeaveCriticalRegion();
    if ( !v153 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v10);
      v8 = 1;
      v318 = 1;
    }
    else
    {
LABEL_223:
      v8 = v318;
    }
LABEL_224:
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v10);
    if ( (unsigned int)(*((_DWORD *)v1 + 6) - 3) > 2 )
    {
      if ( dword_1C00764B0 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v10);
        v154 = *(VIDMM_GLOBAL **)v1;
        v155 = *(_QWORD *)(*(_QWORD *)v1 + 44624LL);
        if ( v155 == *(_QWORD *)(*(_QWORD *)v1 + 44632LL) )
        {
          v156 = 0;
        }
        else
        {
          v304 = 0LL;
          v303 = 14001;
          if ( (byte_1C00769C2 & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v10, &EventVidMmProfilerEnter, v26, 14001);
          DXGETWPROFILER_BASE::PushProfilerEntry();
          v265 = 0;
          if ( *((_DWORD *)v154 + 1754) )
          {
            do
            {
              v296 = 0;
              DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v312, (struct _KTHREAD **)v154 + 5134, 0);
              DXGPUSHLOCK::AcquireShared(v313);
              v314 = 1;
              ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
              VIDMM_GLOBAL::SetupBudgetState(v154, (struct VIDMM_BUDGET_STATE *)&v296, v265);
              VIDMM_GLOBAL::AssignBudgets(v154, (struct VIDMM_BUDGET_STATE *)&v296, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL);
              if ( (*(_BYTE *)(1616LL * v265 + *((_QWORD *)v154 + 5028) + 544) & 2) != 0 )
                VIDMM_GLOBAL::AssignBudgets(
                  v154,
                  (struct VIDMM_BUDGET_STATE *)&v296,
                  D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL);
              ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v312);
              ++v265;
            }
            while ( v265 < *((_DWORD *)v154 + 1754) );
            v1 = this;
          }
          *((_QWORD *)v154 + 5579) = v155;
          VIDMM_GLOBAL::SendBudgetChangeNotifications(v154);
          v156 = 1;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v303);
          if ( (byte_1C00769C2 & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v266, &EventVidMmProfilerExit, v267, v303);
        }
        VIDMM_GLOBAL::HandleTrimWnf(*(VIDMM_GLOBAL **)v1, v156);
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v10);
      v157 = *(VIDMM_GLOBAL **)v1;
      if ( qword_1C0076400 )
      {
        v158 = (VIDMM_GLOBAL *)((char *)v157 + 39960);
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v157 + 39976, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v214 = *((_DWORD *)v157 + 10000);
            if ( v214 != -1 && (byte_1C00769C1 & 1) != 0 )
              McTemplateK0q_EtwWriteTransfer(v159, &EventBlockThread, v160, v214);
          }
          ExAcquirePushLockSharedEx((char *)v157 + 39976, 0LL);
        }
        _InterlockedIncrement((volatile signed __int32 *)v157 + 9998);
        v161 = *(VIDMM_GLOBAL **)v158;
        _InterlockedDecrement((volatile signed __int32 *)v157 + 9998);
        v162 = (char *)v157 + 39976;
        if ( v161 == v158 )
        {
          ExReleasePushLockSharedEx(v162, 0LL);
          KeLeaveCriticalRegion();
        }
        else
        {
          ExReleasePushLockSharedEx(v162, 0LL);
          KeLeaveCriticalRegion();
          if ( (*((_DWORD *)v157 + 1764) & 0x8000) != 0
            || (v177 = *((_QWORD *)v157 + 579) - *((_QWORD *)v157 + 890), v177 >= qword_1C0076400) )
          {
            DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)v157 + 39976));
            v198 = *(VIDMM_GLOBAL **)v158;
            if ( *(VIDMM_GLOBAL **)v158 == v158 )
            {
              v208 = 0;
            }
            else
            {
              VIDMM_GLOBAL::StartPreparation((__int64)v157, 0xFFFFFFFF, 0LL, 0LL, 1001);
              do
              {
                v200 = *(VIDMM_GLOBAL ***)v198;
                v201 = (VIDMM_GLOBAL *)((char *)v198 - 424);
                v202 = v198;
                v198 = (VIDMM_GLOBAL *)v200;
                if ( v200[1] != v202 )
                  goto LABEL_25;
                v203 = (VIDMM_GLOBAL **)*((_QWORD *)v202 + 1);
                if ( *v203 != v202 )
                  goto LABEL_25;
                *v203 = (VIDMM_GLOBAL *)v200;
                v200[1] = (VIDMM_GLOBAL *)v203;
                v204 = *((_QWORD *)v201 + 67);
                *(_QWORD *)v202 = 0LL;
                v205 = *(unsigned __int16 *)(v204 + 4);
                if ( (_WORD)v205 && (_WORD)v205 != 3 )
                {
                  if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
                    McTemplateK0p_EtwWriteTransfer(v205, &EventProcessOfferAllocation, v199, v201);
                  v206 = (VIDMM_SEGMENT *)*((_QWORD *)v201 + 15);
                  if ( v206 && (*((_DWORD *)v206 + 20) & 0x1001) == 0 )
                  {
                    if ( *((_DWORD *)v201 + 28) == 2 )
                      VIDMM_SEGMENT::OfferAllocation(v206, v201);
                  }
                  else
                  {
                    v207 = (VIDMM_GLOBAL **)*((_QWORD *)v157 + 5004);
                    if ( *v207 != (VIDMM_GLOBAL *)((char *)v157 + 40024) )
                      goto LABEL_25;
                    *(_QWORD *)v202 = (char *)v157 + 40024;
                    *((_QWORD *)v202 + 1) = v207;
                    *v207 = v202;
                    *((_QWORD *)v157 + 5004) = v202;
                  }
                }
              }
              while ( v198 != v158 );
              v208 = 1;
            }
            v3 = 0LL;
            *((_QWORD *)v157 + 4998) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v157 + 39976, 0LL);
            KeLeaveCriticalRegion();
            *((_QWORD *)v157 + 890) = *((_QWORD *)v157 + 579);
            v178 = -qword_1C0076400;
            if ( v208 )
              VIDMM_GLOBAL::EndPreparation(v157, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
          }
          else
          {
            v178 = v177 - qword_1C0076400;
          }
          VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v157, v178, 3);
        }
      }
      v163 = *(VIDMM_GLOBAL **)v1;
      if ( *(_DWORD *)(*(_QWORD *)v1 + 7056LL)
        || *((_QWORD *)v163 + 895) < (unsigned __int64)qword_1C0076440
        && *((_DWORD *)v163 + 1792) < (unsigned int)dword_1C0076448 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v10);
        VIDMM_GLOBAL::ProcessSystemMemoryOfferList(*(VIDMM_GLOBAL **)v1);
        v164 = *(VIDMM_GLOBAL **)v1;
        if ( (*(_DWORD *)(*(_QWORD *)v1 + 7056LL) & 0x8000) != 0 )
        {
          VIDMM_GLOBAL::StartPreparation((__int64)v164, 0xFFFFFFFF, 0LL, 0LL, 1003);
          v268 = 0;
          if ( *((_DWORD *)v164 + 926) )
          {
            do
              VIDMM_SEGMENT::TrimOfferLists(*(_QWORD *)(*((_QWORD *)v164 + 464) + 8LL * v268++), 12LL, 0LL, 0LL);
            while ( v268 < *((_DWORD *)v164 + 926) );
            v1 = this;
          }
          VIDMM_GLOBAL::EndPreparation(v164, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
        }
        v165 = (_QWORD *)(*(_QWORD *)v1 + 3720LL);
        v165[1] = v165;
        *v165 = v165;
        v163 = *(VIDMM_GLOBAL **)v1;
        if ( qword_1C00763F8 )
        {
          v166 = 0x8000000000000000uLL;
          if ( *((_BYTE *)v163 + 40178) )
          {
            v174 = *((_DWORD *)v163 + 926);
            v175 = 0;
            if ( v174 )
            {
              while ( 1 )
              {
                v176 = *(_QWORD *)(*((_QWORD *)v163 + 464) + 8LL * v175);
                if ( (*(_DWORD *)(v176 + 80) & 0x1001) != 0 && *(_QWORD *)(v176 + 176) != v176 + 176 )
                  break;
                if ( ++v175 >= v174 )
                  goto LABEL_249;
              }
              *((_QWORD *)v163 + 889) = *((_QWORD *)v163 + 579);
              *((_BYTE *)v163 + 40178) = 0;
              v166 = -qword_1C00763F8;
            }
          }
          else
          {
            v167 = *((_QWORD *)v163 + 579) - *((_QWORD *)v163 + 889);
            if ( v167 >= qword_1C00763F8 )
            {
              VIDMM_GLOBAL::StartPreparation((__int64)v163, 0xFFFFFFFF, 0LL, 0LL, 207);
              v209 = VIDMM_GLOBAL::CleanupMarkedForEvictionAllocationsWorker(v163);
              VIDMM_GLOBAL::EndPreparation(v163, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
              if ( !v209 )
                *((_BYTE *)v163 + 40178) = 1;
            }
            else
            {
              v166 = v167 - qword_1C00763F8;
            }
          }
LABEL_249:
          VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v163, v166, 2);
          v163 = *(VIDMM_GLOBAL **)v1;
        }
      }
      v8 = v318;
      if ( !v318 && !VIDMM_GLOBAL::UnderCleanupLimit(v163) )
      {
        VIDMM_GLOBAL::ResetCleanupCounters(v168, 1);
        v282 = 1;
      }
      NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination(*(KSPIN_LOCK **)v1, &v283);
      if ( NextPendingTermination )
      {
        memset(v315, 0, 0x58uLL);
        v188 = *(VIDMM_GLOBAL **)v1;
        v315[2] = NextPendingTermination;
        LODWORD(v315[0]) = 200;
        v288 = 0;
        v307 = 0LL;
        VIDMM_GLOBAL::ProcessDeferredCommand(v188, (struct _VIDMM_DEFERRED_COMMAND *)v315, &v288, 0, 0LL, 0LL, 0, &v307);
      }
      v170 = *(VIDMM_GLOBAL **)v1;
      if ( *(_BYTE *)(*(_QWORD *)v1 + 40938LL) )
      {
        v269 = 0;
        if ( *((_DWORD *)v170 + 1754) )
        {
          do
          {
            v270 = *((_QWORD *)v170 + 5028) + 1616LL * v269;
            if ( !*(_DWORD *)(v270 + 440) && (*(_BYTE *)(v270 + 445) & 1) == 0 )
            {
              for ( jj = 0; jj < *(_DWORD *)(v270 + 32); ++jj )
              {
                v272 = *((_QWORD *)v170 + 464);
                v10 = jj + *(_DWORD *)(v270 + 28);
                v273 = *(_QWORD *)(v272 + 8 * v10);
                if ( *(_DWORD *)(v273 + 368) != -1 )
                {
                  if ( (*(_BYTE *)(v270 + 445) & 1) == 0 )
                  {
                    v274 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v272 + 8 * v10));
                    if ( v274 == *(_DWORD *)(v270 + 68) || v274 == *(_DWORD *)(v270 + 52) )
                    {
                      if ( *(_QWORD *)(v270 + 472) != v270 + 472 )
                      {
                        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v170, v269);
                        VIDMM_GLOBAL::StartPreparation((__int64)v170, v269, 0LL, 0LL, 121);
                        VIDMM_GLOBAL::FlushScratchGpuVaRanges(v170, v269);
                        VIDMM_GLOBAL::EndPreparation(v170, v269, 0LL, 0, 0LL, 0LL);
                      }
                      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v170, v269);
                      *(_BYTE *)(v270 + 445) |= 1u;
                    }
                  }
                  (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD))v170 + 5018))(
                    *((_QWORD *)v170 + 5019),
                    *(unsigned int *)(v273 + 368),
                    0LL);
                }
              }
            }
            ++v269;
          }
          while ( v269 < *((_DWORD *)v170 + 1754) );
          v8 = v318;
        }
        *((_BYTE *)v170 + 40938) = 0;
      }
    }
    v7 = v319;
    v6 = (char *)v1 + 56;
    v9 = v282;
  }
  while ( v8 );
  v11 = *((_DWORD *)v1 + 7);
  if ( v11 == *((_DWORD *)v1 + 6) )
    goto LABEL_3;
  if ( v11 == 5 )
  {
    v232 = (_QWORD **)(*(_QWORD *)v1 + 44608LL);
    for ( kk = *v232; kk != v232; kk = (_QWORD *)*kk )
    {
      v234 = (VIDMM_GLOBAL **)(kk - 26);
      if ( !*(kk - 2) && v234[3] )
        VIDMM_DEVICE::FullySuspend(v234);
    }
  }
  v228 = (struct _KEVENT *)(*((_QWORD *)v1 + 22) + 48LL);
  *((_DWORD *)v1 + 6) = *((_DWORD *)v1 + 7);
  KeSetEvent(v228, 0, 0);
  if ( *((_DWORD *)v1 + 7) != 2 )
  {
LABEL_3:
    v12 = *(VIDMM_GLOBAL **)v1;
    v13 = 0;
    if ( *(_DWORD *)(*(_QWORD *)v1 + 3704LL) )
    {
      do
      {
        v10 = *(_QWORD *)(*((_QWORD *)v12 + 464) + 8LL * v13);
        if ( (*(_BYTE *)(v10 + 82) & 1) != 0 )
          VIDMM_SEGMENT::CurateVPR((VIDMM_SEGMENT *)v10);
        ++v13;
      }
      while ( v13 < *((_DWORD *)v12 + 926) );
    }
LABEL_7:
    v6 = (char *)v1 + 56;
    goto LABEL_8;
  }
  *((_QWORD *)v1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 56, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(*((PVOID *)v1 + 1));
  PsTerminateSystemThread(0);
}
