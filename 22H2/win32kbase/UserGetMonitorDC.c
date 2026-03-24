/*
 * XREFs of UserGetMonitorDC @ 0x1C0022638
 * Callers:
 *     hdcOpenDCW @ 0x1C0022A00 (hdcOpenDCW.c)
 * Callees:
 *     LookupDC @ 0x1C00226F0 (LookupDC.c)
 *     MonitorFromHdev @ 0x1C0022738 (MonitorFromHdev.c)
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C0038070 (_GetDCEx.c)
 *     GreUnlockVisRgn @ 0x1C0039F20 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C003A140 (GreLockVisRgn.c)
 *     _ReleaseDC @ 0x1C003A2C0 (_ReleaseDC.c)
 *     GetMonitorDC @ 0x1C003B0E0 (GetMonitorDC.c)
 */

__int64 UserGetMonitorDC()
{
  __int64 MonitorDC; // rbx
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 DCEx; // rsi
  __int64 v4; // rax

  MonitorDC = 0LL;
  v1 = MonitorFromHdev();
  if ( v1 )
  {
    v2 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456);
    if ( v2 )
    {
      DCEx = GetDCEx(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 24LL), 0LL, 8388611LL);
      if ( DCEx )
      {
        GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
        v4 = LookupDC(DCEx, 1LL);
        MonitorDC = GetMonitorDC(v4, v1, 1LL);
        ReleaseDC(DCEx);
        GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
      }
    }
  }
  return MonitorDC;
}
