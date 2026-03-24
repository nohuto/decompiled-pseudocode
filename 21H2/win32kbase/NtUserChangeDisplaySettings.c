/*
 * XREFs of NtUserChangeDisplaySettings @ 0x1C00179C0
 * Callers:
 *     <none>
 * Callees:
 *     DrvLogDiagDisplayChange @ 0x1C0017910 (DrvLogDiagDisplayChange.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0017D10 (xxxUserChangeDisplaySettings.c)
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     CheckAccessEx @ 0x1C0042FA8 (CheckAccessEx.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v7; // r13
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v24; // rcx
  PERESOURCE *DomainLockRef; // rbx
  struct tagKERNELHANDLETABLEENTRY *v26; // rsi
  int v27; // eax
  unsigned int v28; // ebx
  __int64 v30; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  PERESOURCE *v39; // rdi
  __int64 v40; // rcx
  int v41; // [rsp+40h] [rbp-C0h] BYREF
  int v42; // [rsp+44h] [rbp-BCh] BYREF
  int v43; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v44[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h]
  unsigned __int8 v48; // [rsp+70h] [rbp-90h]
  GUID v49; // [rsp+74h] [rbp-8Ch] BYREF
  _QWORD v50[10]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+E0h] [rbp-20h] BYREF
  int *v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+110h] [rbp+10h] BYREF
  int *v55; // [rsp+130h] [rbp+30h]
  __int64 v56; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+140h] [rbp+40h] BYREF
  int *v58; // [rsp+160h] [rbp+60h]
  __int64 v59; // [rsp+168h] [rbp+68h]

  v4 = a2;
  v45 = a2;
  v46 = a4;
  v7 = a4;
  memset(v50, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v50[1]);
  v44[1] = -1;
  v50[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v50[3]) = 26;
  LOBYTE(v50[6]) = -1;
  v44[0] = 0x2000;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v49 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v48 = 1;
    v33 = PsGetCurrentThreadWin32Thread();
    v47 = v33;
    if ( v33 && (*(int *)(v33 + 24) > 0 || *(_DWORD *)(v47 + 48)) )
    {
      EtwActivityIdControl(3u, &v49);
      if ( (unsigned int)dword_1C024BA90 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v34, v35) )
        {
          v42 = v48;
          v53 = 4LL;
          v52 = &v42;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FF7, (int)&v49, 0, 3u, &v51);
        }
      }
    }
  }
  else
  {
    v47 = 0LL;
  }
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v10 )
      v9 = *v10;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v9 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v47 && (*(_DWORD *)(v47 + 48) || *(int *)(v47 + 24) > 0) )
  {
    *(_DWORD *)(v47 + 44) = 1;
    *(GUID *)(v47 + 28) = v49;
    if ( (unsigned int)dword_1C024BA90 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, (unsigned int)dword_1C024BA90, v16) )
      {
        v41 = v48;
        v56 = 4LL;
        v55 = &v41;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FA0, (int)&v49, 0, 3u, &v54);
        v36 = (unsigned int)dword_1C024BA90;
      }
      if ( (unsigned int)v36 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v36, v37) )
      {
        v43 = v48;
        v59 = 4LL;
        v58 = &v43;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FCD, (int)&v49, 0, 3u, &v57);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v30 = PsGetCurrentProcess(v18, v17),
        ProcessSessionId = PsGetProcessSessionIdEx(v30),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v20 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v20 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
    if ( v20 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v20 + 488) & 0x1000000) != 0 )
        {
          v24 = *(unsigned int *)(v20 + 1232);
          if ( (v24 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            {
              v41 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
            }
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            {
              v41 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
            }
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v26 = gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v26 + 2);
                v38 = *(_QWORD *)v26;
                *((_QWORD *)v26 + 2) = 0LL;
                if ( !*(_DWORD *)(v38 + 8) )
                {
                  v41 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                }
                v39 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v39 == (PERESOURCE *)&gDomainDummyLock )
                {
                  v42 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v39);
                HMUnlockObject(*(_QWORD *)v26);
                tagDomLock::LockExclusive((tagDomLock *)v39);
                v26 = gpducstulHead;
              }
              while ( gpducstulHead );
              v4 = v45;
              v7 = v46;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  if ( gbVideoInitialized )
  {
    if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
      v27 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 768LL) + 24LL) & 0x10;
    else
      v27 = 0;
    if ( (v27 || !(unsigned __int8)CheckAccessEx(*((_QWORD *)gptiCurrent + 53) + 880LL, v44, 0LL)) && a3 != 34 )
    {
      v40 = 5LL;
LABEL_68:
      v28 = -1;
      UserSetLastError(v40);
      goto LABEL_35;
    }
    if ( (a3 & 0x8000000) != 0 )
    {
      v40 = 87LL;
      goto LABEL_68;
    }
    DrvLogDiagDisplayChange(0LL, 8);
    v28 = xxxUserChangeDisplaySettings(a1, v4, 0LL, a3, v7, 1, v50);
  }
  else
  {
    v28 = -1;
  }
LABEL_35:
  UserSessionSwitchLeaveCrit(v24);
  return v28;
}
