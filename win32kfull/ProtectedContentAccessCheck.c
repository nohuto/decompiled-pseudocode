__int64 __fastcall ProtectedContentAccessCheck(__int64 a1)
{
  __int64 TopLevelWindow; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // r8
  __int64 v9; // rcx

  TopLevelWindow = GetTopLevelWindow(a1);
  v3 = TopLevelWindow;
  if ( !TopLevelWindow )
    return 1LL;
  if ( *(char *)(*(_QWORD *)(TopLevelWindow + 40) + 232LL) < 0 )
  {
    v6 = *(_QWORD *)(TopLevelWindow + 16);
    if ( *(_QWORD *)(v6 + 1440) )
      v3 = *(_QWORD *)(v6 + 1440);
  }
  if ( !(unsigned int)IsWindowContentProtected(v3) )
    return 1LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  v8 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  v9 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 424LL);
  if ( v9 == v8 )
    return 1LL;
  if ( v9 == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) )
    return (*(_DWORD *)(gptiCurrent + 1272LL) >> 18) & 1;
  return 0LL;
}
