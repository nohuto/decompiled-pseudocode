/*
 * XREFs of ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C01012A4
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D28C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FC70 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     PostInputMessage @ 0x1C0050880 (PostInputMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C2120 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _PostThreadMessageEx @ 0x1C00DA7B4 (_PostThreadMessageEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qqdd @ 0x1C00585A0 (WPP_RECORDER_SF_qqdd.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

struct tagQMSG *__fastcall AllocQEntryEx(struct tagMLIST *a1, struct tagQMSG *a2, __int64 a3)
{
  char v3; // si
  struct tagQMSG *v4; // rbx
  __int64 v6; // r9
  struct tagQMSG *v7; // rax
  int v8; // eax
  struct tagQMSG **v9; // rax
  __int64 v11; // rcx
  int v12; // [rsp+20h] [rbp-38h]

  v3 = a3;
  v4 = a2;
  v6 = gUserPostMessageLimit;
  if ( *((_DWORD *)a1 + 4) >= gUserPostMessageLimit )
  {
    v11 = 1816LL;
LABEL_18:
    UserSetLastError(v11, (__int64)a2, a3);
    return 0LL;
  }
  if ( a2 )
    goto LABEL_5;
  v7 = (struct tagQMSG *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
  v4 = v7;
  if ( !v7 )
  {
    v11 = 8LL;
    goto LABEL_18;
  }
  memset(v7, 0, 0xA0uLL);
LABEL_5:
  v8 = 8;
  if ( *((_DWORD *)a1 + 5) != 2 )
    v8 = 4;
  *((_DWORD *)v4 + 25) |= v8;
  v9 = (struct tagQMSG **)*((_QWORD *)a1 + 1);
  if ( v9 )
  {
    if ( !v3 )
    {
      *v9 = v4;
      *((_QWORD *)v4 + 1) = *((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 1) = v4;
      goto LABEL_10;
    }
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = v4;
    *(_QWORD *)v4 = *(_QWORD *)a1;
  }
  else
  {
    *((_QWORD *)a1 + 1) = v4;
  }
  *(_QWORD *)a1 = v4;
LABEL_10:
  ++*((_DWORD *)a1 + 4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqdd((__int64)&WPP_RECORDER_INITIALIZED, (__int64)a2, a3, v6, v12);
  return v4;
}
