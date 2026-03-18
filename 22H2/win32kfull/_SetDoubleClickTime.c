/*
 * XREFs of _SetDoubleClickTime @ 0x1C001C0AC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 *     NtUserSetDoubleClickTime @ 0x1C01DBA20 (NtUserSetDoubleClickTime.c)
 * Callees:
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C001C188 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     InitTooltipDelay @ 0x1C001C208 (InitTooltipDelay.c)
 *     CheckWinstaAttributeAccess @ 0x1C00438D0 (CheckWinstaAttributeAccess.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139CA0 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall SetDoubleClickTime(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 i; // rbx
  __int64 v7; // rax

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v3 = *(_QWORD *)(CurrentProcessWin32Process + 656);
  result = CheckWinstaAttributeAccess(0x10u);
  if ( (_DWORD)result )
  {
    if ( v1 )
    {
      if ( v1 > 0x1388 )
        v1 = 5000;
    }
    else
    {
      v1 = 500;
    }
    *(_DWORD *)(SGDGetUserSessionState(v5) + 14360) = v1;
    *(_DWORD *)(gpsi + 4980LL) = 4 * v1;
    *(_DWORD *)(gpsi + 4976LL) = *(_DWORD *)(gpsi + 4980LL) / 5u;
    if ( !(unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage() && v3 )
    {
      for ( i = *(_QWORD *)(v3 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        v7 = safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(i + 112));
        InitTooltipDelay(v7);
      }
    }
    return 1LL;
  }
  return result;
}
