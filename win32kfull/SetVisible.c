__int64 __fastcall SetVisible(struct tagWND *a1, unsigned int a2)
{
  unsigned int v4; // edi
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v9; // r14d
  int v10; // eax
  int v11; // edx
  int v12; // r8d
  int v13; // r9d

  v4 = 0;
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
  {
    if ( (a2 & 1) != 0 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
        return v4;
      if ( (*((_DWORD *)a1 + 80) & 4) != 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x15u)
          || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v5) = 0;
        }
        if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v5,
            v6,
            v7,
            4,
            22,
            16,
            (__int64)&WPP_79e939fa1d4d36fcf42089c5c6e082fd_Traceguids,
            (char)a1);
        }
        zzzSetWindowCompositionCloak(a1, 0LL, 2u);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x15u)
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            v12,
            v13,
            4,
            22,
            17,
            (__int64)&WPP_79e939fa1d4d36fcf42089c5c6e082fd_Traceguids,
            (char)a1);
        }
        *((_DWORD *)a1 + 80) &= ~4u;
      }
      SetOrClrWF(1LL, a1, 3856LL, 1LL);
      SetOrClrWF(((a2 >> 4) & 1) == 0, a1, 2312LL, 1LL);
      IncVisWindows(a1);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
        IncrementCompositedCount((__int64)a1);
      if ( (a2 & 4) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
        ComposeWindowIfNeeded(a1, 0);
      if ( (a2 & 8) == 0 )
        CalcWindowFullScreen(a1);
      if ( (unsigned __int8)IsTrayWindow(a1, 1LL) )
        PostIAMShellHookMessage(17LL, *(_QWORD *)a1);
    }
    else
    {
      if ( (a2 & 2) != 0 )
        ClrFTrueVis(a1);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
        return v4;
      if ( !(unsigned __int8)IsTrayWindow(a1, 1LL) || (v9 = 1, !(unsigned int)IsWindowVisible((__int64)a1)) )
        v9 = 0;
      SetOrClrWF(0LL, a1, 3856LL, 1LL);
      if ( (a2 & 0x10) != 0 )
      {
        SetOrClrWF(1LL, a1, 2312LL, 1LL);
      }
      else
      {
        SetOrClrWF(0LL, a1, 2312LL, 1LL);
        if ( v9 )
          PostIAMShellHookMessage(22LL, *(_QWORD *)a1);
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
        DecrementCompositedCount();
      DecVisWindows(a1);
      if ( (a2 & 8) == 0 )
      {
        v10 = *((_DWORD *)a1 + 80);
        if ( (v10 & 0x400) != 0 )
        {
          *((_DWORD *)a1 + 80) = v10 & 0xFFFFFBFF;
          PostShellHookMessagesEx(0x36uLL, *(_QWORD *)a1, 0LL);
        }
      }
    }
    return 1;
  }
  return 0LL;
}
