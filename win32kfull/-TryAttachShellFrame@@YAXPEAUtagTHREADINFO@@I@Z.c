/*
 * XREFs of ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01B6E20
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     DelQEntry @ 0x1C0038CDC (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C0072510 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C009B35C (zzzInputFocusReceivedWindowEvent.c)
 *     LockW32Thread @ 0x1C00A1BCC (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     zzzAttachThreadInput @ 0x1C00CCFE8 (zzzAttachThreadInput.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     DisassociateShellFrameAppThreads @ 0x1C01B4288 (DisassociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01B43A4 (FindShellFrameThreadFromAssociation.c)
 */

void __fastcall TryAttachShellFrame(struct tagTHREADINFO *a1)
{
  __int64 v1; // rdi
  struct tagTHREADINFO *v2; // rbx
  __int64 ShellFrameThreadFromAssociation; // rax
  __int64 v4; // r14
  char v5; // si
  __int64 v6; // rcx
  int v7; // ebp
  __int64 *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // dl
  char v12; // r8
  __int128 *v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int128 v19; // [rsp+60h] [rbp-68h] BYREF
  __int64 v20; // [rsp+70h] [rbp-58h]
  __int128 v21; // [rsp+78h] [rbp-50h] BYREF
  __int64 v22; // [rsp+88h] [rbp-40h]
  __int64 v24; // [rsp+E0h] [rbp+18h]

  v1 = *((_QWORD *)a1 + 54);
  v2 = a1;
  if ( *(_DWORD *)(v1 + 40) < 0x14u )
  {
    ShellFrameThreadFromAssociation = FindShellFrameThreadFromAssociation(a1);
    v24 = ShellFrameThreadFromAssociation;
    v4 = ShellFrameThreadFromAssociation;
    if ( ShellFrameThreadFromAssociation )
    {
      v5 = 1;
      if ( (*(_DWORD *)(ShellFrameThreadFromAssociation + 488) & 1) == 0 )
      {
        v6 = *(_QWORD *)(ShellFrameThreadFromAssociation + 672);
        if ( !v6 || (*(_DWORD *)(v6 + 200) & 0x80000) == 0 )
        {
          v7 = *((_DWORD *)v2 + 318);
          v22 = 0LL;
          v20 = 0LL;
          *((_DWORD *)v2 + 318) = v7 & 0xFFE7FFFF | 0x100000;
          v21 = 0LL;
          v19 = 0LL;
          DisassociateShellFrameAppThreads(v2);
          v8 = (__int64 *)(v1 + 24);
          v9 = *(_QWORD *)(v1 + 24);
          if ( v9 )
          {
            do
            {
              if ( !(unsigned int)IsMiPMouseMessage(*(unsigned int *)(v9 + 24)) )
                break;
              v10 = *v8;
              if ( *v8 == *(_QWORD *)(v1 + 80) )
                *(_QWORD *)(v1 + 80) = 0LL;
              if ( v10 == *(_QWORD *)(v1 + 88) )
              {
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
                  || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
                {
                  v11 = 0;
                }
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  || (v12 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
                {
                  v12 = 0;
                }
                if ( v11 || v12 )
                  WPP_RECORDER_AND_TRACE_SF_qq(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    v11,
                    v12,
                    (__int64)gFullLog,
                    5u,
                    0x12u,
                    0x12u,
                    (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
                    v1,
                    *(_QWORD *)(v1 + 88));
                *(_QWORD *)(v1 + 88) = 0LL;
              }
              DelQEntry(v1 + 24, *v8, 1);
              v9 = *v8;
            }
            while ( *v8 );
            v2 = a1;
            v4 = v24;
          }
          if ( *(struct tagTHREADINFO **)(v1 + 72) == v2 )
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
                (__int64)gFullLog,
                4u,
                0x12u,
                0x13u,
                (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
                v1,
                v2,
                *(_QWORD *)(v1 + 72));
            *(_QWORD *)(v1 + 72) = 0LL;
          }
          ThreadLock(*(_QWORD *)(v1 + 120), &v21);
          LockW32Thread(v4, &v19);
          v13 = (__int128 *)(int)zzzAttachThreadInput((__int64)v2, v4, 32769);
          v14 = *((_QWORD *)v2 + 54);
          v15 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(v14 + 428) = v15;
          v17 = ThreadUnlock1(v14, v15, v16);
          tagQ::LockFocusWnd(*((_QWORD *)v2 + 54), v17, 0LL);
          v18 = *(_QWORD *)(v4 + 1432);
          if ( v18 )
            PostMessage(v18, 0x348u, 2uLL, v13);
          if ( gpqForeground == *((_QWORD *)v2 + 54) )
          {
            if ( *(_QWORD *)(gpqForeground + 120LL) )
              zzzInputFocusReceivedWindowEvent(2u);
          }
          PopAndFreeW32ThreadLock((__int64)&v19);
          *((_DWORD *)v2 + 318) ^= (*((_DWORD *)v2 + 318) ^ v7) & 0x100000;
        }
      }
    }
  }
}
