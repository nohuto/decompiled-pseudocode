/*
 * XREFs of xxxDispatchMessage @ 0x1C0117884
 * Callers:
 *     xxxSetCsrssThreadDesktop @ 0x1C00697C0 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C0069B30 (xxxRestoreCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C006A3B0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserDispatchMessage @ 0x1C0117770 (NtUserDispatchMessage.c)
 *     xxxDCETrackCaptionButton @ 0x1C01BA87C (xxxDCETrackCaptionButton.c)
 *     xxxOldNextWindow @ 0x1C01CACD8 (xxxOldNextWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxMNLoop @ 0x1C02146AC (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022992C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C022C718 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C0239514 (xxxHelpLoop.c)
 * Callees:
 *     ValidateTimerCallback @ 0x1C009B944 (ValidateTimerCallback.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EE714 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0118654 (xxxSimpleDoSyncPaint.c)
 *     SfnDWORD @ 0x1C0123CE0 (SfnDWORD.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ??1CEtwTraceDispatchMessage@@QEAA@XZ @ 0x1C01C0E10 (--1CEtwTraceDispatchMessage@@QEAA@XZ.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C024BD78 (RtlMBMessageWParamCharToWCS.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C024BEC8 (RtlWCSMessageWParamCharToMB.c)
 */

__int64 __fastcall xxxDispatchMessage(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  PERESOURCE *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rcx
  struct tagWND *v11; // r14
  __int64 v13; // rdx
  BOOL v14; // eax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // ecx
  int v23; // ebx
  int v24; // r15d
  _DWORD *v25; // rax
  int v26; // r12d
  int v27; // ecx
  int v28; // edx
  int v29; // ebp
  int v30; // eax
  int v31; // r13d
  int v32; // r15d
  __int64 v33; // rbx
  __int64 v34; // rcx
  void *v35; // rax
  __int64 v36; // rax
  __int64 (__fastcall *v37)(int, int, int, int, __int64, __int64, char); // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rbp
  unsigned int v40; // r10d
  __int64 *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rsi
  _QWORD *v49; // r15
  int v50; // eax
  int v51; // ebx
  int v52; // r13d
  _DWORD *v53; // rax
  int v54; // r15d
  int v55; // ecx
  int v56; // edx
  int v57; // esi
  int v58; // eax
  int v59; // r12d
  __int64 v60; // rbx
  __int64 v61; // rcx
  void *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  PERESOURCE *v67; // rax
  __int64 *v68; // rax
  __int64 v69; // rcx
  __int128 v70; // [rsp+50h] [rbp-58h] BYREF
  __int64 v71; // [rsp+60h] [rbp-48h]
  int v72; // [rsp+B0h] [rbp+8h]
  unsigned int v73; // [rsp+B8h] [rbp+10h] BYREF
  int v74; // [rsp+C0h] [rbp+18h]

  v4 = *((_DWORD *)a1 + 2);
  v73 = v4;
  v70 = 0LL;
  v71 = 0LL;
  v6 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  v7 = 0LL;
  if ( !ExIsResourceAcquiredSharedLite(*v6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v8 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v8 = *ThreadWin32Thread;
  LOBYTE(v10) = *(_BYTE *)(v8 + 1296);
  EtwTraceBeginDispatchMessage(v10, v4);
  v11 = 0LL;
  if ( *a1 )
  {
    v11 = (struct tagWND *)ValidateHwnd(*a1);
    if ( !v11 )
      goto LABEL_7;
  }
  v13 = *((unsigned int *)a1 + 2);
  if ( (unsigned int)v13 < 0x400 )
  {
    v14 = _bittest16(&MessageTable[v13], 9u) || (_DWORD)v13 == 537 && (a1[2] & 0x8000) != 0;
    if ( v14 || (_DWORD)v13 == 536 && (a1[2] & 0x8000) != 0 )
    {
      UserSetLastError(1159);
LABEL_7:
      CEtwTraceDispatchMessage::~CEtwTraceDispatchMessage((CEtwTraceDispatchMessage *)&v73);
      return 0LL;
    }
  }
  ThreadLock(v11, &v70);
  v18 = *((_DWORD *)a1 + 2);
  if ( v18 != 275 && v18 != 280 || (v15 = a1[3]) == 0 )
  {
    if ( !v11 )
      goto LABEL_24;
    v72 = -16;
    if ( v18 != 15
      || (v21 = *((_QWORD *)v11 + 5),
          v22 = *(_DWORD *)(v21 + 232),
          v23 = *(_DWORD *)(v21 + 28),
          v24 = *(_DWORD *)(v21 + 24),
          *(_BYTE *)(v21 + 18) |= 0x40u,
          v74 = v22,
          !(unsigned int)IsWindowDesktopComposed(v11)) )
    {
LABEL_44:
      v36 = *((_QWORD *)v11 + 5);
      LOBYTE(v17) = *(_BYTE *)(v36 + 18);
      if ( (v17 & 4) != 0 )
      {
        v16 = *((unsigned int *)a1 + 2);
        if ( (unsigned int)v16 < 0x400 )
          v37 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gapfnScSendMessage[(unsigned __int8)MessageTable[v16]];
        else
          v37 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))SfnDWORD;
        v15 = (unsigned __int64)SfnINWPARAMCHAR;
        if ( v37 == SfnINWPARAMCHAR && (v17 & 8) != 0 )
          RtlMBMessageWParamCharToWCS(v16, a1 + 2);
        v38 = *(_QWORD *)(*((_QWORD *)v11 + 5) + 120LL);
        if ( v38 < 7 )
        {
          v20 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64))(&gServerHandlers)[v38])(
                  v11,
                  *((unsigned int *)a1 + 2),
                  a1[2],
                  a1[3]);
          goto LABEL_27;
        }
LABEL_24:
        v19 = 0LL;
        goto LABEL_88;
      }
      v39 = *(_QWORD *)(v36 + 120);
      v40 = *((_DWORD *)a1 + 2);
      if ( (v17 & 8) != 0 )
      {
        v41 = a1 + 2;
        RtlWCSMessageWParamCharToMB(v40, a1 + 2);
        v42 = *((unsigned int *)a1 + 2);
        if ( (_DWORD)v42 != 576 && (_DWORD)v42 != 281 )
        {
          v43 = *v41;
LABEL_57:
          v44 = SfnDWORD((_DWORD)v11, v42, v43, a1[3], v39, *(_QWORD *)(gpsi + 752LL));
          goto LABEL_64;
        }
        v45 = *v41;
        v46 = (unsigned __int16)v42;
      }
      else
      {
        if ( v40 != 576 && v40 != 281 )
        {
          v43 = a1[2];
          LODWORD(v42) = *((_DWORD *)a1 + 2);
          goto LABEL_57;
        }
        v45 = a1[2];
        v42 = v40;
        v46 = (unsigned __int16)v40;
      }
      v44 = ((__int64 (__fastcall *)(struct tagWND *, __int64, __int64, __int64, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[v46]])(
              v11,
              v42,
              v45,
              a1[3],
              v39,
              *(_QWORD *)(gpsi + 752LL),
              1,
              0LL);
LABEL_64:
      v19 = v44;
      if ( *((_DWORD *)a1 + 2) != 15 )
        goto LABEL_88;
      v47 = *a1;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v15 = (unsigned __int16)v47;
      v16 = gpsi;
      if ( (unsigned __int64)(unsigned __int16)v47 >= *(_QWORD *)(gpsi + 8LL) )
        goto LABEL_88;
      v48 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v47;
      v49 = (_QWORD *)HMPkheFromPhe(v48);
      LOWORD(v47) = WORD1(v47) & 0x7FFF;
      if ( (WORD1(v47) & 0x7FFF) != *(_WORD *)(v48 + 26)
        && (_WORD)v47 != 0x7FFF
        && ((_WORD)v47 || !PsGetCurrentProcessWow64Process(v16, v15, v17)) )
      {
        goto LABEL_88;
      }
      if ( (*(_BYTE *)(v48 + 25) & 1) != 0 )
        goto LABEL_88;
      if ( *(_BYTE *)(v48 + 24) != 1 )
        goto LABEL_88;
      if ( !*v49 )
        goto LABEL_88;
      v16 = *((_QWORD *)v11 + 5);
      if ( (*(_BYTE *)(v16 + 18) & 0x40) == 0 )
        goto LABEL_88;
      v50 = *(_DWORD *)(v16 + 232);
      v51 = *(_DWORD *)(v16 + 28);
      v52 = *(_DWORD *)(v16 + 24);
      *(_BYTE *)(v16 + 20) &= ~1u;
      v74 = v50;
      if ( !(unsigned int)IsWindowDesktopComposed(v11) )
        goto LABEL_87;
      v53 = (_DWORD *)*((_QWORD *)v11 + 5);
      v54 = v53[7];
      v55 = v53[6];
      v56 = v53[58];
      v57 = v52 ^ v55;
      v58 = v74 ^ v56;
      v59 = v51 ^ v54;
      if ( v51 == v54 )
      {
        if ( v57 )
        {
LABEL_79:
          if ( (v57 & 0x4E27A9) != 0 )
          {
            v72 = -20;
            v54 = v55;
          }
          else
          {
            if ( (v58 & 0x12C0) == 0 )
            {
LABEL_84:
              if ( (v59 & 0xC40000) != 0 || (v57 & 0x200A0381) != 0 )
                WindowMargins::CheckForChanges(v11, 1);
              goto LABEL_87;
            }
            v72 = -268435456;
            v54 = v56;
          }
LABEL_83:
          DirtyVisRgnTrackers((__int64)v11);
          v60 = *(_QWORD *)v11;
          v62 = (void *)ReferenceDwmApiPort(v61);
          DwmAsyncChildStyleChange(v62, v60, v72, v54);
          goto LABEL_84;
        }
        if ( !v58 )
        {
LABEL_87:
          xxxSimpleDoSyncPaint(v11);
          goto LABEL_88;
        }
      }
      if ( (v59 & 0xB1CF0000) != 0 )
        goto LABEL_83;
      goto LABEL_79;
    }
    v25 = (_DWORD *)*((_QWORD *)v11 + 5);
    v26 = v25[7];
    v27 = v25[6];
    v28 = v25[58];
    v29 = v24 ^ v27;
    v30 = v74 ^ v28;
    v31 = v23 ^ v26;
    if ( v23 == v26 )
    {
      if ( v29 )
        goto LABEL_36;
      if ( !v30 )
        goto LABEL_44;
    }
    if ( (v31 & 0xB1CF0000) != 0 )
    {
      v32 = -16;
      goto LABEL_40;
    }
LABEL_36:
    if ( (v29 & 0x4E27A9) != 0 )
    {
      v32 = -20;
      v26 = v27;
    }
    else
    {
      if ( (v30 & 0x12C0) == 0 )
      {
LABEL_41:
        if ( (v31 & 0xC40000) != 0 || (v29 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(v11, 1);
        goto LABEL_44;
      }
      v32 = -268435456;
      v26 = v28;
    }
LABEL_40:
    DirtyVisRgnTrackers((__int64)v11);
    v33 = *(_QWORD *)v11;
    v35 = (void *)ReferenceDwmApiPort(v34);
    DwmAsyncChildStyleChange(v35, v33, v32, v26);
    goto LABEL_41;
  }
  if ( v18 != 280 )
  {
    v16 = gptiCurrent;
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 && ValidateTimerCallback(gptiCurrent) )
    {
      v20 = SfnDWORD(
              (_DWORD)v11,
              275,
              a1[2],
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
              a1[3],
              *(_QWORD *)(gpsi + 752LL));
LABEL_27:
      v19 = v20;
      goto LABEL_88;
    }
    goto LABEL_24;
  }
  v15 = gtmrListHead;
  v19 = 0LL;
  v16 = gtmrListHead;
LABEL_88:
  ThreadUnlock1(v16, v15, v17);
  v67 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v64, v63, v65, v66);
  if ( !ExIsResourceAcquiredSharedLite(*v67) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v68 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v68 )
    v7 = *v68;
  LOBYTE(v69) = *(_BYTE *)(v7 + 1296);
  EtwTraceEndDispatchMessage(v69, v73);
  return v19;
}
