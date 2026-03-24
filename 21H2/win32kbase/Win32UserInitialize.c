/*
 * XREFs of Win32UserInitialize @ 0x1C0298BBC
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029B770 (Win32kBaseDriverEntry.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0026440 (OpenCacheKeyEx.c)
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ApiSetEditionBaseDriverEntryInitialize @ 0x1C0067F60 (ApiSetEditionBaseDriverEntryInitialize.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C0068014 (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     Initialize @ 0x1C0068114 (Initialize.c)
 *     UserAddAtomToAtomTableEx @ 0x1C00696D0 (UserAddAtomToAtomTableEx.c)
 *     IsIMMEnabledSystem @ 0x1C006B1E0 (IsIMMEnabledSystem.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C0099FA0 (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     InitSecurity @ 0x1C02989B0 (InitSecurity.c)
 *     HMInitHandleTable @ 0x1C0299B50 (HMInitHandleTable.c)
 *     InitCreateUserSubsystem @ 0x1C0299BFC (InitCreateUserSubsystem.c)
 *     InitQEntryLookaside @ 0x1C0299EC0 (InitQEntryLookaside.c)
 *     InitCreateSharedSection @ 0x1C0299F28 (InitCreateSharedSection.c)
 *     InitKernelHandleTable @ 0x1C029A080 (InitKernelHandleTable.c)
 */

__int64 Win32UserInitialize()
{
  int v0; // r14d
  int v1; // r15d
  int v2; // eax
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  int inited; // esi
  int v26; // eax
  int v27; // eax
  int AtomTable; // eax
  int v29; // esi
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned int v34; // edx
  __int64 v35; // rcx
  unsigned int v36; // r8d
  __int64 v37; // r9
  _DWORD *v38; // rax
  _QWORD *v39; // rax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  void *v47; // rbx
  void *v48; // rbx
  int v49; // eax
  int v50; // edi
  void *v51; // rbx
  int v52; // eax
  int *v53; // rbx
  int v54; // esi
  void *v55; // rdi
  _DWORD *v56; // rbx
  void *v57; // rdi
  _DWORD *v58; // rbx
  void *v59; // rdi
  _DWORD *v60; // rbx
  void *v61; // rdi
  _DWORD *v62; // rbx
  void *v63; // rdi
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  _QWORD *PoolWithTag; // rax
  void *v69; // rbx
  int v70; // eax
  __int64 v72; // rax
  unsigned int v73; // r8d
  PVOID *DomainLockRef; // rax
  PERESOURCE *v75; // rbx
  __int64 *v76; // r12
  __int64 v77; // rax
  PVOID *v78; // rdi
  int v79; // [rsp+3Ch] [rbp-CCh] BYREF
  int v80; // [rsp+40h] [rbp-C8h] BYREF
  int v81; // [rsp+44h] [rbp-C4h] BYREF
  int v82; // [rsp+48h] [rbp-C0h] BYREF
  int v83; // [rsp+4Ch] [rbp-BCh] BYREF
  int v84; // [rsp+50h] [rbp-B8h] BYREF
  int v85; // [rsp+54h] [rbp-B4h] BYREF
  int v86[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v87; // [rsp+60h] [rbp-A8h] BYREF
  int v88; // [rsp+64h] [rbp-A4h] BYREF
  int v89; // [rsp+68h] [rbp-A0h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-98h] BYREF
  ULONG v91; // [rsp+74h] [rbp-94h] BYREF
  ULONG v92; // [rsp+78h] [rbp-90h] BYREF
  ULONG v93; // [rsp+7Ch] [rbp-8Ch] BYREF
  ULONG v94; // [rsp+80h] [rbp-88h] BYREF
  ULONG v95; // [rsp+84h] [rbp-84h] BYREF
  ULONG v96; // [rsp+88h] [rbp-80h] BYREF
  ULONG v97; // [rsp+8Ch] [rbp-7Ch] BYREF
  int *v98; // [rsp+90h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+A8h] [rbp-60h] BYREF
  struct _UNICODE_STRING v101; // [rsp+B8h] [rbp-50h] BYREF
  struct _UNICODE_STRING v102; // [rsp+C8h] [rbp-40h] BYREF
  struct _UNICODE_STRING v103; // [rsp+D8h] [rbp-30h] BYREF
  struct _UNICODE_STRING v104; // [rsp+E8h] [rbp-20h] BYREF
  struct _UNICODE_STRING v105; // [rsp+F8h] [rbp-10h] BYREF
  struct _UNICODE_STRING v106; // [rsp+108h] [rbp+0h] BYREF
  __int64 v107; // [rsp+118h] [rbp+10h]
  unsigned __int8 v108; // [rsp+120h] [rbp+18h]
  GUID ActivityId; // [rsp+124h] [rbp+1Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v110; // [rsp+138h] [rbp+30h] BYREF
  int *v111; // [rsp+158h] [rbp+50h]
  __int64 v112; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v113; // [rsp+168h] [rbp+60h] BYREF
  int *v114; // [rsp+188h] [rbp+80h]
  __int64 v115; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v116; // [rsp+198h] [rbp+90h] BYREF
  int *v117; // [rsp+1B8h] [rbp+B0h]
  __int64 v118; // [rsp+1C0h] [rbp+B8h]
  _BYTE KeyValueInformation[12]; // [rsp+1C8h] [rbp+C0h] BYREF
  int v120; // [rsp+1D4h] [rbp+CCh]
  _BYTE v121[12]; // [rsp+1E0h] [rbp+D8h] BYREF
  int v122; // [rsp+1ECh] [rbp+E4h]
  _BYTE v123[12]; // [rsp+1F8h] [rbp+F0h] BYREF
  int v124; // [rsp+204h] [rbp+FCh]
  _BYTE v125[12]; // [rsp+210h] [rbp+108h] BYREF
  int v126; // [rsp+21Ch] [rbp+114h]
  _BYTE v127[12]; // [rsp+228h] [rbp+120h] BYREF
  int v128; // [rsp+234h] [rbp+12Ch]
  _BYTE v129[12]; // [rsp+240h] [rbp+138h] BYREF
  int v130; // [rsp+24Ch] [rbp+144h]
  _BYTE v131[12]; // [rsp+258h] [rbp+150h] BYREF
  int v132; // [rsp+264h] [rbp+15Ch]
  _BYTE v133[12]; // [rsp+270h] [rbp+168h] BYREF
  int v134; // [rsp+27Ch] [rbp+174h]

  v0 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 14, 24, (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
  v1 = -1073741637;
  if ( qword_1C0257928 )
    v2 = qword_1C0257928();
  else
    v2 = -1073741637;
  if ( v2 < 0 || (!qword_1C0257930 ? (result = 3221225659LL) : (result = qword_1C0257930()), (int)result >= 0) )
  {
    result = InitCreateSharedSection();
    if ( (int)result >= 0 )
    {
      result = InitKernelHandleTable();
      if ( (int)result >= 0 )
      {
        result = ApiSetEditionBaseDriverEntryInitialize();
        v5 = result;
        if ( (int)result >= 0 )
        {
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          ActivityId = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v108 = 1;
            v72 = PsGetCurrentThreadWin32Thread(v6);
            v107 = v72;
            if ( v72 && (*(int *)(v72 + 24) > 0 || *(_DWORD *)(v107 + 48)) )
            {
              EtwActivityIdControl(3u, &ActivityId);
              if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
              {
                v87 = v108;
                v115 = 4LL;
                v114 = &v87;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024BA90,
                  (unsigned __int8 *)dword_1C0218FF7,
                  &ActivityId,
                  0LL,
                  3u,
                  &v113);
              }
            }
          }
          else
          {
            v107 = 0LL;
          }
          v8 = 0LL;
          while ( 1 )
          {
            v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v9 )
              v8 = *v9;
            CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10);
            if ( CurrentProcess )
            {
              if ( CurrentProcess == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v14, v13) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v8 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
            && v107
            && (*(_DWORD *)(v107 + 48) || *(int *)(v107 + 24) > 0) )
          {
            *(_DWORD *)(v107 + 44) = 1;
            *(GUID *)(v107 + 28) = ActivityId;
            if ( (unsigned int)dword_1C024BA90 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
              {
                v88 = v108;
                v118 = 4LL;
                v117 = &v88;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024BA90,
                  (unsigned __int8 *)dword_1C0218FA0,
                  &ActivityId,
                  0LL,
                  3u,
                  &v116);
                v73 = dword_1C024BA90;
              }
              if ( v73 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
              {
                v89 = v108;
                v112 = 4LL;
                v111 = &v89;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024BA90,
                  (unsigned __int8 *)dword_1C0218FCD,
                  &ActivityId,
                  0LL,
                  3u,
                  &v110);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v8;
          gbValidateHandleForIL = 1;
          if ( !(unsigned __int8)KeIsAttachedProcess()
            || (v17 = PsGetCurrentProcess(v16, v15),
                ProcessSessionId = PsGetProcessSessionIdEx(v17),
                CurrentThreadProcess = PsGetCurrentThreadProcess(),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            CurrentThread = KeGetCurrentThread();
            v21 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v21 = *ThreadWin32Thread;
            }
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
            if ( v21
              && CurrentProcessWin32Process
              && (*(_DWORD *)(v21 + 488) & 0x1000000) != 0
              && (*(_DWORD *)(v21 + 1232) & 0x80u) == 0
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PVOID *)GetDomainLockRef(12);
              v75 = (PERESOURCE *)DomainLockRef;
              if ( DomainLockRef == gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
              if ( ExIsResourceAcquiredExclusiveLite(*v75) == 1 )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*v75);
              v76 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v76[2];
                  v77 = *v76;
                  v76[2] = 0LL;
                  if ( !*(_DWORD *)(v77 + 8) )
                    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
                  v78 = (PVOID *)GetDomainLockRef(12);
                  if ( v78 == gDomainDummyLock )
                  {
                    v86[1] = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
                  }
                  ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v78);
                  HMUnlockObject(*v76);
                  tagDomLock::LockExclusive((PERESOURCE *)v78);
                  v76 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v0 = 0;
                v1 = -1073741637;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v75);
            }
          }
          if ( (unsigned int)InitSecurity() )
          {
            *(_DWORD *)(ExWindowStationObjectType + 108LL) = 240;
            *(_DWORD *)(ExWindowStationObjectType + 104LL) = 0;
            *(_DWORD *)(ExWindowStationObjectType + 92LL) = 983935;
            *(struct _GENERIC_MAPPING *)(ExWindowStationObjectType + 76LL) = WinStaMapping;
            *((_DWORD *)ExDesktopObjectType + 27) = 344;
            *((_DWORD *)ExDesktopObjectType + 26) = 0;
            *((_DWORD *)ExDesktopObjectType + 23) = 983551;
            *(_OWORD *)((char *)ExDesktopObjectType + 76) = DesktopMapping;
            *(_OWORD *)(ExCompositionObjectType + 76LL) = RIMRights;
            *(_DWORD *)(ExCompositionObjectType + 108LL) = 24;
            *(_DWORD *)(ExCompositionObjectType + 104LL) = 0;
            *(_DWORD *)(ExCompositionObjectType + 92LL) = 983043;
            *(_BYTE *)(ExRawInputManagerObjectType + 66LL) |= 0x10u;
            *(_DWORD *)(ExRawInputManagerObjectType + 108LL) = 904;
            *(_DWORD *)(ExRawInputManagerObjectType + 104LL) = 0;
            *(_DWORD *)(ExRawInputManagerObjectType + 92LL) = 983043;
            *(_OWORD *)(ExRawInputManagerObjectType + 76LL) = RIMRights;
            gpepInit = PsGetCurrentProcess(ExRawInputManagerObjectType, 983043LL);
            inited = InitQEntryLookaside();
            if ( qword_1C0257938 )
              v26 = qword_1C0257938();
            else
              v26 = -1073741637;
            if ( v26 >= 0 )
            {
              if ( qword_1C0257940 )
                v27 = qword_1C0257940();
              else
                v27 = -1073741637;
              inited |= v27;
            }
            if ( UserAtomTableHandle )
              AtomTable = 0;
            else
              AtomTable = RtlCreateAtomTableEx(37LL, 1LL, &UserAtomTableHandle);
            v29 = AtomTable | inited;
            if ( UserLibmgmtAtomTableHandle )
              v30 = 0;
            else
              v30 = RtlCreateAtomTableEx(37LL, 1LL, &UserLibmgmtAtomTableHandle);
            v5 = v30 | v29;
            if ( v5 < 0 )
              goto LABEL_222;
            atomUSER32 = UserAddAtomToAtomTableEx(UserAtomTableHandle, (__int64)L"USER32", 1);
            gatomFirstPinned = atomUSER32;
            if ( atomUSER32 )
            {
              if ( (unsigned int)InitCreateUserSubsystem() )
              {
                if ( qword_1C0257948 )
                  v31 = qword_1C0257948();
                else
                  v31 = -1073741637;
                if ( v31 >= 0 && qword_1C0257950 )
                  qword_1C0257950();
                v32 = qword_1C0256B20 ? qword_1C0256B20() : -1073741637;
                if ( v32 < 0 || (!qword_1C0256B28 ? (v33 = -1073741637) : (v33 = qword_1C0256B28()), v33 >= 0) )
                {
                  gpsi = RtlAllocateHeap(gpvSharedAlloc, 0, 0x1BB0uLL);
                  if ( gpsi )
                  {
                    v34 = 2;
                    v35 = 2524LL;
                    do
                    {
                      v36 = 0;
                      v37 = v35;
                      do
                      {
                        ++v36;
                        *(_DWORD *)((char *)gpsi + v37) = -1;
                        v37 += 4LL;
                      }
                      while ( v36 < 0x1E );
                      ++v34;
                      v35 += 120LL;
                    }
                    while ( v34 < 0x12 );
                    v38 = gpsi;
                    *((_DWORD *)gpsi + 1282) = 8;
                    v38[1283] = 16;
                    gpDispInfo = (__int64)Win32AllocPoolZInit(0xA8uLL, 1885629269LL);
                    if ( gpDispInfo )
                    {
                      *(_QWORD *)gpDispInfo = RtlAllocateHeap(gpvSharedAlloc, 0, 0x28uLL);
                      if ( *(_QWORD *)gpDispInfo )
                      {
                        if ( (unsigned int)IsDesktopHeapLoggingOn() )
                          _InterlockedOr((volatile signed __int32 *)gpsi, 0x100u);
                        else
                          _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFEFF);
                        if ( (_BYTE)NlsMbCodePageTag )
                          _InterlockedOr((volatile signed __int32 *)gpsi, 2u);
                        else
                          _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFFD);
                        if ( (unsigned int)IsIMMEnabledSystem() )
                          _InterlockedOr((volatile signed __int32 *)gpsi, 4u);
                        else
                          _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFFB);
                        if ( (unsigned __int16)(NlsAnsiCodePage - 1255) <= 1u )
                          _InterlockedOr((volatile signed __int32 *)gpsi, 8u);
                        else
                          _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFF7);
                        *((_DWORD *)gpsi + 231) = gdwDesktopSectionSize << 10;
                        v39 = Win32AllocPoolZInit(0x100uLL, 1684763477LL);
                        gpkdiStatic = (__int64)v39;
                        if ( v39 )
                        {
                          *v39 = &diStatic;
                          if ( qword_1C0257958 )
                            v40 = qword_1C0257958();
                          else
                            v40 = -1073741637;
                          if ( v40 >= 0 && qword_1C0257960 )
                            qword_1C0257960();
                          if ( qword_1C0257968 )
                            v41 = qword_1C0257968();
                          else
                            v41 = -1073741637;
                          if ( v41 >= 0 && qword_1C0257970 )
                            qword_1C0257970();
                          if ( qword_1C0257978 )
                            v42 = qword_1C0257978();
                          else
                            v42 = -1073741637;
                          if ( v42 >= 0 && qword_1C0257980 )
                            qword_1C0257980();
                          v43 = qword_1C0257988 ? qword_1C0257988() : -1073741637;
                          if ( v43 < 0 || (!qword_1C0257990 ? (v44 = 0) : (v44 = qword_1C0257990()), v44) )
                          {
                            v45 = qword_1C0257998 ? qword_1C0257998() : -1073741637;
                            if ( v45 < 0 || (!qword_1C02579A0 ? (v46 = 0) : (v46 = qword_1C02579A0()), v46) )
                            {
                              if ( (unsigned int)HMInitHandleTable() )
                              {
                                gSharedInfo = (__int64)gpsi;
                                ResultLength = 0;
                                DestinationString = 0LL;
                                qword_1C024FD68 = *(_QWORD *)gpDispInfo;
                                v79 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v47 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v79);
                                  if ( !v47 )
                                    break;
                                  RtlInitUnicodeString(&DestinationString, L"USERProcessHandleQuota");
                                  if ( ZwQueryValueKey(
                                         v47,
                                         &DestinationString,
                                         KeyValuePartialInformation,
                                         KeyValueInformation,
                                         0x14u,
                                         &ResultLength) < 0 )
                                  {
                                    if ( !v79 )
                                      v0 = 10000;
                                  }
                                  else
                                  {
                                    v0 = v120;
                                    v79 = 0;
                                  }
                                  ZwClose(v47);
                                  if ( !v79 )
                                    goto LABEL_113;
                                }
                                v0 = 10000;
LABEL_113:
                                ValueName = 0LL;
                                gUserProcessHandleQuota = v0;
                                v91 = 0;
                                v80 = gdwPolicyFlags;
                                do
                                {
                                  v48 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v80);
                                  if ( !v48 )
                                  {
                                    v0 = 10000;
                                    goto LABEL_119;
                                  }
                                  RtlInitUnicodeString(&ValueName, L"USERPostMessageLimit");
                                  if ( ZwQueryValueKey(v48, &ValueName, KeyValuePartialInformation, v129, 0x14u, &v91) < 0 )
                                  {
                                    if ( !v80 )
                                      v0 = 10000;
                                  }
                                  else
                                  {
                                    v0 = v130;
                                    v80 = 0;
                                  }
                                  ZwClose(v48);
                                }
                                while ( v80 );
                                if ( v0 )
                                {
LABEL_119:
                                  v49 = v0;
                                  goto LABEL_120;
                                }
                                v49 = -1;
LABEL_120:
                                v50 = gNestedWindowLimit;
                                gUserPostMessageLimit = v49;
                                v101 = 0LL;
                                v81 = gdwPolicyFlags;
                                v92 = 0;
                                while ( 1 )
                                {
                                  v51 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v81);
                                  if ( !v51 )
                                    break;
                                  RtlInitUnicodeString(&v101, L"USERNestedWindowLimit");
                                  if ( ZwQueryValueKey(v51, &v101, KeyValuePartialInformation, v121, 0x14u, &v92) < 0 )
                                  {
                                    if ( !v81 )
                                      v0 = v50;
                                  }
                                  else
                                  {
                                    v0 = v122;
                                    v81 = 0;
                                  }
                                  ZwClose(v51);
                                  if ( !v81 )
                                    goto LABEL_134;
                                }
                                v0 = v50;
LABEL_134:
                                if ( (unsigned int)(v0 - 50) <= 0x32 )
                                  gNestedWindowLimit = v0;
                                if ( qword_1C0257A88 )
                                  v52 = qword_1C0257A88();
                                else
                                  v52 = -1073741637;
                                if ( v52 >= 0 )
                                {
                                  v53 = 0LL;
                                  v98 = 0LL;
                                  if ( qword_1C0257A90 )
                                  {
                                    qword_1C0257A90(&v98);
                                    v53 = v98;
                                  }
                                  v54 = *v53;
                                  v102 = 0LL;
                                  v93 = 0;
                                  v82 = gdwPolicyFlags;
                                  while ( 1 )
                                  {
                                    v55 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v82);
                                    if ( !v55 )
                                      break;
                                    RtlInitUnicodeString(&v102, L"USERKCCTimeout");
                                    if ( ZwQueryValueKey(v55, &v102, KeyValuePartialInformation, v123, 0x14u, &v93) >= 0 )
                                    {
                                      *v53 = v124;
                                      v82 = 0;
                                    }
                                    else if ( !v82 )
                                    {
                                      *v53 = v54;
                                    }
                                    ZwClose(v55);
                                    if ( !v82 )
                                      goto LABEL_150;
                                  }
                                  *v53 = v54;
                                }
LABEL_150:
                                v56 = gpsi;
                                v103 = 0LL;
                                v94 = 0;
                                v83 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v57 = OpenCacheKeyEx(0LL, 40LL, 0x20019u, &v83);
                                  if ( !v57 )
                                    break;
                                  RtlInitUnicodeString(&v103, L"Installed");
                                  if ( ZwQueryValueKey(v57, &v103, KeyValuePartialInformation, v125, 0x14u, &v94) >= 0 )
                                  {
                                    v56[560] = v126;
                                    v83 = 0;
                                  }
                                  else if ( !v83 )
                                  {
                                    v56[560] = 0;
                                  }
                                  ZwClose(v57);
                                  if ( !v83 )
                                    goto LABEL_159;
                                }
                                v56[560] = 0;
LABEL_159:
                                v58 = gpsi;
                                v104 = 0LL;
                                v95 = 0;
                                v84 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v59 = OpenCacheKeyEx(0LL, 41LL, 0x20019u, &v84);
                                  if ( !v59 )
                                    break;
                                  RtlInitUnicodeString(&v104, L"Installed");
                                  if ( ZwQueryValueKey(v59, &v104, KeyValuePartialInformation, v127, 0x14u, &v95) >= 0 )
                                  {
                                    v58[561] = v128;
                                    v84 = 0;
                                  }
                                  else if ( !v84 )
                                  {
                                    v58[561] = 0;
                                  }
                                  ZwClose(v59);
                                  if ( !v84 )
                                    goto LABEL_168;
                                }
                                v58[561] = 0;
LABEL_168:
                                v60 = gpsi;
                                v105 = 0LL;
                                v96 = 0;
                                v85 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v61 = OpenCacheKeyEx(0LL, 45LL, 0x20019u, &v85);
                                  if ( !v61 )
                                    break;
                                  RtlInitUnicodeString(&v105, L"R2BuildNumber");
                                  if ( ZwQueryValueKey(v61, &v105, KeyValuePartialInformation, v133, 0x14u, &v96) >= 0 )
                                  {
                                    v60[563] = v134;
                                    v85 = 0;
                                  }
                                  else if ( !v85 )
                                  {
                                    v60[563] = 0;
                                  }
                                  ZwClose(v61);
                                  if ( !v85 )
                                    goto LABEL_177;
                                }
                                v60[563] = 0;
LABEL_177:
                                v62 = gpsi;
                                v106 = 0LL;
                                v97 = 0;
                                v86[0] = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v63 = OpenCacheKeyEx(0LL, 46LL, 0x20019u, v86);
                                  if ( !v63 )
                                    break;
                                  RtlInitUnicodeString(&v106, L"StarterBuildNumber");
                                  if ( ZwQueryValueKey(v63, &v106, KeyValuePartialInformation, v131, 0x14u, &v97) >= 0 )
                                  {
                                    v62[562] = v132;
                                    v86[0] = 0;
                                  }
                                  else if ( !v86[0] )
                                  {
                                    v62[562] = 0;
                                  }
                                  ZwClose(v63);
                                  if ( !v86[0] )
                                    goto LABEL_186;
                                }
                                v62[562] = 0;
LABEL_186:
                                Initialize();
                                if ( UIPrivelegeIsolation::fEnforce )
                                {
                                  if ( qword_1C02579A8 )
                                    v64 = qword_1C02579A8();
                                  else
                                    v64 = -1073741637;
                                  if ( v64 >= 0 && qword_1C02579B0 )
                                    qword_1C02579B0();
                                  if ( qword_1C02579B8 )
                                    v65 = qword_1C02579B8();
                                  else
                                    v65 = -1073741637;
                                  if ( v65 >= 0 && qword_1C02579C0 )
                                    qword_1C02579C0();
                                }
                                gdwMDAQThreshold = 5000;
                                gdwMDAQTimeoutDefenseInDepth = 30000;
                                *((_DWORD *)gpsi + 559) &= ~0x20u;
                                if ( qword_1C02579C8 )
                                  v66 = qword_1C02579C8();
                                else
                                  v66 = -1073741637;
                                if ( v66 >= 0 && qword_1C02579D0 )
                                  qword_1C02579D0();
                                if ( qword_1C02579D8 )
                                  v67 = qword_1C02579D8();
                                else
                                  v67 = -1073741637;
                                if ( v67 >= 0 && qword_1C02579E0 )
                                  qword_1C02579E0();
                                PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x44535042u);
                                v69 = PoolWithTag;
                                if ( PoolWithTag )
                                {
                                  *PoolWithTag = 0LL;
                                  *((_BYTE *)PoolWithTag + 8) = 0;
                                  PoolWithTag[2] = -50000000LL;
                                  DispBroker::DispBrokerClient::LoadRegistrySettings((DispBroker::DispBrokerClient *)PoolWithTag);
                                }
                                else
                                {
                                  v69 = 0LL;
                                }
                                DispBroker::DispBrokerClient::s_pSessionBroker = v69;
                                if ( !v69 )
                                {
                                  v5 = -1073741801;
LABEL_222:
                                  UserSessionSwitchLeaveCrit();
                                  return (unsigned int)v5;
                                }
                                v5 = 0;
                                if ( qword_1C0256D40 )
                                  v70 = qword_1C0256D40();
                                else
                                  v70 = -1073741637;
                                if ( v70 >= 0 )
                                {
                                  v5 = qword_1C0256D48 ? qword_1C0256D48() : -1073741637;
                                  if ( v5 < 0 )
                                    goto LABEL_222;
                                }
                                if ( qword_1C0257A08 )
                                  v1 = qword_1C0257A08();
                                if ( v1 < 0 )
                                  goto LABEL_222;
                                if ( qword_1C0257A10 ? qword_1C0257A10(&gSMWP, 4LL) : 0 )
                                  goto LABEL_222;
                              }
                            }
                          }
                        }
                      }
                      else
                      {
                        Win32FreePool(gpDispInfo);
                        gpDispInfo = 0LL;
                      }
                    }
                  }
                }
              }
            }
          }
          if ( v5 >= 0 )
            v5 = -1073741801;
          goto LABEL_222;
        }
      }
    }
  }
  return result;
}
