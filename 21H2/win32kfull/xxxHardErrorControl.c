/*
 * XREFs of xxxHardErrorControl @ 0x1C023CD7C
 * Callers:
 *     NtUserHardErrorControl @ 0x1C01F78E0 (NtUserHardErrorControl.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     CanForceForeground @ 0x1C007B000 (CanForceForeground.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00A64D0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00A65F0 (xxxSetCsrssThreadDesktop.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C00A898C (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0117970 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxHardErrorControl(int a1, void *a2, PVOID *a3)
{
  char v6; // si
  _QWORD *v7; // rcx
  tagQ *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v14; // rbx
  __int64 v15; // rdx
  void **v16; // rbx
  _DWORD *v17; // rbx
  NTSTATUS v18; // ebx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  tagQ *v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  NTSTATUS v25; // eax
  PVOID v26; // rbp
  __int64 ThreadWin32Thread; // rax
  PDEVICE_OBJECT v28; // rcx
  int v29; // edx
  __int16 v30; // [rsp+30h] [rbp-68h]
  __int128 v31; // [rsp+50h] [rbp-48h] BYREF
  __int64 v32; // [rsp+60h] [rbp-38h]
  char v33; // [rsp+A0h] [rbp+8h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+20h] BYREF

  v31 = 0LL;
  v6 = 1;
  v32 = 0LL;
  gptiBlockInput = 0LL;
  switch ( a1 )
  {
    case 0:
      if ( grpdeskRitInput && !gHardErrorHandler )
      {
        gHardErrorHandler = gptiCurrent;
        goto LABEL_37;
      }
      return 1LL;
    case 1:
      if ( gHardErrorHandler == gptiCurrent )
      {
        gHardErrorHandler = 0LL;
        return 0LL;
      }
      return 1LL;
    case 2:
      goto LABEL_39;
    case 3:
LABEL_9:
      if ( !grpdeskRitInput )
        return 1LL;
      if ( (PVOID)grpdeskRitInput == gspdeskDisconnect )
      {
        if ( !gspdeskShouldBeForeground || (PVOID)gspdeskShouldBeForeground == gspdeskDisconnect )
          return 1LL;
        if ( !ObQueryNameInfo(gspdeskShouldBeForeground) )
        {
          v14 = 0LL;
LABEL_31:
          if ( v14
            && (!_wcsicmp(L"Winlogon", *(const wchar_t **)(v14 + 8))
             || !_wcsicmp(L"Disconnect", *(const wchar_t **)(v14 + 8))
             || !_wcsicmp(L"Screen-saver", *(const wchar_t **)(v14 + 8))) )
          {
            UserSetLastError(5LL, v15);
            return 2LL;
          }
LABEL_36:
          if ( a1 == 8 )
          {
LABEL_37:
            *(_DWORD *)(gptiCurrent + 488LL) &= ~0x40000000u;
            return 0LL;
          }
LABEL_39:
          *((_QWORD *)&gHardErrorHandler + 1) = *(_QWORD *)(gptiCurrent + 432LL);
          ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 392LL);
          goto LABEL_40;
        }
        v7 = (_QWORD *)gspdeskShouldBeForeground;
      }
      else
      {
        if ( !ObQueryNameInfo(grpdeskRitInput) )
          goto LABEL_36;
        v7 = (_QWORD *)grpdeskRitInput;
      }
      v14 = ObQueryNameInfo(*v7) + 8;
      goto LABEL_31;
    case 4:
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x40000000u;
      if ( !*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 392LL) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      --*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 392LL);
      v8 = (tagQ *)*((_QWORD *)&gHardErrorHandler + 1);
      if ( !*((_DWORD *)v8 + 98) && !tagQ::IsAnyThreadAttached(v8) && (*(_DWORD *)(v9 + 388) & 0x4000000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      ++gdwDeferWinEvent;
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v33);
      v11 = *((_QWORD *)&gHardErrorHandler + 1);
      if ( *(_QWORD *)(gptiCurrent + 432LL) != v11 )
      {
        AllocQueue(0LL, v11);
        tagQ::zzzAttachToQueue(*((tagQ **)&gHardErrorHandler + 1), gptiCurrent, 0LL);
      }
      *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v33, v11, v10);
      zzzEndDeferWinEventNotify();
      break;
    case 5:
LABEL_40:
      v16 = (void **)grpdeskRitInput;
      if ( grpdeskRitInput
        && ((PVOID)grpdeskRitInput != gspdeskDisconnect
         || gspdeskShouldBeForeground && (PVOID)gspdeskShouldBeForeground != gspdeskDisconnect) )
      {
        gbDisconnectHardErrorAttach = 0;
        if ( (PVOID)grpdeskRitInput == gspdeskDisconnect )
        {
          v16 = (void **)gspdeskShouldBeForeground;
          gbDisconnectHardErrorAttach = 1;
        }
        v17 = *v16;
        PushW32ThreadLock((__int64)v17, &v31, UserDereferenceObject);
        if ( v17 )
          ObfReferenceObject(v17);
        v18 = xxxSetCsrssThreadDesktop(v17, a3);
        PopAndFreeW32ThreadLock((__int64)&v31);
        if ( v18 < 0 )
        {
          if ( a1 != 5 )
          {
            *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
            v21 = *(_QWORD *)(gptiCurrent + 432LL);
            if ( !*(_DWORD *)(v21 + 392) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM();
              v21 = *(_QWORD *)(gptiCurrent + 432LL);
            }
            --*(_DWORD *)(v21 + 392);
            v22 = *(tagQ **)(gptiCurrent + 432LL);
            if ( !*((_DWORD *)v22 + 98) && !tagQ::IsAnyThreadAttached(v22) && (*(_DWORD *)(v23 + 388) & 0x4000000) != 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM();
          }
          return 1LL;
        }
        v24 = 0;
        if ( a2 )
        {
          Object = 0LL;
          v25 = ObReferenceObjectByHandle(a2, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
          v26 = Object;
          if ( v25 >= 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object);
            if ( !ThreadWin32Thread || CanForceForeground(*(_QWORD *)(ThreadWin32Thread + 424)) )
              v24 = 1;
            ObfDereferenceObject(v26);
          }
        }
        if ( v24 )
        {
          *(_DWORD *)(gptiCurrent + 488LL) |= 0x20u;
          v28 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v6 = 0;
          }
          LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v29 = 10;
        }
        else
        {
          *(_DWORD *)(gptiCurrent + 488LL) &= ~0x20u;
          v28 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v6 = 0;
          }
          LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v29 = 11;
        }
        v30 = v29;
        LOBYTE(v29) = v6;
        WPP_RECORDER_AND_TRACE_SF_q(
          v28->AttachedDevice,
          v29,
          v19,
          v20,
          4,
          2,
          v30,
          (__int64)&WPP_708793792ac832f0eaee6e6bf0f9bd76_Traceguids,
          gptiCurrent);
        return 0LL;
      }
      return 1LL;
    case 6:
      break;
    case 8:
      goto LABEL_9;
    default:
      return 0LL;
  }
  v12 = *(_QWORD *)(gptiCurrent + 456LL);
  xxxRestoreCsrssThreadDesktop(a3, 0);
  if ( !gbDisconnectHardErrorAttach )
    return grpdeskRitInput != v12 ? 3 : 0;
  gbDisconnectHardErrorAttach = 0;
  return 3LL;
}
