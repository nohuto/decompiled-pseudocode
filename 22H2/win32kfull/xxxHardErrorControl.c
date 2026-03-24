/*
 * XREFs of xxxHardErrorControl @ 0x1C02418AC
 * Callers:
 *     NtUserHardErrorControl @ 0x1C01FC8F0 (NtUserHardErrorControl.c)
 * Callees:
 *     zzzAttachToQueue @ 0x1C0011EF4 (zzzAttachToQueue.c)
 *     CanForceForeground @ 0x1C003C490 (CanForceForeground.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F390 (WPP_RECORDER_SF_q.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006DEA4 (zzzEndDeferWinEventNotify.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00D8E60 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00D90F0 (xxxSetCsrssThreadDesktop.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxHardErrorControl(int a1, void *a2, PVOID *a3)
{
  _QWORD *v6; // rcx
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  void **v14; // rbx
  _DWORD *v15; // rbx
  NTSTATUS v16; // ebx
  int v17; // edx
  int v18; // ecx
  __int64 v19; // rax
  _DWORD *v20; // rax
  int v21; // ebx
  NTSTATUS v22; // eax
  PVOID v23; // r14
  __int64 ThreadWin32Thread; // rax
  int v25; // eax
  int v26; // r9d
  __int128 v27; // [rsp+30h] [rbp-48h] BYREF
  __int64 v28; // [rsp+40h] [rbp-38h]
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v27 = 0LL;
  v28 = 0LL;
  gptiBlockInput = 0LL;
  switch ( a1 )
  {
    case 0:
      if ( grpdeskRitInput && !gHardErrorHandler )
      {
        gHardErrorHandler = gptiCurrent;
LABEL_37:
        *(_DWORD *)(gptiCurrent + 488LL) &= ~0x40000000u;
        return 0LL;
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
LABEL_39:
      *((_QWORD *)&gHardErrorHandler + 1) = *(_QWORD *)(gptiCurrent + 432LL);
      ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL);
      goto LABEL_40;
    case 3:
LABEL_9:
      if ( grpdeskRitInput )
      {
        if ( (PVOID)grpdeskRitInput != gspdeskDisconnect )
        {
          if ( ObQueryNameInfo(grpdeskRitInput) )
          {
            v6 = (_QWORD *)grpdeskRitInput;
            goto LABEL_29;
          }
LABEL_30:
          v11 = 0LL;
          goto LABEL_31;
        }
        if ( gspdeskShouldBeForeground && (PVOID)gspdeskShouldBeForeground != gspdeskDisconnect )
        {
          if ( ObQueryNameInfo(gspdeskShouldBeForeground) )
          {
            v6 = (_QWORD *)gspdeskShouldBeForeground;
LABEL_29:
            v11 = ObQueryNameInfo(*v6) + 8;
LABEL_31:
            if ( v11
              && (!_wcsicmp(L"Winlogon", *(const wchar_t **)(v11 + 8))
               || !_wcsicmp(L"Disconnect", *(const wchar_t **)(v11 + 8))
               || !_wcsicmp(L"Screen-saver", *(const wchar_t **)(v11 + 8))) )
            {
              UserSetLastError(5LL, v12, v13);
              return 2LL;
            }
            if ( a1 == 8 )
              goto LABEL_37;
            goto LABEL_39;
          }
          goto LABEL_30;
        }
      }
      return 1LL;
    case 4:
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x40000000u;
      if ( !*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 396LL) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 513);
      --*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 396LL);
      v7 = (_DWORD *)*((_QWORD *)&gHardErrorHandler + 1);
      if ( !v7[99] && !v7[98] && (v7[97] & 0x4000000) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 522);
      ++gdwDeferWinEvent;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&Object);
      v8 = *((_QWORD *)&gHardErrorHandler + 1);
      if ( *(_QWORD *)(gptiCurrent + 432LL) != v8 )
      {
        AllocQueue(0LL, v8);
        ++*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 392LL);
        zzzAttachToQueue(gptiCurrent, *((struct tagQ **)&gHardErrorHandler + 1), 0LL, 0);
      }
      *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&Object);
      zzzEndDeferWinEventNotify();
      break;
    case 5:
LABEL_40:
      v14 = (void **)grpdeskRitInput;
      if ( grpdeskRitInput
        && ((PVOID)grpdeskRitInput != gspdeskDisconnect
         || gspdeskShouldBeForeground && (PVOID)gspdeskShouldBeForeground != gspdeskDisconnect) )
      {
        gbDisconnectHardErrorAttach = 0;
        if ( (PVOID)grpdeskRitInput == gspdeskDisconnect )
        {
          v14 = (void **)gspdeskShouldBeForeground;
          gbDisconnectHardErrorAttach = 1;
        }
        v15 = *v14;
        PushW32ThreadLock((__int64)v15, &v27, UserDereferenceObject);
        if ( v15 )
          ObfReferenceObject(v15);
        v16 = xxxSetCsrssThreadDesktop(v15, a3);
        PopAndFreeW32ThreadLock((__int64)&v27);
        if ( v16 >= 0 )
        {
          v21 = 0;
          if ( a2 )
          {
            Object = 0LL;
            v22 = ObReferenceObjectByHandle(a2, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
            v23 = Object;
            if ( v22 >= 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object);
              if ( !ThreadWin32Thread || CanForceForeground(*(_QWORD *)(ThreadWin32Thread + 424)) )
                v21 = 1;
              ObfDereferenceObject(v23);
            }
          }
          v25 = *(_DWORD *)(gptiCurrent + 488LL);
          if ( v21 )
          {
            *(_DWORD *)(gptiCurrent + 488LL) = v25 | 0x20;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return 0LL;
            v26 = 10;
          }
          else
          {
            *(_DWORD *)(gptiCurrent + 488LL) = v25 & 0xFFFFFFDF;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return 0LL;
            v26 = 11;
          }
          LOBYTE(v17) = 4;
          WPP_RECORDER_SF_q(
            v18,
            v17,
            2,
            v26,
            (__int64)&WPP_7391b7e2570331a275a7a80e10f9077a_Traceguids,
            gptiCurrent,
            v27,
            v28);
          return 0LL;
        }
        if ( a1 != 5 )
        {
          *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
          v19 = *(_QWORD *)(gptiCurrent + 432LL);
          if ( !*(_DWORD *)(v19 + 396) )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 441);
            v19 = *(_QWORD *)(gptiCurrent + 432LL);
          }
          --*(_DWORD *)(v19 + 396);
          v20 = *(_DWORD **)(gptiCurrent + 432LL);
          if ( !v20[99] && !v20[98] && (v20[97] & 0x4000000) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 450);
        }
      }
      return 1LL;
    case 6:
      break;
    case 8:
      goto LABEL_9;
    default:
      return 0LL;
  }
  v9 = *(_QWORD *)(gptiCurrent + 456LL);
  xxxRestoreCsrssThreadDesktop(a3, 0);
  if ( !gbDisconnectHardErrorAttach )
    return grpdeskRitInput != v9 ? 3 : 0;
  gbDisconnectHardErrorAttach = 0;
  return 3LL;
}
