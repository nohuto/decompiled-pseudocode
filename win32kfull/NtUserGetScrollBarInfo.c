__int64 __fastcall NtUserGetScrollBarInfo(__int64 a1, __int64 a2, ULONG64 a3)
{
  __int64 v5; // rcx
  struct tagWND *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  int ScrollBarInfo; // ebx
  __int64 v11; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v17; // [rsp+40h] [rbp-88h] BYREF
  __int64 v18; // [rsp+50h] [rbp-78h]
  __int128 v19; // [rsp+68h] [rbp-60h] BYREF
  __int128 v20; // [rsp+78h] [rbp-50h]
  __int128 v21; // [rsp+88h] [rbp-40h]
  __int64 v22; // [rsp+98h] [rbp-30h]
  int v23; // [rsp+A0h] [rbp-28h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = (struct tagWND *)ValidateHwnd(a1);
  if ( v6 )
  {
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v17;
    *((_QWORD *)&v17 + 1) = v6;
    HMLockObject(v6);
    if ( PsGetCurrentProcessWow64Process(v7) )
      v8 = 0LL;
    else
      v8 = 3LL;
    if ( (v8 & a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[59] = v9[59];
    LODWORD(v19) = *(_DWORD *)a3;
    ScrollBarInfo = xxxGetScrollBarInfo(v6);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v6, CurrentThreadDpiAwarenessContext) )
      TransformRectBetweenCoordinateSpaces((char *)&v19 + 4, (char *)&v19 + 4, 0LL, v6);
    if ( ScrollBarInfo )
    {
      *(_OWORD *)a3 = v19;
      *(_OWORD *)(a3 + 16) = v20;
      *(_OWORD *)(a3 + 32) = v21;
      *(_QWORD *)(a3 + 48) = v22;
      *(_DWORD *)(a3 + 56) = v23;
    }
    ThreadUnlock1(v14, v13, v15);
  }
  else
  {
    ScrollBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return ScrollBarInfo;
}
