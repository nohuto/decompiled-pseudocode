/*
 * XREFs of ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0143E38
 * Callers:
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C00148B0 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C0038580 (IsPointerInputMessage.c)
 *     DelQEntry @ 0x1C0038CDC (DelQEntry.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D34C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C01437FA (-HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01464D8 (DelegateReleasePointerMessage.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B68A8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 */

struct tagQMSG *__fastcall _HandleDelegatedInputWorker(struct tagTHREADINFO *a1, unsigned int a2, struct tagQMSG *a3)
{
  __int64 v3; // r14
  char v7; // di
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  char v16; // dl
  char v18; // [rsp+80h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v18);
  if ( (*((_DWORD *)a3 + 25) & 0x100) == 0 )
  {
    EtwTraceBeginDelegatedInputWorker(a3, a2);
    InputTraceLogging::DManip::HandleDelegatedInput(a3);
    v7 = 1;
    if ( a2 == 1 )
    {
      v8 = *((_DWORD *)a3 + 25);
      if ( (v8 & 0x20) != 0 )
      {
        v9 = *((_QWORD *)a3 + 2);
        *((_DWORD *)a3 + 25) = v8 & 0xFFFFFF9F | 0x40;
        v10 = HMValidateHandleNoSecure(v9, 1);
        if ( v10 )
        {
          v11 = *((_DWORD *)a3 + 25);
          if ( (v11 & 0x200) != 0 )
          {
            *((_QWORD *)a3 + 2) = 0LL;
            *((_DWORD *)a3 + 25) = v11 & 0xFFFFFDFF;
          }
          ReassignInputMessage(a1, *(struct tagTHREADINFO **)(v10 + 16), a3);
          goto LABEL_25;
        }
LABEL_9:
        if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6)) || !(unsigned int)DelegateReleasePointerMessage(a1, a3) )
        {
          CleanEventMessage((void **)a3, v12, v13, v14);
          DelQEntry(*((_QWORD *)a1 + 54) + 24LL, (__int64)a3, 1);
        }
        v15 = *((_QWORD *)a1 + 54);
        if ( *(struct tagQMSG **)(v15 + 88) == a3 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
            || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            v16 = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v7 = 0;
          }
          if ( v16 || v7 )
            WPP_RECORDER_AND_TRACE_SF_qq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v16,
              v7,
              (__int64)gFullLog,
              5u,
              0x12u,
              0xEu,
              (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
              v15,
              *(_QWORD *)(v15 + 88));
          *(_QWORD *)(*((_QWORD *)a1 + 54) + 88LL) = 0LL;
        }
      }
    }
    else
    {
      if ( a2 == 2 )
        goto LABEL_9;
      *((_DWORD *)a3 + 25) |= 0x10u;
    }
LABEL_25:
    EtwTraceEndDelegatedInputWorker(a3, a2);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v18);
  return (struct tagQMSG *)v3;
}
