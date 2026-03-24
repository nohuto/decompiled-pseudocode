/*
 * XREFs of DrvSetWddmDeviceMonitorPowerState @ 0x1C00C3960
 * Callers:
 *     DrvSetMonitorPowerState @ 0x1C00C3910 (DrvSetMonitorPowerState.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01198F8 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C001E47C (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     UserIsWddmConnectedSession @ 0x1C001F320 (UserIsWddmConnectedSession.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C3ED0 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall DrvSetWddmDeviceMonitorPowerState(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  wchar_t *v12; // rcx
  unsigned int v13; // ebx
  PDEVICE_OBJECT *v14; // r15
  wchar_t *v15; // rbx
  unsigned int v16; // edi
  unsigned int i; // edx
  wchar_t *j; // rbx
  wchar_t *v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // esi
  PDEVICE_OBJECT *v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v29; // rbx
  struct tagTHREADINFO **v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  PVOID CurrentProcess; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v47; // rsi
  __int64 v48; // rdx
  struct _DEVICE_OBJECT *v49; // rcx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned int v57; // r8d
  __int64 v58; // rax
  PVOID *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // [rsp+50h] [rbp-B0h] BYREF
  int v63; // [rsp+54h] [rbp-ACh] BYREF
  int v64; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v65[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD InputBuffer[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v67; // [rsp+70h] [rbp-90h]
  __int64 v68; // [rsp+80h] [rbp-80h]
  unsigned __int8 v69; // [rsp+88h] [rbp-78h]
  GUID ActivityId; // [rsp+8Ch] [rbp-74h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+A0h] [rbp-60h] BYREF
  int *v72; // [rsp+C0h] [rbp-40h]
  __int64 v73; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+D0h] [rbp-30h] BYREF
  int *v75; // [rsp+F0h] [rbp-10h]
  __int64 v76; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+100h] [rbp+0h] BYREF
  int *v78; // [rsp+120h] [rbp+20h]
  __int64 v79; // [rsp+128h] [rbp+28h]

  v4 = a2;
  InputBuffer[0] = a2;
  InputBuffer[1] = 0;
  v67 = a4;
  if ( !(unsigned int)UserIsWddmConnectedSession() )
    return;
  v9 = WdLogNewEntry5_WdTrace(v8, v7);
  *(_QWORD *)(v9 + 24) = a1;
  *(_QWORD *)(v9 + 32) = v4;
  WdLogEvent5_WdTrace(v9);
  if ( !a3 )
  {
    v12 = gpGraphicsDeviceList;
    v13 = 0;
    while ( v12 )
    {
      if ( (*((_DWORD *)v12 + 40) & 0x800000) != 0 && *((_QWORD *)v12 + 29) && (!a1 || *((_QWORD *)v12 + 18) == a1) )
        ++v13;
      v12 = (wchar_t *)*((_QWORD *)v12 + 16);
    }
    v14 = (PDEVICE_OBJECT *)PALLOCMEM2(24 * v13, 1886221383LL, 1);
    if ( v14 )
    {
      v15 = gpGraphicsDeviceList;
      v16 = 0;
      while ( v15 )
      {
        if ( (*((_DWORD *)v15 + 40) & 0x800000) != 0 && *((_QWORD *)v15 + 29) && (!a1 || *((_QWORD *)v15 + 18) == a1) )
        {
          for ( i = 0; i < v16; ++i )
          {
            if ( v14[3 * i + 2] == *((PDEVICE_OBJECT *)v15 + 18) )
              break;
          }
          if ( v16 == i )
          {
            v48 = 3LL * v16;
            v14[v48] = (PDEVICE_OBJECT)*((_QWORD *)v15 + 17);
            v49 = (struct _DEVICE_OBJECT *)*((_QWORD *)v15 + 29);
            v14[v48 + 1] = v49;
            v14[v48 + 2] = (PDEVICE_OBJECT)*((_QWORD *)v15 + 18);
            ObfReferenceObject(v49);
            ++v16;
          }
        }
        v15 = (wchar_t *)*((_QWORD *)v15 + 16);
      }
      KeResetEvent(gpevtMonitorPowerWaiter);
      gfMonitorPowerInProgress = 1;
      UserSessionSwitchLeaveCrit();
      v21 = 0;
      if ( v16 )
      {
        v22 = v14;
        do
        {
          DrvDxgkLogCodePointPacket(90LL, v21, v16);
          v23 = GreDeviceIoControlImpl(*v22, 0x23200Fu, InputBuffer, 0x10u, 0LL, 0, v65, 1u, 1);
          v26 = v23;
          if ( v23 < 0 )
          {
            v55 = WdLogNewEntry5_WdError(v25, v24);
            *(_QWORD *)(v55 + 24) = *v22;
            *(_QWORD *)(v55 + 32) = v26;
            WdLogEvent5_WdError(v55);
          }
          ObfDereferenceObject(v22[1]);
          DrvDxgkLogCodePointPacket(91LL, (unsigned int)v26, 0LL);
          ++v21;
          v22 += 3;
        }
        while ( v21 < v16 );
      }
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v20);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v69 = 1;
        v56 = PsGetCurrentThreadWin32Thread(v27);
        v68 = v56;
        if ( v56 && (*(int *)(v56 + 24) > 0 || *(_DWORD *)(v68 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v63 = v69;
            v73 = 4LL;
            v72 = &v63;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FD7,
              &ActivityId,
              0LL,
              3u,
              &v71);
          }
        }
      }
      else
      {
        v68 = 0LL;
      }
      v29 = 0LL;
      while ( 1 )
      {
        v30 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v30 )
          v29 = *v30;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v32, v31);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v35, v34) == gpepCSRSS && v29 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v29 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v68 && (*(_DWORD *)(v68 + 48) || *(int *)(v68 + 24) > 0) )
      {
        *(_DWORD *)(v68 + 44) = 1;
        *(GUID *)(v68 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v62 = v69;
            v76 = 4LL;
            v75 = &v62;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217F80,
              &ActivityId,
              0LL,
              3u,
              &v74);
            v57 = dword_1C024AA90;
          }
          if ( v57 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v64 = v69;
            v79 = 4LL;
            v78 = &v64;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FAD,
              &ActivityId,
              0LL,
              3u,
              &v77);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v29;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v38 = PsGetCurrentProcess(v37, v36),
            ProcessSessionId = PsGetProcessSessionIdEx(v38),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v42 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v42 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v43);
        if ( v42
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v42 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v42 + 1232) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PVOID *)GetDomainLockRef(12);
          *(_QWORD *)v65 = DomainLockRef;
          if ( DomainLockRef == gDomainDummyLock )
          {
            v62 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
          }
          if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
          {
            v62 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
          }
          ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
          v47 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v47[2];
              v58 = *v47;
              v47[2] = 0LL;
              if ( !*(_DWORD *)(v58 + 8) )
              {
                v62 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
              }
              v59 = (PVOID *)GetDomainLockRef(12);
              if ( v59 == gDomainDummyLock )
              {
                v63 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
              }
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v59);
              HMUnlockObject(*v47);
              tagDomLock::LockExclusive((PERESOURCE *)v59);
              v47 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            DomainLockRef = *(PVOID **)v65;
          }
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
        }
      }
      gfMonitorPowerInProgress = 0;
      KeSetEvent(gpevtMonitorPowerWaiter, 0, 0);
      Win32FreePool((__int64)v14);
      return;
    }
    v60 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v60 + 24) = v13;
    WdLogEvent5_WdLowResource(v60);
  }
  for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
  {
    if ( (*((_DWORD *)j + 40) & 0x800000) != 0 && *((_QWORD *)j + 17) && (!a1 || *((_QWORD *)j + 18) == a1) )
    {
      v19 = gpGraphicsDeviceList;
      if ( gpGraphicsDeviceList )
      {
        v11 = *((_QWORD *)j + 18);
        do
        {
          if ( *((_QWORD *)v19 + 18) == v11 )
            break;
          v19 = (wchar_t *)*((_QWORD *)v19 + 16);
        }
        while ( v19 );
      }
      if ( v19 == j )
      {
        DrvDxgkLogCodePointPacket(90LL, 0LL, 0LL);
        v50 = GreDeviceIoControlImpl(*((PDEVICE_OBJECT *)j + 17), 0x23200Fu, InputBuffer, 0x10u, 0LL, 0, v65, 1u, 1);
        v53 = v50;
        if ( v50 < 0 )
        {
          v61 = WdLogNewEntry5_WdError(v52, v51);
          *(_QWORD *)(v61 + 24) = j;
          *(_QWORD *)(v61 + 32) = v53;
          WdLogEvent5_WdError(v61);
        }
        DrvDxgkLogCodePointPacket(91LL, (unsigned int)v53, 0LL);
      }
    }
  }
  v54 = WdLogNewEntry5_WdTrace(v11, v10);
  WdLogEvent5_WdTrace(v54);
}
