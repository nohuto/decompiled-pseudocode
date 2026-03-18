/*
 * XREFs of xxxUserSetDisplayConfig @ 0x1C005C190
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00D0E68 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146B18 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014790C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C014A580 (xxxDisplayDiagBlackScreenDetected.c)
 *     NtUserSetDisplayConfig @ 0x1C0160660 (NtUserSetDisplayConfig.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0171294 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C0173980 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     LogDiagSDC @ 0x1C005C5BC (LogDiagSDC.c)
 *     xxxResetDisplayDevice @ 0x1C005D650 (xxxResetDisplayDevice.c)
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 *     DrvQueryMDEVPowerState @ 0x1C0067730 (DrvQueryMDEVPowerState.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C00682D0 (-TrackFullscreenMode@@YAXH@Z.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00682EC (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C006CF70 (UserRemoteConnectedSessionUsingWddm.c)
 *     PowerDimUndimResend @ 0x1C007E570 (PowerDimUndimResend.c)
 *     SafeEnableMDEV @ 0x1C00D44A0 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00D44F0 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00DEB70 (DrvSetDisplayConfigValidateParams.c)
 *     ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C0143C6C (-xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z.c)
 *     LogDiagSDCAccessDenied @ 0x1C0175448 (LogDiagSDCAccessDenied.c)
 */

__int64 __fastcall xxxUserSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        bool *a8,
        _BYTE *a9,
        __int64 a10,
        __int64 a11)
{
  unsigned int v12; // r13d
  int v13; // esi
  __int64 v14; // rbx
  ULONG TimeIncrement; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct tagDESKTOP *v20; // rdi
  __int64 v21; // r15
  PVOID CurrentProcess; // rax
  char v23; // r12
  int v24; // r15d
  unsigned int v25; // esi
  unsigned int v26; // r14d
  int v27; // ebx
  int v28; // r14d
  struct tagMONITOR *CachedMonitor; // rax
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // r13
  int v33; // eax
  __int64 v34; // r14
  int v35; // eax
  _QWORD *v36; // rcx
  _DWORD *v38; // rax
  char v39; // dl
  _DWORD *v40; // rcx
  struct tagDESKTOP *v41; // rbx
  __int64 v42; // rbx
  __int64 v43; // rax
  unsigned int v44; // r9d
  __int64 v45; // rax
  __int64 i; // rdx
  __int64 v47; // rdx
  __int64 v48; // r8
  char v49; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v50[3]; // [rsp+89h] [rbp-18h] BYREF
  int v51; // [rsp+8Ch] [rbp-15h] BYREF
  int v52; // [rsp+90h] [rbp-11h] BYREF
  __int64 v53; // [rsp+98h] [rbp-9h]
  _QWORD v54[7]; // [rsp+A0h] [rbp-1h] BYREF

  v54[0] = 0LL;
  v52 = 0;
  v12 = a3;
  v49 = 0;
  v13 = (int)a2;
  v50[0] = 0;
  v51 = 0;
  v14 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v20 = (struct tagDESKTOP *)a5;
  v21 = v14 * TimeIncrement;
  v53 = v21;
  if ( !a5 || (*(_DWORD *)(a5 + 48) & 8) != 0 )
    v20 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 57);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v17, v16, v18, v19);
  v23 = a6;
  if ( CurrentProcess == gpepCSRSS || !a6 || (a4 & 0x10) != 0 )
  {
    if ( !v20 )
      v20 = grpdeskRitInput;
  }
  else
  {
    v41 = grpdeskRitInput;
    if ( gbDesktopLocked )
      v41 = (struct tagDESKTOP *)gspdeskShouldBeForeground;
    if ( v20 != v41 )
    {
      if ( v41 && ObQueryNameInfo(v41) )
        v42 = ObQueryNameInfo(v41) + 8;
      else
        v42 = 0LL;
      if ( v20 && ObQueryNameInfo(v20) )
        v43 = ObQueryNameInfo(v20) + 8;
      else
        v43 = 0LL;
      LogDiagSDCAccessDenied(v43, v42);
      v27 = -1073741790;
      v51 = 49;
      goto LABEL_46;
    }
  }
  v24 = v12 & 0x10000;
  if ( ((v12 & 0x10000) != 0) != (a7 != 0) )
  {
    v21 = v53;
    v27 = -1073741811;
    v51 = 1;
    goto LABEL_46;
  }
  v25 = a4 | 4;
  if ( !v24 )
    v25 = a4;
  v26 = a1;
  v27 = DrvSetDisplayConfigValidateParams(a1, (_DWORD)a2, v12, v25, a6);
  if ( v27 < 0 )
  {
    v13 = (int)a2;
    v21 = v53;
    v51 = 1;
    goto LABEL_47;
  }
  if ( v24 || gProtocolType && (v12 & 0x88F) == 0x88F || (v25 & 0xC01) != 0 )
    goto LABEL_13;
  v38 = DispBroker::DispBrokerClient::s_pSessionBroker;
  v39 = *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8);
  v40 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
  if ( !v39 )
    v40 = DispBroker::DispBrokerClient::s_pSessionBroker;
  if ( *v40 == 3 )
  {
    v44 = v25;
    v13 = (int)a2;
    v27 = xxxDispBrokerSetDisplayConfig(a1, a2, v12, v44, v23 != 0);
    goto LABEL_81;
  }
  if ( v39 )
    v38 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
  if ( *v38 != 2 )
  {
LABEL_13:
    v28 = v12 & 0x80;
    if ( (v12 & 0x80) == 0 )
      goto LABEL_25;
    if ( gbMDEVDisabled )
    {
      v51 = 27;
    }
    else
    {
      if ( (unsigned int)DrvQueryMDEVPowerState(*((_QWORD *)gpDispInfo + 2)) )
      {
        CachedMonitor = CreateCachedMonitor();
        v30 = v51;
        if ( !CachedMonitor )
          v30 = 53;
        v51 = v30;
        if ( qword_1C029C318 )
          qword_1C029C318(0LL);
        if ( qword_1C029C920 )
          qword_1C029C920();
        if ( qword_1C02971E0 && qword_1C029C930 )
          qword_1C029C930();
        if ( qword_1C029B7F8 )
          qword_1C029B7F8(*((_QWORD *)gpDispInfo + 5), 0LL, 0LL, 0LL);
LABEL_25:
        if ( v20 )
          v31 = ***((_QWORD ***)v20 + 1);
        else
          v31 = 0LL;
        v32 = a10;
        v33 = DrvSetDisplayConfig(
                a1,
                (_DWORD)a2,
                a3,
                v25 | 0x140,
                v31,
                v23,
                a7,
                0LL,
                *((struct _MDEV **)gpDispInfo + 2),
                (__int64)v54,
                (__int64)&v52,
                (__int64)&v51,
                (__int64)&v49,
                (__int64)v50,
                a10,
                a11);
        v27 = v33;
        if ( !v28 )
        {
LABEL_44:
          v12 = a3;
LABEL_45:
          v13 = (int)a2;
          v21 = v53;
LABEL_46:
          v26 = a1;
          goto LABEL_47;
        }
        if ( v33 < 0 )
        {
          if ( !v50[0]
            || v24
            || a7
            || (!v20 ? (v45 = 0LL) : (v45 = ***((_QWORD ***)v20 + 1)),
                v34 = a11,
                v33 = DrvSetDisplayConfig(
                        0,
                        0,
                        2447,
                        258,
                        v45,
                        0,
                        0LL,
                        0LL,
                        *((struct _MDEV **)gpDispInfo + 2),
                        (__int64)v54,
                        0LL,
                        0LL,
                        (__int64)&v49,
                        0LL,
                        v32,
                        a11),
                v33 < 0) )
          {
            if ( qword_1C029C378 )
              qword_1C029C378();
            goto LABEL_38;
          }
        }
        else
        {
          v34 = a11;
        }
        v27 = v33;
        if ( (v25 & 0x200) != 0 )
        {
          *((_WORD *)gpsi + 3499) = gdmLogPixels;
          ++*((_WORD *)gpsi + 3507);
          for ( i = gppiList; i; i = *(_QWORD *)(i + 376) )
            *(_WORD *)(i + 284) = *((_WORD *)gpsi + 3499);
        }
        TrackFullscreenMode(0);
        if ( v49 )
        {
          if ( (v25 & 4) == 0 )
          {
            if ( (unsigned int)SafeDisableMDEV(1LL) )
              SafeEnableMDEV(1LL);
            if ( qword_1C029C378 )
              qword_1C029C378();
          }
        }
        else
        {
          *((_QWORD *)gpDispInfo + 2) = v54[0];
          PowerDimUndimResend();
          v27 = xxxResetDisplayDevice(v20, 0LL, (v25 >> 4) & 1, v34);
          v35 = v51;
          if ( v27 < 0 )
            v35 = 36;
          v51 = v35;
        }
        if ( qword_1C029B900
          && (int)qword_1C029B900() >= 0
          && v24
          && (unsigned int)UserRemoteConnectedSessionUsingWddm() )
        {
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&a5, v47, v48);
          if ( qword_1C029B908 )
            qword_1C029B908(*((_QWORD *)v20 + 5), &gRemoteWndsMonitorSnapshotHead);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&a5);
          if ( qword_1C029B918 )
            qword_1C029B918(&gRemoteWndsMonitorSnapshotHead);
        }
LABEL_38:
        if ( v20 )
        {
          v36 = (_QWORD *)*((_QWORD *)v20 + 1);
          if ( (*(_DWORD *)(*v36 + 64LL) & 1) == 0 )
          {
            if ( qword_1C029C820 )
              qword_1C029C820(v36[3], 1LL, 66693LL);
          }
        }
        if ( qword_1C029C318 )
          qword_1C029C318(1LL);
        if ( qword_1C029C940 )
          qword_1C029C940();
        goto LABEL_44;
      }
      v51 = 28;
    }
    v27 = -1073741823;
    goto LABEL_45;
  }
  v13 = (int)a2;
  v27 = -1073741790;
LABEL_81:
  v21 = v53;
LABEL_47:
  if ( a8 )
    *a8 = (unsigned int)(v51 - 27) <= 1;
  if ( a9 )
    *a9 = v49;
  if ( v27 >= 0 && v51 == 29 )
    v27 = -1073741266;
  LogDiagSDC(v26, v13, v12, v27, v52, v51, v21, v49, a11);
  return (unsigned int)v27;
}
