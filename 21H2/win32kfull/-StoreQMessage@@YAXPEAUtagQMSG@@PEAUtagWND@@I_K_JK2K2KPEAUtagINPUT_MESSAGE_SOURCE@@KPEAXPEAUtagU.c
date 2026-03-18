/*
 * XREFs of ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0058160
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A60 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     DoTimer @ 0x1C005BF94 (DoTimer.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _PostThreadMessageEx @ 0x1C00AB0F8 (_PostThreadMessageEx.c)
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E0F20 (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x1C000258C (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C006D640 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     IsCurrentDesktopComposed @ 0x1C009D460 (IsCurrentDesktopComposed.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C00AD78C (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     LogQMsg @ 0x1C01D9BDC (LogQMsg.c)
 */

void __fastcall StoreQMessage(
        struct tagQMSG *a1,
        struct tagWND *a2,
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
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  int v21; // ecx
  unsigned int v22; // edi
  struct tagWND *QuadPart; // r15
  __int64 v24; // rcx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v26; // r8d
  int v27; // r8d
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  _DWORD *v33; // r14
  int v34; // ecx
  unsigned __int64 v35; // r8
  __int64 v36; // r9
  char v37; // dl
  struct tagUIPI_INFO *v38; // rax
  __int64 v39; // rax
  int v40; // [rsp+20h] [rbp-58h]
  int v41; // [rsp+28h] [rbp-50h]
  int v42; // [rsp+30h] [rbp-48h]
  int v43; // [rsp+38h] [rbp-40h]

  v14 = 0;
  if ( a2 )
    v18 = *(_QWORD *)a2;
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
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v24);
  v26 = *((_DWORD *)a1 + 25) & 0xFFFFFFFE;
  *((_QWORD *)a1 + 9) = a9;
  v27 = (CurrentProcessWow64Process != 0) | v26;
  *((_DWORD *)a1 + 25) = v27;
  *((_QWORD *)a1 + 10) = *(_QWORD *)(gpsi + 4960LL);
  v28 = 0;
  *((_QWORD *)a1 + 11) = *(_QWORD *)(gpsi + 4952LL);
  if ( (a10 & 4) != 0 )
    v28 = 0x80000;
  v29 = v28 | (v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)(2 * a10)) & 2) & 0xFFF7FFFF;
  v30 = 0;
  if ( (a10 & 0x20) != 0 )
    v30 = 0x100000;
  v31 = v30 | v29 & 0xFFEFFFFF;
  if ( (a10 & 0x40) != 0 )
    v14 = 0x400000;
  v32 = v14 | v31 & 0xFFBFFFFF;
  v33 = (_DWORD *)((char *)a1 + 120);
  *((_DWORD *)a1 + 25) = v32;
  if ( a11 )
  {
    *v33 = *(_DWORD *)a11;
    *((_DWORD *)a1 + 31) = *((_DWORD *)a11 + 1);
  }
  else
  {
    SetUnavailableInputSource((char *)a1 + 120);
  }
  *((_QWORD *)a1 + 18) = a13;
  if ( (a10 & 2) == 0 && (a1 == (struct tagQMSG *)-120LL || v22 > 0xE || ((*v33 - 4) & 0xFFFFFFFB) != 0) )
  {
    *((_DWORD *)a1 + 25) &= ~0x800u;
  }
  else
  {
    v38 = a14;
    if ( !a14 )
      v38 = (struct tagUIPI_INFO *)(*(_QWORD *)(gptiCurrent + 424LL) + 880LL);
    v39 = *(_QWORD *)v38;
    *((_DWORD *)a1 + 25) |= 0x800u;
    *((_QWORD *)a1 + 14) = v39;
  }
  v34 = *((_DWORD *)a1 + 25);
  if ( a1 != (struct tagQMSG *)-120LL && v22 <= 0xE && ((*v33 - 4) & 0xFFFFFFFB) == 0 )
  {
    *((_QWORD *)a1 + 9) = (unsigned __int8)a9 | 0xFF515700LL;
    *((_DWORD *)a1 + 38) = *((_DWORD *)a1 + 12) - ((int)a9 >> 8);
  }
  if ( (v34 & 8) != 0 && a2 && (unsigned int)IsCompositionInputWindow(a2) )
  {
    v37 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v35) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_Ddd((__int64)WPP_GLOBAL_Control->AttachedDevice, v37, v35, v36, v40, v41, v42, v43);
    InputTransform::OnInput(a2, QuadPart, v35);
  }
  EtwTraceQueueMessage(a1);
  if ( (_DWORD)gMsgQLog )
    LogQMsg(a1);
}
