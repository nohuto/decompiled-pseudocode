/*
 * XREFs of ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x1803BCAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InputAppSuspended@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1803BB5C8 (-InputAppSuspended@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?InputAppSuspending@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1803BB660 (-InputAppSuspending@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1803CF638 (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1803CF70C (-OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1803D1DD8 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnApplicationStateChanged(__int64 a1, __int64 a2, int a3)
{
  RTL_SRWLOCK *v3; // rsi
  __int64 v6; // rcx
  _WORD *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (RTL_SRWLOCK *)(a1 + 520);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 520));
  v6 = (unsigned int)(a3 - 1);
  if ( a3 == 1 )
  {
    *(_DWORD *)(a1 + 512) = *(_DWORD *)(a1 + 512) != 4;
  }
  else
  {
    v6 = (unsigned int)(a3 - 2);
    if ( a3 == 2 )
    {
      *(_DWORD *)(a1 + 512) = 2;
    }
    else
    {
      v6 = (unsigned int)(a3 - 4);
      if ( a3 == 4 )
      {
        *(_DWORD *)(a1 + 512) = 3;
      }
      else if ( a3 == 8 )
      {
        *(_DWORD *)(a1 + 512) = 4;
      }
    }
  }
  *(_BYTE *)(a1 + 516) = 0;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  switch ( a3 )
  {
    case 1:
      KeyboardHosting::TabTipAdapter::OnInputAppResumed(*(KeyboardHosting::TabTipAdapter **)(a1 + 528));
      break;
    case 8:
      v7 = (_WORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 360) >= 8uLL )
        v7 = *(_WORD **)(a1 + 336);
      *(_QWORD *)(a1 + 352) = 0LL;
      *v7 = 0;
      KeyboardHosting::TabTipAdapter::OnInputAppTerminated(*(KeyboardHosting::TabTipAdapter **)(a1 + 528));
      v8 = KeyboardHosting::TabTipAdapter::RelaunchInputAppAfterTermination(*(KeyboardHosting::TabTipAdapter **)(a1 + 528));
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x429,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
      break;
    case 2:
      TouchKeyboardExperienceTelemetryLogger::InputAppSuspending(v6);
      break;
    case 4:
      TouchKeyboardExperienceTelemetryLogger::InputAppSuspended(v6);
      break;
  }
  return 0LL;
}
