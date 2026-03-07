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
