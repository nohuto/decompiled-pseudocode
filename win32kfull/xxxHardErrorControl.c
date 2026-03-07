// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxHardErrorControl(int a1, void *a2, PVOID *a3)
{
  char v6; // si
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  __int64 v10; // rbx
  _DWORD *v11; // rbx
  NTSTATUS v12; // ebx
  __int64 v13; // r9
  tagQ *v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  NTSTATUS v17; // eax
  PVOID v18; // r14
  __int64 ThreadWin32Thread; // rax
  PDEVICE_OBJECT v20; // rcx
  char v21; // r8
  unsigned __int16 v22; // dx
  __int128 v23; // [rsp+50h] [rbp-58h] BYREF
  __int64 v24; // [rsp+60h] [rbp-48h]
  int v25; // [rsp+B0h] [rbp+8h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+20h] BYREF

  v23 = 0LL;
  v6 = 1;
  v24 = 0LL;
  gptiBlockInput = 0LL;
  switch ( a1 )
  {
    case 0:
      if ( grpdeskRitInput && !gHardErrorHandler )
      {
        gHardErrorHandler = gptiCurrent;
        goto LABEL_33;
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
      goto LABEL_35;
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
          v10 = 0LL;
LABEL_27:
          if ( v10
            && (!_wcsicmp(L"Winlogon", *(const wchar_t **)(v10 + 8))
             || !_wcsicmp(L"Disconnect", *(const wchar_t **)(v10 + 8))
             || !_wcsicmp(L"Screen-saver", *(const wchar_t **)(v10 + 8))) )
          {
            UserSetLastError(5);
            return 2LL;
          }
LABEL_32:
          if ( a1 == 8 )
          {
LABEL_33:
            *(_DWORD *)(gptiCurrent + 488LL) &= ~0x40000000u;
            return 0LL;
          }
LABEL_35:
          *((_QWORD *)&gHardErrorHandler + 1) = *(_QWORD *)(gptiCurrent + 432LL);
          ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 400LL);
          goto LABEL_36;
        }
        v7 = (_QWORD *)gspdeskShouldBeForeground;
      }
      else
      {
        if ( !ObQueryNameInfo(grpdeskRitInput) )
          goto LABEL_32;
        v7 = (_QWORD *)grpdeskRitInput;
      }
      v10 = ObQueryNameInfo(*v7) + 8;
      goto LABEL_27;
    case 4:
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x40000000u;
      if ( !*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 400LL) )
      {
        v25 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 504);
      }
      --*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 400LL);
      ++gdwDeferWinEvent;
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v25);
      if ( *(_QWORD *)(gptiCurrent + 432LL) != *((_QWORD *)&gHardErrorHandler + 1) )
      {
        AllocQueue(0LL);
        tagQ::zzzAttachToQueue(*((tagQ **)&gHardErrorHandler + 1), gptiCurrent, 0LL);
      }
      *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v25);
      zzzEndDeferWinEventNotify();
      break;
    case 5:
LABEL_36:
      v11 = (_DWORD *)grpdeskRitInput;
      if ( grpdeskRitInput
        && ((PVOID)grpdeskRitInput != gspdeskDisconnect
         || gspdeskShouldBeForeground && (PVOID)gspdeskShouldBeForeground != gspdeskDisconnect) )
      {
        gbDisconnectHardErrorAttach = 0;
        if ( (PVOID)grpdeskRitInput == gspdeskDisconnect )
        {
          gbDisconnectHardErrorAttach = 1;
          v11 = (_DWORD *)gspdeskShouldBeForeground;
        }
        PushW32ThreadLock((__int64)v11, &v23, UserDereferenceObject);
        if ( v11 )
          ObfReferenceObject(v11);
        v12 = xxxSetCsrssThreadDesktop(v11, a3);
        PopAndFreeW32ThreadLock((__int64)&v23);
        if ( v12 < 0 )
        {
          if ( a1 != 5 )
          {
            *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
            if ( !*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 400LL) )
            {
              v25 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 427);
            }
            --*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 400LL);
            v14 = *(tagQ **)(gptiCurrent + 432LL);
            if ( !*((_DWORD *)v14 + 100) && !tagQ::IsAnyThreadAttached(v14) && (*(_DWORD *)(v15 + 396) & 0x4000000) != 0 )
            {
              v25 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 437);
            }
          }
          return 1LL;
        }
        v16 = 0;
        if ( a2 )
        {
          Object = 0LL;
          v17 = ObReferenceObjectByHandle(a2, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
          v18 = Object;
          if ( v17 >= 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object);
            if ( !ThreadWin32Thread || CanForceForeground(*(const struct tagPROCESSINFO **)(ThreadWin32Thread + 424)) )
              v16 = 1;
            ObfDereferenceObject(v18);
          }
        }
        if ( v16 )
        {
          *(_DWORD *)(gptiCurrent + 488LL) |= 0x20u;
          v20 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v6 = 0;
          }
          v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v22 = 10;
        }
        else
        {
          *(_DWORD *)(gptiCurrent + 488LL) &= ~0x20u;
          v20 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v6 = 0;
          }
          v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v22 = 11;
        }
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)v20->AttachedDevice,
          v6,
          v21,
          v13,
          4u,
          2u,
          v22,
          (__int64)&WPP_034e3ab9e0c135a13566851594780e6c_Traceguids,
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
  v8 = *(_QWORD *)(gptiCurrent + 456LL);
  xxxRestoreCsrssThreadDesktop((__int64 *)a3, 0, (__int64)a3);
  if ( !gbDisconnectHardErrorAttach )
    return grpdeskRitInput != v8 ? 3 : 0;
  gbDisconnectHardErrorAttach = 0;
  return 3LL;
}
