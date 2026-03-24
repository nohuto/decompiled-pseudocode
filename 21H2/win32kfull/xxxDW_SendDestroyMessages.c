/*
 * XREFs of xxxDW_SendDestroyMessages @ 0x1C007E71C
 * Callers:
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C007E71C (xxxDW_SendDestroyMessages.c)
 * Callees:
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     xxxDW_SendDestroyMessages @ 0x1C007E71C (xxxDW_SendDestroyMessages.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C007E8C0 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01238C8 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall xxxDW_SendDestroyMessages(unsigned __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  xxxMoveFocusAway((const struct tagWND *)a1);
  v3 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v2) + 664);
  if ( v3 && a1 == *(_QWORD *)(v3 + 112) )
  {
    xxxDisownClipboard((struct tagWND *)a1);
  }
  else if ( grpWinStaList && a1 == *(_QWORD *)(grpWinStaList + 112LL) )
  {
    HMAssignmentUnlock(grpWinStaList + 112LL);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) & 4) != 0 )
  {
    xxxSendMessage(a1, 0x272u, 0LL, 0LL);
    *(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) &= ~4u;
  }
  xxxSendMessage(a1, 2u, 0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 88);
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v10 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v10;
      *((_QWORD *)&v10 + 1) = v5;
      if ( v5 )
        HMLockObject(v5);
      v7 = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v12 = *(_QWORD *)(v7 + 416);
      *(_QWORD *)(v7 + 416) = &v12;
      *((_QWORD *)&v12 + 1) = v4;
      HMLockObject(v4);
      xxxDW_SendDestroyMessages(v4);
      ThreadUnlock1(v8);
      v4 = v5;
    }
    while ( ThreadUnlock1(v9) && v5 );
  }
  xxxMoveFocusAway((const struct tagWND *)a1);
}
