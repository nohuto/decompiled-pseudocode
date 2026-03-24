/*
 * XREFs of ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E131C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 * Callees:
 *     zzzAttachThreadInput @ 0x1C00115F8 (zzzAttachThreadInput.c)
 *     _PostMessage @ 0x1C002DC40 (_PostMessage.c)
 *     DisassociateShellFrameAppThreads @ 0x1C0030D3C (DisassociateShellFrameAppThreads.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C003508C (zzzInputFocusReceivedWindowEvent.c)
 *     LockW32Thread @ 0x1C003DA6C (LockW32Thread.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004F354 (WPP_RECORDER_SF_qq.c)
 *     DelQEntry @ 0x1C006684C (DelQEntry.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C1800 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1890 (PopAndFreeW32ThreadLock.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00C202C (WPP_RECORDER_SF_qqq.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01D2E4C (FindShellFrameThreadFromAssociation.c)
 */

void __fastcall TryAttachShellFrame(struct tagTHREADINFO *a1)
{
  __int64 v2; // rdi
  __int64 ShellFrameThreadFromAssociation; // rax
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // r15d
  unsigned int **v7; // r14
  unsigned int *v8; // rax
  unsigned int *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 ThreadWin32Thread; // rax
  int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD v18[2]; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v19[3]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v20; // [rsp+70h] [rbp-11h] BYREF
  __int64 v21; // [rsp+80h] [rbp-1h]
  _BYTE v22[24]; // [rsp+88h] [rbp+7h] BYREF
  _BYTE v23[24]; // [rsp+A0h] [rbp+1Fh] BYREF

  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v22, *((_QWORD *)a1 + 54));
  v2 = *((_QWORD *)a1 + 54);
  if ( *(_DWORD *)(v2 + 40) < 0x14u )
  {
    ShellFrameThreadFromAssociation = FindShellFrameThreadFromAssociation(a1);
    v4 = ShellFrameThreadFromAssociation;
    if ( ShellFrameThreadFromAssociation )
    {
      if ( (*(_DWORD *)(ShellFrameThreadFromAssociation + 488) & 1) == 0 )
      {
        v5 = *(_QWORD *)(ShellFrameThreadFromAssociation + 672);
        if ( !v5 || (*(_DWORD *)(v5 + 196) & 0x100000) == 0 )
        {
          v6 = *((_DWORD *)a1 + 308);
          v21 = 0LL;
          v19[2] = 0LL;
          *((_DWORD *)a1 + 308) = v6 & 0xFFE7FFFF | 0x100000;
          v20 = 0LL;
          DisassociateShellFrameAppThreads(a1);
          CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v23, v2);
          v7 = (unsigned int **)(v2 + 24);
          v8 = *(unsigned int **)(v2 + 24);
          if ( v8 )
          {
            do
            {
              if ( !(unsigned int)IsMiPMouseMessage(v8[6]) )
                break;
              v9 = *v7;
              if ( *v7 == *(unsigned int **)(v2 + 72) )
                *(_QWORD *)(v2 + 72) = 0LL;
              v10 = *(_QWORD *)(v2 + 80);
              if ( v9 == (unsigned int *)v10 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  WPP_RECORDER_SF_qq(
                    v10,
                    5u,
                    0x12u,
                    0xDu,
                    (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
                    v2,
                    *(_QWORD *)(v2 + 80));
                  v9 = *(unsigned int **)(v2 + 24);
                }
                *(_QWORD *)(v2 + 80) = 0LL;
              }
              DelQEntry((unsigned int **)(v2 + 24), v9, 1);
              v8 = *v7;
            }
            while ( *v7 );
          }
          if ( *(struct tagTHREADINFO **)(v2 + 64) == a1 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qqq(
                (__int64)&WPP_RECORDER_INITIALIZED,
                4u,
                0x12u,
                0xEu,
                (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
                v2,
                a1,
                *(_QWORD *)(v2 + 64));
            *(_QWORD *)(v2 + 64) = 0LL;
          }
          v11 = *(_QWORD *)(v2 + 112);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v19[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v19;
          v19[1] = v11;
          if ( v11 )
            HMLockObject(v11);
          LockW32Thread(v4, (__int64)&v20);
          v13 = zzzAttachThreadInput((__int64)a1, v4, 32769);
          v14 = *((_QWORD *)a1 + 54);
          *(_DWORD *)(v14 + 480) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v15 = ThreadUnlock1(v14);
          v16 = *((_QWORD *)a1 + 54);
          v18[1] = v15;
          v18[0] = v16 + 112;
          HMAssignmentLock(v18);
          v17 = *(_QWORD *)(v4 + 1392);
          if ( v17 )
            PostMessage(v17, 840, 2, v13);
          if ( gpqForeground == *((_QWORD *)a1 + 54) )
          {
            if ( *(_QWORD *)(gpqForeground + 112LL) )
              zzzInputFocusReceivedWindowEvent();
          }
          PopAndFreeW32ThreadLock((__int64)&v20);
          *((_DWORD *)a1 + 308) ^= (v6 ^ *((_DWORD *)a1 + 308)) & 0x100000;
        }
      }
    }
  }
}
