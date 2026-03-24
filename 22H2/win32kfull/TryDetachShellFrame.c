/*
 * XREFs of TryDetachShellFrame @ 0x1C01E1CA4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055680 (xxxRealInternalGetMessage.c)
 *     xxxMoveSize @ 0x1C02122B4 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0234488 (xxxMNLoop.c)
 * Callees:
 *     zzzAttachThreadInput @ 0x1C00115F8 (zzzAttachThreadInput.c)
 *     _PostMessage @ 0x1C002DBA0 (_PostMessage.c)
 *     IsDebuggerAttached @ 0x1C003CE18 (IsDebuggerAttached.c)
 *     LockW32Thread @ 0x1C003D9CC (LockW32Thread.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C14A0 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 *     AssociateShellFrameAppThreads @ 0x1C01D2734 (AssociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01D288C (FindShellFrameThreadFromAssociation.c)
 */

__int64 __fastcall TryDetachShellFrame(__int64 a1, __int64 a2, int a3, int a4)
{
  signed int v8; // ebx
  __int64 result; // rax
  bool v10; // zf
  __int64 v11; // rbx
  __int64 ThreadWin32Thread; // rax
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD v19[2]; // [rsp+28h] [rbp-29h] BYREF
  _QWORD v20[2]; // [rsp+38h] [rbp-19h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-9h] BYREF
  __int128 v22; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+70h] [rbp+1Fh]
  _BYTE v24[32]; // [rsp+78h] [rbp+27h] BYREF

  v8 = gdwMDAQThreshold;
  result = 0LL;
  v21[2] = 0LL;
  v10 = (*(_DWORD *)(a2 + 1232) & 0x100000) == 0;
  v22 = 0LL;
  v23 = 0LL;
  if ( v10 )
  {
    result = FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)a2);
    if ( !result )
    {
      result = IsDebuggerAttached(*(__int64 **)(a1 + 424));
      if ( !(_DWORD)result )
      {
        result = IsDebuggerAttached(*(__int64 **)(a2 + 424));
        if ( !(_DWORD)result )
        {
          if ( !a3 )
            v8 = gdwMDAQThreshold / 0xAu;
          if ( a4
            || (result = *(_QWORD *)(a1 + 432),
                (int)(((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                    - *(_DWORD *)(result + 480)) >= v8) )
          {
            result = AssociateShellFrameAppThreads(a1, a2);
            if ( (_DWORD)result )
            {
              v11 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 112LL);
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              v21[0] = *(_QWORD *)(ThreadWin32Thread + 416);
              *(_QWORD *)(ThreadWin32Thread + 416) = v21;
              v21[1] = v11;
              if ( v11 )
                HMLockObject(v11);
              LockW32Thread(a2, (__int64)&v22);
              CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(
                (__int64)v24,
                *(_QWORD *)(a1 + 432));
              v13 = zzzAttachThreadInput(a1, a2, 0x4000);
              v15 = ThreadUnlock1(v14);
              if ( v13 >= 0 )
              {
                *(_DWORD *)(a2 + 1232) |= 0x80000u;
                v16 = *(_QWORD *)(a1 + 432);
                v19[0] = v16 + 112;
                v19[1] = *(_QWORD *)(v16 + 120);
                HMAssignmentLock(v19);
                if ( v15 )
                {
                  v17 = *(_QWORD *)(a2 + 432);
                  if ( *(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL) == v17 )
                  {
                    v20[1] = v15;
                    v20[0] = v17 + 112;
                    HMAssignmentLock(v20);
                  }
                }
                v18 = *(_QWORD *)(a1 + 1392);
                if ( v18 )
                  PostMessage(v18, 840, 1, 0);
              }
              return PopAndFreeW32ThreadLock((__int64)&v22);
            }
          }
        }
      }
    }
  }
  return result;
}
