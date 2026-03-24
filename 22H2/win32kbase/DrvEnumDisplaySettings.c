/*
 * XREFs of DrvEnumDisplaySettings @ 0x1C0020E50
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1C0020D70 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     DrvBuildDevmodeList @ 0x1C00182C0 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0018748 (DrvGetDisplayDriverParameters.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C0020C74 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     DrvGetDeviceFromName @ 0x1C0022870 (DrvGetDeviceFromName.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003A0E0 (GreReleaseSemaphoreInternal.c)
 *     GreAcquireSemaphoreSharedInternal @ 0x1C003A110 (GreAcquireSemaphoreSharedInternal.c)
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C007B1D0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007EE00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00804B0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C009B1A4 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00ACD08 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     Feature_Vail__private_ReportDeviceUsage @ 0x1C00CB404 (Feature_Vail__private_ReportDeviceUsage.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 */

__int64 __fastcall DrvEnumDisplaySettings(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 DeviceFromName; // rsi
  _QWORD *v10; // rax
  int PreferredMode; // ebx
  unsigned __int16 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r15
  int DevModeForLddmPath; // eax
  unsigned __int16 v21; // ax
  struct PDEV *i; // r15
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int16 v30; // ax
  __int64 v31; // rcx
  struct PDEV *j; // rcx
  __int64 v33; // rdx
  struct _devicemodeW *v34; // rax
  struct _devicemodeW *v35; // rbx
  __int64 v36; // r15
  unsigned int v37; // r10d
  unsigned int v38; // r8d
  int v39; // r9d
  unsigned __int16 v40; // ax
  unsigned int v41; // ebx
  size_t v42; // r13
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int16 v46; // [rsp+20h] [rbp-68h]
  PCUNICODE_STRING String1; // [rsp+28h] [rbp-60h] BYREF
  __int64 v48; // [rsp+30h] [rbp-58h]
  int v50; // [rsp+90h] [rbp+8h]
  DWORD dmDisplayOrientation; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v52; // [rsp+A8h] [rbp+20h]

  v52 = a4;
  DeviceFromName = 0LL;
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent(a1);
  v10[3] = a1;
  v10[4] = a2;
  v48 = a3;
  v10[5] = a3;
  v10[6] = a5;
  WdLogEvent5_WdEvent(v10);
  if ( (a4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  PreferredMode = -1073741585;
  v46 = *(_WORD *)(a4 + 70);
  v12 = v46;
  ProbeForWrite((volatile void *)a4, v46 + 220LL, 2u);
  if ( *(_WORD *)(a4 + 68) == 220 )
  {
    v17 = (__int64)a1;
    if ( a1 )
    {
      String1 = 0LL;
      if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
        DeviceFromName = DrvGetDeviceFromName(String1);
      if ( DeviceFromName && !*(_QWORD *)(DeviceFromName + 136) )
        DeviceFromName &= -(__int64)((*(_DWORD *)(DeviceFromName + 160) & 0x6000008) != 0);
      v17 = (__int64)String1;
      if ( String1 )
        Win32FreePool(String1);
    }
    else if ( a2 )
    {
      DeviceFromName = *(_QWORD *)(a2 + 2576);
    }
    if ( DeviceFromName )
    {
      switch ( a3 )
      {
        case 0xFFFFFFFD:
          PreferredMode = DrvGetPreferredMode((struct _devicemodeW *)a4, (struct tagGRAPHICS_DEVICE *)DeviceFromName);
          break;
        case 0xFFFFFFFE:
          v18 = PALLOCMEM2(0x100DBuLL);
          v19 = v18;
          if ( v18 )
          {
            if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 )
            {
              DevModeForLddmPath = DrvGetDevModeForLddmPath(
                                     (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                                     0xFFFFFFFE,
                                     (struct _devicemodeW *)v18,
                                     0LL);
            }
            else
            {
              *(_DWORD *)(v18 + 68) = -8739;
              DevModeForLddmPath = DrvGetDisplayDriverParameters(DeviceFromName, (struct _devicemodeW *)v18, 0, 0LL);
            }
            PreferredMode = DevModeForLddmPath;
            if ( DevModeForLddmPath >= 0 )
            {
              v21 = *(_WORD *)(v19 + 70);
              if ( v46 < v21 )
                v21 = v46;
              v12 = v21;
              memmove((void *)(a4 + 220), (const void *)(v19 + 220), v21);
              *(_OWORD *)a4 = *(_OWORD *)v19;
              *(_OWORD *)(a4 + 16) = *(_OWORD *)(v19 + 16);
              *(_OWORD *)(a4 + 32) = *(_OWORD *)(v19 + 32);
              *(_OWORD *)(a4 + 48) = *(_OWORD *)(v19 + 48);
              *(_OWORD *)(a4 + 64) = *(_OWORD *)(v19 + 64);
              *(_OWORD *)(a4 + 80) = *(_OWORD *)(v19 + 80);
              *(_OWORD *)(a4 + 96) = *(_OWORD *)(v19 + 96);
              *(_OWORD *)(a4 + 112) = *(_OWORD *)(v19 + 112);
              *(_OWORD *)(a4 + 128) = *(_OWORD *)(v19 + 128);
              *(_OWORD *)(a4 + 144) = *(_OWORD *)(v19 + 144);
              *(_OWORD *)(a4 + 160) = *(_OWORD *)(v19 + 160);
              *(_OWORD *)(a4 + 176) = *(_OWORD *)(v19 + 176);
              *(_OWORD *)(a4 + 192) = *(_OWORD *)(v19 + 192);
              *(_QWORD *)(a4 + 208) = *(_QWORD *)(v19 + 208);
              *(_DWORD *)(a4 + 216) = *(_DWORD *)(v19 + 216);
            }
            Win32FreePool(v19);
          }
          else
          {
            PreferredMode = -1073741801;
          }
          break;
        case 0xFFFFFFFF:
          if ( ghsemDynamicModeChange )
            ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          for ( i = gppdevList; i; i = *(struct PDEV **)i )
          {
            v23 = *((_QWORD *)i + 322);
            if ( v23 == DeviceFromName && *((_DWORD *)i + 3) )
            {
              LOBYTE(dmDisplayOrientation) = 0;
              if ( *(_DWORD *)(*((_QWORD *)i + 324) + 184LL) == 1 && (*(_DWORD *)(v23 + 160) & 0x800000) != 0 )
              {
                v24 = DrvGetDevModeForLddmPath(
                        (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                        0xFFFFFFFF,
                        0LL,
                        (bool *)&dmDisplayOrientation);
                v27 = v24;
                if ( v24 < 0 )
                {
                  v28 = WdLogNewEntry5_WdTrace(v26, v25);
                  *(_QWORD *)(v28 + 24) = v27;
                  WdLogEvent5_WdTrace(v28);
                }
              }
              if ( (*(_DWORD *)(DeviceFromName + 160) & 0x4000000) != 0 && (*(_DWORD *)(DeviceFromName + 164) & 4) != 0 )
              {
                Feature_Vail__private_ReportDeviceUsage();
                LOBYTE(dmDisplayOrientation) = 1;
              }
              v29 = *((_QWORD *)i + 324);
              v30 = *(_WORD *)(v29 + 70);
              if ( v46 < v30 )
                v30 = v46;
              v12 = v30;
              memmove((void *)(a4 + 220), (const void *)(v29 + 220), v30);
              v31 = *((_QWORD *)i + 324);
              *(_OWORD *)a4 = *(_OWORD *)v31;
              *(_OWORD *)(a4 + 16) = *(_OWORD *)(v31 + 16);
              *(_OWORD *)(a4 + 32) = *(_OWORD *)(v31 + 32);
              *(_OWORD *)(a4 + 48) = *(_OWORD *)(v31 + 48);
              *(_OWORD *)(a4 + 64) = *(_OWORD *)(v31 + 64);
              *(_OWORD *)(a4 + 80) = *(_OWORD *)(v31 + 80);
              *(_OWORD *)(a4 + 96) = *(_OWORD *)(v31 + 96);
              *(_OWORD *)(a4 + 112) = *(_OWORD *)(v31 + 112);
              v31 += 128LL;
              *(_OWORD *)(a4 + 128) = *(_OWORD *)v31;
              *(_OWORD *)(a4 + 144) = *(_OWORD *)(v31 + 16);
              *(_OWORD *)(a4 + 160) = *(_OWORD *)(v31 + 32);
              *(_OWORD *)(a4 + 176) = *(_OWORD *)(v31 + 48);
              *(_OWORD *)(a4 + 192) = *(_OWORD *)(v31 + 64);
              *(_QWORD *)(a4 + 208) = *(_QWORD *)(v31 + 80);
              *(_DWORD *)(a4 + 216) = *(_DWORD *)(v31 + 88);
              if ( (_BYTE)dmDisplayOrientation )
                *(_DWORD *)(a4 + 184) = 64;
              *(_DWORD *)(a4 + 72) &= 0xF9FFFFFF;
              PreferredMode = 0;
              break;
            }
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
          break;
        default:
          DrvBuildDevmodeList((struct tagGRAPHICS_DEVICE *)DeviceFromName, a3 == 0, 1);
          dmDisplayOrientation = 0;
          v17 = a5;
          v50 = a5 & 4;
          if ( (a5 & 4) == 0 )
          {
            if ( gProtocolType )
            {
              GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
              for ( j = gppdevList; j; j = *(struct PDEV **)j )
              {
                if ( *((_QWORD *)j + 322) == DeviceFromName && *((_DWORD *)j + 3) )
                {
                  v33 = *((_QWORD *)j + 324);
                  if ( (*(_DWORD *)(v33 + 72) & 0x80u) != 0 )
                    dmDisplayOrientation = *(_DWORD *)(v33 + 84);
                  break;
                }
              }
              EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
              GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
            }
            else
            {
              v34 = (struct _devicemodeW *)PALLOCMEM2(0x100DBuLL);
              v35 = v34;
              if ( v34 )
              {
                memset(v34, 0, sizeof(struct _devicemodeW));
                v35->dmSize = -8739;
                if ( (int)DrvGetDisplayDriverParameters(DeviceFromName, v35, 0, 0LL) >= 0
                  && (v35->dmFields & 0x80u) != 0 )
                {
                  dmDisplayOrientation = v35->dmDisplayOrientation;
                }
                Win32FreePool(v35);
              }
            }
            v17 = a5;
          }
          if ( *(_DWORD *)(DeviceFromName + 184) && *(_QWORD *)(DeviceFromName + 176) )
          {
            v36 = 0LL;
            PreferredMode = -1073741584;
            v37 = *(_DWORD *)(DeviceFromName + 188);
            if ( a3 < v37 )
            {
              if ( (v17 & 6) == 6 )
              {
                _mm_lfence();
                v36 = *(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16 * v48 + 8);
                PreferredMode = -1073741584;
                v12 = v46;
              }
              else
              {
                v38 = 0;
                v39 = 0;
                if ( v37 )
                {
                  v17 &= 2u;
                  a5 = v17;
                  do
                  {
                    v13 = v38;
                    if ( (_DWORD)v17 || (v17 = 2LL * v38, !*(_DWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v38)) )
                    {
                      if ( v50
                        || (v17 = *(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v38 + 8),
                            *(_DWORD *)(v17 + 84) == dmDisplayOrientation) )
                      {
                        if ( v39 == a3 )
                        {
                          v13 = 2LL * v38;
                          v36 = *(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v38 + 8);
                          break;
                        }
                        ++v39;
                      }
                    }
                    ++v38;
                    v17 = a5;
                  }
                  while ( v38 < v37 );
                }
              }
            }
            if ( v36 )
            {
              v40 = *(_WORD *)(v36 + 70);
              if ( v12 < v40 )
                v40 = v12;
              v41 = v40;
              v12 = v40;
              v42 = 220LL;
              memset((void *)a4, 0, 0xDCuLL);
              memmove((void *)(a4 + 220), (const void *)(v36 + *(unsigned __int16 *)(v36 + 68)), v41);
              if ( *(_WORD *)(v36 + 68) <= 0xDCu )
                v42 = *(unsigned __int16 *)(v36 + 68);
              memmove((void *)a4, (const void *)v36, v42);
              if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 && *(_DWORD *)(v36 + 184) == 1 )
                *(_DWORD *)(a4 + 184) = 64;
              PreferredMode = 0;
            }
          }
          else
          {
            v43 = WdLogNewEntry5_WdTrace(v17, v13);
            WdLogEvent5_WdTrace(v43);
            PreferredMode = -1073741823;
          }
          if ( PreferredMode == -1073741584 )
          {
            *(_DWORD *)(DeviceFromName + 184) = 0;
            v44 = *(_QWORD *)(DeviceFromName + 176);
            if ( v44 )
            {
              Win32FreePool(v44);
              *(_QWORD *)(DeviceFromName + 176) = 0LL;
            }
            v17 = *(_QWORD *)(DeviceFromName + 192);
            if ( v17 )
            {
              Win32FreePool(v17);
              *(_QWORD *)(DeviceFromName + 192) = 0LL;
            }
            *(_DWORD *)(DeviceFromName + 188) = 0;
          }
          break;
      }
    }
    if ( !PreferredMode )
      *(_WORD *)(a4 + 70) = v12;
    v45 = WdLogNewEntry5_WdTrace(v17, v13);
    *(_QWORD *)(v45 + 24) = PreferredMode;
    WdLogEvent5_WdTrace(v45);
    return (unsigned int)PreferredMode;
  }
  else
  {
    v15 = WdLogNewEntry5_WdTrace(v14, v13);
    WdLogEvent5_WdTrace(v15);
    return 3221225507LL;
  }
}
