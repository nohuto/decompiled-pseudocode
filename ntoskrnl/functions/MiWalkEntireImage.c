__int64 __fastcall MiWalkEntireImage(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, unsigned int a4)
{
  char v4; // r15
  __int64 v7; // r12
  __int16 v8; // cx
  unsigned int v9; // esi
  __int64 v10; // rcx
  char v11; // al
  bool v12; // zf
  _DWORD *v13; // r10
  struct _KTHREAD *CurrentThread; // r11
  ULONG_PTR v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned int v18; // r14d
  unsigned __int64 v19; // rdi
  ULONG_PTR v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // r14
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  __int64 v28; // rbx
  unsigned __int64 v29; // rax
  __int64 v30; // r14
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // rbx
  __int64 v33; // r13
  char v34; // dl
  int v35; // r15d
  unsigned int v36; // edi
  unsigned int v37; // esi
  __int64 v38; // rcx
  unsigned int v39; // esi
  unsigned __int8 v40; // bl
  unsigned int v41; // ebx
  int v42; // r12d
  unsigned __int64 v43; // rcx
  ULONG_PTR v44; // rdi
  int v45; // eax
  __int64 v46; // rbx
  unsigned __int64 v47; // rdi
  unsigned __int8 v48; // r12
  __int64 v49; // rax
  __int64 v50; // rbx
  unsigned __int64 v51; // rax
  _DWORD *v52; // r9
  __int64 v53; // rdx
  unsigned int v54; // ebx
  ULONG_PTR v55; // rdi
  int updated; // eax
  __int64 *v57; // rdi
  __int64 result; // rax
  unsigned __int64 v59; // rcx
  __int64 NextDirectFixupProto; // rax
  __int64 v61; // rbx
  unsigned int v62; // ecx
  _DWORD *Pool; // rax
  struct _KTHREAD *v64; // rdi
  __int64 v65; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v67; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v70; // eax
  signed __int32 v71; // ett
  int SessionId; // eax
  struct _KTHREAD *v73; // r14
  ULONG_PTR v74; // rbx
  __int64 v75; // rdi
  unsigned int v76; // eax
  unsigned int v77; // ecx
  struct _KPRCB *v78; // rcx
  signed __int32 *v79; // r8
  signed __int32 v80; // eax
  signed __int32 v81; // ett
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  struct _KTHREAD *v86; // rcx
  __int64 SharedProtos; // rax
  __int64 v88; // rdi
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  struct _KTHREAD *v92; // rcx
  __int64 v93; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v95; // rax
  unsigned __int64 v96; // rax
  int v97; // eax
  unsigned __int64 v98; // rdx
  unsigned __int64 v99; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v101; // r10
  _DWORD *v102; // r9
  int v103; // eax
  int v104; // eax
  __int64 v105; // rax
  int v106; // eax
  int v107; // eax
  int v108; // edi
  int v109; // ebx
  int PfnChannel; // eax
  __int64 v111; // r9
  struct _LIST_ENTRY *v112; // rax
  __int64 v113; // rax
  unsigned __int8 v114; // cl
  struct _KPRCB *v115; // r10
  _DWORD *v116; // r9
  int v117; // eax
  unsigned __int8 v118; // al
  __int64 v119; // rdx
  __int64 v120; // r8
  unsigned __int8 v121; // dl
  struct _KPRCB *v122; // r10
  _DWORD *v123; // r9
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // r9
  unsigned int EffectivePagePriorityThread; // eax
  int v128; // r10d
  unsigned int v129; // r8d
  unsigned __int64 v130; // rax
  unsigned __int64 v131; // rdx
  __int64 v132; // rax
  struct _KTHREAD *v133; // r13
  __int64 v134; // rdi
  __int64 v135; // rbx
  struct _KTHREAD *v136; // r14
  ULONG_PTR v137; // rbx
  unsigned int v138; // eax
  unsigned int v139; // ecx
  struct _KPRCB *v140; // rcx
  signed __int32 *v141; // r8
  signed __int32 v142; // eax
  signed __int32 v143; // ett
  int v144; // eax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  unsigned __int8 v149; // al
  unsigned __int8 v150; // bl
  struct _KPRCB *v151; // r9
  _DWORD *v152; // r8
  int v153; // eax
  __int64 v154; // rdx
  __int64 v155; // r8
  __int64 v156; // r9
  struct _KTHREAD *v157; // rcx
  char BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v159; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v160[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v161; // [rsp+44h] [rbp-BCh]
  __int64 SlabPage; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v163; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v164; // [rsp+58h] [rbp-A8h]
  __int64 v165; // [rsp+60h] [rbp-A0h]
  struct _KTHREAD *v166; // [rsp+68h] [rbp-98h]
  _DWORD *v167; // [rsp+70h] [rbp-90h]
  int v168; // [rsp+78h] [rbp-88h]
  int v169; // [rsp+7Ch] [rbp-84h]
  PVOID P; // [rsp+80h] [rbp-80h]
  unsigned int v171; // [rsp+88h] [rbp-78h]
  unsigned int v172; // [rsp+8Ch] [rbp-74h]
  __int64 v173; // [rsp+90h] [rbp-70h]
  unsigned __int64 v174; // [rsp+98h] [rbp-68h]
  ULONG_PTR v175; // [rsp+A0h] [rbp-60h]
  unsigned int v176; // [rsp+A8h] [rbp-58h] BYREF
  int v177; // [rsp+ACh] [rbp-54h]
  ULONG_PTR v178; // [rsp+B0h] [rbp-50h]
  __int64 v179; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v180; // [rsp+C0h] [rbp-40h]
  __int64 v181; // [rsp+C8h] [rbp-38h]
  unsigned int v182; // [rsp+D0h] [rbp-30h]
  unsigned int v183; // [rsp+D4h] [rbp-2Ch]
  int v184; // [rsp+D8h] [rbp-28h] BYREF
  int v185; // [rsp+DCh] [rbp-24h]
  unsigned int v186; // [rsp+E0h] [rbp-20h]
  __int64 v187; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v188; // [rsp+F0h] [rbp-10h]
  __int64 v189; // [rsp+F8h] [rbp-8h]
  ULONG_PTR BugCheckParameter3; // [rsp+100h] [rbp+0h]
  ULONG_PTR BugCheckParameter2; // [rsp+108h] [rbp+8h]
  int v192; // [rsp+110h] [rbp+10h] BYREF
  int v193; // [rsp+114h] [rbp+14h] BYREF
  int v194; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v195; // [rsp+120h] [rbp+20h]
  __int64 v196; // [rsp+128h] [rbp+28h]
  __int64 v197; // [rsp+130h] [rbp+30h]
  _QWORD v198[4]; // [rsp+138h] [rbp+38h] BYREF
  _KPROCESS *Process; // [rsp+158h] [rbp+58h]
  __int128 v200; // [rsp+160h] [rbp+60h] BYREF
  __int64 v201; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v202; // [rsp+178h] [rbp+78h]
  _DWORD v203[32]; // [rsp+17Ch] [rbp+7Ch] BYREF
  _BYTE v204[144]; // [rsp+200h] [rbp+100h] BYREF

  v4 = a3;
  v171 = a3;
  BugCheckParameter3 = a2;
  v175 = a1;
  v7 = 0LL;
  v172 = a4;
  v184 = 0;
  v187 = 0LL;
  v200 = 0LL;
  memset(v203, 0, sizeof(v203));
  v8 = *(_WORD *)(a1 + 60);
  v179 = *(_QWORD *)(a1 + 96);
  v196 = *(_QWORD *)a1;
  v9 = 0;
  v169 = v4 & 8;
  v10 = *(_QWORD *)(qword_140C67048 + 8LL * (v8 & 0x3FF));
  v11 = *(_BYTE *)(a1 + 62) & 0xC;
  v197 = v10;
  if ( v11 == 4 && (v4 & 8) == 0 )
  {
    v13 = (_DWORD *)(a1 + 56);
LABEL_193:
    v167 = v13;
    v9 = 2;
    goto LABEL_3;
  }
  v12 = (*(_DWORD *)(a1 + 56) & 0x800) == 0;
  v13 = (_DWORD *)(a1 + 56);
  v169 = v4 & 8;
  v167 = (_DWORD *)(a1 + 56);
  if ( !v12 )
  {
    v169 = v4 & 8;
    goto LABEL_193;
  }
LABEL_3:
  CurrentThread = KeGetCurrentThread();
  v166 = CurrentThread;
  v188 = 0LL;
  v168 = v4 & 0x20;
  P = &v201;
  v202 = 16;
  v201 = 2LL;
  if ( (v4 & 0x20) != 0 )
  {
    LODWORD(v201) = 1;
    v9 = 0;
  }
  else if ( (v4 & 8) != 0 )
  {
    MiInitializePageColorBase(v10 + 17536, (*v13 >> 20) & 0x7F, &v200);
    v13 = v167;
    LODWORD(v201) = 0;
  }
  v15 = a1 + 128;
  v16 = *(_QWORD *)(a1 + 136);
  v17 = -1LL;
  v163 = a1 + 128;
  v18 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v181 = v16;
  v160[0] = 17;
  v176 = 0;
  v161 = 0;
  v164 = 0LL;
  BugCheckParameter2 = 0LL;
  SlabPage = -1LL;
  if ( (MiFlags & 0x2000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 && !*(_QWORD *)(v179 + 56) )
  {
    result = MiGetSectionStrongImageReference(v179);
    v161 = result;
    v18 = result;
    if ( (int)result < 0 )
      return result;
    v15 = v163;
    v17 = SlabPage;
    v16 = v181;
    v13 = v167;
    CurrentThread = v166;
  }
  v185 = 0;
  if ( (v4 & 8) != 0 )
  {
    NextDirectFixupProto = MiGetNextDirectFixupProto(a2, 0LL, v16);
    v17 = SlabPage;
    v188 = NextDirectFixupProto;
  }
  if ( (_DWORD)v201 != 2 )
  {
    v61 = 511LL;
    v62 = *(_DWORD *)(v196 + 8);
    if ( v62 < 0x1FF )
      v61 = v62;
    if ( (unsigned int)v61 > v202 )
    {
      Pool = (_DWORD *)MiAllocatePool(66LL, 8 * v61 + 16, 1818782029LL);
      v15 = v163;
      v17 = SlabPage;
      v16 = v181;
      v13 = v167;
      CurrentThread = v166;
      P = Pool;
      if ( Pool )
      {
        *(_QWORD *)Pool = v201;
        Pool[2] = v61;
      }
      else
      {
        P = &v201;
      }
    }
    if ( (v4 & 0x28) != 0x28 )
    {
      --CurrentThread->SpecialApcDisable;
      v9 |= 0x20u;
      v64 = KeGetCurrentThread();
      v65 = 0LL;
      v182 = 0;
      _disable();
      AbEntrySummary = v64->AbEntrySummary;
      if ( v64->AbEntrySummary
        || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(&qword_140C6B198, v64),
            v15 = v163,
            v13 = v167,
            CurrentThread = v166,
            AbEntrySummary) )
      {
        _BitScanForward(&v67, AbEntrySummary);
        v182 = v67;
        v64->AbEntrySummary = AbEntrySummary & ~(1 << v67);
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v70 = *SchedulerAssist;
          do
          {
            v71 = v70;
            v70 = _InterlockedCompareExchange(SchedulerAssist, v70 & 0xFFDFFFFF, v70);
          }
          while ( v71 != v70 );
          if ( (v70 & 0x200000) != 0 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v15 = v163;
            v13 = v167;
            CurrentThread = v166;
          }
        }
        _enable();
        v65 = (__int64)(&v64[1].Process + 12 * v182);
        if ( (unsigned __int64)&qword_140C6B198 - qword_140C65668 >= 0x8000000000LL )
        {
          SessionId = -1;
        }
        else
        {
          SessionId = MmGetSessionIdEx(v64->ApcState.Process);
          v15 = v163;
          v13 = v167;
          CurrentThread = v166;
        }
        *(_DWORD *)(v65 + 8) = SessionId;
        *(_QWORD *)v65 = (unsigned __int64)&qword_140C6B198 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C6B198, 0, v65, (__int64)&qword_140C6B198);
        v15 = v163;
        v13 = v167;
        CurrentThread = v166;
      }
      v17 = SlabPage;
      v16 = v181;
      if ( v65 )
        *(_BYTE *)(v65 + 18) = 1;
    }
  }
  while ( 1 )
  {
    v19 = *(_QWORD *)(v15 + 8);
    v20 = *(_QWORD *)(v15 + 16);
    v178 = v20;
    v21 = (__int64)(v19 - v16) >> 3;
    v12 = (*(_BYTE *)(v15 + 34) & 2) == 0;
    v180 = v19;
    v165 = v21;
    if ( v12 )
      break;
    if ( (v4 & 1) != 0 )
      goto LABEL_28;
    if ( (*v13 & 0x8000000) == 0 )
      break;
    if ( (v4 & 0x2A) != 0 )
      goto LABEL_28;
    --CurrentThread->SpecialApcDisable;
    v73 = KeGetCurrentThread();
    v74 = v196 + 40;
    v183 = 0;
    v75 = 0LL;
    _disable();
    v76 = v73->AbEntrySummary;
    if ( v73->AbEntrySummary || (v76 = KiAbTryReclaimOrphanedEntries(v196 + 40, v73), v15 = v163, v76) )
    {
      _BitScanForward(&v77, v76);
      v183 = v77;
      v73->AbEntrySummary = v76 & ~(1 << v77);
      v78 = KeGetCurrentPrcb();
      v79 = (signed __int32 *)v78->SchedulerAssist;
      if ( v79 )
      {
        _m_prefetchw(v79);
        v80 = *v79;
        do
        {
          v81 = v80;
          v80 = _InterlockedCompareExchange(v79, v80 & 0xFFDFFFFF, v80);
        }
        while ( v81 != v80 );
        if ( (v80 & 0x200000) != 0 )
        {
          KiRemoveSystemWorkPriorityKick(v78);
          v15 = v163;
        }
      }
      _enable();
      v75 = (__int64)(&v73[1].Process + 12 * v183);
      if ( v74 - qword_140C65668 >= 0x8000000000LL )
      {
        v82 = -1;
      }
      else
      {
        v82 = MmGetSessionIdEx(v73->ApcState.Process);
        v15 = v163;
      }
      *(_DWORD *)(v75 + 8) = v82;
      *(_QWORD *)v75 = v74 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v74, 17LL, 0LL) )
    {
      ExfAcquirePushLockSharedEx((signed __int64 *)v74, 0, v75, v74);
      v15 = v163;
    }
    if ( v75 )
      *(_BYTE *)(v75 + 18) = 1;
    if ( !*(_QWORD *)(v15 + 24) )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v74, 0LL, 17LL) == 17 )
        goto LABEL_238;
LABEL_237:
      ExfReleasePushLockShared((signed __int64 *)v74);
      goto LABEL_238;
    }
    SharedProtos = MiGetSharedProtos(v175, v172, v15);
    v88 = SharedProtos;
    if ( SharedProtos )
    {
      ++*(_DWORD *)(SharedProtos + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v74, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v74);
      KeAbPostRelease(v74);
      v92 = v166;
      v12 = v166->SpecialApcDisable++ == -1;
      if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v92->ApcState.ApcListHead[0].Flink != &v92->152 )
        KiCheckForKernelApcDelivery(v92, v89, v90, v91);
      v19 = *(_QWORD *)(v88 + 72);
      v9 |= 8u;
      v15 = v163;
      v180 = v19;
      break;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v74, 0LL, 17LL) != 17 )
      goto LABEL_237;
LABEL_238:
    KeAbPostRelease(v74);
    v86 = v166;
    v12 = v166->SpecialApcDisable++ == -1;
    if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v86->ApcState.ApcListHead[0].Flink != &v86->152 )
      KiCheckForKernelApcDelivery(v86, v83, v84, v85);
    v18 = v161;
    v15 = v163;
    v20 = v178;
    v17 = SlabPage;
LABEL_28:
    if ( (v9 & 8) != 0 )
    {
      v133 = v166;
      v134 = 0LL;
      v135 = v196;
      v198[0] = 0LL;
      v186 = 0;
      --v166->SpecialApcDisable;
      v136 = KeGetCurrentThread();
      v137 = v135 + 40;
      _disable();
      v138 = v136->AbEntrySummary;
      if ( v136->AbEntrySummary || (v138 = KiAbTryReclaimOrphanedEntries(v137, v136), v15 = v163, v138) )
      {
        _BitScanForward(&v139, v138);
        v186 = v139;
        v136->AbEntrySummary = v138 & ~(1 << v139);
        v140 = KeGetCurrentPrcb();
        v141 = (signed __int32 *)v140->SchedulerAssist;
        if ( v141 )
        {
          _m_prefetchw(v141);
          v142 = *v141;
          do
          {
            v143 = v142;
            v142 = _InterlockedCompareExchange(v141, v142 & 0xFFDFFFFF, v142);
          }
          while ( v143 != v142 );
          if ( (v142 & 0x200000) != 0 )
          {
            KiRemoveSystemWorkPriorityKick(v140);
            v15 = v163;
          }
        }
        _enable();
        v134 = (__int64)(&v136[1].Process + 12 * v186);
        if ( v137 - qword_140C65668 >= 0x8000000000LL )
        {
          v144 = -1;
        }
        else
        {
          v144 = MmGetSessionIdEx(v136->ApcState.Process);
          v15 = v163;
        }
        *(_DWORD *)(v134 + 8) = v144;
        *(_QWORD *)v134 = v137 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v137, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx((signed __int64 *)v137, 0, v134, v137);
        v15 = v163;
      }
      if ( v134 )
        *(_BYTE *)(v134 + 18) = 1;
      MiDereferenceSubsectionProtos(v15, v172, v198);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v137, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v137);
      KeAbPostRelease(v137);
      v12 = v133->SpecialApcDisable++ == -1;
      if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v133->ApcState.ApcListHead[0].Flink != &v133->152 )
        KiCheckForKernelApcDelivery(v146, v145, v147, v148);
      MiFreeSubsectionProtos(v198);
      v20 = v178;
      v9 &= ~8u;
      v17 = SlabPage;
      v18 = v161;
    }
    v163 = v20;
    v15 = v20;
    if ( !v20 )
    {
LABEL_152:
      v57 = (__int64 *)P;
      goto LABEL_153;
    }
    v16 = v181;
    v13 = v167;
    CurrentThread = v166;
  }
  v22 = MiStartingOffset(v15, v19, v172);
  v15 = v163;
  v23 = v22;
  v173 = v22;
  v24 = v19 + 8LL * *(unsigned int *)(v163 + 44);
  v195 = v24;
  if ( v188 )
  {
    if ( v188 >= v24 )
    {
      v18 = v161;
      v20 = v178;
      v17 = SlabPage;
      goto LABEL_28;
    }
    v180 = v188;
    v93 = v188 - v19;
    v19 = v188;
    v93 >>= 3;
    v21 = (unsigned int)(v93 + v21);
    v23 += v93 << 12;
    v165 = v21;
    v173 = v23;
  }
  v25 = 0LL;
  v174 = 0LL;
  if ( v19 >= v24 )
  {
LABEL_24:
    if ( v7 )
    {
      MiUnlockProtoPoolPage(v7, v160[0]);
      v7 = 0LL;
      v164 = 0LL;
    }
    v17 = SlabPage;
    if ( SlabPage == -1 )
    {
      v18 = v161;
      v15 = v163;
      v20 = v178;
    }
    else
    {
      MiReleaseFreshPage(48 * SlabPage - 0x220000000000LL);
      v18 = v161;
      v17 = -1LL;
      v15 = v163;
      v20 = v178;
      SlabPage = -1LL;
    }
    goto LABEL_28;
  }
  while ( 1 )
  {
    if ( (v19 & 0xFFF) != 0 )
    {
      if ( v7 )
        goto LABEL_15;
    }
    else if ( v7 )
    {
      MiUnlockProtoPoolPage(v7, v160[0]);
    }
    v51 = (v9 & 2) != 0 ? MiLockProtoPoolPage(v19, v160) : MiCheckProtoPtePageState(v19, v160);
    v164 = v51;
    v7 = v51;
    if ( v51 )
      break;
    if ( (v9 & 2) != 0 )
    {
      MmAccessFault(2uLL, v19, 0, 0LL);
    }
    else
    {
      v59 = (unsigned __int64)(4096 - (unsigned int)(v19 & 0xFFF)) >> 3;
      v23 += v59 << 12;
      v21 = (unsigned int)(v59 + v21);
      v19 += 8 * v59;
LABEL_22:
      v173 = v23;
      v165 = v21;
      v180 = v19;
    }
LABEL_23:
    v25 = 0LL;
    v7 = v164;
    if ( v19 >= v195 )
      goto LABEL_24;
  }
  v25 = 0LL;
LABEL_15:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)v19;
        v27 = *(_QWORD *)v19;
        if ( (*(_QWORD *)v19 & 1) != 0 )
          break;
        if ( (*(_QWORD *)v19 & 0xC00LL) != 0x800 )
          goto LABEL_17;
        if ( (unsigned int)MiInvalidPteConforms(*(_QWORD *)v19) )
        {
          v27 = v26;
          if ( qword_140C657C0 && (v26 & 0x10) == 0 )
            v27 = v26 & ~qword_140C657C0;
          break;
        }
      }
      v29 = (v27 >> 12) & 0xFFFFFFFFFFLL;
      if ( v29 > qword_140C65820 || !_bittest64((const signed __int64 *)(48 * v29 - 0x21FFFFFFFFD8LL), 0x36u) )
        continue;
      break;
    }
    v30 = 48 * v29 - 0x220000000000LL;
    v192 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v192);
        while ( *(__int64 *)(v30 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) );
      v25 = 0LL;
    }
    if ( *(_QWORD *)v19 != v26 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      continue;
    }
    break;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    v30 = MiLockSpecialPurposeMemoryCachedPage(v30, 0LL);
  if ( !v30 )
  {
LABEL_17:
    if ( !v169 )
    {
      if ( (v9 & 2) == 0 )
        goto LABEL_19;
      v187 = MI_READ_PTE_LOCK_FREE(v19);
      if ( (v187 & 0x400) != 0 || !(unsigned int)MiGetPagingFileOffset(&v187) )
        goto LABEL_19;
      MiUnlockProtoPoolPage(v7, v160[0]);
      v28 = 0LL;
      v164 = 0LL;
      if ( (v4 & 2) == 0 || (unsigned int)MiPageHasRelocations(*(_QWORD *)(v179 + 32), (unsigned int)v21, 1LL) )
      {
        EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(v166, v125, v25, v126);
        if ( EffectivePagePriorityThread > 5 )
          EffectivePagePriorityThread = 5;
        if ( v19 == v174 )
        {
          v129 = 4096;
        }
        else
        {
          v174 = v19;
          v129 = (unsigned int)((__int64)(v195 - v19) >> 3) << 12;
        }
        if ( (int)MiPrefetchControlArea(v175, v128, v129, EffectivePagePriorityThread, 2, v172) < 0 )
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        v161 = 0;
        v23 = v173;
        goto LABEL_23;
      }
LABEL_20:
      if ( !v188 )
      {
        v19 += 8LL;
        v21 = (unsigned int)(v21 + 1);
        v23 = v173 + 4096;
        goto LABEL_22;
      }
      v130 = MiGetNextDirectFixupProto(BugCheckParameter3, (unsigned int)++v185, v25);
      v188 = v130;
      v131 = v130;
      if ( v130 )
      {
        if ( v130 >= v195 )
        {
          v7 = v164;
          goto LABEL_24;
        }
        v132 = (__int64)(v130 - v19) >> 3;
        v21 = (unsigned int)(v132 + v21);
        v23 = (v132 << 12) + v173;
        v165 = v21;
        v173 = v23;
        if ( v28 && ((v131 ^ v19) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        {
          MiUnlockProtoPoolPage(v28, v160[0]);
          v131 = v188;
          v164 = 0LL;
        }
        v19 = v131;
        v180 = v131;
        goto LABEL_23;
      }
      if ( v28 )
        MiUnlockProtoPoolPage(v28, v160[0]);
      v18 = v161;
LABEL_417:
      v17 = SlabPage;
      goto LABEL_152;
    }
    dword_140C65490 = 121;
LABEL_401:
    MiUnlockProtoPoolPage(v7, v160[0]);
    v18 = -1073740023;
    goto LABEL_417;
  }
  v31 = *(_QWORD *)v19;
  if ( (unsigned int)MiPteInShadowRange(v19)
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v31 & 1) != 0
    && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v95 = *((_QWORD *)&Flink->Flink + ((v19 >> 3) & 0x1FF));
      if ( (v95 & 0x20) != 0 )
        v31 |= 0x20uLL;
      if ( (v95 & 0x42) != 0 )
        v31 |= 0x42uLL;
    }
  }
  v187 = v31;
  v32 = v31 & 1;
  if ( (v31 & 1) != 0 )
  {
    v31 = MI_READ_PTE_LOCK_FREE(&v187);
  }
  else if ( qword_140C657C0 && (v31 & 0x10) == 0 )
  {
    v31 &= ~qword_140C657C0;
  }
  v33 = (v31 >> 12) & 0xFFFFFFFFFFLL;
  if ( (v4 & 4) != 0 )
  {
    if ( (unsigned int)MiIsPfnSystemCharged(v30) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v30 + 35) &= ~0x20u;
    }
    goto LABEL_170;
  }
  if ( (v4 & 1) != 0 && ((*(_QWORD *)(v30 + 40) >> 60) & 7) == 3
    || (v25 = *(_QWORD *)(v30 + 16), (v25 & 0x400) == 0) && (v4 & 0x20) == 0 && (v9 & 2) == 0 )
  {
LABEL_170:
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_116;
  }
  v34 = *(_BYTE *)(v30 + 35);
  if ( (v34 & 0x40) != 0 && v169 )
  {
    dword_140C65490 = 122;
    goto LABEL_270;
  }
  if ( (v34 & 0x10) != 0 )
  {
    if ( !v169 )
      goto LABEL_170;
    dword_140C65490 = 123;
LABEL_270:
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_401;
  }
  if ( !v32 && (*(_BYTE *)(v30 + 34) & 0x20) != 0 )
  {
    memset(v204, 0, 0x88uLL);
    if ( !v168 )
    {
      if ( (v4 & 2) == 0 || (*v167 & 2) != 0 )
      {
        MiInitializePageFaultPacket(0, 0, 0, 0, (__int64)v204);
        v184 = 1;
        MiObtainProtoReference(v7, 1LL);
        MiWaitForCollidedFaultComplete((unsigned int)v204, v30, v7, v160[0], (__int64)&v184);
        LODWORD(v21) = v165;
        v23 = v173;
        v164 = 0LL;
        v161 = 0;
        goto LABEL_23;
      }
      MiDeleteTransitionPte(v19, v30, 0x11u, 1);
      goto LABEL_116;
    }
    goto LABEL_170;
  }
  if ( v168 )
  {
    if ( v32 )
      goto LABEL_170;
    v96 = v25 >> 11;
    if ( (v25 & 0x400) == 0 )
      v96 = v25 >> 3;
    if ( (v96 & 1) == 0 )
      goto LABEL_170;
  }
  v35 = 8;
  v177 = 8;
  if ( !v32 )
  {
    if ( (v34 & 8) != 0 )
    {
      v35 = v34 & 7;
      v177 = v35;
    }
    if ( (MiUnlinkPageFromListEx(v30, 0LL) & 3) == 0 )
    {
      *(_QWORD *)(v30 + 24) &= 0xC000000000000000uLL;
      goto LABEL_60;
    }
    MiDiscardTransitionPteEx(v30, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v4 = v171;
    LODWORD(v21) = v165;
    if ( (v9 & 2) != 0 )
    {
      v23 = v173;
      goto LABEL_23;
    }
LABEL_19:
    v28 = v164;
    goto LABEL_20;
  }
LABEL_60:
  v36 = v171;
  if ( (v171 & 0x21) != 1
    || *(char *)(v30 + 35) < 0
    || !(unsigned int)MiUseSlabAllocator(v197, v163, *(_QWORD *)(v30 + 16), &v176)
    || (v54 = v176, v176 > 3)
    || (v97 = MiCheckSlabPfnBitmap(v30, 1LL, 0LL), v97 && (unsigned int)MiCheckSlabPage(v30, v54)) )
  {
    v37 = v9 & 0xFFFFFFEF;
  }
  else
  {
    v37 = v9 | 0x10;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v30) || (unsigned int)MiChargeForLockedPage(v38, 1LL) )
    ++*(_WORD *)(v30 + 32);
  if ( v168 )
  {
    v39 = v37 & 0xFFFFFF3F | 0x40;
  }
  else
  {
    if ( (v37 & 0x100) != 0 || (HvlEnlightenments & 0x200000) == 0 )
      goto LABEL_68;
    v98 = *(_QWORD *)(v30 + 16);
    v99 = v98 >> 11;
    if ( (v98 & 0x400) == 0 )
      v99 = v98 >> 3;
    if ( (v99 & 1) != 0 )
      v39 = v37 | 0x40;
    else
LABEL_68:
      v39 = v37 & 0xFFFFFFBF;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v193 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v193);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  *(_BYTE *)(v7 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(v7) )
    MiPfnReferenceCountIsZero(v7, 0xAAAAAAAAAAAAAAABuLL * ((v7 + 0x220000000000LL) >> 4));
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v40 = v160[0];
  if ( v160[0] != 17 )
  {
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v160[0] <= 0xFu && CurrentIrql >= 2u )
      {
        v101 = KeGetCurrentPrcb();
        v102 = v101->SchedulerAssist;
        v40 = v160[0];
        v103 = ~(unsigned __int16)(-1LL << (v160[0] + 1));
        v12 = (v103 & v102[5]) == 0;
        v102[5] &= v103;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v101);
      }
    }
    __writecr8(v40);
  }
  v41 = v165;
  v164 = 0LL;
  if ( (v39 & 0x40) != 0 )
  {
    v104 = MiWalkEntireImagePageNeedsProcessing(v179, (unsigned int)v165, v36);
    v42 = v168;
    if ( v104 )
    {
      if ( v168 )
      {
        if ( (unsigned int)MiAddPageToHeatRanges(P, v33, 3LL) )
          MiNotifyPageHeat(P);
        v39 |= 0x80u;
      }
      else
      {
        MiWalkEntireImage(v175, BugCheckParameter3, v36 | 0x20, v172);
        v39 |= 0x100u;
      }
    }
  }
  else
  {
    v42 = v168;
  }
  v43 = *(_QWORD *)(v30 + 40);
  if ( (v43 & 0x20000000000000LL) != 0 )
    v9 = v39 | 1;
  else
    v9 = v39 & 0xFFFFFFFE;
  if ( v42 )
  {
    v161 = 0;
    goto LABEL_86;
  }
  if ( !v169 )
  {
    if ( (v36 & 2) != 0 )
    {
      v44 = v175;
      if ( (MiFlags & 0x2000) != 0 && (*(_DWORD *)(v175 + 92) & 0xC0000) != 0 && ((v43 >> 60) & 7) == 3 )
      {
        v106 = VslApplySecureImageFixups(*(_QWORD *)(v179 + 56), v41, v33);
        v161 = v106;
        if ( v106 < 0 )
          KeBugCheckEx(0x1Au, 0xD8A18uLL, v106, v33, v44);
      }
      else
      {
        v45 = MiRelocateImagePfn(v175, BugCheckParameter3, 0LL, v159, 65);
        v161 = v45;
        if ( v45 )
        {
          if ( v45 == 1 )
            v161 = 0;
        }
        else
        {
          v9 |= 4u;
        }
      }
    }
    else if ( (v36 & 0x10) != 0 )
    {
      v55 = v175;
      if ( (MiFlags & 0x2000) != 0 && (*(_DWORD *)(v175 + 92) & 0xC0000) != 0 && ((v43 >> 60) & 7) == 3 )
      {
        v107 = VslApplySecureImageFixups(*(_QWORD *)(v179 + 56), v41, v33);
        v161 = v107;
        if ( v107 < 0 )
          KeBugCheckEx(0x1Au, 0xD9A18uLL, v107, v33, v55);
      }
      else
      {
        updated = MiUpdateImagePfnImportRelocations(v175, BugCheckParameter3, v41, v33);
        v161 = updated;
        if ( updated )
        {
          if ( updated == 1 )
            v161 = 0;
        }
        else
        {
          v9 |= 4u;
        }
      }
    }
    else
    {
      v161 = MiValidateImagePfn(
               v175,
               v173,
               (_DWORD)Process,
               v41,
               BugCheckParameter4,
               (*(unsigned __int16 *)(v163 + 32) >> 1) & 0x1F,
               v33,
               0x4000000);
    }
LABEL_86:
    if ( v35 != 8 && !BugCheckParameter2 && (v9 & 1) == 0 )
      BugCheckParameter2 = MiCreateDecayPfn();
    if ( (v9 & 0x10) != 0 && SlabPage == -1 )
    {
      v108 = *v167;
      v109 = *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v30 + 0x220000000000LL) >> 4)) + 8);
      PfnChannel = MiGetPfnChannel(v30);
      v111 = 2LL;
      v159 = 0;
      if ( (v108 & 0x7F00000) != 0 )
        v111 = 0LL;
      SlabPage = MiGetSlabPage(
                   v197,
                   v176,
                   (PfnChannel << byte_140C6570E) | (v109 << byte_140C6570D) | dword_140C65778 & (unsigned int)v33,
                   v111,
                   (__int64 *)0xFFFFFFFFFFFFFFFFLL);
      if ( SlabPage == -1 )
        v9 &= ~0x10u;
    }
    v46 = 0LL;
    v47 = 0LL;
    v189 = 0LL;
    v48 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v48 <= 0xFu )
    {
      v52 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v48 == 2 )
        LODWORD(v53) = 4;
      else
        v53 = (-1LL << (v48 + 1)) & 4;
      v52[5] |= v53;
    }
    v194 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v194);
      while ( *(__int64 *)(v30 + 24) < 0 );
    }
    v49 = *(_QWORD *)(v30 + 24) >> 62;
    v160[0] = v48;
    if ( (v49 & 1) != 0 )
    {
      if ( (v9 & 0x10) != 0 )
        v9 &= ~0x10u;
    }
    else if ( (v9 & 0x80u) != 0 )
    {
      MiSetNonResidentPteHeat(v30 + 16, 0LL);
    }
    if ( *(char *)(v30 + 35) < 0 )
      v9 &= ~0x10u;
    if ( (v171 & 0x10) != 0 || (v171 & 0x22) == 2 )
    {
      v50 = *(_QWORD *)(v30 + 16);
      if ( (unsigned int)MiPteInShadowRange(v30 + 16)
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v50 & 1) != 0
        && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
      {
        v112 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v112 )
        {
          v113 = *((_QWORD *)&v112->Flink + (((unsigned __int64)(v30 + 16) >> 3) & 0x1FF));
          if ( (v113 & 0x20) != 0 )
            v50 |= 0x20uLL;
          if ( (v113 & 0x42) != 0 )
            v50 |= 0x42uLL;
        }
      }
      v187 = v50;
      if ( (v50 & 0x400) != 0 )
      {
        v46 = 0LL;
      }
      else
      {
        v47 = MiCaptureDirtyBitToPfn(v30);
        v46 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL));
        v189 = v46;
      }
      v35 = v177;
    }
    if ( (v9 & 0x10) != 0 && (*(_BYTE *)(v30 + 34) & 7) == 6 )
    {
      MiTrimSharedPage(v30, v48, 0LL);
      if ( (*(_QWORD *)(v30 + 24) & 0x4000000000000000LL) != 0 )
        v9 &= ~0x10u;
    }
    if ( (unsigned int)MiRemoveLockedPageCharge(v30) )
    {
      if ( (v9 & 1) == 0
        && v35 != 8
        && (!_bittest64((const signed __int64 *)(v30 + 24), 0x3Eu) & (unsigned __int8)~(*(_BYTE *)(v30 + 34) >> 4)) != 0
        && (v9 & 0x10) == 0 )
      {
        if ( BugCheckParameter2 )
          MiInsertProtectedStandbyPage(BugCheckParameter2, v30);
        else
          MiPfnReferenceCountIsZero(v30, v33);
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v114 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v114 <= 0xFu && v48 <= 0xFu && v114 >= 2u )
          {
            v115 = KeGetCurrentPrcb();
            v116 = v115->SchedulerAssist;
            v117 = ~(unsigned __int16)(-1LL << (v48 + 1));
            v12 = (v117 & v116[5]) == 0;
            v25 = (unsigned int)v117 & v116[5];
            v116[5] = v25;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(v115);
          }
        }
        __writecr8(v48);
        v160[0] = 17;
        goto LABEL_107;
      }
      MiPfnReferenceCountIsZero(v30, v33);
    }
    if ( (v9 & 0x10) != 0 )
    {
      v118 = *(_BYTE *)(v30 + 34) & 7;
      if ( v118 >= 2u && v118 <= 3u && !*(_WORD *)(v30 + 32) && *(char *)(v30 + 35) >= 0 )
      {
        if ( (unsigned int)MiCheckSlabPfnBitmap(48 * SlabPage - 0x220000000000LL, 1LL, 0LL) )
        {
          MiCheckSlabPfnBitmap(v30, 1LL, 0LL);
          MiReplaceTransitionPage(v30);
          *(_QWORD *)(v30 + 16) = ZeroPte;
          SlabPage = -1LL;
          MiSetOriginalPtePfnFromFreeList(v30 + 16, v119, v120);
          MiReturnFreeZeroPage(v30, 0LL);
        }
        v46 = v189;
      }
    }
LABEL_107:
    if ( v160[0] != 17 )
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v47 )
      MiReleasePageFileInfo(v46, v47, 1);
    if ( v160[0] != 17 )
    {
      if ( KiIrqlFlags )
      {
        v121 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v121 <= 0xFu && v160[0] <= 0xFu && v121 >= 2u )
        {
          v122 = KeGetCurrentPrcb();
          v123 = v122->SchedulerAssist;
          v124 = ~(unsigned __int16)(-1LL << (v160[0] + 1));
          v12 = (v124 & v123[5]) == 0;
          v25 = (unsigned int)v124 & v123[5];
          v123[5] = v25;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v122);
        }
      }
      __writecr8(v160[0]);
      v160[0] = 17;
    }
    v18 = v161;
    if ( v161 < 0 )
    {
      v17 = SlabPage;
      v57 = (__int64 *)P;
      dword_140C65490 = (v161 != -1073741670) + 113;
      goto LABEL_153;
    }
    v19 = v180;
    v4 = v171;
LABEL_116:
    LODWORD(v21) = v165;
    goto LABEL_19;
  }
  if ( !(unsigned int)MiPageHasRelocations(*(_QWORD *)(v179 + 32), v41, 1LL) )
    goto LABEL_86;
  v57 = (__int64 *)P;
  v105 = MiSplitDirectMapPage(v163, &v200, v33, P);
  if ( v105 != -1 )
  {
    v30 = 48 * v105 - 0x220000000000LL;
    v33 = v105;
    goto LABEL_86;
  }
  dword_140C65490 = 120;
  v160[0] = MiLockPageInline(v30);
  if ( (unsigned int)MiRemoveLockedPageCharge(v30) )
    MiPfnReferenceCountIsZero(v30, v33);
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (v149 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v149 <= 0xFu )
  {
    v150 = v160[0];
    if ( v160[0] <= 0xFu && v149 >= 2u )
    {
      v151 = KeGetCurrentPrcb();
      v152 = v151->SchedulerAssist;
      v150 = v160[0];
      v153 = ~(unsigned __int16)(-1LL << (v160[0] + 1));
      v12 = (v153 & v152[5]) == 0;
      v152[5] &= v153;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(v151);
    }
  }
  else
  {
    v150 = v160[0];
  }
  __writecr8(v150);
  v17 = SlabPage;
  v18 = -1073740023;
LABEL_153:
  if ( BugCheckParameter2 )
  {
    MiDecayPfnFullyInitialized(BugCheckParameter2);
    v17 = SlabPage;
  }
  if ( *((_DWORD *)v57 + 1) )
  {
    MiNotifyPageHeat(v57);
    v17 = SlabPage;
  }
  if ( (v9 & 0x20) != 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C6B198);
    KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
    v157 = v166;
    v12 = v166->SpecialApcDisable++ == -1;
    if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v157->ApcState.ApcListHead[0].Flink != &v157->152 )
      KiCheckForKernelApcDelivery(v157, v154, v155, v156);
    v17 = SlabPage;
  }
  if ( v57 != &v201 )
  {
    ExFreePoolWithTag(v57, 0);
    v17 = SlabPage;
  }
  if ( v17 != -1 )
    MiReleaseFreshPage(48 * v17 - 0x220000000000LL);
  return v18;
}
