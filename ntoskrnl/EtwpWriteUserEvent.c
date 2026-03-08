/*
 * XREFs of EtwpWriteUserEvent @ 0x1406AA640
 * Callers:
 *     NtTraceEvent @ 0x140230D30 (NtTraceEvent.c)
 * Callees:
 *     DecodeProviderTraits @ 0x1402315FC (DecodeProviderTraits.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402331B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpIsEventNameFilterEnabled @ 0x14023389C (EtwpIsEventNameFilterEnabled.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14028DD10 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     PsGetProcessStartKey @ 0x1402993E0 (PsGetProcessStartKey.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     EtwpCreateEventKey @ 0x1402DFEF0 (EtwpCreateEventKey.c)
 *     EtwpFailLogging @ 0x1402FABEC (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1402FF40C (EtwpGetReserveTraceBufferStatus.c)
 *     IoGetStackLimits @ 0x1403129C0 (IoGetStackLimits.c)
 *     EtwpReserveTraceBuffer @ 0x1403151E0 (EtwpReserveTraceBuffer.c)
 *     PsGetCurrentProcessSessionId @ 0x140343AA0 (PsGetCurrentProcessSessionId.c)
 *     EtwpSendTraceEvent @ 0x14039D2E8 (EtwpSendTraceEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpTraceLostEventOld @ 0x14040C2E0 (EtwpTraceLostEventOld.c)
 *     Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage @ 0x14040C8BC (Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage.c)
 *     EtwpFailLoggingOld @ 0x14040C914 (EtwpFailLoggingOld.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpGetStackLookasideListEntry @ 0x140460460 (EtwpGetStackLookasideListEntry.c)
 *     EtwpDereferenceStackEntry @ 0x140460D12 (EtwpDereferenceStackEntry.c)
 *     EtwpApplyEventNameFilter @ 0x140462256 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyLevelKwFilter @ 0x1404626B2 (EtwpApplyLevelKwFilter.c)
 *     EtwpTraceLostEvent @ 0x1405F9F94 (EtwpTraceLostEvent.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405FD72C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpInvokeEventCallback @ 0x1405FEBA4 (EtwpInvokeEventCallback.c)
 *     EtwpGetCrimsonStackKey @ 0x1405FF81C (EtwpGetCrimsonStackKey.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1406D6370 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x140793FCC (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409E4364 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x1409F2310 (EtwpApplyStackWalkFilterOnUserEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpWriteUserEvent(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int16 a3,
        char a4,
        int a5,
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
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v22; // r14
  unsigned int v23; // r11d
  __int64 v24; // r10
  __int64 v25; // r9
  bool v26; // zf
  __int64 v27; // rdx
  __int64 v28; // r13
  char v29; // bl
  __int64 v30; // r8
  __int64 v31; // r15
  int v32; // ecx
  unsigned __int8 v33; // al
  int v34; // edx
  _KPROCESS *Process; // rcx
  __int64 v36; // rcx
  int v37; // ecx
  bool v38; // al
  unsigned __int64 v39; // rsi
  unsigned int v40; // edi
  unsigned __int8 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // r11d
  __int64 v44; // rax
  __int64 v45; // rsi
  int v46; // ecx
  int v47; // ebx
  unsigned int v48; // r14d
  int v49; // ecx
  __int64 v50; // rdx
  int v51; // edx
  bool v52; // al
  ULONG v53; // esi
  void *v54; // rsp
  struct _SLIST_ENTRY *v55; // rdi
  void *v56; // rsp
  _OWORD *v57; // rdi
  unsigned int v58; // r15d
  __int64 v59; // rax
  unsigned int v60; // r9d
  unsigned int v61; // r10d
  unsigned int v62; // r8d
  char v63; // al
  PSLIST_ENTRY v64; // r13
  __int64 v65; // r15
  unsigned int v66; // edi
  __int64 v67; // rsi
  int ReserveTraceBufferStatus; // ebx
  int v69; // ecx
  __int64 v70; // rsi
  unsigned __int16 *v71; // r15
  _OWORD *v72; // rax
  __int128 v73; // xmm0
  struct _LIST_ENTRY *v74; // rcx
  __int16 v75; // si
  unsigned __int16 v76; // si
  __int64 v77; // rdx
  int v78; // edi
  int v79; // ecx
  int v80; // edi
  __int64 v81; // rsi
  unsigned int v82; // ecx
  __int16 v83; // r11
  __int64 v84; // r8
  unsigned __int64 ProcessStartKey; // rax
  unsigned __int16 *v86; // r8
  int v87; // edx
  __int64 v88; // r9
  unsigned __int64 v89; // rax
  unsigned __int16 *v90; // rdi
  unsigned int v91; // ecx
  __int64 v92; // rdx
  unsigned __int16 *v93; // rbx
  unsigned __int16 *v94; // rdi
  unsigned int v95; // ecx
  unsigned __int16 *v96; // r13
  unsigned __int16 v97; // si
  unsigned __int16 v98; // si
  __int64 v99; // rbx
  unsigned __int16 *v100; // rbx
  __int64 v101; // rcx
  unsigned __int16 v102; // dx
  unsigned __int16 *v103; // rdi
  unsigned int v104; // r15d
  size_t v105; // r8
  __int64 *v106; // rdx
  unsigned __int8 v107; // cl
  int v108; // ecx
  __int64 v109; // rbx
  void *v110; // r9
  unsigned int v111; // eax
  struct _KTHREAD *v112; // r8
  __int64 v113; // r15
  __int64 v114; // r8
  signed __int64 *v115; // rdx
  signed __int64 v116; // rax
  signed __int64 v117; // rtt
  int IsEnabledDeviceUsage; // eax
  int v119; // ecx
  __int16 *v120; // rax
  char v121; // [rsp+220h] [rbp-610h] BYREF
  char v122; // [rsp+650h] [rbp-1E0h] BYREF
  char v123; // [rsp+830h] [rbp+0h]
  unsigned __int8 v124; // [rsp+838h] [rbp+8h]
  int v125; // [rsp+840h] [rbp+10h]
  unsigned int v126; // [rsp+844h] [rbp+14h]
  int v127; // [rsp+848h] [rbp+18h]
  unsigned int v128; // [rsp+84Ch] [rbp+1Ch]
  unsigned __int16 v129; // [rsp+850h] [rbp+20h]
  unsigned __int64 v130; // [rsp+858h] [rbp+28h]
  int v131; // [rsp+860h] [rbp+30h]
  unsigned __int16 v132; // [rsp+864h] [rbp+34h] BYREF
  __int16 v133; // [rsp+868h] [rbp+38h]
  __int64 v134; // [rsp+870h] [rbp+40h]
  unsigned __int16 v135; // [rsp+878h] [rbp+48h]
  void *StackLookasideListEntry; // [rsp+880h] [rbp+50h] BYREF
  unsigned __int16 *v137; // [rsp+888h] [rbp+58h]
  __int64 v138; // [rsp+890h] [rbp+60h]
  unsigned int v139; // [rsp+898h] [rbp+68h]
  char PreviousMode; // [rsp+89Dh] [rbp+6Dh]
  unsigned int v142; // [rsp+8A0h] [rbp+70h]
  __int64 v143; // [rsp+8A8h] [rbp+78h]
  __int64 v144; // [rsp+8B0h] [rbp+80h]
  __int64 v145; // [rsp+8B8h] [rbp+88h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+8C0h] [rbp+90h] BYREF
  unsigned int v147; // [rsp+8C8h] [rbp+98h]
  unsigned int v148; // [rsp+8CCh] [rbp+9Ch]
  __int64 v149; // [rsp+8D0h] [rbp+A0h]
  unsigned __int16 *v150; // [rsp+8D8h] [rbp+A8h]
  unsigned __int64 v151; // [rsp+8E0h] [rbp+B0h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+8E8h] [rbp+B8h]
  void *v153; // [rsp+8F0h] [rbp+C0h]
  __int64 v154; // [rsp+8F8h] [rbp+C8h]
  struct _KTHREAD *CurrentThread; // [rsp+900h] [rbp+D0h]
  unsigned __int64 HighLimit; // [rsp+908h] [rbp+D8h] BYREF
  unsigned __int64 LowLimit; // [rsp+910h] [rbp+E0h] BYREF
  unsigned __int64 v158; // [rsp+918h] [rbp+E8h] BYREF
  unsigned __int64 v159; // [rsp+920h] [rbp+F0h] BYREF
  __int64 v160; // [rsp+928h] [rbp+F8h]
  unsigned __int16 *v161; // [rsp+930h] [rbp+100h] BYREF
  void *v162; // [rsp+938h] [rbp+108h]
  char *v163; // [rsp+940h] [rbp+110h]
  __int64 v164; // [rsp+948h] [rbp+118h]
  __int64 v165; // [rsp+950h] [rbp+120h]
  unsigned __int64 v166; // [rsp+958h] [rbp+128h]
  __int128 v167; // [rsp+960h] [rbp+130h] BYREF
  __int64 v168; // [rsp+970h] [rbp+140h]
  unsigned __int64 *v169; // [rsp+978h] [rbp+148h]
  __int64 v170; // [rsp+980h] [rbp+150h]
  __int64 v171; // [rsp+988h] [rbp+158h]
  unsigned __int8 *v172; // [rsp+990h] [rbp+160h]
  _OWORD v173[25]; // [rsp+9A0h] [rbp+170h] BYREF
  _OWORD Src[5]; // [rsp+B30h] [rbp+300h] BYREF

  v135 = a3;
  v17 = a1;
  v134 = a1;
  v18 = a13;
  v165 = a1;
  v124 = a2;
  v149 = a6;
  v171 = a6;
  v19 = a11;
  v130 = a11;
  v166 = a11;
  v154 = a12;
  v162 = a15;
  v169 = a16;
  LODWORD(v20) = 0;
  v127 = 0;
  memset(v173, 0, 0x188uLL);
  v128 = 0;
  memset(Src, 0, sizeof(Src));
  StackLookasideListEntry = 0LL;
  v153 = 0LL;
  v132 = 0;
  v161 = 0LL;
  v151 = 0LL;
  Flink = PsGetCurrentServerSiloGlobals()[54].Flink;
  v133 = a14 & 0x200;
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
  v138 = v18;
  v123 = 0;
  v22 = *(_QWORD *)(v17 + 392);
  v143 = v22;
  v164 = v22;
  if ( a16 && *a16 )
  {
    v151 = *a16;
    v123 = 16;
  }
  DecodeProviderTraits((unsigned __int16 *)v162, (a14 & 0x400) != 0, &v132, &v161);
  CurrentThread = KeGetCurrentThread();
  v172 = &CurrentThread->WaitBlockFill11[164];
  --CurrentThread->KernelApcDisable;
  v124 &= ~a4;
LABEL_13:
  v24 = v138;
LABEL_14:
  v25 = a9;
  while ( 1 )
  {
    v26 = !_BitScanForward((unsigned int *)&v27, v124);
    v128 = v27;
    if ( v26 )
      break;
    v28 = 1LL;
    v144 = 1LL;
    v167 = 0LL;
    v168 = 0LL;
    ListEntry = 0LL;
    v145 = 0LL;
    v125 = 80;
    v142 = 0;
    v29 = 0;
    v129 = 0;
    v131 = 0;
    v150 = 0LL;
    v163 = 0LL;
    v124 &= v124 - 1;
    v30 = (unsigned int)v27;
    v31 = v24 + 32 * (v27 + 4);
    if ( v154
      && (v32 = *(_DWORD *)(v154 + 4LL * (*(unsigned __int16 *)(v31 + 6) >> 5)),
          _bittest(&v32, *(_BYTE *)(v31 + 6) & 0x1F))
      || !*(_DWORD *)v31
      || (v33 = *(_BYTE *)(v31 + 4), a8 > v33) && v33
      || ((v34 = *(_DWORD *)(v31 + 8), (v34 & 0x40) == 0) || v25)
      && ((v25 & *(_QWORD *)(v31 + 16)) == 0 || (v25 & *(_QWORD *)(v31 + 24)) != *(_QWORD *)(v31 + 24))
      || ((Process = KeGetCurrentThread()->ApcState.Process, (a5 & 2) != 0)
       || SLODWORD(Process[1].DirectoryTableBase) < 0)
      && (v34 & 0x200) != 0 )
    {
      v19 = v130;
    }
    else
    {
      v36 = *(_QWORD *)(v24 + 384);
      v38 = 0;
      if ( v36 )
      {
        v37 = *(_DWORD *)(104 * v30 + v36);
        if ( (v37 & 0x80000200) == 0x80000200 || (v37 & 0x80000100) == 0x80000100 )
          v38 = 1;
      }
      v39 = v130;
      v40 = v128;
      if ( v38 )
      {
        if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilterOnUserEvent(v24, v128, v135, v149, v23, v130) )
          goto LABEL_49;
        v24 = v138;
        v25 = a9;
      }
      if ( v133
        && EtwpIsEventNameFilterEnabled(v24, v40, a8, v25, 0)
        && !EtwpApplyEventNameFilter(v138, v40, v43, v39, 1, 0, v41, v42, 0) )
      {
        goto LABEL_49;
      }
      v44 = *(unsigned __int16 *)(v31 + 6);
      v139 = *(unsigned __int16 *)(v31 + 6);
      v45 = 8 * v44;
      v160 = 8 * v44;
      if ( ExAcquireRundownProtectionCacheAwareEx(
             *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v22 + 448) + 8 * v44),
             1u) )
      {
        if ( v139 >= *(_DWORD *)(v22 + 16) )
        {
          v28 = 1LL;
        }
        else
        {
          _mm_lfence();
          v28 = *(_QWORD *)(v45 + *(_QWORD *)(v22 + 456));
          v40 = v128;
        }
        v144 = v28;
        v29 = 1;
      }
      if ( (v28 & 1) != 0 )
      {
        if ( v29 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v45 + *(_QWORD *)(v22 + 448)), 1u);
        if ( v139 != 3 )
        {
LABEL_49:
          v23 = a10;
          v19 = v130;
          v17 = v134;
          goto LABEL_13;
        }
        v46 = -1073741058;
        if ( !*(_DWORD *)(v22 + 4068) )
          v46 = -1073741816;
        v127 = v46;
        v19 = v130;
        v17 = v134;
        break;
      }
      v47 = 0;
      if ( a7 )
      {
        v48 = 104;
        v125 = 104;
        v47 = 16;
      }
      else
      {
        v48 = v125;
      }
      v49 = *(_DWORD *)(v31 + 8);
      if ( (v49 & 0xFFFFFF9F) != 0 )
      {
        if ( (v49 & 0x800) != 0 && Flink && Flink != (struct _LIST_ENTRY *)EtwpHostSiloState )
        {
          v47 |= 0x100u;
          v48 += (LOWORD(Flink[264].Flink) + 15) & 0xFFFFFFF8;
          v125 = v48;
        }
        if ( (v49 & 1) != 0 )
        {
          if ( (v123 & 2) == 0 )
          {
            EtwpGetSidExtendedHeaderItem(Src);
            v123 |= 2u;
            v49 = *(_DWORD *)(v31 + 8);
          }
          v47 |= 2u;
          v48 += LOWORD(Src[0]);
          v125 = v48;
        }
        if ( (v49 & 2) != 0 )
        {
          v47 |= 1u;
          v48 += 16;
          v125 = v48;
        }
        if ( (v49 & 0x80u) != 0 )
        {
          v47 |= 0x40u;
          v48 += 16;
          v125 = v48;
        }
        if ( (v49 & 0x100) != 0 )
        {
          v47 |= 0x80u;
          v48 += 16;
          v125 = v48;
        }
        if ( (v49 & 4) != 0 )
        {
          v50 = *(_QWORD *)(v138 + 384);
          v52 = 0;
          if ( v50 )
          {
            v51 = *(_DWORD *)(104LL * v40 + v50);
            if ( (v51 & 0x80001000) == 0x80001000
              || (v51 & 0x80002000) == 0x80002000
              || (v51 & 0x80004000) == 0x80004000 )
            {
              v52 = 1;
            }
          }
          if ( !v52
            || EtwpApplyLevelKwFilter(v138, v40, a8, a9, 1)
            && (unsigned __int8)EtwpApplyStackWalkFilterOnUserEvent(v149, v138, v40)
            && EtwpApplyEventNameFilter(v138, v40, a10, v130, 1, 0, a8, a9, 1) )
          {
            if ( (v123 & 1) == 0 )
            {
              v53 = 256;
              StackLookasideListEntry = EtwpGetStackLookasideListEntry();
              if ( StackLookasideListEntry )
              {
                v123 |= 8u;
              }
              else
              {
                HighLimit = 0LL;
                LowLimit = 0LL;
                IoGetStackLimits(&LowLimit, &HighLimit);
                if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                {
                  v54 = alloca(1552LL);
                  StackLookasideListEntry = &v121;
                  v53 = 192;
                }
              }
              v55 = (struct _SLIST_ENTRY *)StackLookasideListEntry;
              if ( StackLookasideListEntry
                && !EtwpGetStackExtendedHeaderItem(CurrentThread, 0, v53, (__int64)&StackLookasideListEntry, 0, 0LL) )
              {
                if ( (v123 & 8) != 0 )
                {
                  RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, v55 - 1);
                  v123 &= ~8u;
                }
                StackLookasideListEntry = 0LL;
              }
              v123 |= 1u;
              v45 = v160;
            }
            if ( StackLookasideListEntry )
            {
              if ( (*(_DWORD *)(v28 + 820) & 1) != 0
                && EtwpGetCrimsonStackKey(v28, (__int64)StackLookasideListEntry, &ListEntry) )
              {
                v47 |= 8u;
                v48 += 24;
              }
              else
              {
                v47 |= 4u;
                v48 += *(unsigned __int16 *)StackLookasideListEntry;
              }
              v125 = v48;
            }
          }
        }
        if ( (*(_DWORD *)(v31 + 8) & 8) != 0 )
        {
          if ( (v123 & 4) == 0 )
          {
            v158 = 0LL;
            v159 = 0LL;
            IoGetStackLimits(&v159, &v158);
            if ( (unsigned __int64)&v158 - v159 > 0x1E0 )
            {
              v56 = alloca(480LL);
              v153 = &v122;
              EtwpGetPsmKeyExtendedHeaderItem();
            }
            v123 |= 4u;
          }
          if ( v153 )
          {
            v47 |= 0x20u;
            v48 += *(unsigned __int16 *)v153;
            v125 = v48;
          }
        }
      }
      v57 = &v173[3 * LODWORD(v173[24])];
      v58 = a10;
      if ( a10 )
      {
        v147 = 0;
        if ( KeGetCurrentThread()->PreviousMode )
        {
          v59 = 16LL * a10;
          if ( v59 )
          {
            if ( (v130 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v130 + v59 > 0x7FFFFFFF0000LL || v130 + v59 < v130 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        v60 = 0;
        v147 = 0;
        v48 = v125;
        while ( 1 )
        {
          if ( v60 >= a10 )
            goto LABEL_132;
          v61 = v48;
          v142 = *(_DWORD *)(v130 + 16LL * v60 + 8);
          v62 = v142;
          if ( v142 > 0xFFFF )
            break;
          if ( v133 )
          {
            v63 = *(_BYTE *)(v130 + 16LL * v60 + 12);
            v62 = v142;
          }
          else
          {
            v63 = 0;
          }
          if ( v63 )
          {
            if ( v63 == 1 )
            {
              v129 += v62;
              ++v131;
            }
            v48 = v125;
          }
          else
          {
            v48 = v62 + v125;
            v125 += v62;
          }
          if ( v48 < v61 )
          {
            v127 = -2147483643;
            v124 |= 1 << v128;
            if ( ListEntry )
              EtwpDereferenceStackEntry(ListEntry, *(unsigned int ***)(v28 + 1008));
            goto LABEL_118;
          }
          v147 = ++v60;
        }
        v127 = -2147483643;
        v124 |= 1 << v128;
        if ( ListEntry )
          EtwpDereferenceStackEntry(ListEntry, *(unsigned int ***)(v28 + 1008));
LABEL_118:
        v22 = v143;
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v45 + *(_QWORD *)(v143 + 448)), 1u);
        v19 = v130;
        v17 = v134;
        goto LABEL_249;
      }
LABEL_132:
      if ( v131 )
      {
        v48 += (v129 + 15) & 0xFFFFFFF8;
        v125 = v48;
      }
      if ( v132 )
      {
        v48 += (v132 + 15) & 0xFFFFFFF8;
        v125 = v48;
      }
      *((_DWORD *)v57 + 10) = v48;
      v20 = EtwpReserveTraceBuffer(v28, v48, (__int64)&v167, &v145, 0);
      v170 = v20;
      v64 = ListEntry;
      v65 = v144;
      if ( ListEntry )
        EtwpDereferenceStackEntry(ListEntry, *(unsigned int ***)(v144 + 1008));
      if ( !v20 )
      {
        v66 = 0;
        v67 = 0LL;
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v65, v48);
        v19 = v130;
        if ( v131 )
        {
          v66 = a10;
          v67 = v130;
        }
        if ( (unsigned int)Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage() )
        {
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
            EtwpTraceLostEvent(
              (_QWORD *)(v134 + 40),
              (__int16 *)(v149 + 40),
              (unsigned __int16 *)(v65 + 136),
              a5,
              ReserveTraceBufferStatus,
              v66,
              v67,
              1,
              1);
        }
        else if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
        {
          EtwpTraceLostEventOld(
            (_QWORD *)(v134 + 40),
            (__int16 *)(v149 + 40),
            (unsigned __int16 *)(v65 + 136),
            ReserveTraceBufferStatus,
            v66,
            v67,
            1,
            1);
        }
        v69 = v127;
        if ( v127 >= 0 )
        {
          if ( (*(_DWORD *)(v65 + 12) & 0x8000000) == 0 )
            v69 = ReserveTraceBufferStatus;
          v127 = v69;
        }
        v22 = v143;
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v160 + *(_QWORD *)(v143 + 448)), 1u);
        v23 = a10;
        v24 = v138;
        v17 = v134;
        if ( ReserveTraceBufferStatus == -1073741675 )
        {
          v127 = -1073741675;
          v58 = a10;
          goto LABEL_249;
        }
        goto LABEL_14;
      }
      *(_QWORD *)v57 = v65;
      *((_QWORD *)v57 + 1) = v20;
      v57[1] = v167;
      *((_QWORD *)v57 + 4) = v168;
      ++LODWORD(v173[24]);
      v148 = 0;
      v70 = 80LL;
      v126 = 80;
      v71 = 0LL;
      v137 = 0LL;
      v72 = (_OWORD *)v149;
      *(_OWORD *)v20 = *(_OWORD *)v149;
      *(_OWORD *)(v20 + 16) = v72[1];
      *(_OWORD *)(v20 + 32) = v72[2];
      *(_OWORD *)(v20 + 48) = v72[3];
      *(_OWORD *)(v20 + 64) = v72[4];
      if ( v161 )
      {
        v73 = *(_OWORD *)v161;
        *(_WORD *)(v20 + 4) |= 0x80u;
      }
      else
      {
        v73 = *(_OWORD *)(v134 + 40);
      }
      *(_OWORD *)(v20 + 24) = v73;
      *(_DWORD *)v20 = *((_DWORD *)&qword_14001CA30 + v135) | v48;
      if ( v47 )
      {
        if ( (v47 & 0x100) != 0 )
        {
          v71 = (unsigned __int16 *)(v20 + 80);
          v74 = Flink;
          v75 = (LOWORD(Flink[264].Flink) + 15) & 0xFFF8;
          *(_WORD *)(v20 + 80) = v75;
          *(_WORD *)(v20 + 82) = 16;
          *(_WORD *)(v20 + 86) = v74[264].Flink;
          *(_WORD *)(v20 + 84) &= ~1u;
          *(_WORD *)(v20 + 84) = 0;
          v76 = v75 - LOWORD(v74[264].Flink) - 8;
          memmove((void *)(v20 + 88), v74[263].Blink, LOWORD(v74[264].Flink));
          memset((void *)(v20 + 88 + LOWORD(Flink[264].Flink)), 0, v76);
          *(_WORD *)(v20 + 4) |= 1u;
          v70 = (unsigned int)*(unsigned __int16 *)(v20 + 80) + 80;
          v126 = *(unsigned __int16 *)(v20 + 80) + 80;
          v137 = (unsigned __int16 *)(v20 + 80);
        }
        if ( (v47 & 0x10) != 0 )
        {
          v77 = v70 + v20;
          *(_DWORD *)v77 = 65560;
          *(_WORD *)(v77 + 6) = 16;
          *(_WORD *)(v77 + 4) = *(_WORD *)(v70 + v20 + 4) & 0xFFFE;
          *(_WORD *)(v77 + 4) = 0;
          *(_OWORD *)(v77 + 8) = *a7;
          *(_WORD *)(v20 + 4) |= 1u;
          v70 = (unsigned int)(v70 + 24);
          v126 = v70;
          if ( v71 )
            v71[2] |= 1u;
          v71 = (unsigned __int16 *)v77;
          v137 = (unsigned __int16 *)v77;
        }
        if ( (v47 & 2) != 0 )
        {
          v70 += v20;
          v78 = LOWORD(Src[0]);
          memmove((void *)v70, Src, LOWORD(Src[0]));
          *(_WORD *)(v20 + 4) |= 1u;
          v79 = v78 + v126;
          v126 += v78;
          if ( v71 )
            v71[2] |= 1u;
          v71 = (unsigned __int16 *)v70;
          v137 = (unsigned __int16 *)v70;
          LODWORD(v70) = v79;
        }
        if ( (v47 & 1) != 0 )
        {
          v80 = v70;
          v81 = (unsigned int)v70 + v20;
          *(_DWORD *)v81 = 196624;
          *(_WORD *)(v81 + 6) = 4;
          *(_WORD *)(v81 + 4) &= ~1u;
          *(_WORD *)(v81 + 4) = 0;
          *(_DWORD *)(v81 + 8) = PsGetCurrentProcessSessionId();
          *(_WORD *)(v20 + 4) |= 1u;
          v82 = v80 + 16;
          v126 = v80 + 16;
          if ( v71 )
            v71[2] |= 1u;
          v71 = (unsigned __int16 *)v81;
          v137 = (unsigned __int16 *)v81;
        }
        else
        {
          v82 = v126;
        }
        v83 = 0;
        if ( (v47 & 0x40) != 0 )
        {
          v84 = v82 + v20;
          *(_DWORD *)v84 = 851984;
          *(_WORD *)(v84 + 6) = 8;
          *(_WORD *)(v84 + 4) &= ~1u;
          *(_WORD *)(v84 + 4) = 0;
          ProcessStartKey = PsGetProcessStartKey((__int64)KeGetCurrentThread()->ApcState.Process);
          *((_QWORD *)v86 + 1) = ProcessStartKey;
          *(_WORD *)(v20 + 4) |= 1u;
          v70 = (unsigned int)(v87 + 16);
          v126 = v87 + 16;
          if ( v71 )
            v71[2] |= 1u;
          v71 = v86;
          v137 = v86;
          v64 = ListEntry;
          v48 = v125;
        }
        else
        {
          v70 = v126;
        }
        if ( (v47 & 0x80u) != 0 )
        {
          v88 = v70 + v20;
          *(_DWORD *)v88 = 655376;
          *(_WORD *)(v88 + 6) = 8;
          *(_WORD *)(v88 + 4) = *(_WORD *)(v70 + v20 + 4) & 0xFFFE;
          *(_WORD *)(v88 + 4) = v83;
          if ( (v123 & 0x10) != 0 || (EtwpCreateEventKey(&v151), v123 |= 0x10u, !v169) )
          {
            v89 = v151;
          }
          else
          {
            v89 = v151;
            *v169 = v151;
          }
          *(_QWORD *)(v88 + 8) = v89;
          *(_WORD *)(v20 + 4) |= 1u;
          v70 = (unsigned int)(v70 + 16);
          v126 = v70;
          if ( v71 )
            v71[2] |= 1u;
          v71 = (unsigned __int16 *)v88;
          v137 = (unsigned __int16 *)v88;
        }
        if ( (v47 & 4) != 0 )
        {
          v70 += v20;
          v90 = (unsigned __int16 *)StackLookasideListEntry;
          memmove((void *)v70, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
          *(_WORD *)(v20 + 4) |= 1u;
          v91 = *v90 + v126;
          v126 = v91;
          if ( v71 )
            v71[2] |= 1u;
          v71 = (unsigned __int16 *)v70;
          v137 = (unsigned __int16 *)v70;
          LODWORD(v70) = v91;
        }
        if ( (v47 & 8) != 0 )
        {
          v92 = v20 + (unsigned int)v70;
          *(_DWORD *)v92 = 1179672;
          *(_WORD *)(v92 + 6) = 16;
          *(_WORD *)(v92 + 4) &= ~1u;
          *(_WORD *)(v92 + 4) = 0;
          *(_QWORD *)(v92 + 16) = v64;
          *(_QWORD *)(v92 + 8) = *((_QWORD *)StackLookasideListEntry + 1);
          *(_WORD *)(v20 + 4) |= 1u;
          LODWORD(v70) = v70 + 24;
          v126 = v70;
          if ( v71 )
            v71[2] |= 1u;
          v71 = (unsigned __int16 *)v92;
          v137 = (unsigned __int16 *)v92;
        }
        if ( (v47 & 0x20) != 0 )
        {
          v93 = (unsigned __int16 *)(v20 + (unsigned int)v70);
          v94 = (unsigned __int16 *)v153;
          memmove(v93, v153, *(unsigned __int16 *)v153);
          *(_WORD *)(v20 + 4) |= 1u;
          LODWORD(v70) = *v94 + (_DWORD)v70;
          v126 = v70;
          if ( v71 )
            v71[2] |= 1u;
          v71 = v93;
          v137 = v93;
        }
      }
      v95 = v132;
      if ( v132 )
      {
        v96 = (unsigned __int16 *)(v20 + (unsigned int)v70);
        v97 = (v132 + 15) & 0xFFF8;
        *v96 = v97;
        v96[1] = 12;
        v96[3] = v95;
        v96[2] &= ~1u;
        v96[2] = 0;
        v98 = v97 - v95 - 8;
        v99 = v95;
        memmove(v96 + 4, v162, v95);
        memset((char *)v96 + v99 + 8, 0, v98);
        *(_WORD *)(v20 + 4) |= 1u;
        LODWORD(v70) = *v96 + v126;
        v126 = v70;
        if ( v71 )
          v71[2] |= 1u;
        v71 = v96;
        v137 = v96;
      }
      if ( v131 )
      {
        v100 = (unsigned __int16 *)(v20 + (unsigned int)v70);
        v101 = v129;
        v102 = (v129 + 15) & 0xFFF8;
        *v100 = v102;
        v100[1] = 11;
        v100[3] = v101;
        v100[2] &= ~1u;
        v100[2] = 0;
        v103 = v100 + 4;
        v150 = v100 + 4;
        v163 = (char *)v100 + v101 + 8;
        memset(v163, 0, (unsigned __int16)(v102 - v101 - 8));
        *(_WORD *)(v20 + 4) |= 1u;
        LODWORD(v70) = *v100 + (_DWORD)v70;
        v126 = v70;
        if ( v71 )
          v71[2] |= 1u;
      }
      else
      {
        v103 = v150;
      }
      v104 = 0;
      v23 = a10;
      v19 = v130;
      while ( 1 )
      {
        v148 = v104;
        if ( v104 >= v23 )
          break;
        v105 = *(unsigned int *)(v19 + 16LL * v104 + 8);
        v106 = *(__int64 **)(v19 + 16LL * v104);
        if ( v133 )
        {
          v107 = *(_BYTE *)(v19 + 16LL * v104 + 12);
          v48 = v125;
          v103 = v150;
        }
        else
        {
          v107 = 0;
        }
        if ( v107 )
        {
          v108 = v107 - 1;
          if ( v108 )
          {
            if ( v108 == 2 )
            {
              if ( (_DWORD)v105 == 8 )
              {
                if ( (unsigned __int64)(v106 + 1) > 0x7FFFFFFF0000LL || v106 + 1 < v106 )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v145 = *v106;
              }
              ++v104;
            }
            else
            {
              ++v104;
            }
          }
          else
          {
            if ( !v103 )
              goto LABEL_238;
            v109 = *(unsigned int *)(v19 + 16LL * v104 + 8);
            if ( (unsigned __int16 *)((char *)v103 + v105) < v103 || (char *)v103 + v105 > v163 || !v131 )
              goto LABEL_238;
            if ( (_DWORD)v105
              && ((unsigned __int64)v106 + v105 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v106 + v105) < v106) )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            memmove(v103, v106, v105);
            v103 = (unsigned __int16 *)((char *)v103 + v109);
            v150 = v103;
            --v131;
            v23 = a10;
            ++v104;
          }
        }
        else
        {
          v110 = (void *)(v20 + (unsigned int)v70);
          v111 = v105 + v70;
          if ( (int)v105 + (int)v70 < (unsigned int)v70 )
          {
            v126 = -1;
LABEL_238:
            v127 = -1073741820;
            *(_DWORD *)v20 = v48 | 0xC00D0000;
            *(_QWORD *)(v20 + 16) = v145;
            LODWORD(v20) = 0;
            v22 = v143;
            v58 = a10;
            v17 = v134;
            goto LABEL_249;
          }
          LODWORD(v70) = v105 + v70;
          v126 = v111;
          if ( v111 > v48 )
            goto LABEL_238;
          PreviousMode = KeGetCurrentThread()->PreviousMode;
          if ( PreviousMode
            && (_DWORD)v105
            && ((unsigned __int64)v106 + v105 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v106 + v105) < v106) )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          memmove(v110, v106, v105);
          v48 = v125;
          v103 = v150;
          v23 = a10;
          ++v104;
        }
      }
      if ( v154 )
        *(_DWORD *)(v154 + 4LL * (v139 >> 5)) |= 1 << (v139 & 0x1F);
      *(_QWORD *)(v20 + 16) = v145;
      v112 = CurrentThread;
      *(_DWORD *)(v20 + 56) = CurrentThread->SchedulerApc.SpareLong0;
      *(_DWORD *)(v20 + 60) = v112->UserTime;
      *(_DWORD *)(v20 + 8) = v112[1].CurrentRunTime;
      *(_DWORD *)(v20 + 12) = v112[1].CycleTime;
      v113 = v144;
      if ( (*(_DWORD *)(v144 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendTraceEvent(v144, (__int64)&v167);
        v23 = a10;
      }
      LODWORD(v20) = 0;
      v22 = v143;
      v24 = v138;
      v25 = a9;
      v17 = v134;
      if ( *(_QWORD *)(v113 + 1288) )
      {
        EtwpInvokeEventCallback(v113, (__int64)&v167, v134 + 40);
        v23 = a10;
        goto LABEL_13;
      }
    }
  }
  v58 = a10;
LABEL_249:
  if ( (v123 & 8) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v127 < 0 )
  {
    IsEnabledDeviceUsage = Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage();
    v119 = v20;
    LOBYTE(v119) = IsEnabledDeviceUsage != 0;
    v120 = (__int16 *)(v171 + 40);
    if ( v119 )
      EtwpFailLogging(a8, a9, v17, (__int64)v173, v124, v20, v127, (__int64)v120, 1, v58, v19, 1);
    else
      EtwpFailLoggingOld(a8, a9, v17, (__int64)v173, v124, v127, v120, 1, v58, v19, 1);
  }
  else
  {
    v128 = v20;
    if ( LODWORD(v173[24]) )
    {
      do
      {
        v114 = *(_QWORD *)&v173[3 * (unsigned int)v20 + 1];
        v115 = (signed __int64 *)*((_QWORD *)&v173[3 * (unsigned int)v20 + 1] + 1);
        _m_prefetchw(v115);
        v116 = *v115;
        if ( (v114 ^ (unsigned __int64)*v115) >= 0xF )
        {
LABEL_256:
          _InterlockedDecrement((volatile signed __int32 *)(v114 + 12));
        }
        else
        {
          while ( 1 )
          {
            v117 = v116;
            v116 = _InterlockedCompareExchange64(v115, v116 + 1, v116);
            if ( v117 == v116 )
              break;
            if ( (v114 ^ (unsigned __int64)v116) >= 0xF )
              goto LABEL_256;
          }
        }
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v22 + 448) + 8LL
                                                                  * **(unsigned int **)&v173[3 * (unsigned int)v20]),
          1u);
        LODWORD(v20) = ++v128;
      }
      while ( v128 < LODWORD(v173[24]) );
    }
  }
  v26 = (*(_WORD *)v172)++ == 0xFFFF;
  if ( v26
    && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v127;
}
