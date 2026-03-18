/*
 * XREFs of ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C011F1F0
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C004C8D0 (xxxBroadcastMessageEx.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0050C44 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _PostThreadMessageEx @ 0x1C0115548 (_PostThreadMessageEx.c)
 *     PostInputMessage @ 0x1C0117268 (PostInputMessage.c)
 *     NtUserScheduleDispatchNotification @ 0x1C011CF40 (NtUserScheduleDispatchNotification.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011E780 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01BB72C (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C0007A4C (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x1C000C65C (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     IsCurrentDesktopComposed @ 0x1C006D940 (IsCurrentDesktopComposed.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0121FB0 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 */

void __fastcall StoreQMessage(
        struct tagQMSG *a1,
        struct _EX_PUSH_LOCK **a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned int a8,
        unsigned __int64 a9,
        char a10,
        struct tagINPUT_MESSAGE_SOURCE *a11,
        unsigned int a12,
        void *a13,
        struct tagUIPI_INFO *a14)
{
  int v14; // r14d
  struct _EX_PUSH_LOCK *v18; // rax
  unsigned __int64 v19; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  int v21; // ecx
  unsigned int v22; // edi
  struct tagWND *QuadPart; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 CurrentProcessWow64Process; // rax
  int v28; // r8d
  unsigned int v29; // r8d
  int v30; // eax
  unsigned int v31; // r8d
  int v32; // eax
  unsigned int v33; // r8d
  int v34; // eax
  unsigned int v35; // r8d
  unsigned int v36; // r8d
  _DWORD *v37; // r14
  int v38; // ecx
  char v39; // dl
  struct tagUIPI_INFO *v40; // rax
  __int64 v41; // rax

  v14 = 0;
  if ( a2 )
    v18 = *a2;
  else
    v18 = 0LL;
  *((_QWORD *)a1 + 2) = v18;
  *((_DWORD *)a1 + 6) = a3;
  *((_QWORD *)a1 + 4) = a4;
  *((_QWORD *)a1 + 5) = a5;
  if ( a6 )
    LODWORD(v19) = a6;
  else
    v19 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *((_DWORD *)a1 + 12) = v19;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v21 = *((_DWORD *)a1 + 12);
  v22 = a3 - 512;
  *((LARGE_INTEGER *)a1 + 16) = PerformanceCounter;
  QuadPart = (struct tagWND *)PerformanceCounter.QuadPart;
  *((_DWORD *)a1 + 38) = v21;
  if ( v22 <= 0xE && (unsigned int)IsCurrentDesktopComposed() )
  {
    *((_DWORD *)a1 + 13) = (__int16)a5;
    *((_DWORD *)a1 + 14) = SWORD1(a5);
  }
  else
  {
    *(_QWORD *)((char *)a1 + 52) = LogicalCursorPosFromDpiAwarenessContext(a12);
  }
  *((_DWORD *)a1 + 24) = a8;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v25, v24, v26);
  v28 = *((_DWORD *)a1 + 25);
  *((_QWORD *)a1 + 9) = a9;
  v29 = (CurrentProcessWow64Process != 0) | v28 & 0xFFFFFFFE;
  *((_DWORD *)a1 + 25) = v29;
  *((_QWORD *)a1 + 10) = *(_QWORD *)(gpsi + 4960LL);
  v30 = 0;
  *((_QWORD *)a1 + 11) = *(_QWORD *)(gpsi + 4952LL);
  if ( (a10 & 1) != 0 )
    v30 = 2;
  v31 = v30 | v29 & 0xFFFFFFFD;
  v32 = 0;
  if ( (a10 & 4) != 0 )
    v32 = 0x80000;
  v33 = v32 | v31 & 0xFFF7FFFF;
  v34 = 0;
  if ( (a10 & 0x20) != 0 )
    v34 = 0x100000;
  v35 = v34 | v33 & 0xFFEFFFFF;
  if ( (a10 & 0x40) != 0 )
    v14 = 0x400000;
  v36 = v14 | v35 & 0xFFBFFFFF;
  v37 = (_DWORD *)((char *)a1 + 120);
  *((_DWORD *)a1 + 25) = v36;
  if ( a11 )
  {
    *v37 = *(_DWORD *)a11;
    *((_DWORD *)a1 + 31) = *((_DWORD *)a11 + 1);
  }
  else
  {
    SetUnavailableInputSource((char *)a1 + 120);
  }
  *((_QWORD *)a1 + 18) = a13;
  if ( (a10 & 2) == 0 && (a1 == (struct tagQMSG *)-120LL || v22 > 0xE || ((*v37 - 4) & 0xFFFFFFFB) != 0) )
  {
    *((_DWORD *)a1 + 25) &= ~0x800u;
  }
  else
  {
    v40 = a14;
    if ( !a14 )
      v40 = (struct tagUIPI_INFO *)(*(_QWORD *)(gptiCurrent + 424LL) + 888LL);
    v41 = *(_QWORD *)v40;
    *((_DWORD *)a1 + 25) |= 0x800u;
    *((_QWORD *)a1 + 14) = v41;
  }
  v38 = *((_DWORD *)a1 + 25);
  if ( a1 != (struct tagQMSG *)-120LL && v22 <= 0xE && ((*v37 - 4) & 0xFFFFFFFB) == 0 )
  {
    *((_QWORD *)a1 + 9) = (unsigned __int8)a9 | 0xFF515700LL;
    *((_DWORD *)a1 + 38) = *((_DWORD *)a1 + 12) - ((int)a9 >> 8);
  }
  if ( (v38 & 8) != 0 && a2 && (unsigned int)IsCompositionInputWindow((const struct tagWND *)a2) )
  {
    v39 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v39,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        23LL,
        4u,
        0x12u,
        0x17u,
        (__int64)&WPP_da10ed9f41f835a692699b91a3623186_Traceguids,
        *((_DWORD *)a1 + 6),
        *((_DWORD *)a1 + 13),
        *((_DWORD *)a1 + 14));
    InputTransform::OnInput(a2, QuadPart);
  }
  EtwTraceQueueMessage(a1);
}
