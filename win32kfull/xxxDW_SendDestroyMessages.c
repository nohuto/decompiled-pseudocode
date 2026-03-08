/*
 * XREFs of xxxDW_SendDestroyMessages @ 0x1C0027A4C
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C0027A4C (xxxDW_SendDestroyMessages.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 * Callees:
 *     xxxDW_SendDestroyMessages @ 0x1C0027A4C (xxxDW_SendDestroyMessages.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C0027B98 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01FF7D8 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall xxxDW_SendDestroyMessages(const struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
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

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  xxxMoveFocusAway(a1);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v4 = *(_QWORD *)(CurrentProcessWin32Process + 656);
  if ( v4 && a1 == *(const struct tagWND **)(v4 + 112) )
  {
    xxxDisownClipboard(a1);
  }
  else if ( grpWinStaList && a1 == *(const struct tagWND **)(grpWinStaList + 112LL) )
  {
    HMAssignmentUnlock(grpWinStaList + 112LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 232LL) & 0x20) != 0 )
  {
    xxxSendMessage(a1, 626LL, 0LL, 0LL);
    *(_BYTE *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x20u;
  }
  xxxSendMessage(a1, 2LL, 0LL, 0LL);
  v5 = *((_QWORD *)a1 + 14);
  if ( v5 )
  {
    do
    {
      v6 = *(_QWORD *)(v5 + 88);
      ThreadLock(v6, &v13);
      ThreadLockAlways(v5, &v15);
      xxxDW_SendDestroyMessages(v5);
      ThreadUnlock1(v8, v7, v9);
      v5 = v6;
    }
    while ( ThreadUnlock1(v11, v10, v12) && v6 );
  }
  xxxMoveFocusAway(a1);
}
