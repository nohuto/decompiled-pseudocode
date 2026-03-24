/*
 * XREFs of xxxInterSendMsgEx @ 0x1C005A2F0
 * Callers:
 *     _ReplyMessage @ 0x1C00023B0 (_ReplyMessage.c)
 *     xxxSendMessageCallback @ 0x1C00405E4 (xxxSendMessageCallback.c)
 *     xxxReceiveMessage @ 0x1C0059000 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C005BDB0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ClearSendMessages @ 0x1C007C38C (ClearSendMessages.c)
 *     xxxReceiverDied @ 0x1C00DADBC (xxxReceiverDied.c)
 * Callees:
 *     IsThreadHung @ 0x1C003E194 (IsThreadHung.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C003F99C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C003FB08 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C003FB8C (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     SetWakeBit @ 0x1C0051920 (SetWakeBit.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00588D0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C005BAB0 (TransformMessageBetweenCoordinateSpaces.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C005D0A0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     HMValidateHandle @ 0x1C00670E0 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C011C31C (MergeDeferredMessagesOfThreadOnQueue.c)
 *     ProcessSuspendedSendMessage @ 0x1C012A6CC (ProcessSuspendedSendMessage.c)
 *     ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C0169708 (--0CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1C0169730 (--1CKernelStackSwapAuto@@QEAA@XZ.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01DCB40 (_FreeTouchInputInfo.c)
 *     MakeUpKeyboardCorrectionCalloutContents @ 0x1C01E1F4C (MakeUpKeyboardCorrectionCalloutContents.c)
 *     _FreeGestureInfo @ 0x1C0227C40 (_FreeGestureInfo.c)
 *     strncpycch @ 0x1C025E274 (strncpycch.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxInterSendMsgEx(__int64 a1, unsigned int a2, ...)
{
  __int64 CurrentProcessWin32Process; // r15
  size_t v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned __int16 *v10; // r12
  unsigned __int64 v11; // r13
  int v12; // ebx
  unsigned __int8 v13; // al
  __int16 v14; // ax
  _QWORD *v15; // r10
  size_t v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned int v19; // r15d
  __int64 v20; // r8
  unsigned __int64 v21; // r13
  __int64 v22; // rax
  void *v23; // rdx
  void *v24; // r10
  int v25; // edx
  size_t v26; // r8
  _OWORD *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // r13
  const void *v32; // rdx
  size_t v33; // r8
  unsigned __int16 *v34; // r13
  __int64 v35; // rbx
  void *v36; // rbx
  size_t v37; // r8
  _QWORD *v38; // r13
  _QWORD *v39; // rbx
  unsigned __int64 v40; // rcx
  int v41; // ebx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rbx
  _QWORD *v51; // r12
  _QWORD *v52; // rax
  _QWORD *v53; // rcx
  unsigned int v54; // eax
  size_t v55; // r15
  int v56; // r12d
  unsigned __int8 v57; // cf
  int v58; // r13d
  int v59; // r12d
  unsigned int v60; // ebx
  _QWORD *v61; // r9
  _QWORD *v62; // rdx
  __int64 v63; // r13
  char v64; // r15
  int v65; // edx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rsi
  __int64 v69; // rbx
  int v70; // eax
  int v71; // ecx
  _QWORD *v72; // rbx
  _WORD *v73; // rdx
  unsigned int v74; // eax
  __int16 v75; // cx
  int v76; // eax
  int v77; // eax
  int v78; // edx
  __int64 v79; // rcx
  _QWORD *v80; // rax
  void *v81; // rcx
  int v82; // ecx
  int v83; // ecx
  __int64 v84; // rcx
  int v85; // edx
  int v86; // r8d
  int v87; // eax
  _QWORD *v88; // rax
  __int64 v89; // rdx
  _QWORD *v90; // rcx
  int v91; // eax
  __int128 *v92; // rax
  __int128 v93; // xmm0
  __int64 v94; // rcx
  __int64 v95; // rdx
  _QWORD *v96; // rbx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v101; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v103; // zf
  __int64 v104; // rax
  __int64 v105; // rcx
  int v106; // eax
  unsigned int Size; // [rsp+44h] [rbp-124h]
  size_t Size_4; // [rsp+48h] [rbp-120h]
  _OWORD *Src; // [rsp+50h] [rbp-118h]
  int Srca; // [rsp+50h] [rbp-118h]
  int v111; // [rsp+58h] [rbp-110h]
  void *v112[2]; // [rsp+60h] [rbp-108h] BYREF
  __int64 v113; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v114; // [rsp+78h] [rbp-F0h]
  unsigned __int16 *v115; // [rsp+80h] [rbp-E8h]
  void *v116; // [rsp+88h] [rbp-E0h]
  unsigned __int64 HighLimit; // [rsp+90h] [rbp-D8h] BYREF
  unsigned __int64 LowLimit; // [rsp+98h] [rbp-D0h] BYREF
  _OWORD *v119; // [rsp+A0h] [rbp-C8h]
  __int64 v120; // [rsp+A8h] [rbp-C0h]
  _QWORD *v121; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v122; // [rsp+B8h] [rbp-B0h]
  __int64 v123; // [rsp+C0h] [rbp-A8h]
  __int64 v124; // [rsp+C8h] [rbp-A0h]
  void *v125; // [rsp+D0h] [rbp-98h]
  _WORD *v126; // [rsp+D8h] [rbp-90h]
  size_t v127; // [rsp+E0h] [rbp-88h]
  __int128 v128; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v129; // [rsp+F8h] [rbp-70h]
  _QWORD v130[4]; // [rsp+100h] [rbp-68h] BYREF
  _BYTE v131[72]; // [rsp+120h] [rbp-48h] BYREF
  unsigned __int64 v133; // [rsp+180h] [rbp+18h] BYREF
  va_list va; // [rsp+180h] [rbp+18h]
  __int64 v135; // [rsp+188h] [rbp+20h] BYREF
  va_list va1; // [rsp+188h] [rbp+20h]
  __int64 v137; // [rsp+190h] [rbp+28h]
  _QWORD *v138; // [rsp+198h] [rbp+30h]
  __int64 v139; // [rsp+1A0h] [rbp+38h]
  __int64 v140; // [rsp+1A8h] [rbp+40h]
  __int64 v141; // [rsp+1B0h] [rbp+48h]
  va_list va2; // [rsp+1B8h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v133 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v135 = va_arg(va2, _QWORD);
  v137 = va_arg(va2, _QWORD);
  v138 = va_arg(va2, _QWORD *);
  v139 = va_arg(va2, _QWORD);
  v140 = va_arg(va2, _QWORD);
  v141 = va_arg(va2, _QWORD);
  v122 = 0LL;
  v119 = 0LL;
  v115 = 0LL;
  *(_OWORD *)v112 = 0LL;
  v116 = 0LL;
  v111 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = gptiCurrent;
  v120 = gptiCurrent;
  if ( !(_DWORD)v137 )
    v5 = 0LL;
  Size_4 = v5;
  v127 = v5;
  _InterlockedIncrement(&glInterSendMessage);
  if ( v5 && (*(_DWORD *)(v5 + 488) & 1) != 0 )
    return 0LL;
  HighLimit = 0LL;
  LowLimit = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
    return 0LL;
  if ( !a1
    || (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL), v8 == CurrentProcessWin32Process)
    || a2 >= 0xE && a2 < 0x4E )
  {
LABEL_10:
    if ( (_DWORD)v140 )
      goto LABEL_195;
    v9 = 0LL;
    if ( a1 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
    }
    else if ( v138 )
    {
      v9 = v138[53];
    }
    if ( v9 == CurrentProcessWin32Process )
    {
LABEL_195:
      v10 = (unsigned __int16 *)v135;
    }
    else
    {
      if ( a2 == 717 )
        return 0LL;
      v10 = (unsigned __int16 *)v135;
      v11 = v133;
      v12 = IsMessageAllowedAcrossILByReceiver(
              (struct tagPROCESSINFO *)CurrentProcessWin32Process,
              (void *const **)v9,
              (struct tagWND *)a1,
              a2,
              v133,
              v135,
              1);
      if ( !v12 )
      {
        v12 = IsMessageAlwaysAllowedAcrossIL(a2);
        if ( v12 )
          MSGSQMAddMessage(
            (struct tagPROCESSINFO *)CurrentProcessWin32Process,
            (struct tagPROCESSINFO *)v9,
            a2,
            v11,
            (unsigned __int64)v10,
            1,
            2);
      }
      if ( !v12 )
      {
        if ( a2 != 274 || ((v11 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || v11 == 61792 )
        {
          if ( *(_QWORD *)v9 == gpepCSRSS )
            v113 = 0x2000LL;
          else
            v113 = *(_QWORD *)(v9 + 880);
          v13 = CheckAccess(CurrentProcessWin32Process + 880, &v113);
          v12 = v13;
          if ( v13 )
          {
            if ( (unsigned __int8)Enforced() )
              v14 = 5;
            else
              v14 = 1;
            MSGSQMAddMessage(
              (struct tagPROCESSINFO *)CurrentProcessWin32Process,
              (struct tagPROCESSINFO *)v9,
              a2,
              v133,
              (unsigned __int64)v10,
              1,
              v14);
          }
        }
        else
        {
          v12 = 1;
          MSGSQMAddMessage(
            (struct tagPROCESSINFO *)CurrentProcessWin32Process,
            (struct tagPROCESSINFO *)v9,
            0x112u,
            v11,
            (unsigned __int64)v10,
            1,
            2);
        }
      }
      if ( !v12 )
      {
        if ( a1
          && a2 == 793
          && (v6 = *(_QWORD *)(a1 + 16), *(_QWORD *)(v6 + 1392) == a1)
          && *(_QWORD *)(v6 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
        {
          v12 = 1;
        }
        else
        {
          EtwTraceUIPIMsgError(CurrentProcessWin32Process, v9, a2, v133, v10);
          UserSetLastError(5LL);
          MSGSQMAddMessage(
            (struct tagPROCESSINFO *)CurrentProcessWin32Process,
            (struct tagPROCESSINFO *)v9,
            a2,
            v133,
            (unsigned __int64)v10,
            1,
            0);
        }
        if ( !v12 )
          return 0LL;
      }
    }
    if ( a2 == 576 )
    {
      LOBYTE(v6) = 20;
      if ( !HMValidateHandle(v10, v6) )
        return 0LL;
    }
    else if ( a2 == 281 )
    {
      LOBYTE(v6) = 21;
      if ( !HMValidateHandle(v10, v6) )
        return 0LL;
    }
    v15 = v138;
    if ( (v138[154] & 0x20) == 0 )
    {
      v16 = Size_4;
      goto LABEL_31;
    }
    v84 = v139;
    if ( v139 )
    {
      if ( (*(_DWORD *)(v139 + 32) & 0x40) != 0 )
        goto LABEL_309;
      if ( *(_DWORD *)v139 == 2 && *(_DWORD *)(v139 + 36) )
        return 0LL;
    }
    v16 = Size_4;
    if ( !Size_4 )
    {
LABEL_280:
      if ( !v84 )
      {
        if ( !(unsigned int)ProcessSuspendedSendMessage(v15, a1, a2, v133, v10) )
          return 0LL;
        v15 = v138;
      }
      if ( !v16 && *((_DWORD *)v15 + 134) > 0x2710u )
        return 0LL;
LABEL_31:
      v17 = Win32AllocateFromPagedLookasideList(SMSLookaside);
      v18 = v17;
      v124 = v17;
      v123 = v17;
      if ( !v17 )
        return 0LL;
      *(_QWORD *)(v17 + 120) = 0LL;
      Size = 0;
      v19 = 0;
      Src = v10;
      v20 = v120;
      *(_DWORD *)(v17 + 128) = *(_DWORD *)(v120 + 1412);
      if ( v139 && *(_DWORD *)v139 == 33 )
      {
LABEL_132:
        *(_QWORD *)(v18 + 112) = 0LL;
        v38 = (_QWORD *)(v18 + 16);
        *(_QWORD *)(v18 + 16) = 0LL;
        v130[0] = v18 + 112;
        v130[1] = a1;
        HMAssignmentLock(v130);
        *(_DWORD *)(v18 + 104) = a2;
        *(_QWORD *)(v18 + 88) = v133;
        *(_QWORD *)(v18 + 96) = v10;
        *(_DWORD *)(v18 + 84) = 0;
        *(_QWORD *)(v18 + 72) = 0LL;
        if ( a2 == 576 || a2 == 281 )
        {
          v98 = _HMObjectFromHandle(v10);
          v39 = v138;
          if ( v98 )
            HMChangeOwnerThread(v98, v138);
        }
        else
        {
          v39 = v138;
        }
        if ( *(_QWORD *)(gsmsList + 8LL) == gsmsList )
        {
          *(_QWORD *)v18 = gsmsList;
          *(_QWORD *)(v18 + 8) = gsmsList;
          *(_QWORD *)(gsmsList + 8LL) = v18;
          gsmsList = v18;
          v40 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(v18 + 80) = v40;
          *(_QWORD *)(v18 + 40) = v39;
          *(_QWORD *)(v18 + 32) = Size_4;
          v41 = 18;
          CurrentThread = KeGetCurrentThread();
          v43 = 0LL;
          if ( !(unsigned __int8)KeIsAttachedProcess(v40)
            || (CurrentProcess = PsGetCurrentProcess(v45, v44, v46),
                ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v101),
                v103 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
                v41 = 18,
                v103) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v43 = *ThreadWin32Thread;
          }
          if ( v43 )
          {
            if ( *(_QWORD *)(v43 + 360) )
              CaptureAndValidateUserModeDpiAwarenessContext(v43);
            if ( *(_DWORD *)(v43 + 340) )
            {
              v41 = *(_DWORD *)(v43 + 340);
            }
            else
            {
              v49 = PsGetCurrentProcessWin32Process(v48);
              if ( v49 )
                v41 = *(_DWORD *)(v49 + 280);
            }
            if ( (*(_DWORD *)(v43 + 328) & 4) != 0 && (v41 & 0xF) == 2 && (v41 & 0xF0) == 0x20 )
              v41 |= 0x20000000u;
          }
          *(_DWORD *)(v18 + 132) = v41;
          *(_QWORD *)(v18 + 64) = 0LL;
          v50 = v139;
          if ( v139 && (*(_DWORD *)v139 & 1) != 0 )
          {
            if ( (*(_DWORD *)v139 & 0x100) != 0 )
              v82 = 1024;
            else
              v82 = 2048;
            v83 = *(_DWORD *)(v18 + 84) | v82;
            *(_DWORD *)(v18 + 84) = v83;
            *(_QWORD *)(v18 + 48) = *(_QWORD *)(v50 + 8);
            *(_QWORD *)(v18 + 56) = *(_QWORD *)(v50 + 16);
            if ( (*(_DWORD *)v50 & 0x20) != 0 )
            {
              *(_DWORD *)(v18 + 84) = v83 | 0x200;
              *(_QWORD *)(v18 + 72) = *(_QWORD *)(v50 + 24);
            }
            else
            {
              *(_DWORD *)(v18 + 84) = v83 | 0x100;
              *(_QWORD *)(v18 + 64) = v120;
            }
          }
          if ( (_DWORD)v141 )
            *(_DWORD *)(v18 + 84) |= 0x10000u;
          v51 = v138;
          v52 = v138 + 65;
          v53 = (_QWORD *)v138[66];
          if ( (_QWORD *)*v53 == v138 + 65 )
          {
            *v38 = v52;
            *(_QWORD *)(v18 + 24) = v53;
            *v53 = v38;
            v52[1] = v38;
            v54 = *((_DWORD *)v51 + 134) + 1;
            *((_DWORD *)v51 + 134) = v54;
            if ( v54 > LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink) )
              LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink) = v54;
            v55 = Size_4;
            if ( Size_4 )
            {
              v122 = *(_QWORD *)(Size_4 + 504);
              *(_QWORD *)(Size_4 + 504) = v18;
            }
            else
            {
              *(_DWORD *)(v18 + 84) |= 8u;
            }
            if ( (*(_DWORD *)(v18 + 84) & 0x200) == 0 )
            {
              if ( a2 - 577 <= 0x16 && (v56 = 8122367, v57 = _bittest(&v56, a2 - 577), v51 = v138, v57)
                || a2 == 528 && (_WORD)v133 == 582 )
              {
                CTouchProcessor::ReferenceMsgDataExternal(gpTouchProcessor, v135, 6LL, v18);
              }
            }
            EtwTraceBeginSendMessage(v18, Size_4, v50);
            if ( !Size_4 )
            {
              SetWakeBit((__int64)v51, 0x40u);
              EtwTraceEndSendMessage(v18);
              return 1LL;
            }
            v58 = 0;
            v59 = 0;
            v60 = 512;
            Srca = 0;
            v61 = v138;
            if ( (v138[61] & 1) == 0 )
            {
              *(_WORD *)(v138[56] + 6LL) |= 0x40u;
              *(_WORD *)(v61[56] + 4LL) |= 0x40u;
              if ( (*(_BYTE *)(v61[56] + 10LL) & 0x40) != 0 )
                KeSetEvent((PRKEVENT)v61[92], 2, 0);
            }
            if ( v139 )
            {
              v59 = *(_DWORD *)(v139 + 36);
              v60 = ((*(_DWORD *)(v139 + 32) & 1) << 15) + 512;
            }
            CKernelStackSwapAuto::CKernelStackSwapAuto((CKernelStackSwapAuto *)v131);
            v62 = v138;
            if ( *(_QWORD *)(Size_4 + 432) == v138[54] )
            {
              v91 = *(_DWORD *)(Size_4 + 488);
              if ( (v91 & 0x10000) == 0 )
              {
                *(_DWORD *)(Size_4 + 488) = v91 | 0x10000;
                Srca = 1;
              }
            }
            if ( (*(_DWORD *)(v18 + 84) & 1) == 0 )
            {
              while ( 1 )
              {
                if ( v58 )
                {
LABEL_172:
                  v55 = Size_4;
                  break;
                }
                v63 = 0LL;
                v128 = 0LL;
                v129 = 0LL;
                v64 = 0;
                *(_WORD *)(*(_QWORD *)(Size_4 + 448) + 4LL) &= ~0x200u;
                if ( a2 == 788 )
                {
                  if ( v135 )
                  {
                    if ( *((_DWORD *)v62 + 158) <= 0x501u )
                    {
                      if ( *((_DWORD *)v62 + 162) )
                      {
                        v63 = *(_QWORD *)v135;
                        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v135 + 48LL) - 13) <= 1 )
                        {
                          v104 = W32GetThreadWin32Thread(KeGetCurrentThread());
                          *(_QWORD *)&v128 = *(_QWORD *)(v104 + 416);
                          *(_QWORD *)(v104 + 416) = &v128;
                          *((_QWORD *)&v128 + 1) = v63;
                          HMLockObject(v63);
                          v64 = 1;
                        }
                      }
                    }
                  }
                }
                v65 = xxxRealSleepThread(v60, v59, 0, 0LL, 0LL) == 0;
                LODWORD(v137) = v65;
                if ( v64 )
                {
                  v105 = (v65 << 7) | *(_DWORD *)(v63 + 88) & 0xFFFFFF7F;
                  *(_DWORD *)(v63 + 88) = v105;
                  if ( v65 )
                  {
                    v106 = v105 ^ ((unsigned __int8)v105 ^ (unsigned __int8)(v105 + 1)) & 0x7F;
                    *(_DWORD *)(v63 + 88) = v106;
                    if ( (v106 & 0x7Fu) > 0xA )
                      *(_DWORD *)(v63 + 64) |= 0x10u;
                  }
                  ThreadUnlock1(v105);
                }
                v58 = v137;
                if ( (_DWORD)v137 && v139 )
                {
                  v85 = *(_DWORD *)(v139 + 32);
                  v86 = *(_DWORD *)(v18 + 84);
                  if ( ((v86 & 0x20) != 0 || (v85 & 0x10) != 0) && (v86 & 0x10) != 0 )
                  {
                    v59 = 0;
                    v58 = 0;
                  }
                  if ( (v85 & 8) != 0 && !(unsigned int)IsThreadHung(v138, 0) )
                  {
                    v58 = 0;
LABEL_255:
                    EtwTraceConvertTimeOutToBlocking();
                    goto LABEL_171;
                  }
                  if ( !v58 )
                    goto LABEL_255;
                }
LABEL_171:
                v62 = v138;
                if ( (*(_DWORD *)(v18 + 84) & 1) != 0 )
                  goto LABEL_172;
              }
            }
            LODWORD(v137) = v58;
            CKernelStackSwapAuto::~CKernelStackSwapAuto((CKernelStackSwapAuto *)v131);
            if ( Srca )
            {
              *(_DWORD *)(v55 + 488) &= ~0x10000u;
              MergeDeferredMessagesOfThreadOnQueue(v55);
            }
            if ( (*(_DWORD *)(v55 + 488) & 1) == 0 )
            {
              *(_WORD *)(*(_QWORD *)(v55 + 448) + 6LL) |= 0x200u;
              *(_WORD *)(*(_QWORD *)(v55 + 448) + 4LL) |= 0x200u;
              if ( (*(_WORD *)(*(_QWORD *)(v55 + 448) + 10LL) & 0x200) != 0 )
                KeSetEvent(*(PRKEVENT *)(v55 + 736), 2, 0);
            }
            if ( !v58 )
            {
              if ( Size )
              {
                v72 = v116;
                v121 = v116;
                if ( a2 == 131 )
                {
                  if ( (_DWORD)v141 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
                  {
                    TransformMessageBetweenCoordinateSpaces(131, 1, (unsigned int)va, (unsigned int)&v121, 0LL, a1);
                    v72 = v121;
                  }
                  v92 = *(__int128 **)(v18 + 120);
                  v93 = *v92;
                  if ( v133 )
                  {
                    v94 = v72[6];
                    *(_OWORD *)v72 = v93;
                    *((_OWORD *)v72 + 1) = v92[1];
                    *((_OWORD *)v72 + 2) = v92[2];
                    v72[6] = v94;
                    v95 = *((_QWORD *)v92 + 6);
                    if ( v95 )
                    {
                      *(_OWORD *)v94 = *(_OWORD *)v95;
                      *(_OWORD *)(v94 + 16) = *(_OWORD *)(v95 + 16);
                      *(_QWORD *)(v94 + 32) = *(_QWORD *)(v95 + 32);
                    }
                  }
                  else
                  {
                    *(_OWORD *)v72 = v93;
                  }
                }
                else
                {
                  v73 = *(_WORD **)(v18 + 120);
                  if ( v111 )
                  {
                    if ( v111 == 1 )
                    {
                      strncpycch(v116, v73, Size);
                    }
                    else
                    {
                      v74 = Size >> 1;
                      v114 = Size >> 1;
                      v126 = v73;
                      v125 = v116;
                      while ( v74 )
                      {
                        v75 = *v73;
                        *(_WORD *)v72 = *v73;
                        v72 = (_QWORD *)((char *)v72 + 2);
                        v125 = v72;
                        v126 = ++v73;
                        if ( !v75 )
                          break;
                        v114 = --v74;
                      }
                    }
                  }
                  else
                  {
                    memmove(v116, v73, Size);
                  }
                }
              }
              else if ( a2 == 831 && (_DWORD)v141 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
              {
                TransformMessageBetweenCoordinateSpaces(831, 1, (unsigned int)va, (unsigned int)va1, 0LL, a1);
              }
            }
            EtwTraceEndSendMessage(v18);
            *(_QWORD *)(v55 + 504) = v122;
            v68 = v139;
            if ( v139 )
            {
              **(_QWORD **)(v139 + 40) = *(_QWORD *)(v123 + 72);
              v69 = 0LL;
              if ( (*(_DWORD *)(v18 + 84) & 0x8000) != 0 && (*(_BYTE *)(v68 + 32) & 0x20) != 0 )
                UserSetLastError(1400LL);
              else
                LOBYTE(v69) = v58 == 0;
            }
            else
            {
              v69 = *(_QWORD *)(v123 + 72);
            }
            if ( v68 || v58 )
            {
              v70 = *(_DWORD *)(v18 + 84);
              if ( (v70 & 1) == 0 )
              {
                v87 = v70 | 1;
                *(_DWORD *)(v18 + 84) = v87;
                if ( (v87 & 0x4000) != 0 )
                {
                  *(_DWORD *)(v18 + 84) = v87 | 8;
                }
                else
                {
                  --*((_DWORD *)v138 + 134);
                  v88 = (_QWORD *)(v18 + 16);
                  v89 = *(_QWORD *)(v18 + 16);
                  v90 = *(_QWORD **)(v18 + 24);
                  if ( *(_QWORD *)(v89 + 8) != v18 + 16 || (_QWORD *)*v90 != v88 )
                    goto LABEL_337;
                  *v90 = v89;
                  *(_QWORD *)(v89 + 8) = v90;
                  *v88 = 0LL;
                  *(_DWORD *)(v18 + 84) |= 0x10u;
                }
              }
            }
            v71 = *(_DWORD *)(v18 + 84);
            if ( (v71 & 0x4010) != 0x10 )
            {
              v71 |= 8u;
              *(_DWORD *)(v18 + 84) = v71;
            }
            if ( (v71 & 0x8008) == 8 )
              return v69;
            v76 = *(_DWORD *)(v18 + 104);
            if ( v76 == 576 )
            {
              FreeTouchInputInfo(*(_QWORD *)(v18 + 96), 0LL);
            }
            else if ( v76 == 281 )
            {
              FreeGestureInfo(*(_QWORD *)(v18 + 96), 0LL, v66, v67);
            }
            if ( (*(_DWORD *)(v18 + 84) & 0x200) == 0 )
            {
              if ( (v77 = *(_DWORD *)(v18 + 104), (unsigned int)(v77 - 577) <= 0x16)
                && (v78 = 8122367, _bittest(&v78, v77 - 577))
                || v77 == 528 && *(_WORD *)(v18 + 88) == 582 )
              {
                CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *(_QWORD *)(v18 + 96), 6LL, v18);
              }
            }
            v79 = *(_QWORD *)v18;
            v80 = *(_QWORD **)(v18 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) == v18 && *v80 == v18 )
            {
              *v80 = v79;
              *(_QWORD *)(v79 + 8) = v80;
              HMAssignmentUnlock(v18 + 112);
              v81 = *(void **)(v18 + 120);
              if ( v81 )
                Win32FreePool(v81);
              Win32FreeToPagedLookasideList(SMSLookaside, v18);
              return v69;
            }
          }
        }
LABEL_337:
        __fastfail(3u);
      }
      if ( a2 >= 0x39 && a2 < 0x46 )
        goto LABEL_36;
      if ( a2 != 13 )
      {
        if ( a2 <= 0x143 )
        {
          if ( a2 == 323 )
          {
LABEL_106:
            if ( *(_DWORD *)(v20 + 1412) != 1 )
            {
LABEL_82:
              *(_OWORD *)v112 = *(_OWORD *)v10;
              if ( _mm_srli_si128(*(__m128i *)v112, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v16 )
              {
                v19 = LODWORD(v112[0]) + 18;
                if ( (unsigned int)(LODWORD(v112[0]) + 18) < LODWORD(v112[0]) )
                {
LABEL_84:
                  Win32FreeToPagedLookasideList(SMSLookaside, v17);
                  return 8LL;
                }
              }
            }
          }
          else
          {
            switch ( a2 )
            {
              case 1u:
              case 0x81u:
                UserSetLastError(5LL);
                Win32FreeToPagedLookasideList(SMSLookaside, v18);
                return 0LL;
              case 0xCu:
              case 0x1Au:
              case 0xC2u:
                if ( v10 )
                  goto LABEL_82;
                goto LABEL_36;
              case 0x1Bu:
                goto LABEL_82;
              case 0x38u:
                v19 = *v10;
                goto LABEL_36;
              case 0x46u:
              case 0x47u:
                v19 = 40;
                Size = 40;
                goto LABEL_36;
              case 0x49u:
                v21 = v133;
                v19 = v133;
                goto LABEL_37;
              case 0x4Au:
                v119 = v10;
                if ( !*((_QWORD *)v10 + 2) )
                {
                  v19 = 24;
                  v21 = v133;
                  goto LABEL_38;
                }
                v19 = *((_DWORD *)v10 + 2) + 24;
                if ( v19 < 0x18 )
                {
                  Win32FreeToPagedLookasideList(SMSLookaside, v17);
                  return 0LL;
                }
                break;
              case 0x53u:
                v19 = *(_DWORD *)v10;
                goto LABEL_36;
              case 0x83u:
                v21 = v133;
                if ( v133 )
                  v19 = 96;
                else
                  v19 = 16;
                Size = v19;
                goto LABEL_37;
              case 0xC4u:
                goto LABEL_42;
              case 0xCBu:
                goto LABEL_111;
              default:
                goto LABEL_36;
            }
          }
          goto LABEL_36;
        }
        if ( a2 <= 0x283 )
        {
          if ( a2 == 643 )
          {
            v21 = v133;
            if ( v133 == 24 )
              v19 = (*(_DWORD *)v10 << 9) + 4;
          }
          else
          {
            switch ( a2 )
            {
              case 0x145u:
              case 0x18Du:
              case 0x196u:
                goto LABEL_82;
              case 0x148u:
              case 0x189u:
                goto LABEL_42;
              case 0x14Au:
              case 0x14Cu:
              case 0x14Du:
              case 0x158u:
                goto LABEL_106;
              case 0x180u:
              case 0x181u:
              case 0x18Cu:
              case 0x18Fu:
              case 0x1A2u:
                if ( *(_DWORD *)(v20 + 1412) == 1 )
                  goto LABEL_36;
                goto LABEL_82;
              case 0x191u:
              case 0x192u:
LABEL_111:
                v21 = v133;
                v19 = 4 * v133;
                break;
              case 0x218u:
                v21 = v133;
                if ( !v10 || (v133 & 0x8000) == 0 || v10 >= MmSystemRangeStart && v16 )
                  break;
                v19 = *((_DWORD *)v10 + 4) + 20;
                if ( *((_DWORD *)v10 + 4) < 0xFFFFFFEC )
                  break;
                goto LABEL_84;
              case 0x219u:
                if ( !v10 )
                  goto LABEL_36;
                v21 = v133;
                if ( (v133 & 0x8000) != 0 && (v10 < MmSystemRangeStart || !v16) )
                  v19 = *(_DWORD *)v10;
                break;
              case 0x220u:
                v115 = v10;
                v19 = (*((_DWORD *)v10 + 15) & 0x7FFFFFFF) + (*((_DWORD *)v10 + 19) & 0x7FFFFFFF);
                goto LABEL_36;
              default:
                goto LABEL_36;
            }
          }
LABEL_37:
          if ( !v19 )
            goto LABEL_126;
          goto LABEL_38;
        }
        if ( a2 != 780 )
        {
          switch ( a2 )
          {
            case 0x32Cu:
              v19 = 328;
              v21 = v133;
LABEL_38:
              v22 = Win32AllocPoolWithQuota(v19, 1668510549LL);
              *(_QWORD *)(v18 + 120) = v22;
              if ( v22 )
              {
                v116 = v10;
                v23 = (void *)v22;
                if ( a2 != 13 )
                {
                  if ( a2 <= 0x83 )
                  {
                    if ( a2 == 131 )
                    {
                      if ( v21 )
                      {
                        *(_OWORD *)v22 = *Src;
                        *(_OWORD *)(v22 + 16) = Src[1];
                        *(_OWORD *)(v22 + 32) = Src[2];
                        *(_QWORD *)(v22 + 48) = *((_QWORD *)Src + 6);
                        v29 = *(_QWORD *)(v18 + 120) + 56LL;
                        *(_QWORD *)(v22 + 48) = v29;
                        v30 = *((_QWORD *)Src + 6);
                        *(_OWORD *)v29 = *(_OWORD *)v30;
                        *(_OWORD *)(v29 + 16) = *(_OWORD *)(v30 + 16);
                        *(_QWORD *)(v29 + 32) = *(_QWORD *)(v30 + 32);
                      }
                      else
                      {
                        memmove((void *)v22, Src, v19);
                      }
                      v10 = *(unsigned __int16 **)(v18 + 120);
                      v135 = (__int64)v10;
                    }
                    else
                    {
                      v24 = (void *)v22;
                      switch ( a2 )
                      {
                        case 0xCu:
                        case 0x1Au:
                        case 0x1Bu:
                          goto LABEL_80;
                        case 0x46u:
                        case 0x47u:
                          goto LABEL_67;
                        case 0x4Au:
                          v10 = (unsigned __int16 *)v22;
                          v135 = v22;
                          v28 = v119;
                          *(_OWORD *)v22 = *v119;
                          *(_QWORD *)(v22 + 16) = *((_QWORD *)v28 + 2);
                          if ( *((_QWORD *)v28 + 2) )
                          {
                            *(_QWORD *)(v22 + 16) = v22 + 24;
                            memmove((void *)(v22 + 24), *((const void **)v28 + 2), *((unsigned int *)v28 + 2));
                          }
                          break;
                        default:
                          goto LABEL_71;
                      }
                    }
                    goto LABEL_126;
                  }
                  if ( a2 <= 0x220 )
                  {
                    if ( a2 == 544 )
                    {
                      v31 = v115;
                      v32 = (const void *)*((_QWORD *)v115 + 10);
                      if ( v32 )
                      {
                        v33 = *((unsigned int *)v115 + 19);
                        LODWORD(v33) = v33 & 0x7FFFFFFF;
                        memmove((void *)v22, v32, v33);
                        *v31 = *(_QWORD *)(v18 + 120);
                      }
                      v34 = v115;
                      if ( *((_DWORD *)v115 + 14) )
                      {
                        v35 = *((unsigned int *)v115 + 19);
                        LODWORD(v35) = v35 & 0x7FFFFFFF;
                        v36 = (void *)(*(_QWORD *)(v18 + 120) + v35);
                        v37 = *((unsigned int *)v115 + 15);
                        LODWORD(v37) = v37 & 0x7FFFFFFF;
                        memmove(v36, *((const void **)v115 + 8), v37);
                        *((_QWORD *)v34 + 1) = v36;
                      }
                    }
                    else
                    {
                      v24 = (void *)v22;
                      switch ( a2 )
                      {
                        case 0xC2u:
                        case 0x143u:
                        case 0x145u:
                        case 0x14Au:
                        case 0x14Cu:
                        case 0x14Du:
                        case 0x158u:
                        case 0x180u:
                        case 0x181u:
                        case 0x18Cu:
                        case 0x18Du:
                        case 0x18Fu:
                        case 0x196u:
                        case 0x1A2u:
LABEL_80:
                          v10 = (unsigned __int16 *)v22;
                          v135 = v22;
                          v25 = HIDWORD(v112[0]) ^ (HIDWORD(v112[0]) ^ *(_DWORD *)(v22 + 4)) & 0x7FFFFFFF;
                          *(_DWORD *)(v22 + 4) = v25;
                          *(_DWORD *)v22 = v112[0];
                          *(_QWORD *)(v22 + 8) = v22 + 16;
                          v26 = v25 ^ (v25 ^ (v19 - 16)) & 0x7FFFFFFF;
                          *(_DWORD *)(v22 + 4) = v26;
                          LODWORD(v26) = v26 & 0x7FFFFFFF;
                          memmove((void *)(v22 + 16), v112[1], v26);
                          break;
                        case 0xC4u:
                          *(_WORD *)v22 = *(_WORD *)v112[1];
                          v23 = *(void **)(v18 + 120);
                          goto LABEL_40;
                        case 0x148u:
                        case 0x189u:
                          goto LABEL_40;
                        case 0x191u:
                          Size = v19;
LABEL_67:
                          memmove((void *)v22, Src, v19);
                          v10 = *(unsigned __int16 **)(v18 + 120);
                          v135 = (__int64)v10;
                          break;
                        default:
                          goto LABEL_71;
                      }
                    }
                    goto LABEL_126;
                  }
                  v24 = (void *)v22;
                  if ( a2 != 780 )
                  {
                    if ( a2 == 812 )
                    {
                      MakeUpKeyboardCorrectionCalloutContents(v10, v21, v22);
                      v133 = 0LL;
                      v10 = *(unsigned __int16 **)(v18 + 120);
                      v135 = (__int64)v10;
                    }
                    else
                    {
LABEL_71:
                      memmove(v24, Src, v19);
                      v10 = *(unsigned __int16 **)(v18 + 120);
                      v135 = (__int64)v10;
                    }
                    goto LABEL_126;
                  }
                }
LABEL_40:
                Size = v19;
                v116 = v112[1];
                v112[1] = v23;
              }
LABEL_126:
              if ( v19 && !*(_QWORD *)(v18 + 120) )
              {
                Win32FreeToPagedLookasideList(SMSLookaside, v18);
                return 0LL;
              }
              if ( (_DWORD)v141
                && a1
                && (unsigned int)IsWindowDesktopComposed(a1)
                && (a2 <= 0x240 || a2 >= 0x258 || a2 == 589) )
              {
                TransformMessageBetweenCoordinateSpaces(a2, 1, (unsigned int)va, (unsigned int)va1, a1, 0LL);
                v10 = (unsigned __int16 *)v135;
              }
              goto LABEL_132;
            case 0x341u:
              v19 = 64;
              Size = 64;
              break;
            case 0x342u:
              v19 = 56;
              break;
          }
          goto LABEL_36;
        }
      }
LABEL_42:
      *(_OWORD *)v112 = *(_OWORD *)v10;
      if ( SHIDWORD(v112[0]) < 0 )
        v111 = 1;
      else
        v111 = 2;
      v10 = (unsigned __int16 *)v112;
      v135 = (__int64)v112;
      if ( v112[1] < MmSystemRangeStart || !v16 )
        v19 = HIDWORD(v112[0]) & 0x7FFFFFFF;
LABEL_36:
      v21 = v133;
      goto LABEL_37;
    }
    v96 = (_QWORD *)v138[53];
    v97 = PsGetCurrentProcess(v139, v6, v7);
    if ( !PsGetProcessCommonJob(v97, *v96) )
      return 0LL;
    v84 = v139;
    v15 = v138;
LABEL_309:
    v16 = Size_4;
    if ( Size_4 )
      goto LABEL_31;
    goto LABEL_280;
  }
  if ( a2 > 0xD0 )
  {
    if ( a2 == 272 )
      goto LABEL_290;
    if ( a2 != 353 && a2 != 424 && a2 != 563 && a2 != 648 )
      goto LABEL_10;
  }
  else if ( a2 != 208 )
  {
    switch ( a2 )
    {
      case 0xCu:
      case 0xBCu:
        goto LABEL_219;
      case 0xDu:
      case 0xC4u:
      case 0xCCu:
        v6 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL) + 2LL);
        if ( *(_WORD *)(gpsi + 870LL) != (_WORD)v6 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 28LL) & 0x20) == 0 )
          goto LABEL_10;
        UserSetLastError(5LL);
        break;
      case 0x4Eu:
        goto LABEL_290;
      default:
        goto LABEL_10;
    }
    goto LABEL_290;
  }
LABEL_219:
  if ( (unsigned __int8)Enforced() && *(_QWORD *)v8 != gpepCSRSS
    || *(_DWORD *)(v8 + 780) == *(_DWORD *)(CurrentProcessWin32Process + 780)
    && *(_DWORD *)(v8 + 784) == *(_DWORD *)(CurrentProcessWin32Process + 784) )
  {
    goto LABEL_10;
  }
LABEL_290:
  UserSetLastError(5LL);
  return 0LL;
}
