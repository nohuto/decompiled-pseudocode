__int64 __fastcall PhysicalToLogicalDPIPoint(_QWORD *a1, _QWORD *a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v9; // rbx
  unsigned __int16 v10; // di
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || (int)Is_MonitorFromPointSupported() < 0 )
  {
    *a1 = *a2;
    return 0LL;
  }
  else
  {
    if ( a4 && (v9 = *a4) != 0 || (!qword_1C02D71A8 ? (v9 = 0LL) : (v9 = qword_1C02D71A8(*a2, 2LL, 18LL)), a4) )
      *a4 = v9;
    GetMonitorRectForDpi(&v11, v9, 0LL);
    v10 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    GetMonitorRectForDpi(v12, v9, v10);
    ScaleDPIPt((_DWORD)a1, (_DWORD)a2, v10, *(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 60LL), v12[0], v11);
    return 1LL;
  }
}
