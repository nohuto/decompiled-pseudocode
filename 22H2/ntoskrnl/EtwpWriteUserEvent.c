/*
 * XREFs of EtwpWriteUserEvent @ 0x140627FE0
 * Callers:
 *     NtTraceEvent @ 0x14025C4C0 (NtTraceEvent.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x14021BEF0 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x140220B40 (EtwpLevelKeywordEnabled.c)
 *     DecodeProviderTraits @ 0x14025CD84 (DecodeProviderTraits.c)
 *     EtwpReleaseTraceBuffer @ 0x14025D4A0 (EtwpReleaseTraceBuffer.c)
 *     EtwpIsEventNameFilterEnabled @ 0x14025ECE8 (EtwpIsEventNameFilterEnabled.c)
 *     EtwpCreateEventKey @ 0x14025ED04 (EtwpCreateEventKey.c)
 *     PsGetProcessStartKey @ 0x14025ED50 (PsGetProcessStartKey.c)
 *     PsGetCurrentProcessSessionId @ 0x14025EE20 (PsGetCurrentProcessSessionId.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14026D960 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     IoGetStackLimits @ 0x1402D0BB0 (IoGetStackLimits.c)
 *     EtwpReserveTraceBuffer @ 0x1402D0E80 (EtwpReserveTraceBuffer.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402DEA70 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpFailLogging @ 0x14036C474 (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14036C70C (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A5CD4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x1405A6B50 (EtwpGetStackLookasideListEntry.c)
 *     EtwpTraceLostEvent @ 0x1405AA714 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x1405AAAA8 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405AB5B8 (EtwpInvokeEventCallback.c)
 *     EtwpApplyEventNameFilter @ 0x1405ABA74 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyLevelKwFilter @ 0x1405ABEC8 (EtwpApplyLevelKwFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140654EBC (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x1406A4438 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409339B4 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x140940AAC (EtwpApplyStackWalkFilterOnUserEvent.c)
 */

__int64 __fastcall EtwpWriteUserEvent(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int16 a3,
        char a4,
        char a5,
        __int64 a6,
        _OWORD *a7,
        unsigned __int8 a8,
        __int64 a9,
        unsigned int a10,
        unsigned __int64 a11,
        __int64 a12,
        __int64 a13,
        __int16 a14,
        void *a15,
        unsigned __int64 *a16)
{
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // r15
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  unsigned __int16 *v26; // r10
  __int64 v27; // r8
  __int64 v28; // r9
  bool v29; // zf
  __int64 v30; // rcx
  char v31; // r12
  __int64 v32; // r14
  __int64 v33; // r13
  int v34; // ecx
  bool v35; // al
  int v36; // r11d
  _KPROCESS *Process; // rcx
  __int64 v38; // rcx
  int v39; // ecx
  unsigned int v40; // esi
  unsigned __int8 v41; // r8
  unsigned int v42; // r11d
  unsigned int v43; // r8d
  int v44; // edi
  unsigned int v45; // r15d
  int v46; // ecx
  __int64 v47; // rbx
  __int64 v48; // rcx
  int v49; // ecx
  char v50; // bl
  void *v51; // rsp
  void *v52; // rsp
  unsigned int v53; // r14d
  _OWORD *v54; // rbx
  unsigned int v55; // edx
  __int64 v56; // rax
  unsigned int v57; // r9d
  unsigned int v58; // edx
  unsigned __int8 v59; // di
  char v60; // al
  __int64 v61; // rsi
  __int64 v62; // r13
  __int64 v63; // r14
  unsigned int *v64; // r13
  signed int v65; // ecx
  unsigned __int16 *v66; // r14
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // r12
  int ReserveTraceBufferStatus; // ebx
  BOOLEAN v70; // al
  signed int v71; // ecx
  unsigned int v72; // esi
  _OWORD *v73; // rax
  __int128 v74; // xmm0
  unsigned int v75; // r13d
  __int64 v76; // r13
  __int16 v77; // si
  unsigned __int16 v78; // si
  unsigned __int64 v79; // rcx
  int v80; // ebx
  unsigned __int64 v81; // rbx
  __int16 v82; // r11
  __int16 v83; // r8
  unsigned __int64 v84; // rdx
  unsigned __int64 ProcessStartKey; // rax
  unsigned __int16 *v86; // rdx
  unsigned __int16 *v87; // r9
  unsigned __int64 v88; // rax
  unsigned __int16 *v89; // rbx
  unsigned __int16 *v90; // rsi
  unsigned __int16 *v91; // rbx
  unsigned __int16 *v92; // rdi
  unsigned int v93; // edx
  unsigned __int16 *v94; // rcx
  unsigned __int16 v95; // si
  unsigned __int16 v96; // si
  _WORD *v97; // rdi
  __int64 v98; // rbx
  unsigned __int16 *v99; // rcx
  unsigned __int16 *v100; // rbx
  __int64 v101; // rcx
  unsigned __int16 v102; // dx
  char *v103; // rdi
  unsigned int v104; // r14d
  unsigned int v105; // r11d
  unsigned __int64 v106; // r13
  size_t v107; // r8
  LARGE_INTEGER *v108; // rdx
  unsigned __int8 v109; // cl
  int v110; // ecx
  size_t v111; // rcx
  unsigned __int64 v112; // rbx
  unsigned int v113; // eax
  int v114; // ecx
  struct _KTHREAD *v115; // rdx
  unsigned int *v116; // r14
  signed __int64 *v117; // rbx
  __int64 v118; // rdi
  char v119; // [rsp+210h] [rbp-610h] BYREF
  char v120; // [rsp+640h] [rbp-1E0h] BYREF
  unsigned __int8 v121; // [rsp+820h] [rbp+0h]
  char v122; // [rsp+821h] [rbp+1h]
  int v123; // [rsp+824h] [rbp+4h]
  int v124; // [rsp+828h] [rbp+8h]
  signed int v125; // [rsp+82Ch] [rbp+Ch]
  unsigned __int8 v126; // [rsp+830h] [rbp+10h]
  unsigned __int16 v127; // [rsp+838h] [rbp+18h]
  __int64 v128; // [rsp+840h] [rbp+20h]
  unsigned __int16 v129[2]; // [rsp+848h] [rbp+28h] BYREF
  __int16 v130; // [rsp+84Ch] [rbp+2Ch]
  int v131; // [rsp+850h] [rbp+30h]
  __int64 v132; // [rsp+858h] [rbp+38h]
  unsigned __int16 v133; // [rsp+860h] [rbp+40h]
  unsigned __int64 v134; // [rsp+868h] [rbp+48h]
  __int64 v135; // [rsp+870h] [rbp+50h]
  __int64 v136; // [rsp+878h] [rbp+58h]
  unsigned __int16 *v137; // [rsp+880h] [rbp+60h]
  void *StackLookasideListEntry; // [rsp+888h] [rbp+68h] BYREF
  char PreviousMode; // [rsp+891h] [rbp+71h]
  unsigned int v141; // [rsp+894h] [rbp+74h]
  unsigned int v142; // [rsp+898h] [rbp+78h]
  unsigned int v143; // [rsp+89Ch] [rbp+7Ch]
  __int64 v144; // [rsp+8A0h] [rbp+80h]
  LARGE_INTEGER v145; // [rsp+8A8h] [rbp+88h] BYREF
  unsigned int v146; // [rsp+8B0h] [rbp+90h]
  unsigned int v147; // [rsp+8B4h] [rbp+94h]
  unsigned __int16 *v148; // [rsp+8B8h] [rbp+98h]
  __int64 v149; // [rsp+8C0h] [rbp+A0h]
  unsigned __int64 v150; // [rsp+8C8h] [rbp+A8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+8D0h] [rbp+B0h]
  void *v152; // [rsp+8D8h] [rbp+B8h]
  unsigned __int16 *v153; // [rsp+8E0h] [rbp+C0h]
  unsigned __int64 HighLimit; // [rsp+8E8h] [rbp+C8h] BYREF
  unsigned __int64 LowLimit; // [rsp+8F0h] [rbp+D0h] BYREF
  unsigned __int64 v156; // [rsp+8F8h] [rbp+D8h] BYREF
  unsigned __int64 v157; // [rsp+900h] [rbp+E0h] BYREF
  unsigned __int16 *v158; // [rsp+908h] [rbp+E8h] BYREF
  __int64 v159; // [rsp+910h] [rbp+F0h]
  void *v160; // [rsp+918h] [rbp+F8h]
  char *v161; // [rsp+920h] [rbp+100h]
  __int64 v162; // [rsp+928h] [rbp+108h]
  __int64 v163; // [rsp+930h] [rbp+110h]
  __int64 v164; // [rsp+938h] [rbp+118h]
  __int128 v165; // [rsp+940h] [rbp+120h] BYREF
  __int64 v166; // [rsp+950h] [rbp+130h]
  unsigned __int64 *v167; // [rsp+958h] [rbp+138h]
  unsigned __int64 v168; // [rsp+960h] [rbp+140h]
  _OWORD v169[25]; // [rsp+970h] [rbp+150h] BYREF
  _OWORD Src[5]; // [rsp+B00h] [rbp+2E0h] BYREF

  v133 = a3;
  v121 = a2;
  v17 = a1;
  v132 = a1;
  v18 = a13;
  v163 = a1;
  v19 = a6;
  v128 = a6;
  v164 = a6;
  v134 = a11;
  v136 = a12;
  v160 = a15;
  v167 = a16;
  v125 = 0;
  memset(v169, 0, 0x188uLL);
  v141 = 0;
  memset(Src, 0, sizeof(Src));
  StackLookasideListEntry = 0LL;
  v152 = 0LL;
  v129[0] = 0;
  v158 = 0LL;
  v150 = 0LL;
  v159 = *((_QWORD *)PsGetCurrentServerSiloGlobals(v21, v20) + 108);
  v130 = a14 & 0x200;
  if ( a11 )
  {
    if ( a10 )
      goto LABEL_5;
    return 3221225485LL;
  }
  if ( a10 )
    return 3221225485LL;
LABEL_5:
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a13 )
    v18 = v17;
  v149 = v18;
  v122 = 0;
  v23 = *(_QWORD *)(v17 + 392);
  v135 = v23;
  v162 = v23;
  if ( a16 && *a16 )
  {
    v150 = *a16;
    v122 = 16;
  }
  DecodeProviderTraits((unsigned __int16 *)v160, (a14 & 0x400) != 0, v129, &v158);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(v24) = ~a4 & v121;
  v121 = v24;
  v25 = v134;
LABEL_13:
  v26 = 0LL;
  v27 = v136;
  do
  {
    while ( 1 )
    {
      v28 = a9;
      while ( 1 )
      {
LABEL_15:
        v29 = !_BitScanForward((unsigned int *)&v30, (unsigned __int8)v24);
        v141 = v30;
        if ( v29 )
          goto LABEL_216;
        v144 = 1LL;
        v165 = 0LL;
        v166 = 0LL;
        v145.QuadPart = (LONGLONG)v26;
        v123 = 80;
        v142 = (unsigned int)v26;
        v31 = 0;
        v127 = (unsigned __int16)v26;
        v131 = (int)v26;
        v148 = v26;
        v161 = (char *)v26;
        v121 = (v24 - 1) & v24;
        v126 = v121;
        v32 = (unsigned int)v30;
        v33 = v18 + 32 * (v30 + 4);
        if ( !v27
          || (v34 = *(_DWORD *)(v27 + 4LL * (*(unsigned __int16 *)(v33 + 6) >> 5)),
              LOBYTE(v24) = v121,
              !_bittest(&v34, *(_WORD *)(v33 + 6) & 0x1F)) )
        {
          v35 = EtwpLevelKeywordEnabled(v33, a8, v28);
          v24 = v121;
          v27 = v136;
          if ( v35 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( (a5 & 2) == 0 && SLODWORD(Process[1].DirectoryTableBase) >= 0 )
              break;
            if ( (*(_DWORD *)(v33 + 8) & 0x200) == 0 )
              break;
          }
        }
        v19 = v128;
        v17 = v132;
      }
      v38 = *(_QWORD *)(v18 + 384);
      if ( v38
        && ((v39 = *(_DWORD *)(104 * v32 + v38), (v39 & 0x80000200) == 0x80000200) || (v39 & 0x80000100) == 0x80000100) )
      {
        v40 = v141;
        if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilterOnUserEvent(v18, v141, v133, v128, v36, v25) )
          goto LABEL_33;
        v28 = a9;
      }
      else
      {
        v40 = v141;
      }
      if ( v130
        && EtwpIsEventNameFilterEnabled(v18, v40, a8, v28, 0)
        && !EtwpApplyEventNameFilter(v18, v40, v42, v25, 1, 0, v41, v28, 0) )
      {
LABEL_33:
        v19 = v128;
        LOBYTE(v24) = v121;
        v17 = v132;
        goto LABEL_13;
      }
      v43 = 0;
      v44 = 0;
      if ( a7 )
      {
        v45 = 104;
        v123 = 104;
        v44 = 8;
      }
      else
      {
        v45 = v123;
      }
      v46 = *(_DWORD *)(v33 + 8);
      if ( (v46 & 0xFFFFFF9F) != 0 )
      {
        if ( (v46 & 0x800) != 0 && v159 && v159 != EtwpHostSiloState )
        {
          v44 |= 0x80u;
          v45 += (*(unsigned __int16 *)(v159 + 4200) + 15) & 0xFFFFFFF8;
          v123 = v45;
        }
        if ( (v46 & 1) != 0 )
        {
          if ( (v122 & 2) == 0 )
          {
            EtwpGetSidExtendedHeaderItem(Src, v24, 0LL, v28);
            v122 |= 2u;
            v46 = *(_DWORD *)(v33 + 8);
          }
          v44 |= 2u;
          v45 += LOWORD(Src[0]);
          v123 = v45;
        }
        if ( (v46 & 2) != 0 )
        {
          v44 |= 1u;
          v45 += 16;
          v123 = v45;
        }
        if ( (v46 & 0x80u) != 0 )
        {
          v44 |= 0x20u;
          v45 += 16;
          v123 = v45;
        }
        if ( (v46 & 0x100) != 0 )
        {
          v44 |= 0x40u;
          v45 += 16;
          v123 = v45;
        }
        if ( (v46 & 4) != 0 )
        {
          if ( (v47 = v149, (v48 = *(_QWORD *)(v149 + 384)) == 0)
            || (v49 = *(_DWORD *)(104 * v32 + v48), (v49 & 0x80001000) != 0x80001000)
            && (v49 & 0x80002000) != 0x80002000
            && (v49 & 0x80004000) != 0x80004000
            || EtwpApplyLevelKwFilter(v149, v40, a8, a9, 1)
            && (unsigned __int8)EtwpApplyStackWalkFilterOnUserEvent(v128, v47, v40)
            && EtwpApplyEventNameFilter(v47, v40, a10, v134, 1, 0, a8, a9, 1) )
          {
            v50 = v122;
            if ( (v122 & 1) == 0 )
            {
              StackLookasideListEntry = EtwpGetStackLookasideListEntry();
              if ( StackLookasideListEntry )
              {
                EtwpGetStackExtendedHeaderItem(
                  (__int64)CurrentThread,
                  0,
                  0x100u,
                  (__int64)&StackLookasideListEntry,
                  0,
                  0LL);
                v122 = (StackLookasideListEntry != 0LL ? 8 : 0) | v50 & 0xF7;
              }
              else
              {
                HighLimit = 0LL;
                LowLimit = 0LL;
                IoGetStackLimits(&LowLimit, &HighLimit);
                if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                {
                  v51 = alloca(1552LL);
                  StackLookasideListEntry = &v119;
                  EtwpGetStackExtendedHeaderItem(
                    (__int64)CurrentThread,
                    0,
                    0xC0u,
                    (__int64)&StackLookasideListEntry,
                    0,
                    0LL);
                }
              }
              v122 |= 1u;
            }
            if ( StackLookasideListEntry )
            {
              v44 |= 4u;
              v45 += *(unsigned __int16 *)StackLookasideListEntry;
              v123 = v45;
            }
          }
        }
        if ( (*(_DWORD *)(v33 + 8) & 8) != 0 )
        {
          if ( (v122 & 4) == 0 )
          {
            v156 = 0LL;
            v157 = 0LL;
            IoGetStackLimits(&v157, &v156);
            if ( (unsigned __int64)&v156 - v157 > 0x1E0 )
            {
              v52 = alloca(480LL);
              v152 = &v120;
              EtwpGetPsmKeyExtendedHeaderItem();
            }
            v122 |= 4u;
          }
          if ( v152 )
          {
            v44 |= 0x10u;
            v45 += *(unsigned __int16 *)v152;
            v123 = v45;
          }
        }
        v43 = 0;
      }
      v53 = *(unsigned __int16 *)(v33 + 6);
      v143 = v53;
      v54 = &v169[3 * LODWORD(v169[24])];
      v55 = a10;
      if ( a10 )
      {
        v146 = 0;
        if ( KeGetCurrentThread()->PreviousMode )
        {
          v56 = 16LL * a10;
          if ( v56 )
          {
            if ( (v134 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v134 + v56 > 0x7FFFFFFF0000LL || v134 + v56 < v134 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        v45 = v123;
        while ( 1 )
        {
          v146 = v43;
          if ( v43 >= v55 )
            break;
          v57 = v45;
          v142 = *(_DWORD *)(v134 + 16LL * v43 + 8);
          v58 = v142;
          if ( v142 > 0xFFFF )
          {
            v125 = -2147483643;
            v23 = v135;
            v19 = v128;
            v59 = v121;
            v17 = v132;
            goto LABEL_217;
          }
          if ( v130 )
          {
            v60 = *(_BYTE *)(v134 + 16LL * v43 + 12);
            v58 = v142;
          }
          else
          {
            v60 = 0;
          }
          if ( v60 )
          {
            if ( v60 == 1 )
            {
              v127 += v58;
              ++v131;
            }
            v45 = v123;
          }
          else
          {
            v45 = v58 + v123;
            v123 += v58;
          }
          if ( v45 < v57 )
          {
            v125 = -2147483643;
            v23 = v135;
            v19 = v128;
            v59 = v121;
            v17 = v132;
            goto LABEL_217;
          }
          ++v43;
          v55 = a10;
        }
        v53 = v143;
      }
      if ( v131 )
      {
        v45 += (v127 + 15) & 0xFFFFFFF8;
        v123 = v45;
      }
      if ( v129[0] )
      {
        v45 += (v129[0] + 15) & 0xFFFFFFF8;
        v123 = v45;
      }
      *((_DWORD *)v54 + 10) = v45;
      v61 = 8LL * v53;
      v62 = v135;
      if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v135 + 448) + v61), 1u) )
      {
        if ( v53 >= *(_DWORD *)(v62 + 16) )
        {
          v63 = 1LL;
        }
        else
        {
          _mm_lfence();
          v63 = *(_QWORD *)(v61 + *(_QWORD *)(v62 + 456));
          v45 = v123;
        }
        v144 = v63;
        v31 = 1;
        v53 = v143;
      }
      v64 = (unsigned int *)v144;
      if ( (v144 & 1) != 0 )
        break;
      v66 = 0LL;
      v67 = EtwpReserveTraceBuffer((unsigned int *)v144, v45, (__int64)&v165, &v145, 0);
      v68 = v67;
      v168 = v67;
      if ( v67 )
      {
        *(_QWORD *)v54 = v64;
        *((_QWORD *)v54 + 1) = v67;
        v54[1] = v165;
        *((_QWORD *)v54 + 4) = v166;
        ++LODWORD(v169[24]);
        v147 = 0;
        v72 = 80;
        v124 = 80;
        v137 = 0LL;
        v73 = (_OWORD *)v128;
        *(_OWORD *)v68 = *(_OWORD *)v128;
        *(_OWORD *)(v68 + 16) = v73[1];
        *(_OWORD *)(v68 + 32) = v73[2];
        *(_OWORD *)(v68 + 48) = v73[3];
        *(_OWORD *)(v68 + 64) = v73[4];
        if ( v158 )
        {
          v74 = *(_OWORD *)v158;
          *(_WORD *)(v68 + 4) |= 0x80u;
        }
        else
        {
          v74 = *(_OWORD *)(v132 + 40);
        }
        *(_OWORD *)(v68 + 24) = v74;
        *(_DWORD *)v68 = v45 | v64[v133 + 5];
        v75 = 80;
        if ( v44 )
        {
          if ( (v44 & 0x80u) != 0 )
          {
            v66 = (unsigned __int16 *)(v68 + 80);
            v76 = v159;
            v77 = (*(_WORD *)(v159 + 4200) + 15) & 0xFFF8;
            *(_WORD *)(v68 + 80) = v77;
            *(_WORD *)(v68 + 82) = 16;
            *(_WORD *)(v68 + 86) = *(_WORD *)(v76 + 4200);
            *(_WORD *)(v68 + 84) &= ~1u;
            *(_WORD *)(v68 + 84) &= 1u;
            v78 = v77 - *(_WORD *)(v76 + 4200) - 8;
            memmove((void *)(v68 + 88), *(const void **)(v76 + 4192), *(unsigned __int16 *)(v76 + 4200));
            memset((void *)(v68 + 88 + *(unsigned __int16 *)(v76 + 4200)), 0, v78);
            *(_WORD *)(v68 + 4) |= 1u;
            v72 = *(unsigned __int16 *)(v68 + 80) + 80;
            v124 = v72;
            v137 = (unsigned __int16 *)(v68 + 80);
            v75 = v72;
          }
          if ( (v44 & 8) != 0 )
          {
            v79 = v68 + v75;
            *(_DWORD *)v79 = 65560;
            *(_WORD *)(v79 + 6) = 16;
            *(_WORD *)(v79 + 4) &= ~1u;
            *(_WORD *)(v79 + 4) &= 1u;
            *(_OWORD *)(v79 + 8) = *a7;
            *(_WORD *)(v68 + 4) |= 1u;
            v72 = v75 + 24;
            v124 = v75 + 24;
            if ( v66 )
              v66[2] |= 1u;
            v66 = (unsigned __int16 *)(v68 + v75);
            v137 = v66;
            v75 += 24;
          }
          if ( (v44 & 2) != 0 )
          {
            v153 = (unsigned __int16 *)(v68 + v75);
            v80 = LOWORD(Src[0]);
            memmove(v153, Src, LOWORD(Src[0]));
            *(_WORD *)(v68 + 4) |= 1u;
            v72 = v80 + v75;
            v124 = v80 + v75;
            if ( v66 )
              v66[2] |= 1u;
            v66 = v153;
            v137 = v153;
            v75 += v80;
          }
          if ( (v44 & 1) != 0 )
          {
            v81 = v68 + v75;
            *(_DWORD *)v81 = 196624;
            *(_WORD *)(v81 + 6) = 4;
            *(_WORD *)(v81 + 4) &= ~1u;
            *(_WORD *)(v81 + 4) &= 1u;
            *(_DWORD *)(v81 + 8) = PsGetCurrentProcessSessionId();
            *(_WORD *)(v68 + 4) |= 1u;
            v72 = v75 + 16;
            v124 = v75 + 16;
            if ( v66 )
              v66[2] |= 1u;
            v66 = (unsigned __int16 *)(v68 + v75);
            v137 = v66;
            v75 += 16;
          }
          v82 = 8;
          v83 = -2;
          if ( (v44 & 0x20) != 0 )
          {
            v84 = v68 + v75;
            *(_DWORD *)v84 = 851984;
            *(_WORD *)(v84 + 6) = 8;
            *(_WORD *)(v84 + 4) &= ~1u;
            *(_WORD *)(v84 + 4) &= 1u;
            ProcessStartKey = PsGetProcessStartKey((__int64)KeGetCurrentThread()->ApcState.Process);
            *((_QWORD *)v86 + 1) = ProcessStartKey;
            *(_WORD *)(v68 + 4) |= 1u;
            v72 = v75 + 16;
            v124 = v75 + 16;
            if ( v66 )
              v66[2] |= 1u;
            v66 = v86;
            v137 = v86;
            v75 += 16;
            v45 = v123;
          }
          if ( (v44 & 0x40) != 0 )
          {
            v87 = (unsigned __int16 *)(v68 + v75);
            *(_DWORD *)v87 = 655376;
            v87[3] = v82;
            v87[2] &= v83;
            v87[2] &= 1u;
            if ( (v122 & 0x10) != 0 || (EtwpCreateEventKey(&v150), v122 |= 0x10u, !v167) )
            {
              v88 = v150;
            }
            else
            {
              v88 = v150;
              *v167 = v150;
            }
            *((_QWORD *)v87 + 1) = v88;
            *(_WORD *)(v68 + 4) |= 1u;
            v72 = v75 + 16;
            v124 = v75 + 16;
            if ( v66 )
              v66[2] |= 1u;
            v66 = v87;
            v137 = v87;
            v75 += 16;
          }
          if ( (v44 & 4) != 0 )
          {
            v89 = (unsigned __int16 *)(v68 + v75);
            v90 = (unsigned __int16 *)StackLookasideListEntry;
            memmove(v89, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
            *(_WORD *)(v68 + 4) |= 1u;
            v72 = v75 + *v90;
            v75 = v72;
            v124 = v72;
            if ( v66 )
              v66[2] |= 1u;
            v66 = v89;
            v137 = v89;
          }
          if ( (v44 & 0x10) != 0 )
          {
            v91 = (unsigned __int16 *)(v68 + v75);
            v92 = (unsigned __int16 *)v152;
            memmove(v91, v152, *(unsigned __int16 *)v152);
            *(_WORD *)(v68 + 4) |= 1u;
            v72 = v75 + *v92;
            v75 = v72;
            v124 = v72;
            if ( v66 )
              v66[2] |= 1u;
            v66 = v91;
            v137 = v91;
          }
        }
        v93 = v129[0];
        if ( v129[0] )
        {
          v94 = (unsigned __int16 *)(v68 + v75);
          v153 = v94;
          v95 = (v129[0] + 15) & 0xFFF8;
          *v94 = v95;
          v94[1] = 12;
          v94[3] = v93;
          v94[2] &= ~1u;
          v94[2] &= 1u;
          v96 = v95 - v93 - 8;
          v97 = v94 + 4;
          v98 = v93;
          memmove(v94 + 4, v160, v93);
          memset((char *)v97 + v98, 0, v96);
          *(_WORD *)(v68 + 4) |= 1u;
          v99 = v153;
          v72 = v75 + *v153;
          v75 = v72;
          v124 = v72;
          if ( v66 )
            v66[2] |= 1u;
          v66 = v99;
          v137 = v99;
        }
        if ( v131 )
        {
          v100 = (unsigned __int16 *)(v68 + v75);
          v101 = v127;
          v102 = (v127 + 15) & 0xFFF8;
          *v100 = v102;
          v100[1] = 11;
          v100[3] = v101;
          v100[2] &= ~1u;
          v100[2] &= 1u;
          v103 = (char *)(v100 + 4);
          v148 = v100 + 4;
          v161 = (char *)v100 + v101 + 8;
          memset(v161, 0, (unsigned __int16)(v102 - v101 - 8));
          *(_WORD *)(v68 + 4) |= 1u;
          v72 = v75 + *v100;
          v124 = v72;
          if ( v66 )
            v66[2] |= 1u;
        }
        else
        {
          v103 = (char *)v148;
        }
        v26 = 0LL;
        v104 = 0;
        v147 = 0;
        v105 = a10;
        v106 = v134;
        while ( v104 < v105 )
        {
          v107 = *(unsigned int *)(v106 + 16LL * v104 + 8);
          v108 = *(LARGE_INTEGER **)(v106 + 16LL * v104);
          if ( v130 )
          {
            v109 = *(_BYTE *)(v106 + 16LL * v104 + 12);
            v45 = v123;
            v103 = (char *)v148;
            v72 = v124;
          }
          else
          {
            v109 = 0;
          }
          if ( v109 )
          {
            v110 = v109 - 1;
            if ( v110 )
            {
              if ( v110 == 2 )
              {
                if ( (_DWORD)v107 == 8 )
                {
                  if ( (unsigned __int64)&v108[1] > 0x7FFFFFFF0000LL || &v108[1] < v108 )
                    MEMORY[0x7FFFFFFF0000] = 0;
                  v145 = *v108;
                }
                v147 = ++v104;
              }
              else
              {
                v147 = ++v104;
              }
            }
            else
            {
              if ( !v103 )
                goto LABEL_206;
              v111 = *(unsigned int *)(v106 + 16LL * v104 + 8);
              v112 = (unsigned __int64)&v103[v107];
              if ( &v103[v107] < v103 || v112 > (unsigned __int64)v161 || !v131 )
                goto LABEL_206;
              if ( (_DWORD)v107
                && ((unsigned __int64)v108 + v107 > 0x7FFFFFFF0000LL || (LARGE_INTEGER *)((char *)v108 + v107) < v108) )
              {
                MEMORY[0x7FFFFFFF0000] = 0;
              }
              memmove(v103, v108, v111);
              v103 = (char *)v112;
              v148 = (unsigned __int16 *)v112;
              --v131;
              v26 = 0LL;
              v105 = a10;
              v147 = ++v104;
            }
          }
          else
          {
            v113 = v107 + v72;
            if ( (unsigned int)v107 + v72 < v72 )
            {
              v124 = -1;
              v114 = -1073741675;
              v113 = -1;
            }
            else
            {
              v124 = v107 + v72;
              v114 = 0;
            }
            if ( v114 || v113 > v45 )
            {
LABEL_206:
              v125 = -1073741820;
              *(_DWORD *)v68 = v45 | *(_DWORD *)(v144 + 28);
              *(LARGE_INTEGER *)(v68 + 16) = v145;
              v23 = v135;
              v19 = v128;
              v59 = v121;
              v17 = v132;
              goto LABEL_217;
            }
            PreviousMode = KeGetCurrentThread()->PreviousMode;
            if ( PreviousMode
              && (_DWORD)v107
              && ((unsigned __int64)v108 + v107 > 0x7FFFFFFF0000LL || (LARGE_INTEGER *)((char *)v108 + v107) < v108) )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            memmove((void *)(v68 + v72), v108, v107);
            v45 = v123;
            v103 = (char *)v148;
            v72 = v124;
            v26 = 0LL;
            v105 = a10;
            v147 = ++v104;
          }
        }
        v27 = v136;
        if ( v136 )
          *(_DWORD *)(v136 + 4LL * (v143 >> 5)) |= 1 << (v143 & 0x1F);
        *(LARGE_INTEGER *)(v68 + 16) = v145;
        v115 = CurrentThread;
        *(_DWORD *)(v68 + 56) = CurrentThread->SchedulerApc.SpareLong0;
        *(_DWORD *)(v68 + 60) = v115->UserTime;
        *(_DWORD *)(v68 + 8) = v115[1].CurrentRunTime;
        *(_DWORD *)(v68 + 12) = v115[1].CycleTime;
        v116 = (unsigned int *)v144;
        if ( (*(_DWORD *)(v144 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
        {
          EtwpSendTraceEvent(v144, (__int64)&v165);
          v27 = v136;
          v26 = 0LL;
        }
        v25 = v134;
        v23 = v135;
        v18 = v149;
        LOBYTE(v24) = v121;
        v28 = a9;
        v17 = v132;
        if ( !*((_QWORD *)v116 + 159) )
        {
          v19 = v128;
          goto LABEL_15;
        }
        EtwpInvokeEventCallback((__int64)v116, (__int64 *)&v165, v132 + 40);
        v19 = v128;
        LOBYTE(v24) = v121;
        goto LABEL_13;
      }
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus((__int64)v64, v45);
      v70 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT);
      v19 = v128;
      v17 = v132;
      if ( v70 )
        EtwpTraceLostEvent(
          (_QWORD *)(v132 + 40),
          (__int16 *)(v128 + 40),
          (unsigned __int16 *)v64 + 76,
          ReserveTraceBufferStatus);
      v71 = v125;
      if ( v125 >= 0 )
      {
        if ( (v64[3] & 0x8000000) == 0 )
          v71 = ReserveTraceBufferStatus;
        v125 = v71;
      }
      v23 = v135;
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v135 + 448) + v61), 1u);
      v29 = ReserveTraceBufferStatus == -1073741675;
      v25 = v134;
      v18 = v149;
      LOBYTE(v24) = v121;
      v27 = v136;
      v26 = 0LL;
      if ( v29 )
      {
        v125 = -1073741675;
        v59 = v121;
        goto LABEL_217;
      }
    }
    v23 = v135;
    if ( v31 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v135 + 448) + v61), 1u);
    v29 = v53 == 3;
    v25 = v134;
    v18 = v149;
    v19 = v128;
    LOBYTE(v24) = v121;
    v17 = v132;
    v27 = v136;
    v26 = 0LL;
  }
  while ( !v29 );
  v65 = -1073741058;
  if ( !*(_DWORD *)(v23 + 4068) )
    v65 = -1073741816;
  v125 = v65;
LABEL_216:
  v59 = v121;
LABEL_217:
  if ( (v122 & 8) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v125 < 0 )
  {
    EtwpFailLogging(a8, a9, v17, (__int64)v169, v59, v125, v19 + 40, 1);
  }
  else if ( LODWORD(v169[24]) )
  {
    v117 = (signed __int64 *)v169;
    v118 = LODWORD(v169[24]);
    do
    {
      EtwpReleaseTraceBuffer(v117 + 2);
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v23 + 448) + 8LL * *(unsigned int *)*v117),
        1u);
      v117 += 6;
      --v118;
    }
    while ( v118 );
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return (unsigned int)v125;
}
