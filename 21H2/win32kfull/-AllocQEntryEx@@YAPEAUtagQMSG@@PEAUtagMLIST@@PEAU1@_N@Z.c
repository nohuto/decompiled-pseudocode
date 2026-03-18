/*
 * XREFs of ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C005BB70
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     DoTimer @ 0x1C005BF94 (DoTimer.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _PostThreadMessageEx @ 0x1C00AB0F8 (_PostThreadMessageEx.c)
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qqdd @ 0x1C0057F9C (WPP_RECORDER_AND_TRACE_SF_qqdd.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

struct tagQMSG *__fastcall AllocQEntryEx(struct tagMLIST *a1, struct tagQMSG *a2, char a3)
{
  struct tagQMSG *v4; // rbx
  struct tagQMSG *v6; // rax
  int v7; // eax
  struct tagQMSG **v8; // rax
  int v9; // r9d
  char v10; // dl
  __int64 v12; // rcx
  int v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int64 v16; // [rsp+38h] [rbp-30h]

  v4 = a2;
  if ( *((_DWORD *)a1 + 4) >= gUserPostMessageLimit )
  {
    v12 = 1816LL;
LABEL_22:
    UserSetLastError(v12);
    return 0LL;
  }
  if ( a2 )
    goto LABEL_5;
  v6 = (struct tagQMSG *)Win32AllocateFromPagedLookasideList(QEntryLookaside, 0LL);
  v4 = v6;
  if ( !v6 )
  {
    v12 = 8LL;
    goto LABEL_22;
  }
  memset(v6, 0, 0xA0uLL);
LABEL_5:
  v7 = 8;
  if ( *((_DWORD *)a1 + 5) != 2 )
    v7 = 4;
  *((_DWORD *)v4 + 25) |= v7;
  v8 = (struct tagQMSG **)*((_QWORD *)a1 + 1);
  if ( !v8 )
  {
    *((_QWORD *)a1 + 1) = v4;
LABEL_9:
    *(_QWORD *)a1 = v4;
    goto LABEL_10;
  }
  if ( a3 )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = v4;
    *(_QWORD *)v4 = *(_QWORD *)a1;
    goto LABEL_9;
  }
  *v8 = v4;
  *((_QWORD *)v4 + 1) = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v4;
LABEL_10:
  v9 = *((_DWORD *)a1 + 4) + 1;
  *((_DWORD *)a1 + 4) = v9;
  v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qqdd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      v9,
      v13,
      v14,
      v15,
      v16);
  return v4;
}
