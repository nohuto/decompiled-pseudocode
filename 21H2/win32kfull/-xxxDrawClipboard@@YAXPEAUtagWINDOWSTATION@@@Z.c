/*
 * XREFs of ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C002D4B0
 * Callers:
 *     xxxCloseClipboard @ 0x1C002FE50 (xxxCloseClipboard.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01238C8 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxSetClipboardViewer @ 0x1C012CA20 (xxxSetClipboardViewer.c)
 * Callees:
 *     _PostMessage @ 0x1C002DC40 (_PostMessage.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C003015C (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C0040370 (xxxSendNotifyMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxDrawClipboard(struct tagWINDOWSTATION *a1)
{
  __int64 v2; // rdi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v4; // r8
  __int64 v5; // rcx
  __int64 i; // rdi
  __int64 v7; // rcx
  unsigned int v8; // eax
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  *((_DWORD *)a1 + 16) &= ~0x40u;
  if ( !*((_QWORD *)a1 + 11) )
  {
    v2 = *((_QWORD *)a1 + 13);
    if ( v2 )
    {
      v9[2] = 0LL;
      *((_QWORD *)a1 + 11) = gptiCurrent;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v9[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v9;
      v9[1] = v2;
      HMLockObject(v2);
      v4 = (_QWORD *)*((_QWORD *)a1 + 14);
      if ( v4 )
        v4 = (_QWORD *)*v4;
      xxxSendNotifyMessage(*((_QWORD *)a1 + 13), 776LL, v4, 0LL, 1);
      ThreadUnlock1(v5);
      *((_QWORD *)a1 + 11) = 0LL;
    }
  }
  for ( i = *((_QWORD *)a1 + 19); i; i = *(_QWORD *)(i + 240) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(i + 16) + 424LL);
    if ( v7 )
      v7 = *(_QWORD *)(v7 + 880);
    v8 = CountNumClipFormatForIL(v7, a1);
    PostMessage(i, 797LL, v8, 0LL);
  }
}
