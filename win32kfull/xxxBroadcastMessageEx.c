/*
 * XREFs of xxxBroadcastMessageEx @ 0x1C0045EF0
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0048220 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSendMessageCallback @ 0x1C004C51C (xxxSendMessageCallback.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetInformationThread @ 0x1C0093B70 (xxxSetInformationThread.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C009FB24 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00F7740 (xxxBroadcastDisplaySettingsChange.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01C9760 (EditionxxxBroadcastSPIChange.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     SetWakeBit @ 0x1C0038B60 (SetWakeBit.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1C0047DBC (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0048A50 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     xxxSendMessageCallback @ 0x1C004C51C (xxxSendMessageCallback.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C009FB24 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     vDLOrderDispositionCompare @ 0x1C00C5440 (vDLOrderDispositionCompare.c)
 *     vOLOrderCompare @ 0x1C00C5E30 (vOLOrderCompare.c)
 *     _PostTransformableMessageIL @ 0x1C00CB574 (_PostTransformableMessageIL.c)
 *     xxxSendNotifyMessage @ 0x1C00D8320 (xxxSendNotifyMessage.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C00D8430 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 *     ProcessSuspendedEventMessage @ 0x1C00E0344 (ProcessSuspendedEventMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00FAFB4 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ??$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z @ 0x1C01259E8 (--$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C012953C (GetPrimaryMonitorRectForWindow.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1?$ObjectLock@UtagObjLock@@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@@@QEAA@XZ @ 0x1C01B60D4 (--1-$ObjectLock@UtagObjLock@@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_QUEU.c)
 */

__int64 __fastcall xxxBroadcastMessageEx(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int128 *a4,
        unsigned int a5,
        union tagBROADCASTMSG *a6,
        int a7,
        unsigned int a8)
{
  unsigned int v8; // r12d
  __int128 *v9; // r15
  unsigned __int64 v10; // r14
  int v12; // r13d
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *i; // rdi
  tagDomLock *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // r14d
  char *v20; // rbx
  unsigned int v21; // r14d
  tagObjLock **p_Base; // rbx
  tagObjLock *v23; // rcx
  int v24; // eax
  struct tagQMSG *v25; // rax
  struct tagQMSG *v26; // rbx
  __int64 v27; // rdx
  tagDomLock *v28; // rcx
  __int64 v29; // r8
  int v30; // edi
  tagObjLock **v31; // rbx
  int v32; // edi
  char *v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 *v38; // r14
  bool v39; // zf
  char v40; // bl
  __int64 v41; // rdx
  __int16 v42; // r8
  __int64 v43; // r13
  _WORD *v44; // rcx
  unsigned __int16 v45; // ax
  __int64 v46; // rdi
  __int128 *v47; // rbx
  __int128 *v48; // r14
  unsigned int DLT; // eax
  unsigned int v50; // eax
  __int128 *v51; // rax
  __int128 v52; // xmm0
  __int64 v53; // xmm1_8
  __int128 v54; // xmm0
  __int64 v55; // xmm1_8
  unsigned int j; // ebx
  unsigned int k; // ebx
  __int64 v58; // r9
  __m128i *PrimaryMonitorRectForWindow; // rax
  __m128i v61; // xmm0
  unsigned __int64 v62; // r14
  char v63; // di
  char v64; // di
  char v65; // al
  int v66; // r8d
  int v67; // edx
  __int64 v68; // rax
  char v69; // al
  int v70; // r8d
  int v71; // edx
  __int64 v72; // rdx
  __int64 v73; // r8
  HANDLE ThreadProcessId; // rbx
  HANDLE ThreadId; // rax
  int v76; // [rsp+20h] [rbp-E0h]
  _QWORD *v78; // [rsp+78h] [rbp-88h]
  __int64 v80; // [rsp+88h] [rbp-78h]
  __int64 v81; // [rsp+90h] [rbp-70h]
  __int128 *v83; // [rsp+A8h] [rbp-58h]
  struct tagBWL *v84; // [rsp+B0h] [rbp-50h]
  __int128 v85; // [rsp+B8h] [rbp-48h] BYREF
  __int128 SystemInformation; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v87; // [rsp+D8h] [rbp-28h]
  __int128 v88; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v89; // [rsp+F0h] [rbp-10h]
  __int128 v90; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v91; // [rsp+108h] [rbp+8h]
  __int128 v92; // [rsp+110h] [rbp+10h]
  __int64 v93; // [rsp+120h] [rbp+20h]
  __int128 v94; // [rsp+128h] [rbp+28h]
  __int64 v95; // [rsp+138h] [rbp+38h]
  _BYTE v96[16]; // [rsp+140h] [rbp+40h] BYREF
  __int64 DomainLockRef; // [rsp+150h] [rbp+50h] BYREF
  char v98; // [rsp+158h] [rbp+58h] BYREF
  __int64 v99; // [rsp+160h] [rbp+60h]
  char v100; // [rsp+168h] [rbp+68h] BYREF
  __int64 v101; // [rsp+170h] [rbp+70h]
  char v102; // [rsp+178h] [rbp+78h]
  __int128 Base; // [rsp+180h] [rbp+80h] BYREF
  __int64 v104; // [rsp+190h] [rbp+90h]
  char v105; // [rsp+198h] [rbp+98h]

  v91 = 0LL;
  v8 = a2;
  v89 = 0LL;
  v9 = a4;
  v10 = a3;
  v90 = 0LL;
  v88 = 0LL;
  if ( a2 - 1024 <= 0xBBFF )
  {
    UserSetLastError(87);
    v80 = 1LL;
  }
  else
  {
    v80 = 0LL;
  }
  v12 = a7;
  if ( !a7 && (v8 == 21 || v8 == 26 || v8 == 29 || v8 == 295 || v8 == 794 || v8 - 804 <= 1) )
  {
    v12 = 1;
    a7 = 1;
  }
  if ( a1 )
  {
LABEL_8:
    v84 = BuildHwndList(*(ShellWindowManagement **)(a1 + 112), 2, 0LL, 1);
    if ( v84 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
      v81 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v81 = CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      for ( i = (_QWORD *)((char *)v84 + 32); ; ++i )
      {
        v34 = *i;
        v78 = i;
        if ( *i == 1LL )
        {
          FreeHwndList(v84);
          return 1LL;
        }
        v35 = 0LL;
        PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( (unsigned __int64)(unsigned __int16)v34 < *(_QWORD *)(gpsi + 8LL) )
        {
          v36 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v34;
          v38 = (__int64 *)HMPkheFromPhe(v36);
          LOWORD(v34) = WORD1(v34) & 0x7FFF;
          if ( ((WORD1(v34) & 0x7FFF) == *(_WORD *)(v36 + 26)
             || (_WORD)v34 == 0x7FFF
             || !(_WORD)v34 && PsGetCurrentProcessWow64Process(v37))
            && (*(_BYTE *)(v36 + 25) & 1) == 0 )
          {
            v39 = *(_BYTE *)(v36 + 24) == 1;
            i = v78;
            if ( v39 )
              v35 = *v38;
          }
          else
          {
            i = v78;
          }
          v10 = a3;
        }
        v40 = 0;
        if ( v35 )
        {
          v41 = *(_QWORD *)(v35 + 40);
          if ( (*(_WORD *)(v41 + 42) & 0x2FFF) != 0x29C )
          {
            v42 = **(_WORD **)(*(_QWORD *)(v35 + 136) + 8LL);
            if ( *(_WORD *)(gpsi + 908LL) != v42
              && gaOleMainThreadWndClass != v42
              && (!v80 || (*(_BYTE *)(v41 + 21) & 2) == 0)
              && (v8 - 784 > 1
               || (*(_BYTE *)(v41 + 31) & 0x10) != 0
               || (*(_DWORD *)(*(_QWORD *)(v35 + 16) + 488LL) & 0x800) != 0) )
            {
              if ( a8 == 1 )
              {
                if ( *(_DWORD *)(v41 + 236) == 1 )
                  goto LABEL_57;
              }
              else if ( a8 != 2 || *(_DWORD *)(v41 + 236) != 1 || (*(_BYTE *)(v41 + 232) & 0x40) != 0 )
              {
LABEL_57:
                ThreadLockAlways(v35, &v90);
                switch ( a5 )
                {
                  case 0u:
                    xxxSendTransformableMessageTimeout((struct tagWND *)v35, v8, 0, 0, 0LL, v12, 1);
                    break;
                  case 1u:
                    goto LABEL_59;
                  case 2u:
                    if ( !*(_QWORD *)(v35 + 120) )
                      PostTransformableMessageIL((struct tagWND *)v35, v8, v12);
                    break;
                  case 3u:
                    xxxSendMessageCallback(
                      (struct tagWND *)v35,
                      v8,
                      *(_QWORD *)a6,
                      *((_QWORD *)a6 + 1),
                      *((_DWORD *)a6 + 4),
                      v12,
                      1);
                    break;
                  case 4u:
LABEL_82:
                    if ( xxxSendTransformableMessageTimeout(
                           (struct tagWND *)v35,
                           v8,
                           *(_DWORD *)a6,
                           *((_DWORD *)a6 + 1),
                           *((_QWORD *)a6 + 1),
                           v12,
                           1)
                      || a5 != 6 )
                    {
                      break;
                    }
LABEL_59:
                    v43 = 0LL;
                    if ( v8 == 26 || v8 == 27 )
                    {
                      if ( v9 )
                      {
                        v44 = (_WORD *)*((_QWORD *)v9 + 1);
                        if ( *v44 )
                        {
                          v45 = UserAddAtomEx(v44, 0LL, 2LL);
                          v43 = v45;
                          if ( !v45 )
                            break;
                        }
                        else
                        {
                          v43 = -1LL;
                        }
                      }
                      v46 = *(_QWORD *)(v35 + 16);
                      v47 = (__int128 *)gObjDummyLock;
                      v48 = *(__int128 **)(v46 + 432);
                      v83 = v48;
                      if ( v46 )
                        v47 = (__int128 *)(v46 + 392);
                      DLT = DLT_THREADINFO::getDLT();
                      DomainLockRef = GetDomainLockRef(DLT);
                      v98 = 0;
                      v50 = DLT_QUEUE::getDLT();
                      v99 = GetDomainLockRef(v50);
                      v101 = gDomainDummyLock;
                      v100 = 0;
                      Base = 0LL;
                      v104 = 0LL;
                      v51 = v48;
                      v102 = 0;
                      v105 = 0;
                      v52 = *v47;
                      v53 = *((_QWORD *)v47 + 2);
                      if ( v47 == (__int128 *)gObjDummyLock )
                        v47 = 0LL;
                      v92 = v52;
                      if ( v48 == (__int128 *)gObjDummyLock )
                        v51 = 0LL;
                      v54 = *v48;
                      *((_QWORD *)&Base + 1) = v47;
                      v93 = v53;
                      v55 = *((_QWORD *)v48 + 2);
                      v94 = v54;
                      *(_QWORD *)&Base = v51;
                      v95 = v55;
                      qsort(&Base, 2uLL, 8uLL, vOLOrderCompare);
                      for ( j = 1; j < 2; ++j )
                      {
                        if ( !vOLOrderCompare((char *)&Base + 8 * (int)j, (char *)&Base + 8 * (int)(j - 1)) )
                          ClearCObjLock<tagObjLock *>((char *)&Base + 8 * (int)(j - 1));
                      }
                      qsort(&DomainLockRef, 2uLL, 0x10uLL, vDLOrderDispositionCompare);
                      v9 = a4;
                      for ( k = 1; k < 2; ++k )
                      {
                        if ( !vDLOrderDispositionCompare(&DomainLockRef + 2 * (int)k, &DomainLockRef + 2 * (int)(k - 1)) )
                          ClearCObjLock<tagObjLock *>(&DomainLockRef + 2 * (int)(k - 1));
                      }
                      v8 = a2;
                      if ( !v105 )
                      {
                        v19 = 0;
                        v20 = &v98;
                        do
                        {
                          v16 = (tagDomLock *)*((_QWORD *)v20 - 1);
                          if ( v16 )
                          {
                            if ( *v20 )
                              tagDomLock::LockExclusive(v16);
                            else
                              tagDomLock::LockShared(v16);
                          }
                          ++v19;
                          v20 += 16;
                        }
                        while ( v19 < 2 );
                        v21 = 0;
                        p_Base = (tagObjLock **)&Base;
                        do
                        {
                          v23 = *p_Base;
                          if ( *p_Base )
                            tagObjLock::LockExclusive(v23);
                          ++v21;
                          ++p_Base;
                        }
                        while ( v21 < 2 );
                        v105 = 1;
                      }
                      if ( v46 )
                      {
                        if ( (*(_DWORD *)(v46 + 488) & 1) != 0 )
                          goto LABEL_90;
                        v87 = 0LL;
                        v24 = *(_DWORD *)(v46 + 1272);
                        SystemInformation = 0LL;
                        if ( (v24 & 0x2000) != 0
                          && (v24 & 0x4000) == 0
                          && (PsGetCurrentProcess(v23, v17, v18) == gpepCSRSS
                           || (unsigned __int8)IsInputThread(gpepCSRSS, v72, v73)
                           || v46 == gptiManipulationThread) )
                        {
                          ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v46);
                          ThreadId = PsGetThreadId(*(PETHREAD *)v46);
                          *(_QWORD *)&SystemInformation = ThreadProcessId;
                          *((_QWORD *)&SystemInformation + 1) = ThreadId;
                          LODWORD(v87) = 13;
                          if ( ZwSetSystemInformation(
                                 SystemThreadPriorityClientIdInformation,
                                 &SystemInformation,
                                 0x18uLL) >= 0 )
                            *(_DWORD *)(v46 + 1272) |= 0x4000u;
                        }
                        if ( (*(_DWORD *)(v46 + 1272) & 0x20) != 0
                          && !(unsigned int)ProcessSuspendedEventMessage(v46, 9LL, v35, a2, a3, v43) )
                        {
                          goto LABEL_90;
                        }
                      }
                      v25 = (struct tagQMSG *)AllocQEntryEx((char *)v83 + 24, 0LL, 1LL);
                      v17 = 0LL;
                      v26 = v25;
                      if ( !v25 )
                      {
LABEL_90:
                        DomainShared<DLT_THREADINFO,DLT_QUEUE>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock>::~ObjectLock<tagObjLock,tagObjLock>(
                          &DomainLockRef,
                          v17);
                        if ( (unsigned __int64)(v43 + 1) > 1 )
                          UserDeleteAtom((unsigned __int16)v43, v27, v29, v58);
                      }
                      else
                      {
                        StoreQMessage(
                          v25,
                          (struct tagWND *)v35,
                          a2,
                          a3,
                          v43,
                          0,
                          0LL,
                          9u,
                          0LL,
                          0,
                          0LL,
                          *(_DWORD *)(*(_QWORD *)(v35 + 40) + 288LL),
                          0LL,
                          0LL);
                        *((_QWORD *)v26 + 13) = v46;
                        if ( v46 )
                        {
                          if ( (*(_DWORD *)(v46 + 488) & 1) == 0 )
                          {
                            _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v46 + 448) + 8LL), 0x2040u);
                            _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v46 + 448) + 4LL), 0x2040u);
                            if ( (*(_DWORD *)(*(_QWORD *)(v46 + 448) + 16LL) & 0x2040) != 0 )
                              KeSetEvent(*(PRKEVENT *)(v46 + 736), 2, 0);
                          }
                        }
                        else
                        {
                          SetWakeBit(*((_QWORD *)v83 + 12), 0x2040u);
                          SetWakeBit(*((_QWORD *)v83 + 13), 0x2040u);
                        }
                        if ( v105 )
                        {
                          v30 = 1;
                          v31 = (tagObjLock **)&Base + 1;
                          do
                          {
                            if ( *v31 )
                              tagObjLock::UnLockExclusive(*v31);
                            --v31;
                            --v30;
                          }
                          while ( v30 >= 0 );
                          v32 = 1;
                          v33 = &v100;
                          do
                          {
                            v28 = (tagDomLock *)*((_QWORD *)v33 - 1);
                            if ( v28 )
                            {
                              if ( *v33 )
                                tagDomLock::UnLockExclusive(v28);
                              else
                                tagDomLock::UnLockShared(v28);
                            }
                            v33 -= 16;
                            --v32;
                          }
                          while ( v32 >= 0 );
                        }
                      }
                      break;
                    }
                    if ( v8 != 126 )
                    {
                      v76 = a7;
                      goto LABEL_88;
                    }
                    PrimaryMonitorRectForWindow = (__m128i *)GetPrimaryMonitorRectForWindow(v96, v35);
                    v61 = _mm_srli_si128(*PrimaryMonitorRectForWindow, 8);
                    v62 = (unsigned __int16)(v61.m128i_i16[0] - PrimaryMonitorRectForWindow->m128i_i64[0]) | (unsigned __int64)(int)((v61.m128i_i32[1] << 16) - (HIDWORD(PrimaryMonitorRectForWindow->m128i_i64[0]) << 16));
                    if ( v9 )
                    {
                      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
                        || (v64 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
                      {
                        v64 = 0;
                      }
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                        && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      {
                        v40 = 1;
                      }
                      if ( v64 || v40 )
                      {
                        v65 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v35 + 16));
                        LOBYTE(v66) = v40;
                        LOBYTE(v67) = v64;
                        WPP_RECORDER_AND_TRACE_SF_qd(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v67,
                          v66,
                          (_DWORD)gFullLog,
                          5,
                          23,
                          11,
                          (__int64)&WPP_04c6f2ee801539b60b3382f92e40c1c5_Traceguids,
                          *(_QWORD *)v35,
                          v65);
                      }
                      PostEventMessageEx(
                        *(struct tagTHREADINFO **)(v35 + 16),
                        *(struct tagQ **)(*(_QWORD *)(v35 + 16) + 432LL),
                        9u,
                        (struct tagWND *)v35,
                        0x7Eu,
                        a3,
                        v62,
                        0LL);
                    }
                    else
                    {
                      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
                        || (v63 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
                      {
                        v63 = 0;
                      }
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                        && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      {
                        v40 = 1;
                      }
                      if ( v63 || v40 )
                      {
                        v69 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v35 + 16));
                        LOBYTE(v70) = v40;
                        LOBYTE(v71) = v63;
                        WPP_RECORDER_AND_TRACE_SF_qd(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v71,
                          v70,
                          (_DWORD)gFullLog,
                          5,
                          23,
                          10,
                          (__int64)&WPP_04c6f2ee801539b60b3382f92e40c1c5_Traceguids,
                          *(_QWORD *)v35,
                          v69);
                      }
                      xxxSendNotifyMessage(v35, 126LL, a3, v62, a7);
                    }
                    break;
                  case 5u:
                    v68 = *(_QWORD *)(v35 + 16);
                    if ( *(_QWORD *)(v68 + 424) != v81 || (*(_DWORD *)(v68 + 488) & 8) != 0 )
                    {
                      v76 = v12;
LABEL_88:
                      xxxSendNotifyMessage(v35, v8, v10, v9, v76);
                    }
                    else
                    {
                      _InterlockedIncrement(&glSendMessage);
                      xxxSendTransformableMessageTimeout((struct tagWND *)v35, v8, 0, 0, 0LL, 1, 1);
                    }
                    break;
                  case 6u:
                    goto LABEL_82;
                }
                ThreadUnlock1(v28, v27, v29);
                i = v78;
              }
            }
          }
        }
        v10 = a3;
        v12 = a7;
      }
    }
    return 0LL;
  }
  v85 = 0LL;
  switch ( v8 )
  {
    case 0x1Au:
    case 0x1Bu:
      if ( v9 )
      {
        if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)&v85, (struct _LARGE_STRING *)v9) )
          return 0LL;
        PushW32ThreadLock(*((_QWORD *)&v85 + 1), &v88, Win32FreePool);
        v9 = &v85;
      }
      xxxSystemBroadcastMessage(v8, v10, (__int64)v9, a5, a6, v12, a8);
      if ( v9 )
        PopAndFreeAlwaysW32ThreadLock((__int64)&v88);
      return 1LL;
    case 0x1Eu:
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 )
        return 0LL;
      goto LABEL_99;
    case 0x2Au:
      xxxSystemBroadcastMessage(0x2Au, v10, (__int64)v9, a5, a6, v12, a8);
      return 1LL;
  }
  if ( v8 - 712 < 2 )
  {
    xxxSystemBroadcastMessage(v8, v10, (__int64)v9, a5, a6, v12, a8);
    return 1LL;
  }
LABEL_99:
  a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  if ( a1 )
    goto LABEL_8;
  UserSetLastError(5);
  return 0LL;
}
