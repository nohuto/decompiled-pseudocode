/*
 * XREFs of ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1C0047DBC
 * Callers:
 *     _PostThreadMessageEx @ 0x1C0037298 (_PostThreadMessageEx.c)
 *     PostInputMessage @ 0x1C0037A48 (PostInputMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxBroadcastMessageEx @ 0x1C0045EF0 (xxxBroadcastMessageEx.c)
 *     NtUserScheduleDispatchNotification @ 0x1C0046B90 (NtUserScheduleDispatchNotification.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqdd @ 0x1C0048DA0 (WPP_RECORDER_AND_TRACE_SF_qqdd.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

_DWORD *__fastcall AllocQEntryEx(__int64 a1, _DWORD *a2, int a3)
{
  int v3; // esi
  _DWORD *v4; // rdi
  __int64 v6; // rax
  _DWORD *v7; // rax
  int v8; // eax
  int v9; // edx
  _QWORD *v10; // rax
  int v11; // r9d
  bool v13; // zf
  __int64 v14; // rax
  _QWORD *v15; // rax
  int v16; // ecx

  v3 = a3;
  v4 = a2;
  if ( *(_DWORD *)(a1 + 16) >= gUserPostMessageLimit )
  {
    v16 = 1816;
LABEL_31:
    UserSetLastError(v16);
    return 0LL;
  }
  if ( a2 )
    goto LABEL_5;
  v6 = SGDGetUserSessionState(a1);
  v7 = (_DWORD *)Win32AllocateFromPagedLookasideList(*(_QWORD *)(v6 + 16872));
  v4 = v7;
  if ( !v7 )
  {
    v16 = 8;
    goto LABEL_31;
  }
  memset_0(v7, 0, 0xA0uLL);
LABEL_5:
  v8 = 8;
  v9 = 4;
  if ( *(_DWORD *)(a1 + 20) != 2 )
    v8 = 4;
  v4[25] |= v8;
  v10 = *(_QWORD **)(a1 + 8);
  if ( v10 )
  {
    if ( v3 == 2 )
      v13 = *(_QWORD *)(a1 + 32) == 0LL;
    else
      v13 = v3 == 0;
    if ( !v13 )
    {
      if ( v3 == 2 )
      {
        *((_QWORD *)v4 + 1) = *(_QWORD *)(a1 + 32);
        *(_QWORD *)v4 = **(_QWORD **)(a1 + 32);
        v14 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)v14 )
          *(_QWORD *)(*(_QWORD *)v14 + 8LL) = v4;
        v15 = *(_QWORD **)(a1 + 32);
        if ( v15 == *(_QWORD **)(a1 + 8) )
          *(_QWORD *)(a1 + 8) = v4;
        *v15 = v4;
        *(_QWORD *)(a1 + 32) = 0LL;
      }
      else
      {
        *v10 = v4;
        *((_QWORD *)v4 + 1) = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v4;
      }
      goto LABEL_10;
    }
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = v4;
    *(_QWORD *)v4 = *(_QWORD *)a1;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 8) = v4;
  }
  *(_QWORD *)a1 = v4;
LABEL_10:
  v11 = *(_DWORD *)(a1 + 16) + 1;
  *(_DWORD *)(a1 + 16) = v11;
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qqdd(WPP_GLOBAL_Control->AttachedDevice, v9, a3, v11);
  }
  return v4;
}
