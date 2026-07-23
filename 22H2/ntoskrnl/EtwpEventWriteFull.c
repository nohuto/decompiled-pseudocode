/*
 * XREFs of EtwpEventWriteFull @ 0x14025D7C0
 * Callers:
 *     EtwWriteEx @ 0x14025D570 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x1403C0274 (EtwWriteKMSecurityEvent.c)
 *     EtwWriteString @ 0x1405A5820 (EtwWriteString.c)
 *     EtwpCrimsonStackWalkApc @ 0x1405A5B80 (EtwpCrimsonStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x1405A849C (EtwpDiskProvTraceDisk.c)
 *     EtwWriteErrorLogEntry @ 0x140754AC8 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x14021BEF0 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x140220B40 (EtwpLevelKeywordEnabled.c)
 *     EtwpReleaseTraceBuffer @ 0x14025D4A0 (EtwpReleaseTraceBuffer.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x14025EBC0 (EtwpApplyEventIdPayloadFilter.c)
 *     MmCanThreadFault @ 0x14025ED70 (MmCanThreadFault.c)
 *     ObGetCurrentIrql @ 0x14025EDF0 (ObGetCurrentIrql.c)
 *     KeInsertQueueApc @ 0x14025F120 (KeInsertQueueApc.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14026D960 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     IoGetStackLimits @ 0x1402D0BB0 (IoGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x1402D0E60 (KeAreInterruptsEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x1402D0E80 (EtwpReserveTraceBuffer.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402DEA70 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeInitializeApc @ 0x140341E70 (KeInitializeApc.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpFailLogging @ 0x14036C474 (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14036C70C (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A5CD4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x1405A6B50 (EtwpGetStackLookasideListEntry.c)
 *     EtwpTraceLostEvent @ 0x1405AA714 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x1405AAAA8 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405AB5B8 (EtwpInvokeEventCallback.c)
 *     EtwpApplyEventNameFilter @ 0x1405ABA74 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyLevelKwFilter @ 0x1405ABEC8 (EtwpApplyLevelKwFilter.c)
 *     EtwpApplyStackWalkIdFilter @ 0x1405ABFE4 (EtwpApplyStackWalkIdFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140654EBC (EtwpGetSidExtendedHeaderItem.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        unsigned int a4,
        unsigned __int16 *a5,
        __int16 a6,
        __int16 a7,
        GUID *a8,
        _OWORD *a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int16 a15,
        void *a16,
        unsigned __int64 *a17)
{
  __int64 v19; // r15
  unsigned __int16 v21; // ax
  __int64 v22; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // r11
  __int64 v28; // r8
  bool v29; // zf
  __int64 v30; // rdx
  __int64 v31; // rdi
  unsigned int v32; // r13d
  unsigned __int16 *v33; // r15
  char v34; // bl
  __int64 v35; // rsi
  __int64 v36; // r12
  int v37; // ecx
  bool v38; // al
  _KPROCESS *Process; // rcx
  __int64 v40; // rcx
  int v41; // ecx
  __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned __int8 v45; // al
  __int64 v46; // r14
  BOOLEAN v47; // al
  __int64 v48; // rdx
  int v49; // ecx
  signed __int64 *v50; // rbx
  __int64 v51; // rdi
  int v52; // ebx
  int v53; // edi
  unsigned int v54; // r14d
  int v55; // eax
  int v56; // eax
  _DWORD *v57; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  _GENERAL_LOOKASIDE *L; // rdi
  int v61; // eax
  int v62; // eax
  __int64 v63; // rcx
  int v64; // ecx
  bool v65; // al
  unsigned __int16 *v66; // r12
  unsigned __int8 v67; // si
  unsigned int v68; // edi
  __int64 v69; // r9
  int v70; // esi
  unsigned int v71; // edi
  void *v72; // rsp
  __int64 v73; // r8
  bool v74; // cl
  char v75; // cl
  _OWORD *v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // r8
  __int16 v79; // di
  int v80; // r15d
  char v81; // al
  __int64 v82; // rsi
  __int64 v83; // r8
  __int64 v84; // rdi
  unsigned int ReserveTraceBufferStatus; // ebx
  int v86; // ecx
  __int64 v87; // rax
  _WORD *v88; // r12
  GUID v89; // xmm0
  unsigned __int16 *v90; // rcx
  __int64 v91; // r15
  unsigned __int16 v92; // si
  unsigned __int16 v93; // si
  _WORD *v94; // rdi
  unsigned __int16 *v95; // rcx
  unsigned __int16 *v96; // rdi
  unsigned __int16 *v97; // rdi
  int SessionId; // eax
  int v99; // ecx
  unsigned __int16 *v100; // rdx
  struct _KPRCB *v101; // rcx
  unsigned __int64 v102; // rax
  unsigned __int16 *v103; // rdi
  PVOID PoolWithTag; // rbx
  unsigned int v105; // eax
  unsigned __int16 *v106; // rdi
  unsigned __int16 v107; // si
  unsigned __int16 v108; // si
  __int64 v109; // rbx
  unsigned __int16 *v110; // rcx
  int v111; // r10d
  __int64 v112; // rsi
  unsigned __int16 *v113; // rbx
  __int64 v114; // rcx
  unsigned __int16 v115; // dx
  unsigned int i; // edi
  size_t v117; // rdx
  _QWORD *v118; // r9
  char *v119; // r15
  size_t v120; // rbx
  void *v121; // rcx
  __int64 v122; // rbx
  _SLIST_ENTRY *v123; // r14
  struct _KPRCB *v124; // rdx
  _GENERAL_LOOKASIDE *v125; // rcx
  int BugCheckParameter4; // [rsp+0h] [rbp-640h]
  char v127; // [rsp+30h] [rbp-610h] BYREF
  char v128; // [rsp+640h] [rbp+0h]
  unsigned __int8 CurrentIrql; // [rsp+641h] [rbp+1h]
  unsigned __int8 v130; // [rsp+648h] [rbp+8h]
  int v131; // [rsp+650h] [rbp+10h]
  int v132; // [rsp+654h] [rbp+14h]
  unsigned __int16 v133; // [rsp+658h] [rbp+18h]
  unsigned __int8 v134; // [rsp+65Ch] [rbp+1Ch]
  char v135; // [rsp+65Dh] [rbp+1Dh]
  int v136; // [rsp+660h] [rbp+20h]
  unsigned int v137; // [rsp+664h] [rbp+24h]
  int Size; // [rsp+668h] [rbp+28h]
  unsigned __int16 Size_4; // [rsp+66Ch] [rbp+2Ch]
  __int16 v140; // [rsp+670h] [rbp+30h]
  unsigned int v141; // [rsp+674h] [rbp+34h]
  int v142; // [rsp+678h] [rbp+38h]
  __int64 v143; // [rsp+680h] [rbp+40h]
  unsigned __int16 *v144; // [rsp+688h] [rbp+48h]
  unsigned __int16 *v145; // [rsp+690h] [rbp+50h]
  __int64 v146; // [rsp+698h] [rbp+58h]
  void *Src; // [rsp+6A0h] [rbp+60h]
  __int64 v148; // [rsp+6A8h] [rbp+68h]
  void *StackLookasideListEntry; // [rsp+6B0h] [rbp+70h] BYREF
  __int64 v150; // [rsp+6B8h] [rbp+78h]
  unsigned __int16 *v151; // [rsp+6C0h] [rbp+80h]
  __int64 v152; // [rsp+6C8h] [rbp+88h]
  __int64 v153; // [rsp+6D0h] [rbp+90h]
  _DWORD *v154; // [rsp+6D8h] [rbp+98h]
  void *v155; // [rsp+6E0h] [rbp+A0h]
  void *v156; // [rsp+6E8h] [rbp+A8h]
  __int64 v157; // [rsp+6F0h] [rbp+B0h]
  struct _KTHREAD *v158; // [rsp+6F8h] [rbp+B8h]
  unsigned __int16 *v159; // [rsp+700h] [rbp+C0h] BYREF
  unsigned __int64 v160; // [rsp+708h] [rbp+C8h]
  void *v161; // [rsp+710h] [rbp+D0h]
  __int64 v162; // [rsp+718h] [rbp+D8h]
  unsigned __int64 HighLimit; // [rsp+720h] [rbp+E0h] BYREF
  unsigned __int64 LowLimit; // [rsp+728h] [rbp+E8h] BYREF
  __int64 v165; // [rsp+730h] [rbp+F0h]
  unsigned __int64 *v166; // [rsp+738h] [rbp+F8h]
  char *v167; // [rsp+740h] [rbp+100h]
  __int128 v168; // [rsp+748h] [rbp+108h] BYREF
  __int64 v169; // [rsp+758h] [rbp+118h]
  _OWORD *v170; // [rsp+760h] [rbp+120h]
  _OWORD v171[25]; // [rsp+770h] [rbp+130h] BYREF
  _DWORD *v173; // [rsp+9B8h] [rbp+378h]

  v170 = a9;
  v19 = a14;
  v152 = a1;
  v130 = a2;
  v144 = a5;
  v153 = a11;
  v162 = a13;
  v161 = a16;
  v166 = a17;
  v142 = 0;
  memset(v171, 0, 0x188uLL);
  v137 = 0;
  Src = 0LL;
  v154 = 0LL;
  StackLookasideListEntry = 0LL;
  v160 = 0LL;
  v140 = a15 & 0x200;
  v165 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a14 )
    v19 = a1;
  v146 = v19;
  if ( v161 )
  {
    if ( (a15 & 0x400) != 0 )
      v21 = 0;
    else
      v21 = *(_WORD *)v161;
  }
  else
  {
    v21 = 0;
  }
  Size_4 = v21;
  v128 = 0;
  v22 = *(_QWORD *)(a1 + 392);
  v143 = v22;
  v157 = v22;
  if ( v166 && *v166 )
  {
    v160 = *v166;
    v128 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v158 = CurrentThread;
  v24 = a12;
  if ( !a12 )
    v24 = (__int64)CurrentThread;
  v173 = (_DWORD *)v24;
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    CurrentIrql = KeGetCurrentIrql();
  else
    CurrentIrql = 15;
  v134 = CurrentIrql;
  v135 = 0;
  if ( !CurrentIrql )
  {
    --v158->KernelApcDisable;
    v135 = 1;
  }
  v130 &= ~a3;
  v25 = 80LL;
  v26 = v19;
LABEL_21:
  v27 = (__int64)v144;
  v28 = 1LL;
LABEL_22:
  while ( 2 )
  {
    v29 = !_BitScanForward((unsigned int *)&v30, v130);
    v137 = v30;
    if ( !v29 )
    {
      LOBYTE(v31) = 1;
      v150 = 1LL;
      v168 = 0LL;
      v169 = 0LL;
      v159 = 0LL;
      v32 = v25;
      v132 = v25;
      v33 = 0LL;
      v145 = 0LL;
      v151 = 0LL;
      v34 = 0;
      LOBYTE(v133) = 0;
      LOWORD(Size) = 0;
      v136 = 0;
      v156 = 0LL;
      v167 = 0LL;
      v130 &= v130 - 1;
      v35 = (unsigned int)v30;
      v148 = (unsigned int)v30;
      v36 = v26 + 32 * (v30 + 4);
      if ( v162 )
      {
        v37 = *(_DWORD *)(v162 + 4LL * (*(unsigned __int16 *)(v36 + 6) >> 5));
        v28 = 1LL;
        if ( _bittest(&v37, *(_BYTE *)(v36 + 6) & 0x1F) )
          continue;
      }
      v38 = EtwpLevelKeywordEnabled(v36, *(_BYTE *)(v27 + 4), *(_QWORD *)(v27 + 8));
      v28 = 1LL;
      if ( !v38 )
        continue;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( ((a4 & 2) != 0 || SLODWORD(Process[1].DirectoryTableBase) < 0) && (*(_DWORD *)(v36 + 8) & 0x200) != 0 )
        continue;
      v40 = *(_QWORD *)(v26 + 384);
      if ( v40 )
      {
        v41 = *(_DWORD *)(104 * v35 + v40);
        if ( (v41 & 0x80000200) == 0x80000200 || (v41 & 0x80000100) == 0x80000100 )
        {
          if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilter(
                                   v26,
                                   v137,
                                   0,
                                   v27,
                                   *(_WORD *)v27,
                                   a10,
                                   v153,
                                   0,
                                   CurrentIrql) )
            goto LABEL_63;
          v27 = (__int64)v144;
        }
      }
      if ( v140 )
      {
        v25 = *(_QWORD *)(v27 + 8);
        v43 = 0LL;
        v44 = *(_QWORD *)(v146 + 384);
        if ( v44 )
        {
          v28 = 104 * v35;
          if ( (*(_DWORD *)(104 * v35 + v44) & 0x80000400) == 0x80000400 )
            v43 = *(_QWORD *)(v28 + v44 + 96);
          if ( v43 )
          {
            v45 = *(_BYTE *)(v43 + 1);
            if ( (*(_BYTE *)(v27 + 4) <= v45 || !v45)
              && (!v25 || (v25 & *(_QWORD *)(v43 + 8)) != 0 && (v25 & *(_QWORD *)(v43 + 16)) == *(_QWORD *)(v43 + 16))
              && !(unsigned __int8)EtwpApplyEventNameFilter(
                                     v146,
                                     v137,
                                     a10,
                                     v153,
                                     0,
                                     CurrentIrql,
                                     *(_BYTE *)(v27 + 4),
                                     *(_QWORD *)(v27 + 8),
                                     0) )
            {
              goto LABEL_63;
            }
          }
        }
      }
      v46 = *(unsigned __int16 *)(v36 + 6);
      v141 = *(unsigned __int16 *)(v36 + 6);
      if ( CurrentIrql >= 2u )
      {
        v48 = v143;
        if ( (unsigned int)v46 >= *(_DWORD *)(v143 + 16) )
        {
          LOBYTE(v31) = 1;
          v150 = 1LL;
        }
        else
        {
          _mm_lfence();
          v31 = *(_QWORD *)(*(_QWORD *)(v143 + 456) + 8 * v46);
          v150 = v31;
        }
      }
      else
      {
        v47 = ExAcquireRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v143 + 448) + 8 * v46),
                1u);
        v48 = v143;
        if ( v47 )
        {
          if ( (unsigned int)v46 >= *(_DWORD *)(v143 + 16) )
          {
            LOBYTE(v31) = 1;
            v150 = 1LL;
          }
          else
          {
            _mm_lfence();
            v31 = *(_QWORD *)(8 * v46 + *(_QWORD *)(v143 + 456));
            v150 = v31;
          }
          v34 = 1;
          LOBYTE(v133) = 1;
        }
        else
        {
          v34 = v133;
        }
      }
      if ( (v31 & 1) != 0 )
      {
        if ( v34 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v48 + 448) + 8 * v46), 1u);
        v29 = (_DWORD)v46 == 3;
        v22 = v143;
        if ( !v29 )
        {
LABEL_63:
          v26 = v146;
          v25 = 80LL;
          goto LABEL_21;
        }
        v49 = -1073741058;
        if ( !*(_DWORD *)(v143 + 4068) )
          v49 = -1073741816;
        v142 = v49;
        break;
      }
      v52 = v170 != 0LL ? 8 : 0;
      v53 = 104;
      if ( !v170 )
        v53 = 80;
      v54 = v53;
      v131 = v53;
      if ( (*(_DWORD *)(v36 + 8) & 0xFFFFFF9F) != 0 )
      {
        if ( EtwpPagingDisabled || (a4 & 1) != 0 || !(unsigned int)MmCanThreadFault(v170, v48) || BYTE6(v158[1].Queue) )
          v55 = 0;
        else
          v55 = 128;
        v52 |= v55;
        v56 = *(_DWORD *)(v36 + 8);
        v131 = v53;
        if ( (v56 & 0x800) != 0 )
        {
          if ( v165 )
          {
            v131 = v53;
            if ( v165 != EtwpHostSiloState )
            {
              v52 |= 0x100u;
              v54 = v53 + ((*(unsigned __int16 *)(v165 + 4200) + 15) & 0xFFFFFFF8);
              v131 = v54;
            }
          }
          v33 = v145;
        }
        if ( (v56 & 1) != 0 && (v52 & 0x80u) != 0 )
        {
          v57 = Src;
          if ( Src )
            goto LABEL_101;
          CurrentPrcb = KeGetCurrentPrcb();
          P = CurrentPrcb->PPLookasideList[8].P;
          ++P->TotalAllocates;
          v57 = RtlpInterlockedPopEntrySList(&P->ListHead);
          Src = v57;
          if ( !v57 )
          {
            ++P->AllocateMisses;
            L = CurrentPrcb->PPLookasideList[8].L;
            ++L->TotalAllocates;
            v57 = RtlpInterlockedPopEntrySList(&L->ListHead);
            Src = v57;
            if ( !v57 )
            {
              ++L->AllocateMisses;
              v57 = (_DWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                                (unsigned int)L->Type,
                                L->Size,
                                L->Tag);
              Src = v57;
            }
          }
          if ( v57 )
            *v57 = CurrentPrcb->Number;
          v154 = v57;
          if ( v57 )
          {
            EtwpGetSidExtendedHeaderItem();
            v57 = Src;
          }
          v35 = v148;
          if ( v57 )
          {
LABEL_101:
            v52 |= 2u;
            v54 += *(unsigned __int16 *)v57;
            v131 = v54;
          }
        }
        v61 = *(_DWORD *)(v36 + 8);
        if ( (v61 & 2) != 0 )
        {
          v52 |= 1u;
          v54 += 16;
          v131 = v54;
        }
        if ( (v61 & 0x80u) != 0 && ((unsigned __int8)ObGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->NestingLevel) )
        {
          v52 |= 0x20u;
          v54 += 16;
          v131 = v54;
        }
        v62 = *(_DWORD *)(v36 + 8);
        if ( (v62 & 0x100) != 0 )
        {
          v52 |= 0x40u;
          v54 += 16;
          v131 = v54;
        }
        if ( (v62 & 4) != 0 && !EtwpPagingDisabled )
        {
          v63 = *(_QWORD *)(v146 + 384);
          v65 = 0;
          if ( v63 )
          {
            v64 = *(_DWORD *)(104 * v35 + v63);
            if ( (v64 & 0x80001000) == 0x80001000
              || (v64 & 0x80002000) == 0x80002000
              || (v64 & 0x80004000) == 0x80004000 )
            {
              v65 = 1;
            }
          }
          v66 = v144;
          if ( !v65
            || (v67 = v134,
                v68 = v137,
                (unsigned __int8)EtwpApplyLevelKwFilter(
                                   v146,
                                   v137,
                                   *((unsigned __int8 *)v144 + 4),
                                   *((_QWORD *)v144 + 1),
                                   v134 < 2u))
            && (LOBYTE(v69) = v67 < 2u, v70 = v146, (unsigned __int8)EtwpApplyStackWalkIdFilter(*v66, v146, v68, v69))
            && (unsigned __int8)EtwpApplyEventNameFilter(
                                  v70,
                                  v68,
                                  a10,
                                  v153,
                                  0,
                                  CurrentIrql,
                                  *((_BYTE *)v66 + 4),
                                  *((_QWORD *)v66 + 1),
                                  1) )
          {
            if ( (v128 & 1) == 0 )
            {
              v71 = 256;
              StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
              if ( !StackLookasideListEntry )
              {
                HighLimit = 0LL;
                LowLimit = 0LL;
                IoGetStackLimits(&LowLimit, &HighLimit);
                if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                {
                  v72 = alloca(1552LL);
                  StackLookasideListEntry = &v127;
                  v71 = 192;
                }
              }
              if ( StackLookasideListEntry )
              {
                v73 = 0LL;
                v74 = (*(_DWORD *)(v150 + 832) & 0x40000000) == 0;
                if ( *(_QWORD *)(v152 + 40) == *(_QWORD *)&EventTracingProvGuid.Data1
                  && *(_QWORD *)(v152 + 48) == *(_QWORD *)EventTracingProvGuid.Data4
                  && *v66 == 18 )
                {
                  v52 |= 0x10u;
                  v73 = v152 + 80;
                  v74 = 0;
                }
                LOBYTE(BugCheckParameter4) = v74;
                EtwpGetStackExtendedHeaderItem(v158, a4, v71, &StackLookasideListEntry, BugCheckParameter4, v73);
                if ( StackLookasideListEntry && v71 == 256 )
                  v75 = 2;
                else
                  v75 = 0;
                v128 = v75 | v128 & 0xFD;
              }
              v128 |= 1u;
            }
            if ( StackLookasideListEntry )
            {
              v52 |= 4u;
              v54 += *(unsigned __int16 *)StackLookasideListEntry;
              v131 = v54;
            }
          }
        }
      }
      v76 = &v171[3 * LODWORD(v171[24])];
      v148 = (__int64)v76;
      if ( a10 )
      {
        v77 = v153 + 8;
        v78 = a10;
        v79 = Size;
        v80 = v136;
        do
        {
          if ( v140 )
            v81 = *(_BYTE *)(v77 + 4);
          else
            v81 = 0;
          if ( v81 )
          {
            if ( v81 == 1 )
            {
              v79 += *(_WORD *)v77;
              LOWORD(Size) = v79;
              v136 = ++v80;
            }
          }
          else
          {
            v54 += *(_DWORD *)v77;
            v131 = v54;
          }
          v77 += 16LL;
          --v78;
        }
        while ( v78 );
        v33 = v145;
        v76 = (_OWORD *)v148;
      }
      if ( v136 )
      {
        v54 += ((unsigned __int16)Size + 15) & 0xFFFFFFF8;
        v131 = v54;
      }
      if ( Size_4 )
      {
        v54 += (Size_4 + 15) & 0xFFFFFFF8;
        v131 = v54;
      }
      *((_DWORD *)v76 + 10) = v54;
      v82 = EtwpReserveTraceBuffer(v150, v54, (unsigned int)&v168, (unsigned int)&v159, 0);
      v148 = v82;
      if ( !v82 )
      {
        v84 = v150;
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v150, v54, v83);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(v152 + 40, v144, v84 + 152, ReserveTraceBufferStatus);
        v86 = v142;
        if ( v142 >= 0 )
        {
          if ( (*(_DWORD *)(v84 + 12) & 0x8000000) == 0 )
            v86 = ReserveTraceBufferStatus;
          v142 = v86;
        }
        v22 = v143;
        if ( (_BYTE)v133 )
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v143 + 448) + 8LL * v141),
            1u);
        v26 = v146;
        v25 = 80LL;
        if ( ReserveTraceBufferStatus == -1073741675 )
        {
          v142 = -1073741675;
          break;
        }
        goto LABEL_21;
      }
      v87 = v150;
      *(_QWORD *)v76 = v150;
      *((_QWORD *)v76 + 1) = v82;
      v76[1] = v168;
      *((_QWORD *)v76 + 4) = v169;
      ++LODWORD(v171[24]);
      *(_DWORD *)v82 = v54 | *(_DWORD *)(v87 + 20);
      v88 = (_WORD *)(v82 + 4);
      v155 = (void *)(v82 + 4);
      *(_WORD *)(v82 + 4) = a6;
      *(_WORD *)(v82 + 6) = a7;
      *(_OWORD *)(v82 + 24) = *(_OWORD *)(v152 + 40);
      *(_OWORD *)(v82 + 40) = *(_OWORD *)v144;
      if ( a8 )
        v89 = *a8;
      else
        v89 = NullGuid;
      *(GUID *)(v82 + 64) = v89;
      *(_QWORD *)(v82 + 16) = v159;
      *(_DWORD *)(v82 + 8) = v173[288];
      *(_DWORD *)(v82 + 12) = v173[286];
      *(_DWORD *)(v82 + 56) = v173[163];
      *(_DWORD *)(v82 + 60) = v173[183];
      if ( !v52 )
        goto LABEL_208;
      if ( (v52 & 0x100) != 0 )
      {
        v90 = (unsigned __int16 *)(v82 + 80);
        v145 = v90;
        v91 = v165;
        v92 = (*(_WORD *)(v165 + 4200) + 15) & 0xFFF8;
        *v90 = v92;
        v90[1] = 16;
        v90[3] = *(_WORD *)(v91 + 4200);
        v90[2] = 0;
        v93 = v92 - *(_WORD *)(v91 + 4200) - 8;
        v94 = v90 + 4;
        memmove(v90 + 4, *(const void **)(v91 + 4192), *(unsigned __int16 *)(v91 + 4200));
        memset((char *)v94 + *(unsigned __int16 *)(v91 + 4200), 0, v93);
        *v88 |= 1u;
        v33 = v145;
        v32 = *v145 + 80;
        v132 = v32;
        v151 = v145;
        v82 = v148;
      }
      if ( (v52 & 8) != 0 )
      {
        v95 = (unsigned __int16 *)(v82 + v32);
        *(_DWORD *)v95 = 65560;
        *((_DWORD *)v95 + 1) = 0x100000;
        *(_OWORD *)(v95 + 4) = *a9;
        *v88 |= 1u;
        v32 += 24;
        v132 = v32;
        if ( v33 )
          v33[2] |= 1u;
        v33 = v95;
        v145 = v95;
        v151 = v95;
      }
      if ( (v52 & 2) != 0 )
      {
        v96 = (unsigned __int16 *)(v82 + v32);
        memmove(v96, Src, *(unsigned __int16 *)Src);
        *v88 |= 1u;
        v32 += *(unsigned __int16 *)Src;
        v132 = v32;
        if ( v33 )
          v33[2] |= 1u;
        v33 = v96;
        v145 = v96;
        v151 = v96;
      }
      if ( (v52 & 1) != 0 )
      {
        v97 = (unsigned __int16 *)(v82 + v32);
        *(_DWORD *)v97 = 196624;
        *((_DWORD *)v97 + 1) = 0x40000;
        SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
        v99 = 0;
        if ( SessionId != -1 )
          v99 = SessionId;
        *((_DWORD *)v97 + 2) = v99;
        *v88 |= 1u;
        v32 += 16;
        v132 = v32;
        if ( v33 )
          v33[2] |= 1u;
        v33 = v97;
        v145 = v97;
        v151 = v97;
      }
      if ( (v52 & 0x20) != 0 )
      {
        v100 = (unsigned __int16 *)(v82 + v32);
        *(_DWORD *)v100 = 851984;
        *((_DWORD *)v100 + 1) = 0x80000;
        *((_QWORD *)v100 + 1) = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[6] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
        *v88 |= 1u;
        v32 += 16;
        v132 = v32;
        if ( v33 )
          v33[2] |= 1u;
        v33 = v100;
        v145 = v100;
        v151 = v100;
      }
      if ( (v52 & 0x40) != 0 )
      {
        v83 = v82 + v32;
        *(_DWORD *)v83 = 655376;
        *(_DWORD *)(v83 + 4) = 0x80000;
        if ( (v128 & 4) != 0 )
        {
          v102 = v160;
        }
        else
        {
          v101 = KeGetCurrentPrcb();
          v102 = _InterlockedIncrement64((volatile signed __int64 *)v101->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v101->Number << 48);
          v160 = v102;
          v128 |= 4u;
          if ( v166 )
            *v166 = v102;
        }
        *(_QWORD *)(v83 + 8) = v102;
        *v88 |= 1u;
        v32 += 16;
        v132 = v32;
        if ( v33 )
          v33[2] |= 1u;
        v33 = (unsigned __int16 *)v83;
        v145 = (unsigned __int16 *)v83;
        v151 = (unsigned __int16 *)v83;
      }
      if ( (v52 & 4) == 0 )
        goto LABEL_208;
      v103 = (unsigned __int16 *)(v82 + v32);
      memmove(v103, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
      if ( *((_QWORD *)v103 + 1) && (v52 & 0x10) == 0 )
      {
        if ( v143 != EtwpHostSiloState )
          goto LABEL_204;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x41777445u);
        if ( !PoolWithTag )
          goto LABEL_204;
        KeInitializeApc(
          (_DWORD)PoolWithTag,
          (_DWORD)v173,
          0,
          (unsigned int)EtwpCrimsonStackWalkApc,
          0LL,
          (__int64)EtwpCrimsonStackWalkApc,
          0,
          v141);
        if ( !(unsigned __int8)KeInsertQueueApc(
                                 PoolWithTag,
                                 *((unsigned int *)v103 + 2),
                                 *((unsigned int *)v103 + 3),
                                 0LL) )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
LABEL_204:
          *((_QWORD *)v103 + 1) = 0LL;
        }
      }
      *v88 |= 1u;
      v32 += *(unsigned __int16 *)StackLookasideListEntry;
      v132 = v32;
      if ( v33 )
        v33[2] |= 1u;
      v33 = v103;
      v145 = v103;
      v151 = v103;
LABEL_208:
      v105 = Size_4;
      if ( Size_4 )
      {
        v106 = (unsigned __int16 *)(v82 + v32);
        v159 = v106;
        v107 = (Size_4 + 15) & 0xFFF8;
        *v106 = v107;
        *(_DWORD *)(v106 + 1) = 12;
        v106[3] = v105;
        v108 = v107 - v105 - 8;
        v133 = v108;
        v109 = v105;
        memmove(v106 + 4, v161, v105);
        memset((char *)v106 + v109 + 8, 0, v108);
        v110 = v145;
        *v88 |= 1u;
        v32 += *v106;
        v132 = v32;
        if ( v110 )
          v110[2] |= 1u;
        v33 = v106;
      }
      v111 = v136;
      v112 = v148;
      if ( v136 )
      {
        v113 = (unsigned __int16 *)(v148 + v32);
        v114 = (unsigned __int16)Size;
        v115 = (Size + 15) & 0xFFF8;
        *v113 = v115;
        *(_DWORD *)(v113 + 1) = 11;
        v113[3] = v114;
        v156 = v113 + 4;
        v167 = (char *)v113 + v114 + 8;
        memset(v167, 0, (unsigned __int16)(v115 - v114 - 8));
        *v88 |= 1u;
        v32 += *v113;
        v132 = v32;
        v111 = v136;
        if ( v33 )
          v33[2] |= 1u;
      }
      for ( i = 0; ; ++i )
      {
        while ( 1 )
        {
          v137 = i;
          if ( i >= a10 )
          {
            v122 = v150;
            if ( (*(_DWORD *)(v150 + 12) & 0x80000) != 0
              && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
            {
              EtwpSendTraceEvent(v150, &v168, v83);
            }
            if ( *(_QWORD *)(v122 + 1272) )
              EtwpInvokeEventCallback(v122, &v168, v152 + 40, 0LL);
            v27 = (__int64)v144;
            v22 = v143;
            v26 = v146;
            v28 = 1LL;
            v25 = 80LL;
            if ( v162 )
              *(_DWORD *)(v162 + 4LL * (v141 >> 5)) |= 1 << (v141 & 0x1F);
            goto LABEL_22;
          }
          v117 = *(unsigned int *)(v153 + 16LL * i + 8);
          Size = *(_DWORD *)(v153 + 16LL * i + 8);
          v118 = *(_QWORD **)(v153 + 16LL * i);
          if ( v140 )
            v83 = *(unsigned __int8 *)(v153 + 16LL * i + 12);
          else
            LOBYTE(v83) = 0;
          if ( (_BYTE)v83 )
            break;
          v121 = (void *)(v112 + v32);
          v155 = v121;
          v32 += v117;
          v132 = v32;
          if ( v32 > v54 )
            KeBugCheckEx(0x11Du, 5uLL, v32, v54, 0LL);
          memmove(v121, v118, v117);
          v111 = v136;
LABEL_231:
          ++i;
        }
        if ( (unsigned __int8)v83 != 1 )
        {
          if ( (unsigned __int8)v83 == 3 && (_DWORD)v117 == 8 )
            *(_QWORD *)(v112 + 16) = *v118;
          goto LABEL_231;
        }
        v119 = (char *)v156;
        if ( !v156 || (v120 = v117, v155 = (void *)v117, (char *)v156 + v117 > v167) || !v111 )
          KeBugCheckEx(0x11Du, 5uLL, v32, v54, 0LL);
        memmove(v156, v118, v117);
        v156 = &v119[v120];
        v111 = --v136;
      }
    }
    break;
  }
  if ( (v128 & 2) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v142 < 0 )
  {
    EtwpFailLogging(
      *((unsigned __int8 *)v144 + 4),
      *((_QWORD *)v144 + 1),
      v152,
      (unsigned int)v171,
      v130,
      v142,
      (__int64)v144,
      v134 < 2u);
  }
  else if ( LODWORD(v171[24]) )
  {
    v50 = (signed __int64 *)v171;
    v51 = LODWORD(v171[24]);
    do
    {
      EtwpReleaseTraceBuffer(v50 + 2);
      if ( CurrentIrql < 2u )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v22 + 448) + 8LL * *(unsigned int *)*v50),
          1u);
      v50 += 6;
      --v51;
    }
    while ( v51 );
  }
  if ( v135 )
    KeLeaveCriticalRegionThread((__int64)v158);
  v123 = (_SLIST_ENTRY *)Src;
  if ( Src )
  {
    v124 = KeGetCurrentPrcb();
    v125 = v124->PPLookasideList[8].P;
    ++v125->TotalFrees;
    if ( LOWORD(v125->ListHead.Alignment) < v125->Depth
      || (++v125->FreeMisses,
          v125 = v124->PPLookasideList[8].L,
          ++v125->TotalFrees,
          LOWORD(v125->ListHead.Alignment) < v125->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v125->ListHead, v123);
    }
    else
    {
      ++v125->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *, struct _KPRCB *, __int64, __int64))v125->FreeEx)(v123, v124, v28, v25);
    }
  }
  return (unsigned int)v142;
}
