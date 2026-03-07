void __fastcall StartScreenSaver(__int64 a1)
{
  __int64 v1; // rdi
  __int64 GlobalTickCount; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx

  v1 = (int)a1;
  if ( !gppiScreenSaver && (*(_DWORD *)(SGDGetUserSessionState(a1) + 3152) & 1) == 0 )
  {
    GlobalTickCount = CInputGlobals::GetGlobalTickCount(gpInputGlobals, 1LL);
    if ( GlobalTickCount != CInputGlobals::GetLastInputTime(gpInputGlobals) )
    {
      if ( !gProtocolType && !*(_DWORD *)(SGDGetUserSessionState(v3) + 2952) )
      {
        v4 = 2LL;
        goto LABEL_10;
      }
      if ( !(_DWORD)v1 || (*gpsi & 0x200) != 0 )
      {
        v4 = v1;
LABEL_10:
        if ( (int)PostWinlogonMessage(1024LL, v4) >= 0 )
        {
          CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 1LL);
          SetTimerCoalescingTolerance(3LL);
        }
      }
    }
  }
}
