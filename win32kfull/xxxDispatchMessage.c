/*
 * XREFs of xxxDispatchMessage @ 0x1C0038064
 * Callers:
 *     NtUserDispatchMessage @ 0x1C0037F50 (NtUserDispatchMessage.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C0093CF0 (xxxRestoreCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0094570 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00948B0 (xxxSetCsrssThreadDesktop.c)
 *     xxxDCETrackCaptionButton @ 0x1C01BBA1C (xxxDCETrackCaptionButton.c)
 *     xxxOldNextWindow @ 0x1C01CBDC8 (xxxOldNextWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxMNLoop @ 0x1C021726C (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022C64C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C022F438 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C023C17C (xxxHelpLoop.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C002E648 (DwmAsyncChildStyleChange.c)
 *     SfnDWORD @ 0x1C00385D0 (SfnDWORD.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0038E64 (xxxSimpleDoSyncPaint.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00AD734 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C00AEA8C (DirtyVisRgnTrackers.c)
 *     ValidateTimerCallback @ 0x1C00D1AE4 (ValidateTimerCallback.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??1CEtwTraceDispatchMessage@@QEAA@XZ @ 0x1C01C1F70 (--1CEtwTraceDispatchMessage@@QEAA@XZ.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C024EA38 (RtlMBMessageWParamCharToWCS.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C024EB88 (RtlWCSMessageWParamCharToMB.c)
 */

__int64 __fastcall xxxDispatchMessage(__int64 *a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 *v8; // r14
  __int64 v9; // rdx
  BOOL v10; // eax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rax
  int v16; // ecx
  int v17; // ebx
  int v18; // ebp
  _DWORD *v19; // rax
  int v20; // r12d
  int v21; // ecx
  int v22; // edx
  int v23; // r15d
  int v24; // eax
  int v25; // r13d
  __int64 v26; // rax
  __int64 v27; // rbp
  unsigned int v28; // r10d
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // rsi
  _QWORD *v35; // r15
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 *v38; // rax
  __int64 v39; // rcx
  int v41; // eax
  int v42; // ebx
  int v43; // r13d
  _DWORD *v44; // rax
  int v45; // r15d
  int v46; // ecx
  int v47; // edx
  int v48; // esi
  int v49; // eax
  int v50; // r12d
  __int64 (__fastcall *v51)(int, int, int, int, __int64, __int64, char); // rax
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  int v54; // ebp
  __int64 v55; // rbx
  void *v56; // rax
  __int64 *v57; // rbx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rbx
  void *v61; // rax
  __int128 v62; // [rsp+50h] [rbp-58h] BYREF
  __int64 v63; // [rsp+60h] [rbp-48h]
  int v64; // [rsp+B0h] [rbp+8h]
  unsigned int v65; // [rsp+B8h] [rbp+10h] BYREF
  int v66; // [rsp+C0h] [rbp+18h]

  v1 = *((_DWORD *)a1 + 2);
  v65 = v1;
  v62 = 0LL;
  v63 = 0LL;
  v3 = SGDGetUserSessionState(a1);
  v4 = 0LL;
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v3 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  LOBYTE(v7) = *(_BYTE *)(v5 + 1296);
  EtwTraceBeginDispatchMessage(v7, v1);
  v8 = 0LL;
  if ( *a1 )
  {
    v8 = (__int64 *)ValidateHwnd(*a1);
    if ( !v8 )
      goto LABEL_56;
  }
  v9 = *((unsigned int *)a1 + 2);
  if ( (unsigned int)v9 < 0x400 )
  {
    v10 = _bittest16(&MessageTable[v9], 9u) || (_DWORD)v9 == 537 && (a1[2] & 0x8000) != 0;
    if ( v10 || (_DWORD)v9 == 536 && (a1[2] & 0x8000) != 0 )
    {
      UserSetLastError(1159LL);
LABEL_56:
      CEtwTraceDispatchMessage::~CEtwTraceDispatchMessage((CEtwTraceDispatchMessage *)&v65);
      return 0LL;
    }
  }
  ThreadLock(v8, &v62);
  v14 = *((_DWORD *)a1 + 2);
  if ( v14 == 280 || v14 == 275 )
  {
    v11 = a1[3];
    if ( v11 )
    {
      if ( v14 == 280 )
      {
        v11 = gtmrListHead;
        v32 = 0LL;
        v12 = gtmrListHead;
        goto LABEL_34;
      }
      v12 = gptiCurrent;
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 && (unsigned int)ValidateTimerCallback() )
      {
        v53 = SfnDWORD(
                (_DWORD)v8,
                275,
                a1[2],
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
                a1[3],
                *(_QWORD *)(gpsi + 752LL));
        goto LABEL_52;
      }
      goto LABEL_54;
    }
  }
  if ( !v8 )
    goto LABEL_54;
  v64 = -16;
  if ( v14 == 15 )
  {
    v15 = v8[5];
    v16 = *(_DWORD *)(v15 + 232);
    v17 = *(_DWORD *)(v15 + 28);
    v18 = *(_DWORD *)(v15 + 24);
    *(_BYTE *)(v15 + 18) |= 0x40u;
    v66 = v16;
    if ( (unsigned int)IsWindowDesktopComposed(v8) )
    {
      v19 = (_DWORD *)v8[5];
      v20 = v19[7];
      v21 = v19[6];
      v22 = v19[58];
      v23 = v18 ^ v21;
      v24 = v66 ^ v22;
      v25 = v17 ^ v20;
      if ( v17 == v20 )
      {
        if ( v23 )
          goto LABEL_66;
        if ( !v24 )
          goto LABEL_21;
      }
      if ( (v25 & 0xB1CF0000) != 0 )
      {
        v54 = -16;
        goto LABEL_70;
      }
LABEL_66:
      if ( (v23 & 0x4E27A9) != 0 )
      {
        v54 = -20;
        v20 = v21;
      }
      else
      {
        if ( (v24 & 0x12C0) == 0 )
          goto LABEL_71;
        v54 = -268435456;
        v20 = v22;
      }
LABEL_70:
      DirtyVisRgnTrackers(v8);
      v55 = *v8;
      v56 = (void *)ReferenceDwmApiPort();
      DwmAsyncChildStyleChange(v56, v55, v54, v20);
LABEL_71:
      if ( (v23 & 0x200A0381) != 0 || (v25 & 0xC40000) != 0 )
        WindowMargins::CheckForChanges(v8, 1LL);
    }
  }
LABEL_21:
  v26 = v8[5];
  LOBYTE(v13) = *(_BYTE *)(v26 + 18);
  if ( (v13 & 4) != 0 )
  {
    v12 = *((unsigned int *)a1 + 2);
    if ( (unsigned int)v12 >= 0x400 )
      v51 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))SfnDWORD;
    else
      v51 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gapfnScSendMessage[(unsigned __int8)MessageTable[v12]];
    v11 = (unsigned __int64)SfnINWPARAMCHAR;
    if ( v51 == SfnINWPARAMCHAR && (v13 & 8) != 0 )
      RtlMBMessageWParamCharToWCS(v12, a1 + 2);
    v52 = *(_QWORD *)(v8[5] + 120);
    if ( v52 < 7 )
    {
      v53 = ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, __int64))(&gServerHandlers)[v52])(
              v8,
              *((unsigned int *)a1 + 2),
              a1[2],
              a1[3]);
LABEL_52:
      v32 = v53;
      goto LABEL_34;
    }
LABEL_54:
    v32 = 0LL;
    goto LABEL_34;
  }
  v27 = *(_QWORD *)(v26 + 120);
  v28 = *((_DWORD *)a1 + 2);
  if ( (v13 & 8) != 0 )
  {
    v57 = a1 + 2;
    RtlWCSMessageWParamCharToMB(v28, a1 + 2);
    v30 = *((unsigned int *)a1 + 2);
    if ( (_DWORD)v30 != 576 && (_DWORD)v30 != 281 )
    {
      v29 = *v57;
      goto LABEL_26;
    }
    v58 = *v57;
    v59 = (unsigned __int16)v30;
LABEL_80:
    v31 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64, __int64, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[v59]])(
            v8,
            v30,
            v58,
            a1[3],
            v27,
            *(_QWORD *)(gpsi + 752LL),
            1,
            0LL);
    goto LABEL_27;
  }
  if ( v28 >= 0x240 )
  {
    if ( v28 > 0x240 )
      goto LABEL_25;
    goto LABEL_79;
  }
  if ( v28 == 281 )
  {
LABEL_79:
    v58 = a1[2];
    v30 = v28;
    v59 = (unsigned __int16)v28;
    goto LABEL_80;
  }
LABEL_25:
  v29 = a1[2];
  LODWORD(v30) = *((_DWORD *)a1 + 2);
LABEL_26:
  v31 = SfnDWORD((_DWORD)v8, v30, v29, a1[3], v27, *(_QWORD *)(gpsi + 752LL));
LABEL_27:
  v32 = v31;
  if ( *((_DWORD *)a1 + 2) != 15 )
    goto LABEL_34;
  v33 = *a1;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  v11 = (unsigned __int16)v33;
  v12 = gpsi;
  if ( (unsigned __int64)(unsigned __int16)v33 >= *(_QWORD *)(gpsi + 8LL) )
    goto LABEL_34;
  v34 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v33;
  v35 = (_QWORD *)HMPkheFromPhe(v34);
  LOWORD(v33) = WORD1(v33) & 0x7FFF;
  if ( (WORD1(v33) & 0x7FFF) != *(_WORD *)(v34 + 26)
    && (_WORD)v33 != 0x7FFF
    && ((_WORD)v33 || !PsGetCurrentProcessWow64Process(v12)) )
  {
    goto LABEL_34;
  }
  if ( (*(_BYTE *)(v34 + 25) & 1) != 0 )
    goto LABEL_34;
  if ( *(_BYTE *)(v34 + 24) != 1 )
    goto LABEL_34;
  if ( !*v35 )
    goto LABEL_34;
  v12 = v8[5];
  if ( (*(_BYTE *)(v12 + 18) & 0x40) == 0 )
    goto LABEL_34;
  v41 = *(_DWORD *)(v12 + 232);
  v42 = *(_DWORD *)(v12 + 28);
  v43 = *(_DWORD *)(v12 + 24);
  *(_BYTE *)(v12 + 20) &= ~1u;
  v66 = v41;
  if ( !(unsigned int)IsWindowDesktopComposed(v8) )
    goto LABEL_43;
  v44 = (_DWORD *)v8[5];
  v45 = v44[7];
  v46 = v44[6];
  v47 = v44[58];
  v48 = v43 ^ v46;
  v49 = v66 ^ v47;
  v50 = v42 ^ v45;
  if ( v42 != v45 )
    goto LABEL_87;
  if ( v48 )
  {
LABEL_88:
    if ( (v48 & 0x4E27A9) != 0 )
    {
      v64 = -20;
      v45 = v46;
    }
    else
    {
      if ( (v49 & 0x12C0) == 0 )
        goto LABEL_93;
      v64 = -268435456;
      v45 = v47;
    }
LABEL_92:
    DirtyVisRgnTrackers(v8);
    v60 = *v8;
    v61 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v61, v60, v64, v45);
LABEL_93:
    if ( (v48 & 0x200A0381) != 0 || (v50 & 0xC40000) != 0 )
      WindowMargins::CheckForChanges(v8, 1LL);
    goto LABEL_43;
  }
  if ( v49 )
  {
LABEL_87:
    if ( (v50 & 0xB1CF0000) != 0 )
      goto LABEL_92;
    goto LABEL_88;
  }
LABEL_43:
  xxxSimpleDoSyncPaint((struct tagWND *)v8);
LABEL_34:
  ThreadUnlock1(v12, v11, v13);
  v37 = SGDGetUserSessionState(v36);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v37 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v38 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v38 )
    v4 = *v38;
  LOBYTE(v39) = *(_BYTE *)(v4 + 1296);
  EtwTraceEndDispatchMessage(v39, v65);
  return v32;
}
