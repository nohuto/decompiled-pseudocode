/*
 * XREFs of UserGetMonitorDC @ 0x1C0071A64
 * Callers:
 *     hdcOpenDCW @ 0x1C0071480 (hdcOpenDCW.c)
 * Callees:
 *     GetMonitorDC @ 0x1C00183FC (GetMonitorDC.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 *     GreLockVisRgn @ 0x1C002DE80 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C002E140 (GreUnlockVisRgn.c)
 *     _ReleaseDC @ 0x1C0071B20 (_ReleaseDC.c)
 *     LookupDC @ 0x1C0071B50 (LookupDC.c)
 *     MonitorFromHdev @ 0x1C0071B98 (MonitorFromHdev.c)
 */

__int64 __fastcall UserGetMonitorDC(__int64 a1)
{
  __int64 MonitorDC; // rbx
  struct tagMONITOR *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 DCEx; // rdi
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r8d

  MonitorDC = 0LL;
  v2 = (struct tagMONITOR *)MonitorFromHdev(a1);
  if ( v2 )
  {
    v3 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456);
    if ( v3 )
    {
      DCEx = GetDCEx(*(_QWORD **)(*(_QWORD *)(v3 + 8) + 24LL), 0LL, 8388611LL, v4);
      if ( DCEx )
      {
        GreLockVisRgn(*((_QWORD *)gpDispInfo + 5), v5, v7);
        v8 = LookupDC(DCEx, 1LL);
        MonitorDC = GetMonitorDC(v8, v2, 1);
        ReleaseDC(DCEx);
        GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5), v9, v10);
      }
    }
  }
  return MonitorDC;
}
