/*
 * XREFs of NtUserGetCursorInfo @ 0x1C0009CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C0009E08 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C003B230 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetCursorInfo(ULONG64 a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  _BYTE *v6; // rdx
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  v2 = EnterSharedCrit();
  v3 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(2u) && ((v4 = *(_QWORD *)(v2 + 456)) == 0 || v4 == grpdeskRitInput) )
  {
    _GetCursorInfo((struct tagCURSORINFO *)&v8);
    if ( PsGetCurrentProcessWow64Process() )
      v5 = 0LL;
    else
      v5 = 3LL;
    if ( (v5 & a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = (_BYTE *)a1;
    if ( a1 >= MmUserProbeAddress )
      v6 = (_BYTE *)MmUserProbeAddress;
    *v6 = *v6;
    v6[23] = v6[23];
    if ( *(_DWORD *)a1 == 24 )
    {
      *(_OWORD *)a1 = v8;
      *(_QWORD *)(a1 + 16) = v9;
      v3 = 1;
    }
    else
    {
      UserSetLastError(87LL);
    }
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
