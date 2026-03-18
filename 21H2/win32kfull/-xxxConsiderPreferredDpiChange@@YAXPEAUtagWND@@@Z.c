/*
 * XREFs of ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1C00FE6DC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxNotifyMonitorChanged @ 0x1C007563C (xxxNotifyMonitorChanged.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 */

void __fastcall xxxConsiderPreferredDpiChange(struct tagWND *a1)
{
  __int64 v2; // r9
  __int16 v3; // dx

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 3 && IsTopLevelWindow((__int64)a1) )
  {
    v3 = *(_WORD *)(*(_QWORD *)(ValidateHmonitorNoRip(*(_QWORD *)(v2 + 256)) + 40) + 84LL);
    if ( ((*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) & 0x1FF) != v3 && *((_WORD *)a1 + 152) != v3 )
    {
      *((_WORD *)a1 + 152) = v3;
      xxxSendMessage((ULONG_PTR)a1);
    }
  }
}
