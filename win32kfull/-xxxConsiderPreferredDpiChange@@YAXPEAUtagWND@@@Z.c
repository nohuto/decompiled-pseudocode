/*
 * XREFs of ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1C0222570
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C0099554 (xxxNotifyMonitorChanged.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 */

void __fastcall xxxConsiderPreferredDpiChange(struct tagWND *a1)
{
  __int64 v2; // r8
  __int16 v3; // dx

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 3 && IsTopLevelWindow((__int64)a1) )
  {
    v3 = *(_WORD *)(*(_QWORD *)(ValidateHmonitorNoRip(*(_QWORD *)(v2 + 256)) + 40) + 84LL);
    if ( ((*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) & 0x1FF) != v3 && *((_WORD *)a1 + 152) != v3 )
    {
      *((_WORD *)a1 + 152) = v3;
      xxxSendMessage(a1, 0x2E6u);
    }
  }
}
