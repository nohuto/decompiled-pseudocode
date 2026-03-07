__int64 __fastcall InteractiveControlDefaultScroller::GenerateWheelMessage(
        InteractiveControlDefaultScroller *this,
        __int16 a2,
        struct tagWND *a3)
{
  int v3; // r15d
  __int64 v4; // r14
  struct tagWND *v8; // r9
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v13; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+34h] [rbp-3Ch]
  __int128 v15; // [rsp+38h] [rbp-38h]
  __int128 v16; // [rsp+48h] [rbp-28h]
  __int64 v17; // [rsp+58h] [rbp-18h]

  v3 = *((_DWORD *)this + 14);
  v4 = *((_QWORD *)a3 + 2);
  v17 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    if ( (unsigned int)IsCompositionInputWindow(a3) && (v8 = *(struct tagWND **)(*(_QWORD *)(v4 + 432) + 128LL)) != 0LL )
    {
      v9 = *(_OWORD *)(*((_QWORD *)v8 + 5) + 104LL);
    }
    else
    {
      v8 = a3;
      v9 = *(_OWORD *)(*((_QWORD *)a3 + 5) + 88LL);
    }
    v15 = v9;
    v13 = v9 + (DWORD2(v9) - (int)v9) / 2;
    v14 = DWORD1(v9) + (HIDWORD(v9) - DWORD1(v9)) / 2;
    LogicalToPhysicalDPIPoint(&v13, &v13, *(unsigned int *)(*((_QWORD *)v8 + 5) + 288LL), 0LL);
    if ( v3 == 2 && !(unsigned int)InteractiveControlDefaultScroller::SendZoomHotkey(this, a2) )
      goto LABEL_9;
    KeQueryPerformanceCounter(0LL);
    *(_DWORD *)((char *)&v16 + 2) = 67109120;
    WORD3(v16) = a2;
    InputTraceLogging::Mouse::InjectInput();
    UserSessionSwitchLeaveCrit(v10);
    HIDWORD(v16) = v13;
    LODWORD(v17) = v14;
    Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage();
    SynthesizeMouseInput(0LL);
    ProcessMouseEvent(v11);
    EnterCrit(1LL, 0LL);
    if ( v3 == 2 )
LABEL_9:
      InteractiveControlDefaultScroller::SendZoomModifiers(*((_BYTE *)this + 53), 0);
  }
  return 0LL;
}
