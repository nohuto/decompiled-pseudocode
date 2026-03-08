/*
 * XREFs of EtwpEventWriteFull @ 0x1402319C0
 * Callers:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x140395834 (EtwWriteKMSecurityEvent.c)
 *     EtwpStackWalkApc @ 0x140460860 (EtwpStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x1405FB638 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteString @ 0x1405FCA30 (EtwWriteString.c)
 *     EtwWriteErrorLogEntry @ 0x1408707C8 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     MmCanThreadFault @ 0x140205D8C (MmCanThreadFault.c)
 *     ObGetCurrentIrql @ 0x140205E10 (ObGetCurrentIrql.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402331B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140233900 (EtwpApplyEventIdPayloadFilter.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14028DD10 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpFailLogging @ 0x1402FABEC (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1402FF40C (EtwpGetReserveTraceBufferStatus.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     IoGetStackLimits @ 0x1403129C0 (IoGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x140312C60 (KeAreInterruptsEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x1403151E0 (EtwpReserveTraceBuffer.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     EtwpSendTraceEvent @ 0x14039D2E8 (EtwpSendTraceEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpTraceLostEventOld @ 0x14040C2E0 (EtwpTraceLostEventOld.c)
 *     Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage @ 0x14040C8BC (Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage.c)
 *     EtwpFailLoggingOld @ 0x14040C914 (EtwpFailLoggingOld.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpGetStackLookasideListEntry @ 0x140460460 (EtwpGetStackLookasideListEntry.c)
 *     EtwpQueueStackWalkApc @ 0x140460526 (EtwpQueueStackWalkApc.c)
 *     EtwpDereferenceStackEntry @ 0x140460D12 (EtwpDereferenceStackEntry.c)
 *     EtwpApplyEventNameFilter @ 0x140462256 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyLevelKwFilter @ 0x1404626B2 (EtwpApplyLevelKwFilter.c)
 *     EtwpTraceLostEvent @ 0x1405F9F94 (EtwpTraceLostEvent.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405FD72C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x1405FD964 (EtwpReleaseStackLookasideListEntry.c)
 *     EtwpInvokeEventCallback @ 0x1405FEBA4 (EtwpInvokeEventCallback.c)
 *     EtwpGetCrimsonStackKey @ 0x1405FF81C (EtwpGetCrimsonStackKey.c)
 *     EtwpApplyStackWalkIdFilter @ 0x140601EC8 (EtwpApplyStackWalkIdFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1406D6370 (EtwpGetSidExtendedHeaderItem.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        unsigned int a4,
        __int64 a5,
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
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // r15
  struct _SLIST_ENTRY *v22; // r13
  __int64 v23; // r8
  __int64 v24; // r9
  __int16 v25; // dx
  int v27; // ecx
  char v28; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v30; // rcx
  __int64 CurrentIrql; // r9
  __int64 v32; // r10
  __int64 v33; // r8
  __int64 v34; // rcx
  bool v35; // zf
  __int64 v36; // rdx
  char v37; // r14
  __int64 v38; // r12
  int v39; // ecx
  __int64 v40; // rcx
  unsigned __int8 v41; // al
  int v42; // edx
  _KPROCESS *Process; // rcx
  __int64 v44; // rax
  __int64 v45; // rbx
  char v46; // al
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  unsigned __int8 v50; // al
  unsigned __int64 v51; // rbx
  BOOLEAN v52; // al
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rbx
  unsigned __int8 v56; // r13
  signed __int64 *v57; // rdx
  signed __int64 v58; // rax
  signed __int64 v59; // rtt
  int v60; // ebx
  int v61; // esi
  unsigned int v62; // r13d
  int v63; // eax
  int v64; // eax
  int v65; // eax
  unsigned __int16 *v66; // rcx
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v69; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  int v71; // eax
  int v72; // eax
  __int64 v73; // rdx
  int v74; // edx
  unsigned __int8 v76; // r14
  unsigned __int16 *v77; // r12
  unsigned int v78; // esi
  __int64 v79; // r9
  int v80; // r14d
  __int64 v81; // r12
  unsigned int v82; // r14d
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  void *v86; // rsp
  bool v87; // si
  int IsEnabledDeviceUsage; // eax
  __int64 v89; // rdx
  _OWORD *v90; // rsi
  __int64 v91; // rdx
  __int64 v92; // r8
  __int16 v93; // si
  int v94; // edi
  char v95; // al
  int v96; // r12d
  int v97; // eax
  int v98; // ecx
  __int64 v99; // r8
  __int64 v100; // r14
  __int64 v101; // rdx
  __int64 v102; // r13
  unsigned int ReserveTraceBufferStatus; // ebx
  __int64 v104; // rsi
  unsigned int v105; // r14d
  _WORD *v106; // r12
  __int128 v107; // xmm0
  GUID v108; // xmm0
  _DWORD *v109; // rcx
  unsigned __int16 *v110; // rcx
  __int64 v111; // r15
  unsigned __int16 v112; // r14
  unsigned __int16 v113; // r14
  _WORD *v114; // rsi
  unsigned __int16 *v115; // r15
  unsigned int v116; // r10d
  unsigned __int16 *v117; // rcx
  unsigned __int16 *v118; // rsi
  unsigned __int16 *v119; // rsi
  int SessionId; // eax
  int v121; // ecx
  unsigned __int16 *v122; // rdx
  unsigned __int16 *v123; // r8
  struct _KPRCB *v124; // rcx
  unsigned __int64 v125; // rax
  _QWORD *v126; // rsi
  int v127; // r9d
  __int64 v128; // r8
  unsigned __int16 *v129; // rdx
  unsigned __int16 *v130; // rsi
  unsigned __int16 v131; // bx
  unsigned __int16 *v132; // r14
  unsigned __int16 v133; // si
  unsigned __int16 v134; // si
  int v135; // r10d
  int v136; // r11d
  _OWORD *v137; // r14
  unsigned __int16 *v138; // rbx
  __int64 v139; // rax
  unsigned __int16 v140; // dx
  unsigned int i; // esi
  size_t v142; // rdx
  _QWORD *v143; // r9
  unsigned __int8 v144; // cl
  int v145; // ecx
  char *v146; // rbx
  char *v147; // rcx
  unsigned int v148; // r10d
  __int64 v149; // rbx
  int v150; // eax
  __int64 v151; // rdx
  struct _KPRCB *v152; // rdx
  _GENERAL_LOOKASIDE *v153; // rcx
  char v154; // [rsp+40h] [rbp-610h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+610h] [rbp-40h]
  __int64 v156; // [rsp+618h] [rbp-38h]
  __int64 v157; // [rsp+620h] [rbp-30h]
  __int64 v158; // [rsp+628h] [rbp-28h]
  int v159; // [rsp+630h] [rbp-20h]
  char v160; // [rsp+650h] [rbp+0h]
  unsigned __int8 v161; // [rsp+658h] [rbp+8h]
  int v162; // [rsp+660h] [rbp+10h]
  char v163; // [rsp+664h] [rbp+14h]
  unsigned __int8 v164; // [rsp+665h] [rbp+15h]
  int v165; // [rsp+668h] [rbp+18h]
  __int16 v166; // [rsp+66Ch] [rbp+1Ch]
  unsigned int v167; // [rsp+670h] [rbp+20h]
  char v168; // [rsp+674h] [rbp+24h]
  int v169; // [rsp+678h] [rbp+28h]
  unsigned __int16 v170; // [rsp+67Ch] [rbp+2Ch]
  __int64 v171; // [rsp+680h] [rbp+30h]
  int v172; // [rsp+688h] [rbp+38h]
  int v173; // [rsp+68Ch] [rbp+3Ch]
  void *Src; // [rsp+690h] [rbp+40h]
  __int16 v175; // [rsp+698h] [rbp+48h]
  _DWORD Size[3]; // [rsp+69Ch] [rbp+4Ch]
  void *StackLookasideListEntry; // [rsp+6A8h] [rbp+58h] BYREF
  __int64 v178; // [rsp+6B0h] [rbp+60h]
  unsigned int v179; // [rsp+6B8h] [rbp+68h]
  unsigned __int16 *v180; // [rsp+6C0h] [rbp+70h]
  __int64 v181; // [rsp+6C8h] [rbp+78h]
  __int64 v182; // [rsp+6D0h] [rbp+80h]
  __int64 v183; // [rsp+6D8h] [rbp+88h]
  __int64 v184; // [rsp+6E0h] [rbp+90h]
  __int64 v185; // [rsp+6E8h] [rbp+98h]
  unsigned __int16 *v186; // [rsp+6F0h] [rbp+A0h]
  _OWORD *v187; // [rsp+6F8h] [rbp+A8h]
  unsigned int v188; // [rsp+700h] [rbp+B0h]
  PSLIST_ENTRY v189; // [rsp+708h] [rbp+B8h]
  unsigned __int64 v190; // [rsp+710h] [rbp+C0h]
  void *v191; // [rsp+718h] [rbp+C8h]
  __int128 *v192; // [rsp+720h] [rbp+D0h]
  void *v193; // [rsp+728h] [rbp+D8h]
  void *v194; // [rsp+730h] [rbp+E0h]
  __int64 v195; // [rsp+738h] [rbp+E8h]
  __int64 v196; // [rsp+740h] [rbp+F0h]
  __int64 v197; // [rsp+748h] [rbp+F8h]
  __int64 v198; // [rsp+750h] [rbp+100h]
  unsigned int v199; // [rsp+758h] [rbp+108h]
  __int64 v200; // [rsp+760h] [rbp+110h] BYREF
  unsigned __int64 v201; // [rsp+768h] [rbp+118h]
  PSLIST_ENTRY ListEntry; // [rsp+770h] [rbp+120h] BYREF
  __int64 v203; // [rsp+778h] [rbp+128h]
  struct _KTHREAD *v204; // [rsp+780h] [rbp+130h]
  unsigned __int64 HighLimit; // [rsp+788h] [rbp+138h] BYREF
  unsigned __int64 LowLimit; // [rsp+790h] [rbp+140h] BYREF
  __int64 v207; // [rsp+798h] [rbp+148h]
  unsigned __int64 *v208; // [rsp+7A0h] [rbp+150h]
  char *v209; // [rsp+7A8h] [rbp+158h]
  __int128 v210; // [rsp+7B0h] [rbp+160h] BYREF
  __int64 v211; // [rsp+7C0h] [rbp+170h]
  _OWORD *v212; // [rsp+7C8h] [rbp+178h]
  __int64 v213; // [rsp+7D0h] [rbp+180h]
  _QWORD *v214; // [rsp+7D8h] [rbp+188h]
  _OWORD v215[25]; // [rsp+7E0h] [rbp+190h] BYREF

  v184 = a1;
  v171 = a11;
  v213 = a11;
  v199 = a10;
  v212 = a9;
  v19 = a14;
  v196 = a1;
  v161 = a2;
  v179 = a4;
  v20 = a5;
  *(_QWORD *)&Size[1] = a5;
  v197 = a11;
  v185 = a12;
  v203 = a13;
  v193 = a16;
  v208 = a17;
  v21 = 0LL;
  v172 = 0;
  memset(v215, 0, 0x188uLL);
  v167 = 0;
  v22 = 0LL;
  Src = 0LL;
  v189 = 0LL;
  StackLookasideListEntry = 0LL;
  v201 = 0LL;
  v175 = a15 & 0x200;
  v207 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(512LL, a15 & 0x400, v23, v24) + 864);
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a14 )
    v19 = a1;
  v182 = v19;
  if ( v193 )
  {
    if ( v25 )
    {
      v27 = 0;
      v192 = (__int128 *)((char *)v193 + 6);
    }
    else
    {
      v27 = *(unsigned __int16 *)v193;
      v192 = 0LL;
    }
    v166 = v27;
    v173 = v27;
  }
  else
  {
    v173 = 0;
    v166 = 0;
    v192 = 0LL;
  }
  v28 = 0;
  v160 = 0;
  v183 = *(_QWORD *)(a1 + 392);
  v195 = v183;
  if ( v208 && *v208 )
  {
    v201 = *v208;
    v28 = 4;
    v160 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v204 = CurrentThread;
  v30 = v185;
  if ( !v185 )
    v30 = (__int64)CurrentThread;
  v185 = v30;
  v198 = v30;
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    CurrentIrql = KeGetCurrentIrql();
  else
    LOBYTE(CurrentIrql) = 15;
  v163 = CurrentIrql;
  v178 = CurrentIrql;
  v164 = CurrentIrql;
  v168 = 0;
  if ( !(_BYTE)CurrentIrql )
  {
    --v204->KernelApcDisable;
    v168 = 1;
  }
  v161 &= ~a3;
  v32 = v19;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            while ( 2 )
            {
              v33 = 80LL;
LABEL_23:
              v34 = v161;
              v35 = !_BitScanForward((unsigned int *)&v36, v161);
              v167 = v36;
              if ( v35 )
                goto LABEL_73;
              v181 = 1LL;
              v210 = 0LL;
              v211 = 0LL;
              ListEntry = 0LL;
              v200 = 0LL;
              v162 = 80;
              v180 = 0LL;
              v186 = 0LL;
              v37 = 0;
              LOBYTE(v170) = 0;
              LOWORD(Size[0]) = 0;
              v169 = 0;
              v194 = 0LL;
              v209 = 0LL;
              v161 &= v161 - 1;
              v33 = (unsigned int)v36;
              v38 = v32 + 32 * (v36 + 4);
              if ( v203 )
              {
                v39 = *(_DWORD *)(v203 + 4LL * (*(unsigned __int16 *)(v38 + 6) >> 5));
                if ( _bittest(&v39, *(_BYTE *)(v38 + 6) & 0x1F) )
                  continue;
              }
              break;
            }
            v40 = *(_QWORD *)(v20 + 8);
            if ( !*(_DWORD *)v38 )
              continue;
            break;
          }
          v41 = *(_BYTE *)(v38 + 4);
          if ( *(_BYTE *)(v20 + 4) > v41 )
          {
            if ( v41 )
              continue;
          }
          break;
        }
        v42 = *(_DWORD *)(v38 + 8);
        if ( ((v42 & 0x40) == 0 || v40)
          && ((v40 & *(_QWORD *)(v38 + 16)) == 0 || (*(_QWORD *)(v38 + 24) & v40) != *(_QWORD *)(v38 + 24)) )
        {
          continue;
        }
        break;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( ((v179 & 2) != 0 || SLODWORD(Process[1].DirectoryTableBase) < 0) && (v42 & 0x200) != 0 )
        continue;
      break;
    }
    v44 = *(_QWORD *)(v32 + 384);
    if ( v44
      && ((v45 = 104 * v33, (*(_DWORD *)(v44 + 104 * v33) & 0x80000200) == 0x80000200)
       || (*(_DWORD *)(v44 + 104 * v33) & 0x80000100) == 0x80000100) )
    {
      v46 = 1;
    }
    else
    {
      v45 = 104 * v33;
      v46 = 0;
    }
    if ( v46 )
    {
      if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilter(v32, v167, 0, v20, *(_WORD *)v20, a10, v171, 0, CurrentIrql) )
      {
LABEL_69:
        v32 = v182;
        CurrentIrql = v178;
        continue;
      }
      v32 = v182;
      LOBYTE(CurrentIrql) = v178;
    }
    break;
  }
  if ( v175 )
  {
    v47 = *(_QWORD *)(v20 + 8);
    v48 = 0LL;
    v49 = *(_QWORD *)(v32 + 384);
    if ( v49 )
    {
      v33 = v45 + v49;
      if ( (*(_DWORD *)(v45 + v49) & 0x80000400) == 0x80000400 )
        v48 = *(_QWORD *)(v33 + 96);
      if ( v48 )
      {
        v33 = *(unsigned __int8 *)(v20 + 4);
        v50 = *(_BYTE *)(v48 + 1);
        if ( ((unsigned __int8)v33 <= v50 || !v50)
          && (!v47 || (v47 & *(_QWORD *)(v48 + 8)) != 0 && (*(_QWORD *)(v48 + 16) & v47) == *(_QWORD *)(v48 + 16))
          && !(unsigned __int8)EtwpApplyEventNameFilter(
                                 v32,
                                 v167,
                                 a10,
                                 v171,
                                 0,
                                 CurrentIrql,
                                 v33,
                                 *(_QWORD *)(v20 + 8),
                                 0) )
        {
          goto LABEL_69;
        }
      }
    }
  }
  v51 = *(unsigned __int16 *)(v38 + 6);
  v188 = *(unsigned __int16 *)(v38 + 6);
  v190 = v51;
  if ( (unsigned __int8)v178 >= 2u )
  {
    v190 = (unsigned int)v51;
    v53 = v183;
    if ( (unsigned int)v51 >= *(_DWORD *)(v183 + 16) )
    {
      CurrentIrql = 1LL;
      v181 = 1LL;
      v190 = (unsigned int)v51;
    }
    else
    {
      _mm_lfence();
      CurrentIrql = *(_QWORD *)(*(_QWORD *)(v183 + 456) + 8 * v51);
      v181 = CurrentIrql;
    }
  }
  else
  {
    v52 = ExAcquireRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v183 + 448) + 8 * v51),
            1u);
    v53 = v183;
    if ( v52 )
    {
      if ( (unsigned int)v51 >= *(_DWORD *)(v183 + 16) )
      {
        v181 = 1LL;
      }
      else
      {
        _mm_lfence();
        v181 = *(_QWORD *)(*(_QWORD *)(v183 + 456) + 8 * v51);
      }
      v37 = 1;
      LOBYTE(v170) = 1;
    }
    CurrentIrql = v181;
  }
  if ( (CurrentIrql & 1) == 0 )
  {
    v60 = v212 != 0LL ? 0x10 : 0;
    v61 = 104;
    if ( !v212 )
      v61 = 80;
    v62 = v61;
    v165 = v61;
    if ( (*(_DWORD *)(v38 + 8) & 0xFFFFFF9F) == 0 )
      goto LABEL_154;
    if ( EtwpPagingDisabled
      || (v179 & 1) != 0
      || (LOBYTE(v63) = MmCanThreadFault(), !v63)
      || (v64 = 256, BYTE6(v204[1].Queue)) )
    {
      v64 = 0;
    }
    v60 |= v64;
    v65 = *(_DWORD *)(v38 + 8);
    v165 = v61;
    if ( (v65 & 0x800) != 0 )
    {
      if ( v207 )
      {
        v165 = v61;
        if ( v207 != EtwpHostSiloState )
        {
          v60 |= 0x200u;
          v62 = v61 + ((*(unsigned __int16 *)(v207 + 4224) + 15) & 0xFFFFFFF8);
          v165 = v62;
        }
      }
      v21 = 0LL;
    }
    if ( (v65 & 1) != 0 && (v60 & 0x100) != 0 )
    {
      v66 = (unsigned __int16 *)Src;
      if ( Src )
        goto LABEL_109;
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[8].P;
      ++P->TotalAllocates;
      v69 = RtlpInterlockedPopEntrySList(&P->ListHead);
      Src = v69;
      if ( !v69 )
      {
        ++P->AllocateMisses;
        L = CurrentPrcb->PPLookasideList[8].L;
        ++L->TotalAllocates;
        v69 = RtlpInterlockedPopEntrySList(&L->ListHead);
        Src = v69;
        if ( !v69 )
        {
          ++L->AllocateMisses;
          v69 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                                (unsigned int)L->Type,
                                L->Size,
                                L->Tag);
          Src = v69;
        }
      }
      if ( v69 )
        LODWORD(v69->Next) = CurrentPrcb->Number;
      v189 = v69;
      if ( v69 )
      {
        EtwpGetSidExtendedHeaderItem();
        v66 = (unsigned __int16 *)Src;
        if ( Src )
        {
LABEL_109:
          v60 |= 2u;
          v62 += *v66;
          v165 = v62;
        }
      }
    }
    v71 = *(_DWORD *)(v38 + 8);
    if ( (v71 & 2) != 0 )
    {
      v60 |= 1u;
      v62 += 16;
      v165 = v62;
    }
    if ( (v71 & 0x80u) != 0 && (ObGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->NestingLevel) )
    {
      v60 |= 0x40u;
      v62 += 16;
      v165 = v62;
    }
    v72 = *(_DWORD *)(v38 + 8);
    if ( (v72 & 0x100) != 0 )
    {
      v60 |= 0x80u;
      v62 += 16;
      v165 = v62;
    }
    if ( (v72 & 4) == 0 || EtwpPagingDisabled )
      goto LABEL_154;
    v73 = *(_QWORD *)(v182 + 384);
    if ( v73 )
    {
      v74 = *(_DWORD *)(104LL * v167 + v73);
      if ( (v74 & 0x80001000) == 0x80001000 || (v74 & 0x80002000) == 0x80002000 || (v74 & 0x80004000) == 0x80004000 )
      {
        v76 = v164;
        LOBYTE(BugCheckParameter4) = v164 < 2u;
        v77 = *(unsigned __int16 **)&Size[1];
        v78 = v167;
        if ( !(unsigned __int8)EtwpApplyLevelKwFilter(
                                 v182,
                                 v167,
                                 *(unsigned __int8 *)(*(_QWORD *)&Size[1] + 4LL),
                                 *(_QWORD *)(*(_QWORD *)&Size[1] + 8LL),
                                 v164 < 2u)
          || (LOBYTE(v79) = v76 < 2u, v80 = v182, !(unsigned __int8)EtwpApplyStackWalkIdFilter(*v77, v182, v78, v79)) )
        {
LABEL_154:
          v81 = v171;
LABEL_155:
          v90 = &v215[3 * LODWORD(v215[24])];
          v187 = v90;
          if ( a10 )
          {
            v91 = v81 + 8;
            v92 = a10;
            v93 = Size[0];
            v94 = v169;
            do
            {
              if ( v175 )
                v95 = *(_BYTE *)(v91 + 4);
              else
                v95 = 0;
              if ( v95 )
              {
                if ( v95 == 1 )
                {
                  v93 += *(_WORD *)v91;
                  LOWORD(Size[0]) = v93;
                  v169 = ++v94;
                }
              }
              else
              {
                v62 += *(_DWORD *)v91;
                v165 = v62;
              }
              v91 += 16LL;
              --v92;
            }
            while ( v92 );
            v28 = v160;
            v90 = v187;
          }
          v96 = v169;
          if ( v169 )
          {
            v62 += (LOWORD(Size[0]) + 15) & 0xFFFFFFF8;
            v165 = v62;
          }
          if ( (_WORD)v173 )
          {
            v62 += ((unsigned __int16)v173 + 15) & 0xFFFFFFF8;
            v165 = v62;
          }
          *((_DWORD *)v90 + 10) = v62;
          v97 = ((__int64 (*)(void))Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage)();
          v21 = 0LL;
          v98 = 0;
          if ( v97 )
          {
            if ( (v179 & 4) != 0 )
              v98 = 512;
            if ( (v179 & 8) != 0 )
              v98 |= 0x600u;
          }
          v100 = EtwpReserveTraceBuffer(v181, v62, (unsigned int)&v210, (unsigned int)&v200, v98);
          v187 = (_OWORD *)v100;
          if ( ListEntry )
            EtwpDereferenceStackEntry(ListEntry);
          if ( !v100 )
          {
            v101 = v62;
            v102 = v181;
            ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v181, v101, v99);
            v104 = v213;
            if ( !v96 )
              v104 = 0LL;
            v105 = v199;
            if ( !v96 )
              v105 = 0;
            if ( (unsigned int)((__int64 (*)(void))Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage)() )
            {
              if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
              {
                v157 = v104;
                v20 = *(_QWORD *)&Size[1];
                EtwpTraceLostEvent(
                  v184 + 40,
                  Size[1],
                  v102 + 136,
                  v179,
                  ReserveTraceBufferStatus,
                  v105,
                  v157,
                  v164 < 2u,
                  0);
                goto LABEL_188;
              }
            }
            else if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
            {
              v156 = v104;
              v20 = *(_QWORD *)&Size[1];
              EtwpTraceLostEventOld(v184 + 40, Size[1], v102 + 136, ReserveTraceBufferStatus, v105, v156, v164 < 2u, 0);
LABEL_188:
              v34 = (unsigned int)v172;
              if ( v172 >= 0 )
              {
                if ( (*(_DWORD *)(v102 + 12) & 0x8000000) == 0 )
                  v34 = ReserveTraceBufferStatus;
                v172 = v34;
              }
              if ( (_BYTE)v170 )
                ExReleaseRundownProtectionCacheAwareEx(
                  *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v183 + 448) + 8 * v190),
                  1u);
              v22 = (struct _SLIST_ENTRY *)Src;
              v32 = v182;
              v33 = 80LL;
              if ( ReserveTraceBufferStatus != -1073741675 )
              {
LABEL_278:
                CurrentIrql = v178;
                goto LABEL_23;
              }
              v172 = -1073741675;
              goto LABEL_73;
            }
            v20 = *(_QWORD *)&Size[1];
            goto LABEL_188;
          }
          *(_QWORD *)v90 = v181;
          *((_QWORD *)v90 + 1) = v100;
          v90[1] = v210;
          *((_QWORD *)v90 + 4) = v211;
          ++LODWORD(v215[24]);
          *(_DWORD *)v100 = v62 | 0xC0130000;
          v106 = (_WORD *)(v100 + 4);
          v191 = (void *)(v100 + 4);
          *(_WORD *)(v100 + 4) = a6;
          *(_WORD *)(v100 + 6) = a7;
          *(_OWORD *)(v100 + 40) = **(_OWORD **)&Size[1];
          if ( v192 )
          {
            v107 = *v192;
            *v106 = a6 | 0x80;
          }
          else
          {
            v107 = *(_OWORD *)(v184 + 40);
          }
          *(_OWORD *)(v100 + 24) = v107;
          if ( a8 )
            v108 = *a8;
          else
            v108 = NullGuid;
          *(GUID *)(v100 + 64) = v108;
          v214 = (_QWORD *)(v100 + 16);
          *(_QWORD *)(v100 + 16) = v200;
          v109 = (_DWORD *)v185;
          *(_DWORD *)(v100 + 8) = *(_DWORD *)(v185 + 1232);
          *(_DWORD *)(v100 + 12) = v109[306];
          *(_DWORD *)(v100 + 56) = v109[163];
          *(_DWORD *)(v100 + 60) = v109[183];
          if ( v60 )
          {
            if ( (v60 & 0x200) != 0 )
            {
              v110 = (unsigned __int16 *)(v100 + 80);
              v180 = v110;
              v111 = v207;
              v112 = (*(_WORD *)(v207 + 4224) + 15) & 0xFFF8;
              *v110 = v112;
              v110[1] = 16;
              v110[3] = *(_WORD *)(v111 + 4224);
              v110[2] = 0;
              v113 = v112 - *(_WORD *)(v111 + 4224) - 8;
              v114 = v110 + 4;
              memmove(v110 + 4, *(const void **)(v111 + 4216), *(unsigned __int16 *)(v111 + 4224));
              memset((char *)v114 + *(unsigned __int16 *)(v111 + 4224), 0, v113);
              *v106 |= 1u;
              v115 = v180;
              v116 = *v180 + 80;
              v162 = v116;
              v186 = v180;
              v100 = (__int64)v187;
            }
            else
            {
              v116 = v162;
              v115 = v180;
            }
            if ( (v60 & 0x10) != 0 )
            {
              v117 = (unsigned __int16 *)(v100 + v116);
              *(_DWORD *)v117 = 65560;
              *((_DWORD *)v117 + 1) = 0x100000;
              *(_OWORD *)(v117 + 4) = *a9;
              *v106 |= 1u;
              v116 += 24;
              v162 = v116;
              if ( v115 )
                v115[2] |= 1u;
              v115 = v117;
              v180 = v117;
              v186 = v117;
            }
            if ( (v60 & 2) != 0 )
            {
              v118 = (unsigned __int16 *)(v100 + v116);
              memmove(v118, Src, *(unsigned __int16 *)Src);
              *v106 |= 1u;
              v116 = *(unsigned __int16 *)Src + v162;
              v162 = v116;
              if ( v115 )
                v115[2] |= 1u;
              v115 = v118;
              v180 = v118;
              v186 = v118;
            }
            if ( (v60 & 1) != 0 )
            {
              v119 = (unsigned __int16 *)(v100 + v116);
              *(_DWORD *)v119 = 196624;
              *((_DWORD *)v119 + 1) = 0x40000;
              SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
              v121 = 0;
              if ( SessionId != -1 )
                v121 = SessionId;
              *((_DWORD *)v119 + 2) = v121;
              *v106 |= 1u;
              v116 = v162 + 16;
              v162 += 16;
              if ( v115 )
                v115[2] |= 1u;
              v115 = v119;
              v180 = v119;
              v186 = v119;
            }
            if ( (v60 & 0x40) != 0 )
            {
              v122 = (unsigned __int16 *)(v100 + v116);
              *(_DWORD *)v122 = 851984;
              *((_DWORD *)v122 + 1) = 0x80000;
              *((_QWORD *)v122 + 1) = KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[6] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
              *v106 |= 1u;
              v116 += 16;
              v162 = v116;
              if ( v115 )
                v115[2] |= 1u;
              v115 = v122;
              v180 = v122;
              v186 = v122;
            }
            if ( (v60 & 0x80u) != 0 )
            {
              v123 = (unsigned __int16 *)(v100 + v116);
              *(_DWORD *)v123 = 655376;
              *((_DWORD *)v123 + 1) = 0x80000;
              if ( (v28 & 4) == 0 )
              {
                v124 = KeGetCurrentPrcb();
                v125 = _InterlockedIncrement64((volatile signed __int64 *)v124->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v124->Number << 48);
                v201 = v125;
                v28 |= 4u;
                v160 = v28;
                if ( v208 )
                  *v208 = v125;
              }
              *((_QWORD *)v123 + 1) = v201;
              *v106 |= 1u;
              v116 += 16;
              v162 = v116;
              if ( v115 )
                v115[2] |= 1u;
              v115 = v123;
              v180 = v123;
              v186 = v123;
            }
            if ( (v60 & 4) != 0 )
            {
              v126 = (_QWORD *)(v100 + v116);
              memmove(v126, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
              if ( v126[1] )
              {
                if ( (v60 & 0x20) == 0 )
                {
                  LOBYTE(v127) = 1;
                  if ( !(unsigned __int8)EtwpQueueStackWalkApc(
                                           v185,
                                           (unsigned __int8)v178,
                                           v181,
                                           v127,
                                           (__int64)(v126 + 1)) )
                    v126[1] = 0LL;
                }
              }
              *v106 |= 1u;
              v116 = *(unsigned __int16 *)StackLookasideListEntry + v162;
              v162 = v116;
              if ( v115 )
                v115[2] |= 1u;
              v115 = (unsigned __int16 *)v126;
              v180 = (unsigned __int16 *)v126;
              v186 = (unsigned __int16 *)v126;
            }
            v128 = (__int64)v187;
            if ( (v60 & 8) != 0 )
            {
              v129 = (unsigned __int16 *)((char *)v187 + v116);
              *(_DWORD *)v129 = 1179672;
              *((_DWORD *)v129 + 1) = 0x100000;
              *((_QWORD *)v129 + 2) = ListEntry;
              *((_QWORD *)v129 + 1) = *((_QWORD *)StackLookasideListEntry + 1);
              *v106 |= 1u;
              v116 += 24;
              v162 = v116;
              if ( v115 )
                v115[2] |= 1u;
              v130 = v129;
              v180 = v129;
              v186 = v129;
              goto LABEL_245;
            }
          }
          else
          {
            v116 = v162;
            v128 = v100;
          }
          v130 = v180;
LABEL_245:
          v131 = v173;
          if ( (_WORD)v173 )
          {
            v132 = (unsigned __int16 *)(v128 + v116);
            v190 = (unsigned __int64)v132;
            v133 = (v173 + 15) & 0xFFF8;
            *v132 = v133;
            *(_DWORD *)(v132 + 1) = 12;
            v132[3] = v131;
            v134 = v133 - v131 - 8;
            v170 = v134;
            memmove(v132 + 4, v193, v131);
            memset((char *)v132 + v131 + 8, 0, v134);
            v135 = v162;
            v128 = (__int64)v180;
            *v106 |= 1u;
            v116 = *v132 + v135;
            v162 = v116;
            if ( v128 )
              *(_WORD *)(v128 + 4) |= 1u;
            v130 = v132;
          }
          v136 = v169;
          v137 = v187;
          v21 = 0LL;
          if ( v169 )
          {
            v138 = (unsigned __int16 *)((char *)v187 + v116);
            v139 = LOWORD(Size[0]);
            v140 = (LOWORD(Size[0]) + 15) & 0xFFF8;
            *v138 = v140;
            *(_DWORD *)(v138 + 1) = 11;
            v138[3] = v139;
            v194 = v138 + 4;
            v209 = (char *)v138 + v139 + 8;
            memset(v209, 0, (unsigned __int16)(v140 - v139 - 8));
            *v106 |= 1u;
            v116 = *v138 + v162;
            v162 = v116;
            v136 = v169;
            if ( v130 )
              v130[2] |= 1u;
          }
          for ( i = 0; ; ++i )
          {
            while ( 1 )
            {
              v167 = i;
              if ( i >= a10 )
              {
                v149 = v181;
                if ( (*(_DWORD *)(v181 + 12) & 0x80000) != 0
                  && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
                {
                  EtwpSendTraceEvent(v181, &v210, v128);
                }
                if ( *(_QWORD *)(v149 + 1288) )
                  EtwpInvokeEventCallback(v149, &v210, v184 + 40, 0LL);
                v20 = *(_QWORD *)&Size[1];
                v22 = (struct _SLIST_ENTRY *)Src;
                v32 = v182;
                CurrentIrql = v178;
                v33 = 80LL;
                if ( v203 )
                {
                  *(_DWORD *)(v203 + 4LL * (v188 >> 5)) |= 1 << (v188 & 0x1F);
                  goto LABEL_278;
                }
                goto LABEL_23;
              }
              v128 = v171;
              v142 = *(unsigned int *)(v171 + 16LL * i + 8);
              Size[0] = *(_DWORD *)(v171 + 16LL * i + 8);
              v143 = *(_QWORD **)(v171 + 16LL * i);
              v144 = v175 ? *(_BYTE *)(v171 + 16LL * i + 12) : 0;
              if ( v144 )
                break;
              v147 = (char *)v137 + v116;
              v191 = v147;
              v148 = v142 + v116;
              v162 = v148;
              if ( v148 > v62 )
                KeBugCheckEx(0x11Du, 5uLL, v148, v62, 0LL);
              memmove(v147, v143, v142);
              v116 = v162;
              v136 = v169;
LABEL_268:
              ++i;
              v137 = v187;
            }
            v145 = v144 - 1;
            if ( v145 )
            {
              if ( v145 == 2 && (_DWORD)v142 == 8 )
                *v214 = *v143;
              goto LABEL_268;
            }
            if ( !v194 || (v146 = (char *)v194 + v142, v191 = (char *)v194 + v142, (char *)v194 + v142 > v209) || !v136 )
              KeBugCheckEx(0x11Du, 5uLL, v116, v62, 0LL);
            memmove(v194, v143, v142);
            v116 = v162;
            v194 = v146;
            v136 = --v169;
            v137 = v187;
          }
        }
        LOBYTE(v159) = 1;
        v158 = *((_QWORD *)v77 + 1);
        LOBYTE(v157) = *((_BYTE *)v77 + 4);
        v81 = v171;
        if ( !(unsigned __int8)EtwpApplyEventNameFilter(v80, v78, a10, v171, 0, v178, v157, v158, 1) )
          goto LABEL_155;
      }
    }
    if ( (v28 & 1) == 0 )
    {
      v82 = 256;
      StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
      if ( StackLookasideListEntry )
      {
        v28 |= 2u;
      }
      else
      {
        HighLimit = 0LL;
        LowLimit = 0LL;
        IoGetStackLimits(&LowLimit, &HighLimit);
        if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
        {
          v86 = alloca(1552LL);
          StackLookasideListEntry = &v154;
          v82 = 192;
        }
      }
      if ( StackLookasideListEntry )
      {
        v87 = (*(_DWORD *)(v181 + 816) & 0x40000000) == 0;
        if ( *(_QWORD *)(v184 + 40) == *(_QWORD *)&EventTracingProvGuid.Data1
          && *(_QWORD *)(v184 + 48) == *(_QWORD *)EventTracingProvGuid.Data4
          && **(_WORD **)&Size[1] == 18 )
        {
          v60 |= 0x20u;
          v21 = v184 + 80;
          v87 = 0;
        }
        IsEnabledDeviceUsage = Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage(
                                 v184,
                                 v83,
                                 v84,
                                 v85);
        v156 = v21;
        LOBYTE(BugCheckParameter4) = v87;
        if ( IsEnabledDeviceUsage )
          v89 = v179;
        else
          v89 = 0LL;
        if ( !(unsigned __int8)EtwpGetStackExtendedHeaderItem(
                                 v185,
                                 v89,
                                 v82,
                                 &StackLookasideListEntry,
                                 BugCheckParameter4,
                                 v156) )
        {
          if ( (v28 & 2) != 0 )
          {
            EtwpReleaseStackLookasideListEntry(StackLookasideListEntry);
            v28 &= ~2u;
          }
          StackLookasideListEntry = 0LL;
        }
      }
      v28 |= 1u;
      v160 = v28;
    }
    if ( StackLookasideListEntry )
    {
      if ( (*(_DWORD *)(v181 + 820) & 1) != 0
        && (unsigned __int8)EtwpGetCrimsonStackKey(v181, StackLookasideListEntry, &ListEntry) )
      {
        v60 |= 8u;
        v62 += 24;
      }
      else
      {
        v60 |= 4u;
        v62 += *(unsigned __int16 *)StackLookasideListEntry;
      }
      v165 = v62;
    }
    goto LABEL_154;
  }
  if ( v37 )
  {
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v53 + 448) + 8LL * (unsigned int)v51),
      1u);
    v53 = v183;
  }
  v20 = *(_QWORD *)&Size[1];
  if ( (_DWORD)v51 != 3 )
    goto LABEL_69;
  v54 = *(_DWORD *)(v53 + 4068);
  v34 = 3221225480LL;
  v36 = 3221226238LL;
  if ( v54 )
    v34 = 3221226238LL;
  v172 = v34;
LABEL_73:
  if ( (v28 & 2) != 0 )
    EtwpReleaseStackLookasideListEntry(StackLookasideListEntry);
  if ( v172 < 0 )
  {
    v150 = Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage(
             v34,
             v36,
             v33,
             CurrentIrql);
    v151 = *(_QWORD *)(v20 + 8);
    if ( v150 )
      EtwpFailLogging(
        *(unsigned __int8 *)(v20 + 4),
        v151,
        v184,
        (unsigned int)v215,
        v161,
        v179,
        v172,
        v20,
        v164 < 2u,
        a10,
        v171,
        0);
    else
      EtwpFailLoggingOld(
        *(unsigned __int8 *)(v20 + 4),
        v151,
        v184,
        (unsigned int)v215,
        v161,
        v172,
        v20,
        v164 < 2u,
        a10,
        v171,
        0);
  }
  else
  {
    v167 = 0;
    if ( LODWORD(v215[24]) )
    {
      v55 = v183;
      v56 = v178;
      do
      {
        CurrentIrql = (__int64)&v215[3 * (unsigned int)v21];
        v33 = *(_QWORD *)(CurrentIrql + 16);
        v57 = *(signed __int64 **)(CurrentIrql + 24);
        _m_prefetchw(v57);
        v58 = *v57;
        if ( (v33 ^ (unsigned __int64)*v57) >= 0xF )
        {
LABEL_81:
          _InterlockedDecrement((volatile signed __int32 *)(v33 + 12));
        }
        else
        {
          while ( 1 )
          {
            v59 = v58;
            v58 = _InterlockedCompareExchange64(v57, v58 + 1, v58);
            if ( v59 == v58 )
              break;
            if ( (v33 ^ (unsigned __int64)v58) >= 0xF )
              goto LABEL_81;
          }
        }
        if ( v56 < 2u )
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v55 + 448) + 8LL * **(unsigned int **)CurrentIrql),
            1u);
        LODWORD(v21) = ++v167;
      }
      while ( v167 < LODWORD(v215[24]) );
      v22 = (struct _SLIST_ENTRY *)Src;
    }
  }
  if ( v168 )
    KeLeaveCriticalRegionThread(v204);
  if ( v22 )
  {
    v152 = KeGetCurrentPrcb();
    v153 = v152->PPLookasideList[8].P;
    ++v153->TotalFrees;
    if ( LOWORD(v153->ListHead.Alignment) < v153->Depth
      || (++v153->FreeMisses,
          v153 = v152->PPLookasideList[8].L,
          ++v153->TotalFrees,
          LOWORD(v153->ListHead.Alignment) < v153->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v153->ListHead, v22);
    }
    else
    {
      ++v153->FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *, struct _KPRCB *, __int64, __int64))v153->FreeEx)(
        v22,
        v152,
        v33,
        CurrentIrql);
    }
  }
  return (unsigned int)v172;
}
