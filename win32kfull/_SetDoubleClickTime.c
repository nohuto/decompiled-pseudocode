__int64 __fastcall SetDoubleClickTime(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 i; // rbx
  __int64 v6; // rax

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v3 = *(_QWORD *)(CurrentProcessWin32Process + 656);
  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL) )
    return 0LL;
  if ( v1 )
  {
    if ( v1 > 0x1388 )
      v1 = 5000;
  }
  else
  {
    v1 = 500;
  }
  *(_DWORD *)(SGDGetUserSessionState(v4) + 14360) = v1;
  *(_DWORD *)(gpsi + 4980LL) = 4 * v1;
  *(_DWORD *)(gpsi + 4976LL) = *(_DWORD *)(gpsi + 4980LL) / 5u;
  if ( v3 )
  {
    for ( i = *(_QWORD *)(v3 + 16); i; i = *(_QWORD *)(i + 32) )
    {
      v6 = safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(i + 112));
      InitTooltipDelay(v6);
    }
  }
  return 1LL;
}
