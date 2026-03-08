/*
 * XREFs of ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01B7500
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     ?_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C01B7454 (-_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?ShellHandwritingDelegationHandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C01B6C5C (-ShellHandwritingDelegationHandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C01B722C (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B7674 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 */

struct tagQMSG *__fastcall _HandleShellHandwritingDelegatedInputWorker(
        struct tagTHREADINFO *a1,
        int a2,
        struct tagQMSG *a3)
{
  __int64 v3; // r14
  char v7; // di
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  struct tagTHREADINFO *v12; // rdx
  char v14; // [rsp+80h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
  if ( (*((_DWORD *)a3 + 25) & 0x100) == 0 )
  {
    InputTraceLogging::DManip::ShellHandwritingDelegationHandleDelegatedInput(a3);
    v7 = 1;
    if ( a2 != 1 )
    {
      if ( a2 != 2 )
      {
        *((_DWORD *)a3 + 25) |= 0x10u;
        goto LABEL_20;
      }
      goto LABEL_18;
    }
    v8 = *((_DWORD *)a3 + 25);
    if ( (v8 & 0x20) != 0 )
    {
      v9 = *((_QWORD *)a3 + 2);
      *((_DWORD *)a3 + 25) = v8 & 0xFFFFFF9F | 0x40;
      v10 = HMValidateHandleNoSecure(v9, 1);
      if ( !v10 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v7 = 0;
        }
        if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v7,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            3u,
            0x12u,
            0x10u,
            (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
            *((_QWORD *)a3 + 2),
            a3);
LABEL_18:
        _AttemptToCoalesceOrDestroyMessage(a1, a3);
        goto LABEL_20;
      }
      v11 = *((_DWORD *)a3 + 25);
      if ( (v11 & 0x200) != 0 )
      {
        *((_QWORD *)a3 + 2) = 0LL;
        *((_DWORD *)a3 + 25) = v11 & 0xFFFFFDFF;
      }
      v12 = *(struct tagTHREADINFO **)(v10 + 264);
      if ( !v12 )
        v12 = *(struct tagTHREADINFO **)(v10 + 16);
      _ShellHandwritingDelegationReassignInputMessage(a1, v12, a3);
    }
  }
LABEL_20:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14);
  return (struct tagQMSG *)v3;
}
