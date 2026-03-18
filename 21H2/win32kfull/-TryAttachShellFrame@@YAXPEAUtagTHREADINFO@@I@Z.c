/*
 * XREFs of ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01DC5A0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C005BAB8 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     DelQEntry @ 0x1C005BE3C (DelQEntry.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     LockW32Thread @ 0x1C007EAAC (LockW32Thread.c)
 *     zzzAttachThreadInput @ 0x1C009D530 (zzzAttachThreadInput.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00A86E4 (zzzInputFocusReceivedWindowEvent.c)
 *     DisassociateShellFrameAppThreads @ 0x1C00DD4CC (DisassociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01D996C (FindShellFrameThreadFromAssociation.c)
 */

void __fastcall TryAttachShellFrame(struct tagTHREADINFO *a1)
{
  __int64 v1; // rdi
  __int64 ShellFrameThreadFromAssociation; // rax
  __int64 v4; // rbp
  char v5; // si
  __int64 v6; // rcx
  int v7; // r15d
  __int64 *v8; // r14
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int128 v19; // [rsp+60h] [rbp-68h] BYREF
  __int64 v20; // [rsp+70h] [rbp-58h]
  __int128 v21; // [rsp+78h] [rbp-50h] BYREF
  __int64 v22; // [rsp+88h] [rbp-40h]
  __int64 v23; // [rsp+D0h] [rbp+8h]

  v1 = *((_QWORD *)a1 + 54);
  if ( *(_DWORD *)(v1 + 40) < 0x14u )
  {
    ShellFrameThreadFromAssociation = FindShellFrameThreadFromAssociation(a1);
    v23 = ShellFrameThreadFromAssociation;
    v4 = ShellFrameThreadFromAssociation;
    if ( ShellFrameThreadFromAssociation )
    {
      v5 = 1;
      if ( (*(_DWORD *)(ShellFrameThreadFromAssociation + 488) & 1) == 0 )
      {
        v6 = *(_QWORD *)(ShellFrameThreadFromAssociation + 672);
        if ( !v6 || (*(_DWORD *)(v6 + 200) & 0x100000) == 0 )
        {
          v7 = *((_DWORD *)a1 + 314);
          v22 = 0LL;
          v20 = 0LL;
          *((_DWORD *)a1 + 314) = v7 & 0xFFE7FFFF | 0x100000;
          v21 = 0LL;
          v19 = 0LL;
          DisassociateShellFrameAppThreads(a1);
          v8 = (__int64 *)(v1 + 24);
          v9 = *(_QWORD *)(v1 + 24);
          if ( v9 )
          {
            do
            {
              if ( !(unsigned int)IsMiPMouseMessage(*(unsigned int *)(v9 + 24)) )
                break;
              v12 = *v8;
              if ( *v8 == *(_QWORD *)(v1 + 72) )
                *(_QWORD *)(v1 + 72) = 0LL;
              if ( v12 == *(_QWORD *)(v1 + 80) )
              {
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
                  || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
                {
                  LOBYTE(v10) = 0;
                }
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  || (LOBYTE(v11) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
                {
                  LOBYTE(v11) = 0;
                }
                if ( (_BYTE)v10 || (_BYTE)v11 )
                  WPP_RECORDER_AND_TRACE_SF_qq(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v10,
                    v11,
                    WPP_MAIN_CB.Queue.ListEntry.Flink,
                    5,
                    18,
                    13,
                    (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
                    v1,
                    *(_QWORD *)(v1 + 80));
                *(_QWORD *)(v1 + 80) = 0LL;
              }
              DelQEntry(v1 + 24, *v8, 1);
              v9 = *v8;
            }
            while ( *v8 );
            v4 = v23;
          }
          if ( *(struct tagTHREADINFO **)(v1 + 64) == a1 )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              v5 = 0;
            }
            if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_qqq(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v5,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
                4u,
                0x12u,
                0xEu,
                (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
                v1,
                a1,
                *(_QWORD *)(v1 + 64));
            *(_QWORD *)(v1 + 64) = 0LL;
          }
          ThreadLock(*(_QWORD *)(v1 + 112), (__int64 *)&v21);
          LockW32Thread(v4, (__int64)&v19);
          v13 = zzzAttachThreadInput((__int64)a1, v4, 32769);
          v14 = *((_QWORD *)a1 + 54);
          v15 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(v14 + 420) = v15;
          v17 = ThreadUnlock1(v14, v15, v16);
          tagQ::LockFocusWnd(*((_QWORD *)a1 + 54), v17, 0LL);
          v18 = *(_QWORD *)(v4 + 1392);
          if ( v18 )
            PostMessage(v18, 840, 2, v13);
          if ( gpqForeground == *((_QWORD *)a1 + 54) )
          {
            if ( *(_QWORD *)(gpqForeground + 112LL) )
              zzzInputFocusReceivedWindowEvent(2u);
          }
          PopAndFreeW32ThreadLock((__int64)&v19);
          *((_DWORD *)a1 + 314) ^= (v7 ^ *((_DWORD *)a1 + 314)) & 0x100000;
        }
      }
    }
  }
}
