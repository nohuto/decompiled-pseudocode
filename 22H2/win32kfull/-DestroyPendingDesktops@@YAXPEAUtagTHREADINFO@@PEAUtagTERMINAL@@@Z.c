/*
 * XREFs of ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C006DCB0
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C006A3B0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C0017090 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     RemoteDisableScreen @ 0x1C0049DF8 (RemoteDisableScreen.c)
 *     DwmAsyncShellWindowChange @ 0x1C005971C (DwmAsyncShellWindowChange.c)
 *     _DestroyMenu @ 0x1C0061170 (_DestroyMenu.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     xxxSetThreadDesktop @ 0x1C006A6E4 (xxxSetThreadDesktop.c)
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 *     UnlockDesktopMenu @ 0x1C00726B4 (UnlockDesktopMenu.c)
 *     UnlockDesktopSysMenu @ 0x1C0072748 (UnlockDesktopSysMenu.c)
 *     ?GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z @ 0x1C009C538 (-GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C009E5C0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sq @ 0x1C00B99F0 (WPP_RECORDER_AND_TRACE_SF_Sq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqS @ 0x1C00BC47C (WPP_RECORDER_AND_TRACE_SF_qqS.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00BE0EC (xxxCleanupMotherDesktopWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139CA0 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 */

void __fastcall DestroyPendingDesktops(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  struct tagTERMINAL *v2; // r14
  struct tagTHREADINFO *v3; // r15
  int v4; // edx
  int v5; // r8d
  char *v6; // r12
  __int64 v7; // rdi
  char v8; // bl
  bool v9; // si
  const unsigned __int16 *DesktopName; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // r13
  void *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  struct tagTHREADINFO *v17; // rsi
  struct tagDESKTOP *v18; // rbx
  char v19; // si
  bool v20; // r14
  const unsigned __int16 *v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *i; // rdx
  _DWORD *v27; // r15
  __int64 v28; // r12
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 **v40; // rax
  __int64 v41; // rbx
  void *v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rcx
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rbx
  int v49; // edx
  __int64 v50; // r8
  __int64 v51; // rbx
  void *v52; // rcx
  __int64 v53; // r9
  __int64 v54; // rax
  struct tagDESKTOP *v55; // rbx
  char v56; // si
  bool v57; // r14
  const unsigned __int16 *v58; // rax
  int v59; // r8d
  int v60; // edx
  __int64 v61; // rbx
  struct tagWND *v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  int v66; // edx
  __int64 v67; // rax
  int v68; // [rsp+28h] [rbp-A9h]
  int v69; // [rsp+30h] [rbp-A1h]
  int v70; // [rsp+38h] [rbp-99h]
  int v71; // [rsp+40h] [rbp-91h]
  _QWORD v72[2]; // [rsp+68h] [rbp-69h] BYREF
  __int64 v73; // [rsp+78h] [rbp-59h]
  __int128 v74; // [rsp+80h] [rbp-51h] BYREF
  __int64 v75; // [rsp+90h] [rbp-41h]
  __int128 v76; // [rsp+98h] [rbp-39h] BYREF
  __int64 v77; // [rsp+A8h] [rbp-29h]
  __int128 v78; // [rsp+B0h] [rbp-21h] BYREF
  __int64 v79; // [rsp+C0h] [rbp-11h]
  __int128 v80; // [rsp+C8h] [rbp-9h] BYREF
  __int64 v81; // [rsp+D8h] [rbp+7h]
  __int128 v82; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v83; // [rsp+F0h] [rbp+1Fh]

  v2 = a2;
  v3 = a1;
  SmartObjStackRefBase<tagMENU>::Init(v72, 0LL);
  v6 = (char *)v2 + 48;
  v7 = *((_QWORD *)v2 + 6);
  v83 = 0LL;
  v73 = 0LL;
  v81 = 0LL;
  v75 = 0LL;
  v79 = 0LL;
  v82 = 0LL;
  v80 = 0LL;
  v74 = 0LL;
  v78 = 0LL;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
        || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v8 = 0;
      }
      v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        DesktopName = GetDesktopName((struct tagDESKTOP *)v7);
        LOBYTE(v11) = v9;
        LOBYTE(v12) = v8;
        WPP_RECORDER_AND_TRACE_SF_Sq(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v11,
          (_DWORD)gFullLog,
          v68,
          v69,
          10,
          v71,
          (__int64)DesktopName,
          v7);
      }
      PushW32ThreadLock(v7, &v82, UserDereferenceObject);
      ObfReferenceObject((PVOID)v7);
      v13 = *(_QWORD *)(v7 + 40);
      PushW32ThreadLock(v13, &v80, UserDereferenceObject);
      v14 = *(void **)(v7 + 40);
      if ( v14 )
        ObfReferenceObject(v14);
      LockObjectAssignment(v6, *(_QWORD *)(v7 + 32));
      UnlockObjectAssignment(v7 + 32);
      if ( v7 == grpdeskRitInput )
        break;
      v17 = a1;
      if ( v7 == *((_QWORD *)a1 + 57) )
      {
        v24 = 0LL;
        v25 = grpWinStaList;
        if ( grpWinStaList )
        {
          v16 = 16LL;
          while ( (*(_DWORD *)(v25 + 64) & 0x10) != 0
               || *(struct tagTERMINAL **)(v25 + 56) != v2
               || !*(_QWORD *)(v25 + 16) )
          {
            v25 = *(_QWORD *)(v25 + 8);
            if ( !v25 )
              goto LABEL_74;
          }
          v24 = *(_QWORD *)(v25 + 16);
          do
          {
            if ( v24 != v7 )
              break;
            v24 = *(_QWORD *)(v24 + 32);
          }
          while ( v24 );
        }
LABEL_74:
        xxxSetThreadDesktop(0LL, v24, v16);
      }
LABEL_75:
      if ( v7 == gspdeskShouldBeForeground )
      {
        for ( i = *(_QWORD **)(v13 + 16); i && (i == grpdeskLogon || i == gspdeskDisconnect); i = (_QWORD *)i[4] )
          ;
        LockObjectAssignment(gspdeskShouldBeForeground, i);
      }
      v27 = (_DWORD *)*((_QWORD *)v17 + 57);
      v28 = *((_QWORD *)v17 + 74);
      PushW32ThreadLock((__int64)v27, &v78, UserDereferenceObject);
      if ( v27 )
        ObfReferenceObject(v27);
      xxxSetThreadDesktop(0LL, v7, v29);
      HMAssignmentUnlock(v7 + 88);
      HMAssignmentUnlock(v7 + 96);
      HMAssignmentUnlock(v7 + 192);
      v30 = *(_QWORD *)(v7 + 56);
      *(_DWORD *)(v7 + 48) &= 0xFFFFF23F;
      if ( v30 )
      {
        v73 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v72, v30);
        if ( UnlockDesktopSysMenu(v7 + 56) )
        {
          v31 = v73;
          if ( !v73 )
            v31 = *(_QWORD *)v72[0];
          DestroyMenu(v31);
        }
      }
      v32 = *(_QWORD *)(v7 + 64);
      if ( v32 )
      {
        v73 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v72, v32);
        if ( UnlockDesktopSysMenu(v7 + 64) )
        {
          v33 = v73;
          if ( !v73 )
            v33 = *(_QWORD *)v72[0];
          DestroyMenu(v33);
        }
      }
      v34 = *(_QWORD *)(v7 + 72);
      if ( v34 )
      {
        v73 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v72, v34);
        if ( UnlockDesktopMenu(v7 + 72) )
        {
          v35 = v73;
          if ( !v73 )
            v35 = *(_QWORD *)v72[0];
          DestroyMenu(v35);
        }
      }
      v36 = *(_QWORD *)(v7 + 80);
      if ( v36 )
      {
        v73 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v72, v36);
        if ( UnlockDesktopMenu(v7 + 80) )
        {
          v37 = v73;
          if ( !v73 )
            v37 = *(_QWORD *)v72[0];
          DestroyMenu(v37);
        }
      }
      v38 = *(_QWORD *)(v7 + 8);
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 168);
        if ( v39 )
        {
          if ( (unsigned int)IsWindowDesktopComposed(v39) )
          {
            v40 = *(__int64 ***)(v7 + 8);
            v41 = **v40;
            v42 = (void *)ReferenceDwmApiPort(*v40);
            DwmAsyncShellWindowChange(v42, 0LL, v41);
          }
          v43 = *(_QWORD *)(v7 + 8);
          *(_QWORD *)(*(_QWORD *)v43 + 24LL) = 0LL;
          HMAssignmentUnlock(v43 + 168);
        }
        v44 = (_QWORD *)(*(_QWORD *)(v7 + 8) + 184LL);
        if ( *v44 )
          HMAssignmentUnlock(v44);
        v45 = *(_QWORD **)(v7 + 8);
        if ( v45[24] )
        {
          *(_QWORD *)(*v45 + 32LL) = 0LL;
          HMAssignmentUnlock(v45 + 24);
        }
        v46 = *(_QWORD **)(v7 + 8);
        if ( v46[25] )
        {
          *(_QWORD *)(*v46 + 40LL) = 0LL;
          HMAssignmentUnlock(v46 + 25);
        }
      }
      v47 = v7 + 104;
      v48 = *(_QWORD *)(v7 + 104);
      if ( v48 && HMAssignmentUnlock(v47) )
        xxxDestroyWindow(v48);
      if ( !(unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage(v47, v36) )
      {
        v51 = *(_QWORD *)(v7 + 112);
        if ( v51 )
        {
          if ( HMAssignmentUnlock(v7 + 112) )
            xxxDestroyWindow(v51);
        }
      }
      v52 = *(void **)(v7 + 264);
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v52, 0xFFFFFFFF) == 1 )
          Win32FreePool(v52);
        *(_QWORD *)(v7 + 264) = 0LL;
      }
      v53 = *((_QWORD *)v2 + 1);
      if ( !v53 || *(_QWORD *)(v53 + 24) != v7 )
        goto LABEL_152;
      if ( (*(_DWORD *)v2 & 2) != 0 )
      {
        v54 = grpWinStaList;
        if ( grpWinStaList )
        {
          while ( 1 )
          {
            v54 = *(_QWORD *)(v54 + 8);
            if ( !v54 )
              break;
            v55 = *(struct tagDESKTOP **)(v54 + 16);
            if ( v55 )
              goto LABEL_144;
          }
        }
      }
      else
      {
        v55 = *(struct tagDESKTOP **)(v13 + 16);
        if ( v55 )
        {
LABEL_144:
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
            || (v56 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v56 = 0;
          }
          v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v56 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v58 = GetDesktopName(v55);
            LOBYTE(v59) = v57;
            LOBYTE(v60) = v56;
            WPP_RECORDER_AND_TRACE_SF_qqS(
              WPP_GLOBAL_Control->AttachedDevice,
              v60,
              v59,
              (_DWORD)gFullLog,
              v68,
              v69,
              v70,
              v71,
              *((_QWORD *)a2 + 1),
              (char)v55,
              (__int64)v58);
          }
          v2 = a2;
          LockObjectAssignment(*((_QWORD *)a2 + 1) + 24LL, v55);
          v17 = a1;
          goto LABEL_152;
        }
      }
      if ( v2 == (struct tagTERMINAL *)gTermIO[0] )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
          || (LOBYTE(v49) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v49) = 0;
        }
        if ( (_BYTE)v49 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v50) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v49,
            v50,
            v53,
            4,
            8,
            16,
            (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
            *((_QWORD *)v2 + 1));
        }
        xxxCleanupMotherDesktopWindow(v2);
      }
LABEL_152:
      v61 = *(_QWORD *)(v7 + 8);
      if ( v61 )
      {
        v62 = *(struct tagWND **)(v61 + 24);
        if ( v62 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)v62 + 5) + 31LL) & 0x10) != 0 )
          {
            *(_QWORD *)&v74 = *((_QWORD *)v17 + 52);
            *((_QWORD *)v17 + 52) = &v74;
            *((_QWORD *)&v74 + 1) = v62;
            HMLockObject(v62);
            xxxSetWindowPos(v62, 0LL, 0LL, 0LL, 0, 0, 1183);
            ThreadUnlock1(v64, v63, v65);
          }
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
            || (LOBYTE(v49) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v49) = 0;
          }
          if ( (_BYTE)v49 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v50) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v49,
              v50,
              (unsigned int)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
              4,
              8,
              18,
              (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
          }
          xxxDestroyWindow(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL));
          if ( v7 == grpdeskRitInput )
          {
            *(_DWORD *)(v7 + 48) |= 1u;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
              || (LOBYTE(v66) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v66) = 0;
            }
            LOBYTE(v50) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v66 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_q(
                WPP_GLOBAL_Control->AttachedDevice,
                v66,
                v50,
                (unsigned int)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
                4,
                8,
                19,
                (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
                v7);
          }
          else
          {
            v67 = *(_QWORD *)(v7 + 8);
            *(_QWORD *)(*(_QWORD *)v67 + 8LL) = 0LL;
            HMAssignmentUnlock(v67 + 24);
          }
          *(_DWORD *)(v7 + 48) |= 2u;
        }
      }
      if ( (*(_DWORD *)v2 & 2) == 0 || !v27 || (v27[12] & 6) == 0 )
        xxxSetThreadDesktop(v28, (__int64)v27, v50);
      PopAndFreeW32ThreadLock((__int64)&v78);
      PopAndFreeW32ThreadLock((__int64)&v80);
      PopAndFreeW32ThreadLock((__int64)&v82);
      v3 = a1;
      v6 = (char *)v2 + 48;
      v7 = *((_QWORD *)v2 + 6);
      if ( !v7 )
        goto LABEL_178;
    }
    v76 = 0LL;
    v77 = 0LL;
    LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v16,
        (unsigned int)&WPP_GLOBAL_Control,
        4,
        8,
        11,
        (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
    }
    if ( (*(_DWORD *)(v13 + 64) & 1) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v15) = 0;
      }
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          v16,
          (unsigned int)&WPP_GLOBAL_Control,
          4,
          8,
          12,
          (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
      }
      if ( gspdeskDisconnect
        && ((PVOID)v7 == grpdeskLogon || !grpdeskLogon || (*((_DWORD *)grpdeskLogon + 12) & 2) != 0) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
          || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v15) = 0;
        }
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v15,
            v16,
            (unsigned int)&WPP_GLOBAL_Control,
            4,
            8,
            13,
            (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
        RemoteDisableScreen(grpdeskRitInput, v15, v16, gbDesktopLocked);
LABEL_40:
        v17 = a1;
        goto LABEL_75;
      }
      v18 = (struct tagDESKTOP *)grpdeskLogon;
    }
    else
    {
      v18 = *(struct tagDESKTOP **)(v13 + 16);
      if ( v18 == (struct tagDESKTOP *)v7 )
        v18 = *(struct tagDESKTOP **)(v7 + 32);
      if ( !v18 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
          || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v15) = 0;
        }
        if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v15,
            v16,
            (unsigned int)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
            4,
            8,
            14,
            (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
        }
        ClearWakeBit(v3, 15367, 0);
      }
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v19 = 0;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = GetDesktopName(v18);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v19;
      WPP_RECORDER_AND_TRACE_SF_Sq(
        WPP_GLOBAL_Control->AttachedDevice,
        v23,
        v22,
        (_DWORD)gFullLog,
        v68,
        v69,
        15,
        v71,
        (__int64)v21,
        (char)v18);
    }
    PushW32ThreadLock((__int64)v18, &v76, UserDereferenceObject);
    if ( v18 )
      ObfReferenceObject(v18);
    xxxSwitchDesktop(v13, (__int64)v18, 0);
    PopAndFreeW32ThreadLock((__int64)&v76);
    v2 = a2;
    goto LABEL_40;
  }
LABEL_178:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v4) = 0;
  }
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      (unsigned int)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
      4,
      8,
      20,
      (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
  }
  KeSetEvent(gpevtDesktopDestroyed, 1, 0);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v72);
}
