/*
 * XREFs of xxxDispatchMessage @ 0x1C006ADB4
 * Callers:
 *     NtUserDispatchMessage @ 0x1C006ACA0 (NtUserDispatchMessage.c)
 *     xxxDCETrackCaptionButton @ 0x1C00D79AC (xxxDCETrackCaptionButton.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00D8E60 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00D90F0 (xxxSetCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D9B74 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01F43B0 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C02122B4 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0234488 (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0244A64 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C0247450 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C024FBDC (xxxHelpLoop.c)
 * Callees:
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C004E050 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C004E4D0 (DirtyVisRgnTrackers.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     SfnDWORD @ 0x1C006B320 (SfnDWORD.c)
 *     xxxSimpleDoSyncPaint @ 0x1C006D7A0 (xxxSimpleDoSyncPaint.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C012D660 (RtlWCSMessageWParamCharToMB.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ValidateTimerCallback @ 0x1C01E1ED0 (ValidateTimerCallback.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C025D4A0 (RtlMBMessageWParamCharToWCS.c)
 */

__int64 __fastcall xxxDispatchMessage(__int64 a1)
{
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdx
  struct _KTHREAD *v13; // r15
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *v18; // rax
  __int64 (__fastcall *i)(int, int, int, int, __int64, __int64, char); // rcx
  int v20; // eax
  __int64 v21; // rax
  int v22; // r12d
  int v23; // ebp
  int v24; // r13d
  _DWORD *v25; // rax
  int v26; // r9d
  int v27; // r8d
  int v28; // ebx
  __int64 v29; // rdx
  char v30; // r9
  __int64 v31; // rbp
  unsigned int v32; // r10d
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rbp
  unsigned __int64 v36; // rsi
  struct _KTHREAD *v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rbx
  unsigned __int64 v42; // rsi
  _QWORD *v43; // r12
  struct _KTHREAD *v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 *v48; // rax
  __int64 v49; // rcx
  char *v51; // rbx
  __int64 v52; // r8
  __int64 (__fastcall *v53)(int, int, int, int, __int64, __int64, char); // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 *v56; // rbx
  __int64 v57; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v60; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v62; // rax
  int v63; // ebx
  __int64 v64; // rcx
  __int64 v65; // rax
  int v66; // ecx
  int v67; // edx
  unsigned int v68; // ebp
  __int64 v69; // rdx
  __int64 v70; // rcx
  void *v71; // rax
  __int64 v72; // rax
  int v73; // ebx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // ebx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int128 v80; // [rsp+50h] [rbp-58h] BYREF
  __int64 v81; // [rsp+60h] [rbp-48h]
  unsigned int v82; // [rsp+B8h] [rbp+10h]

  v80 = 0LL;
  v81 = 0LL;
  v1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v82 = *(_DWORD *)(a1 + 8);
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v6, v5, v7),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v60),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  LOBYTE(v9) = *(_BYTE *)(v4 + 1248);
  EtwTraceBeginDispatchMessage(v9, v82);
  v10 = *(_QWORD *)a1;
  v11 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v11 = ValidateHwnd(v10);
    if ( !v11 )
      goto LABEL_74;
  }
  v12 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v12 < 0x400
    && ((v10 = 512LL, (MessageTable[v12] & 0x200) != 0) || (_DWORD)v12 == 537 && (*(_DWORD *)(a1 + 16) & 0x8000LL) != 0)
    || (_DWORD)v12 == 536 && (*(_DWORD *)(a1 + 16) & 0x8000LL) != 0 )
  {
    UserSetLastError(1159LL, v12, 0x8000LL);
LABEL_74:
    v35 = 0LL;
    goto LABEL_40;
  }
  v13 = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v10)
    || (v62 = PsGetCurrentProcess(v16, v15, v17),
        v63 = PsGetProcessSessionIdEx(v62),
        v65 = PsGetCurrentThreadProcess(v64),
        v63 == (unsigned int)PsGetProcessSessionIdEx(v65)) )
  {
    v18 = (__int64 *)PsGetThreadWin32Thread(v13);
    if ( v18 )
      v14 = *v18;
  }
  *(_QWORD *)&v80 = *(_QWORD *)(v14 + 416);
  *(_QWORD *)(v14 + 416) = &v80;
  *((_QWORD *)&v80 + 1) = v11;
  if ( v11 )
    HMLockObject(v11);
  v20 = *(_DWORD *)(a1 + 8);
  if ( (v20 == 280 || v20 == 275) && *(_QWORD *)(a1 + 24) )
  {
    if ( v20 == 280 )
    {
      v35 = 0LL;
      for ( i = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gtmrListHead[0];
            i != (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gtmrListHead[0];
            i = *(__int64 (__fastcall **)(int, int, int, int, __int64, __int64, char))i )
      {
        v51 = (char *)i - 72;
        if ( (*((_DWORD *)i - 6) & 2) != 0
          && *(_QWORD *)(a1 + 16) == *((_QWORD *)v51 + 12)
          && v11 == *((_QWORD *)v51 + 11) )
        {
          goto LABEL_53;
        }
      }
      v51 = 0LL;
LABEL_53:
      if ( v51 )
      {
        if ( *((_QWORD *)v51 + 4)
          || (MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3691LL), *((_QWORD *)v51 + 4)) )
        {
          (*((void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))v51 + 4))(
            v11,
            280LL,
            *(unsigned int *)(a1 + 16),
            (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24));
        }
      }
      goto LABEL_39;
    }
    i = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gptiCurrent;
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 && (unsigned int)ValidateTimerCallback() )
    {
      v55 = SfnDWORD(
              v11,
              275,
              *(_QWORD *)(a1 + 16),
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
              *(_QWORD *)(a1 + 24),
              *(_QWORD *)(gpsi + 752LL));
      goto LABEL_61;
    }
LABEL_66:
    v35 = 0LL;
    goto LABEL_39;
  }
  if ( !v11 )
    goto LABEL_66;
  if ( v20 == 15 )
  {
    v21 = *(_QWORD *)(v11 + 40);
    v22 = *(_DWORD *)(v21 + 28);
    v23 = *(_DWORD *)(v21 + 24);
    v24 = *(_DWORD *)(v21 + 232);
    *(_BYTE *)(v21 + 18) |= 0x40u;
    if ( (unsigned int)IsWindowDesktopComposed(v11) )
    {
      v25 = *(_DWORD **)(v11 + 40);
      v26 = v25[7];
      v27 = v25[6];
      v28 = v25[58];
      if ( v22 != v26 )
        goto LABEL_85;
      if ( v23 == v27 && v24 == v28 )
        goto LABEL_23;
      if ( v22 == v26 )
      {
        if ( v23 == v27 )
        {
          if ( ((v24 ^ v28) & 0x2E00300) == 0 )
            goto LABEL_23;
          v67 = 1;
          v68 = -268435456;
        }
        else
        {
          v66 = (v23 ^ v27) & 0x4E27A9;
          v67 = v66 != 0;
          v68 = -v67 & 0xFFFFFFEC;
          v28 = v27 & -v67;
        }
      }
      else
      {
LABEL_85:
        v67 = ((v22 ^ v26) & 0xB1CF0000) != 0;
        v68 = -v67 & 0xFFFFFFF0;
        v28 = v26 & -v67;
      }
      if ( v67 )
      {
        DirtyVisRgnTrackers((struct tagWND *)v11);
        v71 = (void *)ReferenceDwmApiPort(v70, v69);
        DwmAsyncChildStyleChange(v71, *(_QWORD *)v11, v68, v28);
      }
    }
  }
LABEL_23:
  v29 = *(_QWORD *)(v11 + 40);
  v30 = *(_BYTE *)(v29 + 18);
  if ( (v30 & 4) == 0 )
  {
    v31 = *(_QWORD *)(v29 + 120);
    v32 = *(_DWORD *)(a1 + 8);
    if ( (v30 & 8) != 0 )
    {
      v56 = (__int64 *)(a1 + 16);
      RtlWCSMessageWParamCharToMB(v32, a1 + 16);
      v32 = *(_DWORD *)(a1 + 8);
      if ( v32 != 576 && v32 != 281 )
      {
        v33 = *v56;
        goto LABEL_28;
      }
      v57 = *v56;
    }
    else
    {
      if ( v32 != 576 && v32 != 281 )
      {
        v33 = *(_QWORD *)(a1 + 16);
LABEL_28:
        v34 = SfnDWORD(v11, v32, v33, *(_QWORD *)(a1 + 24), v31, *(_QWORD *)(gpsi + 752LL));
        goto LABEL_29;
      }
      v57 = *(_QWORD *)(a1 + 16);
    }
    v34 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v32]])(
            v11,
            v32,
            v57,
            *(_QWORD *)(a1 + 24),
            v31,
            *(_QWORD *)(gpsi + 752LL),
            1,
            0LL);
LABEL_29:
    v35 = v34;
    if ( *(_DWORD *)(a1 + 8) == 15 )
    {
      v36 = *(_QWORD *)a1;
      v37 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(i)
        || (v72 = PsGetCurrentProcess(v39, v38, v40),
            v73 = PsGetProcessSessionIdEx(v72),
            v75 = PsGetCurrentThreadProcess(v74),
            v73 == (unsigned int)PsGetProcessSessionIdEx(v75)) )
      {
        PsGetThreadWin32Thread(v37);
      }
      i = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gpsi;
      if ( (unsigned __int64)(unsigned __int16)v36 < *(_QWORD *)(gpsi + 8LL) )
      {
        v41 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v36 * LODWORD(gSharedInfo[2]);
        v42 = v36 >> 16;
        v43 = (_QWORD *)HMPkheFromPhe(v41);
        if ( ((_WORD)v42 == *(_WORD *)(v41 + 26)
           || (_WORD)v42 == 0xFFFF
           || !(_WORD)v42 && PsGetCurrentProcessWow64Process(i))
          && (*(_BYTE *)(v41 + 25) & 1) == 0
          && *(_BYTE *)(v41 + 24) == 1
          && *v43
          && (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 18LL) & 0x40) != 0 )
        {
          SetOrClrWF(0, v11, 0x401u, 1);
          xxxSimpleDoSyncPaint((struct tagWND *)v11);
        }
      }
    }
    goto LABEL_39;
  }
  v52 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v52 >= 0x400 )
    v53 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))SfnDWORD;
  else
    v53 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gapfnScSendMessage[(unsigned __int8)MessageTable[v52]];
  i = SfnINWPARAMCHAR;
  if ( v53 == SfnINWPARAMCHAR && (v30 & 8) != 0 )
  {
    RtlMBMessageWParamCharToWCS((unsigned int)v52, a1 + 16);
    v29 = *(_QWORD *)(v11 + 40);
  }
  v54 = *(_QWORD *)(v29 + 120);
  if ( v54 >= 7 )
    goto LABEL_66;
  v55 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))(&gServerHandlers)[v54])(
          v11,
          *(unsigned int *)(a1 + 8),
          *(_QWORD *)(a1 + 16),
          *(_QWORD *)(a1 + 24));
LABEL_61:
  v35 = v55;
LABEL_39:
  ThreadUnlock1(i);
LABEL_40:
  v44 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v10)
    || (v76 = PsGetCurrentProcess(v46, v45, v47),
        v77 = PsGetProcessSessionIdEx(v76),
        v79 = PsGetCurrentThreadProcess(v78),
        v77 == (unsigned int)PsGetProcessSessionIdEx(v79)) )
  {
    v48 = (__int64 *)PsGetThreadWin32Thread(v44);
    if ( v48 )
      v1 = *v48;
  }
  LOBYTE(v49) = *(_BYTE *)(v1 + 1248);
  EtwTraceEndDispatchMessage(v49, v82);
  return v35;
}
