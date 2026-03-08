/*
 * XREFs of ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FF92C
 * Callers:
 *     xxxCloseClipboard @ 0x1C0010580 (xxxCloseClipboard.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01FF7D8 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxSetClipboardViewer @ 0x1C0200B44 (xxxSetClipboardViewer.c)
 * Callees:
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C0015634 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C00D8320 (xxxSendNotifyMessage.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 */

void __fastcall xxxDrawClipboard(struct tagWINDOWSTATION *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 i; // rdi
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  *((_DWORD *)a1 + 16) &= ~0x40u;
  if ( !*((_QWORD *)a1 + 11) )
  {
    v2 = *((_QWORD *)a1 + 13);
    if ( v2 )
    {
      v11 = 0LL;
      v10 = 0LL;
      *((_QWORD *)a1 + 11) = gptiCurrent;
      ThreadLockAlways(v2, &v10);
      v3 = (_QWORD *)*((_QWORD *)a1 + 14);
      if ( v3 )
        v3 = (_QWORD *)*v3;
      xxxSendNotifyMessage(*((struct tagTHREADINFO ***)a1 + 13), 0x308u, (unsigned __int64)v3, 0LL, 1);
      ThreadUnlock1(v5, v4, v6);
      *((_QWORD *)a1 + 11) = 0LL;
    }
  }
  for ( i = *((_QWORD *)a1 + 19); i; i = *(_QWORD *)(i + 240) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(i + 16) + 424LL);
    if ( v8 )
      v8 = *(_QWORD *)(v8 + 864);
    v9 = CountNumClipFormatForIL(v8, (__int64)a1);
    PostMessage(i, 0x31Du, v9, 0LL);
  }
}
