/*
 * XREFs of TryDetachShellFrame @ 0x1C01B7EFC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxMNLoop @ 0x1C021726C (xxxMNLoop.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C0024014 (IsDebuggerAttached.c)
 *     LockW32Thread @ 0x1C00A1BCC (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     zzzAttachThreadInput @ 0x1C00CCFE8 (zzzAttachThreadInput.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     AssociateShellFrameAppThreads @ 0x1C01B41E8 (AssociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01B43A4 (FindShellFrameThreadFromAssociation.c)
 */

__int64 __fastcall TryDetachShellFrame(__int64 a1, __int64 a2, int a3, int a4)
{
  signed int v8; // ebx
  __int64 result; // rax
  bool v10; // zf
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbp
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-28h]
  __int128 v20; // [rsp+38h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-10h]

  v8 = gdwMDAQThreshold;
  result = 0LL;
  v10 = (*(_DWORD *)(a2 + 1272) & 0x100000) == 0;
  v20 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
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
                    - *(_DWORD *)(result + 428)) >= v8) )
          {
            result = AssociateShellFrameAppThreads(a1, a2);
            if ( (_DWORD)result )
            {
              ThreadLock(*(_QWORD *)(*(_QWORD *)(a1 + 432) + 120LL), &v20);
              LockW32Thread(a2, &v18);
              v11 = zzzAttachThreadInput(a1, a2, 0x4000);
              v15 = ThreadUnlock1(v13, v12, v14);
              if ( v11 >= 0 )
              {
                *(_DWORD *)(a2 + 1272) |= 0x80000u;
                tagQ::LockFocusWnd(*(_QWORD *)(a1 + 432), *(_QWORD *)(*(_QWORD *)(a1 + 432) + 128LL), 0LL);
                if ( v15 )
                {
                  v16 = *(_QWORD *)(a2 + 432);
                  if ( *(_QWORD *)(*(_QWORD *)(v15 + 16) + 432LL) == v16 )
                    tagQ::LockFocusWnd(v16, v15, 0LL);
                }
                v17 = *(_QWORD *)(a1 + 1432);
                if ( v17 )
                  PostMessage(v17, 0x348u, 1uLL, 0LL);
              }
              return PopAndFreeW32ThreadLock((__int64)&v18);
            }
          }
        }
      }
    }
  }
  return result;
}
