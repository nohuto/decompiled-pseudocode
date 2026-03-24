/*
 * XREFs of hdcOpenDCW @ 0x1C0022A00
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0022E50 (NtGdiOpenDCW.c)
 * Callees:
 *     bDeleteDCInternal @ 0x1C0008F00 (bDeleteDCInternal.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00128E8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvDestroyMDEV @ 0x1C0016438 (DrvDestroyMDEV.c)
 *     UserGetMonitorDC @ 0x1C0022638 (UserGetMonitorDC.c)
 *     DrvGetHDEV @ 0x1C0022770 (DrvGetHDEV.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0022D50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     EnterSharedCrit @ 0x1C00372A0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003C8E8 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003C948 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C003CAC0 (GreCreateDisplayDC.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C007B1D0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007EE00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngSetLastError @ 0x1C009F430 (EngSetLastError.c)
 *     IsUMPD_ldevUnloadImageSupported @ 0x1C00B20BC (IsUMPD_ldevUnloadImageSupported.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00B9020 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     UserGetCurrentDesktopId @ 0x1C011540C (UserGetCurrentDesktopId.c)
 */

HDC __fastcall hdcOpenDCW(
        unsigned __int16 *a1,
        struct _devicemodeW *a2,
        unsigned int a3,
        int a4,
        void *a5,
        struct tagREMOTETYPEONENODE *a6,
        HDEV a7,
        ULONG64 a8,
        int a9)
{
  struct _devicemodeW *v10; // r12
  HDC MonitorDC; // rbx
  HDEV v13; // rsi
  __int64 *v14; // rdi
  struct PDEV *HDEV; // r14
  bool v16; // zf
  unsigned int v17; // r15d
  HSEMAPHORE v18; // rcx
  void *v20; // r14
  int v21; // eax
  struct _LDEV *v22; // rdi
  HDEV v23; // rcx
  signed __int32 v24; // ett
  _QWORD *v25; // r8
  _QWORD *v26; // rdx
  __int64 v27; // [rsp+70h] [rbp-88h] BYREF
  _QWORD v28[2]; // [rsp+78h] [rbp-80h] BYREF
  struct _UNICODE_STRING v29; // [rsp+88h] [rbp-70h] BYREF
  _QWORD v30[7]; // [rsp+98h] [rbp-60h] BYREF
  void *v31; // [rsp+100h] [rbp+8h] BYREF
  unsigned int v32; // [rsp+110h] [rbp+18h]

  v32 = a3;
  v10 = a2;
  MonitorDC = 0LL;
  v13 = a7;
  LODWORD(a7) = a7 != 0LL;
  if ( !a1 || v13 )
  {
    v17 = v32;
    goto LABEL_19;
  }
  v14 = 0LL;
  HDEV = 0LL;
  v29 = 0LL;
  RtlInitUnicodeString(&v29, a1);
  EnterSharedCrit(0LL, 1LL);
  EngAcquireSemaphore(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  if ( a9 )
  {
    HDEV = DrvGetHDEV(&v29);
  }
  else
  {
    if ( !v10 )
    {
      HDEV = DrvGetHDEV(&v29);
      v16 = a4 == 0;
      v17 = v32;
      if ( !v16 && !v32 )
        MonitorDC = (HDC)UserGetMonitorDC();
      goto LABEL_8;
    }
    v14 = (__int64 *)DrvCreateMDEV(&v29, v10, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, 0LL);
    if ( !v14 )
    {
      v31 = 0LL;
      if ( (unsigned int)UserGetCurrentDesktopId(&v31) )
        v14 = (__int64 *)DrvCreateMDEV(&v29, v10, v31, 3u, 0LL, 0, 0, 0, 0LL);
    }
    if ( v14 )
      HDEV = (struct PDEV *)v14[5];
  }
  v17 = v32;
LABEL_8:
  if ( HDEV )
  {
    if ( MonitorDC || (MonitorDC = (HDC)GreCreateDisplayDC((HDEV)HDEV, 0)) != 0LL )
    {
      DCOBJ::DCOBJ((DCOBJ *)v30, MonitorDC);
      if ( v30[0] )
      {
        v27 = *(_QWORD *)(v30[0] + 48LL);
        if ( v27 )
          PDEVOBJ::vUnreferencePdev(&v27, 0LL);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v30);
    }
    else if ( v14 )
    {
      DrvDestroyMDEV(v14);
    }
    else
    {
      v28[0] = HDEV;
      PDEVOBJ::vUnreferencePdev(v28, 0LL);
    }
  }
  if ( v14 )
    Win32FreePool(v14);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  v18 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  UserSessionSwitchLeaveCrit(v18);
LABEL_19:
  if ( !MonitorDC )
  {
    v20 = a5;
    if ( a5 )
    {
      if ( v13 )
      {
        if ( qword_1C02556B0 )
          v21 = qword_1C02556B0();
        else
          v21 = -1073741637;
        if ( v21 >= 0 && qword_1C02556B8 )
        {
          LOBYTE(a2) = 2;
          v22 = (struct _LDEV *)qword_1C02556B8(*((_QWORD *)v13 + 3), a2);
        }
        else
        {
          v22 = 0LL;
        }
        if ( v22 )
        {
          PDEVOBJ::PDEVOBJ(
            (PDEVOBJ *)&a7,
            v22,
            v10,
            a1,
            *((unsigned __int16 **)v13 + 4),
            *((unsigned __int16 **)v13 + 1),
            v20,
            a6,
            0LL,
            0LL,
            (int)a7,
            0,
            0);
          v23 = a7;
          if ( a7 )
          {
            _m_prefetchw(a7 + 10);
            do
              v24 = *((_DWORD *)v23 + 10);
            while ( v24 != _InterlockedCompareExchange((volatile signed __int32 *)v23 + 10, v24 | 0x80, v24) );
            MonitorDC = (HDC)GreCreateDisplayDC(a7, v17);
            v28[1] = MonitorDC;
            if ( MonitorDC )
            {
              v25 = (_QWORD *)a8;
              if ( a8 )
              {
                v26 = (_QWORD *)a8;
                if ( a8 >= MmUserProbeAddress )
                  v26 = (_QWORD *)MmUserProbeAddress;
                *v26 = *v26;
                *v25 = *((_QWORD *)a7 + 225);
              }
            }
            PDEVOBJ::vUnreferencePdev(&a7, 0LL);
          }
          else if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 && qword_1C02556C8 )
          {
            qword_1C02556C8(v22);
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
