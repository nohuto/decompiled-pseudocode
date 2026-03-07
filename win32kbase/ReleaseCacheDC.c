__int64 __fastcall ReleaseCacheDC(__int64 a1, int a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // r8d
  struct _ERESOURCE *v9; // rdi
  __int64 v10; // rdi
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  struct _ERESOURCE *v14; // rdi
  __int64 v15; // rbx
  int v16; // edx
  __int64 v17; // rcx
  int v18; // r8d
  char *v19; // r14
  __int64 *v20; // rbx
  __int64 v21; // rdx
  int v22; // r8d
  __int64 v23; // rax
  unsigned int *v24; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  void *QuadPart; // rsi
  unsigned int v27; // r8d
  unsigned int v28; // edx
  unsigned int v29; // ecx
  HDC v30; // rcx
  int v31; // eax
  _QWORD *v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // r8d
  struct _ERESOURCE *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rcx
  int v42; // r8d
  struct _ERESOURCE *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rcx
  int v48; // r8d
  struct _ERESOURCE *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v53; // eax
  __int64 v54; // rcx

  v4 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  v5 = v4[10];
  if ( v5 )
    ExEnterPriorityRegionAndAcquireResourceShared(v5);
  v6 = v4[10];
  v7 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
  if ( *(_DWORD *)(v7 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v7,
      (unsigned int)&LockAcquireShared,
      v8,
      v6,
      (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
  v9 = (struct _ERESOURCE *)v4[15];
  if ( v9 )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v9);
  }
  v10 = v4[15];
  v12 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
  if ( *(_DWORD *)(v12 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(v12, v11, v13, v10, 2, (__int64)L"GreBaseGlobals.hsemGreLock");
  v14 = (struct _ERESOURCE *)v4[11];
  if ( v14 )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v14);
  }
  v15 = v4[11];
  v17 = *(_QWORD *)(SGDGetSessionState(v12) + 24);
  if ( *(_DWORD *)(v17 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(v17, v16, v18, v15, 3, (__int64)L"GreBaseGlobals.hsemDCVisRgn");
  v19 = (char *)gpDispInfo + 24;
  v20 = (__int64 *)*((_QWORD *)gpDispInfo + 3);
  if ( !v20 )
  {
LABEL_86:
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
    UserSetLastError(1425);
    return 2LL;
  }
  while ( 1 )
  {
    v21 = v20[1];
    if ( v21 == a1 )
      break;
    v19 = (char *)v20;
    v20 = (__int64 *)*v20;
    if ( !v20 )
      goto LABEL_86;
  }
  v22 = *((_DWORD *)v20 + 16);
  if ( v22 < 0 )
  {
    v53 = DestroyCacheDC(v19, v21);
    v54 = *((_QWORD *)gpDispInfo + 5);
    if ( v53 )
    {
      GreUnlockVisRgn(v54);
      return 1LL;
    }
    goto LABEL_74;
  }
  if ( (v22 & 0x401800) != 0x1000 )
  {
LABEL_73:
    v54 = *((_QWORD *)gpDispInfo + 5);
LABEL_74:
    GreUnlockVisRgn(v54);
    return 2LL;
  }
  if ( (v22 & 0x4000) != 0 )
  {
    v17 = *(_QWORD *)(v20[4] + 40);
    if ( (*(_BYTE *)(v17 + 27) & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0 && qword_1C02D6C58 )
      qword_1C02D6C58(v20);
  }
  if ( (v20[8] & 2) != 0 )
  {
    if ( qword_1C02D6028 && (int)qword_1C02D6028() >= 0 && qword_1C02D6030 )
      qword_1C02D6030(a1, 0LL, 0LL, 0LL, 0);
    if ( (unsigned int)GreCleanDCAndSetOwnerEx((HDC)v20[1]) )
    {
      v23 = v20[9];
      if ( v23 )
        v24 = *(unsigned int **)(v23 + 424);
      else
        v24 = (unsigned int *)v20[10];
      if ( !bDCEInUseTelemetryDisabled )
      {
        if ( (dword_1C02D18F0 & 1) == 0 )
        {
          dword_1C02D18F0 |= 1u;
          qword_1C02D18F8 = 60 * llEventIntervalMinute * gliQpcFreq.QuadPart;
        }
        --v24[270];
        --gnInUseDCECount;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        QuadPart = (void *)PerformanceCounter.QuadPart;
        v27 = v24[271];
        if ( ulProcessThresholdDCEInUse == 100 )
          v28 = v27 % 0x64;
        else
          v28 = v27 % ulProcessThresholdDCEInUse;
        if ( !v28
          && (signed __int64)(PerformanceCounter.QuadPart - (unsigned __int64)WPP_MAIN_CB.SecurityDescriptor) >= qword_1C02D18F8 )
        {
          TraceLoggingProcessDCsInUse(v27, v24[14]);
          WPP_MAIN_CB.SecurityDescriptor = QuadPart;
        }
        if ( ulGlobalThresholdDCEInUse == 1000 )
          v29 = WPP_MAIN_CB.DeviceLock.Header.LockNV % 0x3E8u;
        else
          v29 = WPP_MAIN_CB.DeviceLock.Header.LockNV % ulGlobalThresholdDCEInUse;
        if ( !v29 && (__int64)QuadPart - *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount >= qword_1C02D18F8 )
        {
          TraceLoggingGlobalDCsInUse(0);
          *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = QuadPart;
        }
      }
      v30 = (HDC)v20[1];
      *((_DWORD *)v20 + 16) &= ~0x1000u;
      v20[9] = 0LL;
      v20[10] = 0LL;
      GreValidateVisrgn(v30);
      if ( (v20[8] & 0x4000) != 0 && qword_1C02D6008 && (int)qword_1C02D6008() >= 0 && qword_1C02D6010 )
        qword_1C02D6010(v20[1], 0LL);
      if ( ++gnDCECount > 32 && (unsigned int)DestroyCacheDC(v19, v20[1]) )
      {
        GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
        return 1LL;
      }
      goto LABEL_39;
    }
    goto LABEL_73;
  }
LABEL_39:
  v31 = *((_DWORD *)v20 + 16);
  if ( (v31 & 0xC0) != 0 && ((v31 & 2) != 0 || a2) && (int)IsDeleteHrgnClipSupported() >= 0 && qword_1C02D6C48 )
    qword_1C02D6C48(v20);
  v32 = *(_QWORD **)(SGDGetSessionState(v17) + 24);
  v33 = v32[11];
  v35 = *(_QWORD *)(SGDGetSessionState(v34) + 24);
  if ( *(_DWORD *)(v35 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v35, (unsigned int)&LockRelease, v36, v33, (__int64)L"GreBaseGlobals.hsemDCVisRgn");
  v37 = (struct _ERESOURCE *)v32[11];
  if ( v37 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v37);
    PsLeavePriorityRegion(v39, v38);
  }
  v40 = v32[15];
  v41 = *(_QWORD *)(SGDGetSessionState(v37) + 24);
  if ( *(_DWORD *)(v41 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v41, (unsigned int)&LockRelease, v42, v40, (__int64)L"GreBaseGlobals.hsemGreLock");
  v43 = (struct _ERESOURCE *)v32[15];
  if ( v43 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v43);
    PsLeavePriorityRegion(v45, v44);
  }
  v46 = v32[10];
  v47 = *(_QWORD *)(SGDGetSessionState(v43) + 24);
  if ( *(_DWORD *)(v47 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v47,
      (unsigned int)&LockRelease,
      v48,
      v46,
      (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
  v49 = (struct _ERESOURCE *)v32[10];
  if ( v49 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v49);
    PsLeavePriorityRegion(v51, v50);
  }
  return 0LL;
}
