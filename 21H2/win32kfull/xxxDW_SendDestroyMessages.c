/*
 * XREFs of xxxDW_SendDestroyMessages @ 0x1C0062F9C
 * Callers:
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0062F9C (xxxDW_SendDestroyMessages.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0062F9C (xxxDW_SendDestroyMessages.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C0063110 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01459BC (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall xxxDW_SendDestroyMessages(const struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int128 v15; // [rsp+38h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-10h]

  v15 = 0LL;
  v16 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  xxxMoveFocusAway(a1);
  v3 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v2) + 664);
  if ( v3 && a1 == *(const struct tagWND **)(v3 + 112) )
  {
    xxxDisownClipboard(a1);
  }
  else if ( grpWinStaList && a1 == *(const struct tagWND **)(grpWinStaList + 112LL) )
  {
    HMAssignmentUnlock(grpWinStaList + 112LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 232LL) & 0x20) != 0 )
  {
    xxxSendMessage((ULONG_PTR)a1);
    SetOrClrWF(0LL, a1, 55328LL, 0LL);
  }
  xxxSendMessage((ULONG_PTR)a1);
  v4 = *((_QWORD *)a1 + 14);
  if ( v4 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 88);
      ThreadLock(v5, &v15);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v13 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v13;
      *((_QWORD *)&v13 + 1) = v4;
      HMLockObject(v4);
      xxxDW_SendDestroyMessages(v4);
      ThreadUnlock1(v8, v7, v9);
      v4 = v5;
    }
    while ( ThreadUnlock1(v11, v10, v12) && v5 );
  }
  xxxMoveFocusAway(a1);
}
