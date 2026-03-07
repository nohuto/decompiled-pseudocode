HDC __fastcall hdcOpenDCW(
        WCHAR *SourceString,
        struct _devicemodeW *a2,
        unsigned int a3,
        int a4,
        void *a5,
        struct tagREMOTETYPEONENODE *a6,
        __int64 a7,
        ULONG64 a8,
        int a9)
{
  unsigned __int16 *v10; // r13
  __int64 v11; // r12
  __int64 v12; // rdx
  HDC MonitorDC; // rdi
  struct _MDEV *v14; // rsi
  __int64 *HDEV; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r13d
  __int64 v21; // rcx
  __int64 v22; // rbx
  struct _devicemodeW *v23; // rbx
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct tagTHREADINFO *v29; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v31; // rdx
  char v32; // al
  struct tagKERNELHANDLETABLEENTRY *v33; // rbx
  void *v34; // r14
  int v35; // eax
  struct _LDEV *v36; // rbx
  HDEV v37; // rcx
  signed __int32 v38; // ett
  _QWORD *v39; // r8
  _QWORD *v40; // rdx
  void *v41; // [rsp+70h] [rbp-68h] BYREF
  HDC v42; // [rsp+78h] [rbp-60h]
  struct PDEV *v43; // [rsp+80h] [rbp-58h] BYREF
  struct _UNICODE_STRING v44; // [rsp+88h] [rbp-50h] BYREF
  HDEV v45; // [rsp+E0h] [rbp+8h] BYREF
  struct _devicemodeW *v46; // [rsp+E8h] [rbp+10h]
  unsigned int v47; // [rsp+F0h] [rbp+18h]
  int v48; // [rsp+F8h] [rbp+20h]

  v48 = a4;
  v47 = a3;
  v46 = a2;
  v45 = (HDEV)SourceString;
  v10 = SourceString;
  v11 = a7;
  v12 = 0LL;
  MonitorDC = 0LL;
  LODWORD(v42) = a7 != 0;
  if ( SourceString && !a7 )
  {
    v14 = 0LL;
    HDEV = 0LL;
    v44 = 0LL;
    RtlInitUnicodeString(&v44, SourceString);
    v20 = a9;
    if ( !a9 && a2 )
    {
      v29 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
      gptiCurrent = v29;
      if ( v29 )
      {
        *((_DWORD *)v29 + 387) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
        v31 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          v21 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          v31 = v21 & CurrentProcessWin32Process;
        }
        if ( v31 && (*(_DWORD *)(v31 + 12) & 0x8000) != 0 )
        {
          v21 = (__int64)gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v32 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v32 = 0;
          }
          if ( v32 )
          {
            v33 = gpSharedUserCritDeferredUnlockListHead;
            if ( gpSharedUserCritDeferredUnlockListHead )
            {
              do
              {
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v33 + 2);
                *((_QWORD *)v33 + 2) = 0LL;
                if ( !*(_DWORD *)(*(_QWORD *)v33 + 8LL) )
                {
                  LODWORD(v41) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                }
                HMUnlockObject(*(_QWORD *)v33);
                v33 = gpSharedUserCritDeferredUnlockListHead;
              }
              while ( gpSharedUserCritDeferredUnlockListHead );
              v11 = a7;
            }
          }
        }
      }
    }
    else
    {
      PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(v17, v16, v18, v19);
    }
    v22 = *(_QWORD *)(SGDGetSessionState(v21) + 24);
    EngAcquireSemaphore(*(HSEMAPHORE *)(v22 + 80));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v22 + 80), 1LL);
    if ( v20 )
    {
      HDEV = DrvGetHDEV(&v44);
    }
    else
    {
      v23 = v46;
      if ( v46 )
      {
        v14 = DrvCreateMDEV(&v44, v46, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, 0LL);
        if ( !v14 )
        {
          v41 = 0LL;
          if ( (unsigned int)UserGetCurrentDesktopId(&v41) )
            v14 = DrvCreateMDEV(&v44, v23, v41, 3u, 0LL, 0, 0, 0, 0LL);
        }
        if ( v14 )
          HDEV = (__int64 *)*((_QWORD *)v14 + 5);
      }
      else
      {
        v24 = DrvGetHDEV(&v44);
        HDEV = v24;
        if ( v48 && !v47 )
          MonitorDC = (HDC)UserGetMonitorDC((__int64)v24);
      }
    }
    if ( HDEV )
    {
      if ( MonitorDC || (MonitorDC = (HDC)GreCreateDisplayDC((HDEV)HDEV, 0)) != 0LL || !v14 )
      {
        v43 = (struct PDEV *)HDEV;
        PDEVOBJ::vUnreferencePdev(&v43);
      }
      else
      {
        DrvDestroyMDEV(v14);
      }
    }
    if ( v14 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
    DYNAMICMODECHANGELOCK::~DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&a7);
    UserSessionSwitchLeaveCrit(v26, v25, v27);
    v10 = (unsigned __int16 *)v45;
    v12 = 0LL;
  }
  if ( !MonitorDC )
  {
    v34 = a5;
    if ( a5 )
    {
      if ( (v11 & -(__int64)(v11 != 0)) != 0 )
      {
        if ( v11
          && (!qword_1C02D5C38 ? (v35 = -1073741637) : (v35 = qword_1C02D5C38(SourceString, 0LL), v12 = 0LL),
              v35 >= 0 && qword_1C02D5C40) )
        {
          LOBYTE(v12) = 2;
          v36 = (struct _LDEV *)qword_1C02D5C40(*(_QWORD *)((v11 & -(__int64)(v11 != 0)) + 0x18), v12);
        }
        else
        {
          v36 = 0LL;
        }
        if ( v36 )
        {
          PDEVOBJ::PDEVOBJ(
            (PDEVOBJ *)&v45,
            v36,
            v46,
            v10,
            *(unsigned __int16 **)((v11 & -(__int64)(v11 != 0)) + 0x20),
            *(unsigned __int16 **)((v11 & -(__int64)(v11 != 0)) + 8),
            v34,
            a6,
            0LL,
            0LL,
            (unsigned int)v42,
            0,
            0);
          v37 = v45;
          if ( v45 )
          {
            _m_prefetchw(v45 + 10);
            do
              v38 = *((_DWORD *)v37 + 10);
            while ( v38 != _InterlockedCompareExchange((volatile signed __int32 *)v37 + 10, v38 | 0x80, v38) );
            MonitorDC = (HDC)GreCreateDisplayDC(v45, v47);
            v42 = MonitorDC;
            if ( MonitorDC )
            {
              if ( v11 )
              {
                v39 = (_QWORD *)a8;
                if ( a8 )
                {
                  v40 = (_QWORD *)a8;
                  if ( a8 >= MmUserProbeAddress )
                    v40 = (_QWORD *)MmUserProbeAddress;
                  *v40 = *v40;
                  *v39 = *((_QWORD *)v45 + 221);
                }
              }
            }
            PDEVOBJ::vUnreferencePdev((struct PDEV **)&v45);
          }
          else if ( v11 && (int)IsUMPD_ldevUnloadImageSupported() >= 0 && qword_1C02D5C50 )
          {
            qword_1C02D5C50(v36);
          }
        }
        else
        {
          EngSetLastError(0x77u);
        }
      }
    }
  }
  return MonitorDC;
}
