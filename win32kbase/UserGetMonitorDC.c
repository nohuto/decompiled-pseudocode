/*
 * XREFs of UserGetMonitorDC @ 0x1C003BFDC
 * Callers:
 *     hdcOpenDCW @ 0x1C003C8E0 (hdcOpenDCW.c)
 * Callees:
 *     MonitorFromHdev @ 0x1C003C08C (MonitorFromHdev.c)
 *     LookupDC @ 0x1C003C0C0 (LookupDC.c)
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 *     _ReleaseDC @ 0x1C003EAA0 (_ReleaseDC.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreLockVisRgn @ 0x1C00794E0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C00795D0 (GreUnlockVisRgn.c)
 */

__int64 __fastcall UserGetMonitorDC(__int64 a1)
{
  __int64 MonitorDC; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 DCEx; // rsi
  __int64 v5; // rax

  MonitorDC = 0LL;
  v2 = MonitorFromHdev(a1);
  if ( v2 )
  {
    v3 = *((_QWORD *)PtiCurrentShared() + 57);
    if ( v3 )
    {
      DCEx = GetDCEx(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 24LL), 0LL, 8388611LL);
      if ( DCEx )
      {
        GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
        v5 = LookupDC(DCEx, 1LL);
        MonitorDC = GetMonitorDC(v5, v2, 1LL);
        ReleaseDC(DCEx);
        GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
      }
    }
  }
  return MonitorDC;
}
