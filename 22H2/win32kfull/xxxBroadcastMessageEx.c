/*
 * XREFs of xxxBroadcastMessageEx @ 0x1C004C8D0
 * Callers:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C004A790 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxSendMessageCallback @ 0x1C004D5BC (xxxSendMessageCallback.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0060E90 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSetInformationThread @ 0x1C00699B0 (xxxSetInformationThread.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011E780 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01C8600 (EditionxxxBroadcastSPIChange.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C004D370 (xxxSendNotifyMessage.c)
 *     xxxSendMessageCallback @ 0x1C004D5BC (xxxSendMessageCallback.c)
 *     ProcessSuspendedEventMessage @ 0x1C004F2B4 (ProcessSuspendedEventMessage.c)
 *     _PostTransformableMessageIL @ 0x1C004F3FC (_PostTransformableMessageIL.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C0050894 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0050C44 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0060E90 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     vDLOrderDispositionCompare @ 0x1C008F8E0 (vDLOrderDispositionCompare.c)
 *     vOLOrderCompare @ 0x1C00902B0 (vOLOrderCompare.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00C0F08 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     BuildHwndList @ 0x1C00D2540 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00D2E50 (FreeHwndList.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     SetWakeBit @ 0x1C0118350 (SetWakeBit.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1C011E31C (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C011F1F0 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     ??$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z @ 0x1C013100C (--$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C0135648 (GetPrimaryMonitorRectForWindow.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$ObjectLock@UtagObjLock@@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@@@QEAA@XZ @ 0x1C01B4F14 (--1-$ObjectLock@UtagObjLock@@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_QUEU.c)
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
  ULONG_PTR v35; // rsi
  __int64 v36; // rdi
  ULONG_PTR *v37; // r14
  bool v38; // zf
  char v39; // bl
  __int64 v40; // rdx
  __int16 v41; // r8
  __int64 v42; // r13
  _WORD *v43; // rcx
  unsigned __int16 v44; // ax
  __int64 v45; // rdi
  __int128 *v46; // rbx
  __int128 *v47; // r14
  unsigned int DLT; // eax
  unsigned int v49; // eax
  __int128 *v50; // rax
  __int128 v51; // xmm0
  __int64 v52; // xmm1_8
  __int128 v53; // xmm0
  __int64 v54; // xmm1_8
  unsigned int j; // ebx
  unsigned int k; // ebx
  __m128i *PrimaryMonitorRectForWindow; // rax
  __m128i v59; // xmm0
  unsigned __int64 v60; // r14
  char v61; // di
  char v62; // di
  char v63; // al
  int v64; // r8d
  int v65; // edx
  __int64 v66; // rax
  char v67; // al
  int v68; // r8d
  int v69; // edx
  __int64 v70; // rdx
  __int64 v71; // r8
  HANDLE ThreadProcessId; // rbx
  HANDLE ThreadId; // rax
  int v74; // [rsp+20h] [rbp-E0h]
  _QWORD *v76; // [rsp+78h] [rbp-88h]
  __int64 v78; // [rsp+88h] [rbp-78h]
  __int64 v79; // [rsp+90h] [rbp-70h]
  __int128 *v81; // [rsp+A8h] [rbp-58h]
  __int64 v82; // [rsp+B0h] [rbp-50h]
  __int128 v83; // [rsp+B8h] [rbp-48h] BYREF
  __int128 SystemInformation; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v85; // [rsp+D8h] [rbp-28h]
  __int128 v86; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v87; // [rsp+F0h] [rbp-10h]
  __int128 v88; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v89; // [rsp+108h] [rbp+8h]
  __int128 v90; // [rsp+110h] [rbp+10h]
  __int64 v91; // [rsp+120h] [rbp+20h]
  __int128 v92; // [rsp+128h] [rbp+28h]
  __int64 v93; // [rsp+138h] [rbp+38h]
  _BYTE v94[16]; // [rsp+140h] [rbp+40h] BYREF
  __int64 DomainLockRef; // [rsp+150h] [rbp+50h] BYREF
  char v96; // [rsp+158h] [rbp+58h] BYREF
  __int64 v97; // [rsp+160h] [rbp+60h]
  char v98; // [rsp+168h] [rbp+68h] BYREF
  __int64 v99; // [rsp+170h] [rbp+70h]
  char v100; // [rsp+178h] [rbp+78h]
  __int128 Base; // [rsp+180h] [rbp+80h] BYREF
  __int64 v102; // [rsp+190h] [rbp+90h]
  char v103; // [rsp+198h] [rbp+98h]

  v89 = 0LL;
  v8 = a2;
  v87 = 0LL;
  v9 = a4;
  v10 = a3;
  v88 = 0LL;
  v86 = 0LL;
  if ( a2 - 1024 <= 0xBBFF )
  {
    UserSetLastError(87LL);
    v78 = 1LL;
  }
  else
  {
    v78 = 0LL;
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
    v82 = BuildHwndList(*(ShellWindowManagement **)(a1 + 112));
    if ( v82 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
      v79 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v79 = CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      for ( i = (_QWORD *)(v82 + 32); ; ++i )
      {
        v34 = *i;
        v76 = i;
        if ( *i == 1LL )
        {
          FreeHwndList(v82);
          return 1LL;
        }
        v35 = 0LL;
        PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( (unsigned __int64)(unsigned __int16)v34 < *(_QWORD *)(gpsi + 8LL) )
        {
          v36 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v34;
          v37 = (ULONG_PTR *)HMPkheFromPhe(v36);
          LOWORD(v34) = WORD1(v34) & 0x7FFF;
          if ( ((WORD1(v34) & 0x7FFF) == *(_WORD *)(v36 + 26)
             || (_WORD)v34 == 0x7FFF
             || !(_WORD)v34 && PsGetCurrentProcessWow64Process())
            && (*(_BYTE *)(v36 + 25) & 1) == 0 )
          {
            v38 = *(_BYTE *)(v36 + 24) == 1;
            i = v76;
            if ( v38 )
              v35 = *v37;
          }
          else
          {
            i = v76;
          }
          v10 = a3;
        }
        v39 = 0;
        if ( v35 )
        {
          v40 = *(_QWORD *)(v35 + 40);
          if ( (*(_WORD *)(v40 + 42) & 0x2FFF) != 0x29C )
          {
            v41 = **(_WORD **)(*(_QWORD *)(v35 + 136) + 8LL);
            if ( *(_WORD *)(gpsi + 908LL) != v41
              && gaOleMainThreadWndClass != v41
              && (!v78 || (*(_BYTE *)(v40 + 21) & 2) == 0)
              && (v8 - 784 > 1
               || (*(_BYTE *)(v40 + 31) & 0x10) != 0
               || (*(_DWORD *)(*(_QWORD *)(v35 + 16) + 488LL) & 0x800) != 0) )
            {
              if ( a8 == 1 )
              {
                if ( *(_DWORD *)(v40 + 236) == 1 )
                  goto LABEL_57;
              }
              else if ( a8 != 2 || *(_DWORD *)(v40 + 236) != 1 || (*(_BYTE *)(v40 + 232) & 0x40) != 0 )
              {
LABEL_57:
                ThreadLockAlways(v35, &v88);
                switch ( a5 )
                {
                  case 0u:
                    xxxSendTransformableMessageTimeout(v35, 0, 0, 0LL, v12, 1);
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
                      v10,
                      *(_QWORD *)a6,
                      *((_QWORD *)a6 + 1),
                      *((_DWORD *)a6 + 4),
                      v12,
                      1);
                    break;
                  case 4u:
LABEL_82:
                    if ( xxxSendTransformableMessageTimeout(
                           v35,
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
                    v42 = 0LL;
                    if ( v8 == 26 || v8 == 27 )
                    {
                      if ( v9 )
                      {
                        v43 = (_WORD *)*((_QWORD *)v9 + 1);
                        if ( *v43 )
                        {
                          v44 = UserAddAtomEx(v43, 0LL, 2LL);
                          v42 = v44;
                          if ( !v44 )
                            break;
                        }
                        else
                        {
                          v42 = -1LL;
                        }
                      }
                      v45 = *(_QWORD *)(v35 + 16);
                      v46 = (__int128 *)gObjDummyLock;
                      v47 = *(__int128 **)(v45 + 432);
                      v81 = v47;
                      if ( v45 )
                        v46 = (__int128 *)(v45 + 392);
                      DLT = DLT_THREADINFO::getDLT();
                      DomainLockRef = GetDomainLockRef(DLT);
                      v96 = 0;
                      v49 = DLT_QUEUE::getDLT();
                      v97 = GetDomainLockRef(v49);
                      v99 = gDomainDummyLock;
                      v98 = 0;
                      Base = 0LL;
                      v102 = 0LL;
                      v50 = v47;
                      v100 = 0;
                      v103 = 0;
                      v51 = *v46;
                      v52 = *((_QWORD *)v46 + 2);
                      if ( v46 == (__int128 *)gObjDummyLock )
                        v46 = 0LL;
                      v90 = v51;
                      if ( v47 == (__int128 *)gObjDummyLock )
                        v50 = 0LL;
                      v53 = *v47;
                      *((_QWORD *)&Base + 1) = v46;
                      v91 = v52;
                      v54 = *((_QWORD *)v47 + 2);
                      v92 = v53;
                      *(_QWORD *)&Base = v50;
                      v93 = v54;
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
                      if ( !v103 )
                      {
                        v19 = 0;
                        v20 = &v96;
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
                        v103 = 1;
                      }
                      if ( v45 )
                      {
                        if ( (*(_DWORD *)(v45 + 488) & 1) != 0 )
                          goto LABEL_90;
                        v85 = 0LL;
                        v24 = *(_DWORD *)(v45 + 1272);
                        SystemInformation = 0LL;
                        if ( (v24 & 0x2000) != 0
                          && (v24 & 0x4000) == 0
                          && (PsGetCurrentProcess(v23, v17, v18) == gpepCSRSS
                           || (unsigned __int8)IsInputThread(gpepCSRSS, v70, v71)
                           || v45 == gptiManipulationThread) )
                        {
                          ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v45);
                          ThreadId = PsGetThreadId(*(PETHREAD *)v45);
                          *(_QWORD *)&SystemInformation = ThreadProcessId;
                          *((_QWORD *)&SystemInformation + 1) = ThreadId;
                          LODWORD(v85) = 13;
                          if ( ZwSetSystemInformation(
                                 SystemThreadPriorityClientIdInformation,
                                 &SystemInformation,
                                 0x18uLL) >= 0 )
                            *(_DWORD *)(v45 + 1272) |= 0x4000u;
                        }
                        if ( (*(_DWORD *)(v45 + 1272) & 0x20) != 0
                          && !(unsigned int)ProcessSuspendedEventMessage(v45, 9LL, v35, a2, a3, v42) )
                        {
                          goto LABEL_90;
                        }
                      }
                      v25 = (struct tagQMSG *)AllocQEntryEx((char *)v81 + 24, 0LL, 1LL);
                      v17 = 0LL;
                      v26 = v25;
                      if ( !v25 )
                      {
LABEL_90:
                        DomainShared<DLT_THREADINFO,DLT_QUEUE>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock>::~ObjectLock<tagObjLock,tagObjLock>(
                          &DomainLockRef,
                          v17);
                        if ( (unsigned __int64)(v42 + 1) > 1 )
                          UserDeleteAtom((unsigned __int16)v42, v27);
                      }
                      else
                      {
                        StoreQMessage(
                          v25,
                          (struct tagWND *)v35,
                          a2,
                          a3,
                          v42,
                          0,
                          0LL,
                          9u,
                          0LL,
                          0,
                          0LL,
                          *(_DWORD *)(*(_QWORD *)(v35 + 40) + 288LL),
                          0LL,
                          0LL);
                        *((_QWORD *)v26 + 13) = v45;
                        if ( v45 )
                        {
                          if ( (*(_DWORD *)(v45 + 488) & 1) == 0 )
                          {
                            _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v45 + 448) + 8LL), 0x2040u);
                            _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v45 + 448) + 4LL), 0x2040u);
                            if ( (*(_DWORD *)(*(_QWORD *)(v45 + 448) + 16LL) & 0x2040) != 0 )
                              KeSetEvent(*(PRKEVENT *)(v45 + 736), 2, 0);
                          }
                        }
                        else
                        {
                          SetWakeBit(*((_QWORD *)v81 + 12), 8256LL);
                          SetWakeBit(*((_QWORD *)v81 + 13), 8256LL);
                        }
                        if ( v103 )
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
                          v33 = &v98;
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
                      v74 = a7;
                      goto LABEL_88;
                    }
                    PrimaryMonitorRectForWindow = (__m128i *)GetPrimaryMonitorRectForWindow(v94, v35);
                    v59 = _mm_srli_si128(*PrimaryMonitorRectForWindow, 8);
                    v60 = (unsigned __int16)(v59.m128i_i16[0] - PrimaryMonitorRectForWindow->m128i_i64[0]) | (unsigned __int64)(int)((v59.m128i_i32[1] << 16) - (HIDWORD(PrimaryMonitorRectForWindow->m128i_i64[0]) << 16));
                    if ( v9 )
                    {
                      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
                        || (v62 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
                      {
                        v62 = 0;
                      }
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                        && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      {
                        v39 = 1;
                      }
                      if ( v62 || v39 )
                      {
                        v63 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v35 + 16));
                        LOBYTE(v64) = v39;
                        LOBYTE(v65) = v62;
                        WPP_RECORDER_AND_TRACE_SF_qd(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v65,
                          v64,
                          (_DWORD)gFullLog,
                          5,
                          7,
                          11,
                          (__int64)&WPP_cc72f960d4af37e9033e8e381c96dbfb_Traceguids,
                          *(_QWORD *)v35,
                          v63);
                      }
                      PostEventMessageEx(
                        *(struct tagTHREADINFO **)(v35 + 16),
                        *(struct tagQ **)(*(_QWORD *)(v35 + 16) + 432LL),
                        9u,
                        (struct tagWND *)v35,
                        0x7Eu,
                        a3,
                        v60,
                        0LL);
                    }
                    else
                    {
                      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
                        || (v61 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
                      {
                        v61 = 0;
                      }
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                        && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      {
                        v39 = 1;
                      }
                      if ( v61 || v39 )
                      {
                        v67 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v35 + 16));
                        LOBYTE(v68) = v39;
                        LOBYTE(v69) = v61;
                        WPP_RECORDER_AND_TRACE_SF_qd(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v69,
                          v68,
                          (_DWORD)gFullLog,
                          5,
                          7,
                          10,
                          (__int64)&WPP_cc72f960d4af37e9033e8e381c96dbfb_Traceguids,
                          *(_QWORD *)v35,
                          v67);
                      }
                      xxxSendNotifyMessage(v35, 126LL, a3, v60, a7);
                    }
                    break;
                  case 5u:
                    v66 = *(_QWORD *)(v35 + 16);
                    if ( *(_QWORD *)(v66 + 424) != v79 || (*(_DWORD *)(v66 + 488) & 8) != 0 )
                    {
                      v74 = v12;
LABEL_88:
                      xxxSendNotifyMessage(v35, v8, v10, v9, v74);
                    }
                    else
                    {
                      _InterlockedIncrement(&glSendMessage);
                      xxxSendTransformableMessageTimeout(v35, 0, 0, 0LL, 1, 1);
                    }
                    break;
                  case 6u:
                    goto LABEL_82;
                }
                ThreadUnlock1(v28, v27, v29);
                i = v76;
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
  v83 = 0LL;
  switch ( v8 )
  {
    case 0x1Au:
    case 0x1Bu:
      if ( v9 )
      {
        if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)&v83, (struct _LARGE_STRING *)v9) )
          return 0LL;
        PushW32ThreadLock(*((_QWORD *)&v83 + 1), &v86, Win32FreePool);
        v9 = &v83;
      }
      xxxSystemBroadcastMessage(v8, v10, (__int64)v9, a5, a6, v12, a8);
      if ( v9 )
        PopAndFreeAlwaysW32ThreadLock((__int64)&v86);
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
  UserSetLastError(5LL);
  return 0LL;
}
