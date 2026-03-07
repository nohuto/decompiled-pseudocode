__int64 __fastcall NtUserGetTitleBarInfo(__int64 a1, ULONG64 a2)
{
  int v4; // edi
  __int64 v5; // rcx
  struct tagWND *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  __int64 v10; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+40h] [rbp-68h] BYREF
  __int64 v17; // [rsp+50h] [rbp-58h]
  _OWORD v18[3]; // [rsp+68h] [rbp-40h] BYREF

  memset(v18, 0, 44);
  v16 = 0LL;
  v17 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  v6 = (struct tagWND *)ValidateHwnd(a1);
  if ( v6 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v6;
    HMLockObject(v6);
    if ( PsGetCurrentProcessWow64Process(v7) )
      v8 = 0LL;
    else
      v8 = 3LL;
    if ( (v8 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[43] = v9[43];
    LODWORD(v18[0]) = *(_DWORD *)a2;
    if ( LODWORD(v18[0]) == 44 )
    {
      memset((char *)&v18[1] + 4, 0, 24);
      xxxCommonGetTitleBarInfo(v6, (struct tagTITLEBARINFO *)v18);
    }
    else
    {
      UserSetLastError(87);
      v4 = 0;
    }
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v10);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v6, CurrentThreadDpiAwarenessContext) )
      TransformRectBetweenCoordinateSpaces((char *)v18 + 4, (char *)v18 + 4, 0LL, v6);
    if ( v4 )
    {
      *(_OWORD *)a2 = v18[0];
      *(_OWORD *)(a2 + 16) = v18[1];
      *(_QWORD *)(a2 + 32) = *(_QWORD *)&v18[2];
      *(_DWORD *)(a2 + 40) = DWORD2(v18[2]);
    }
    ThreadUnlock1(v13, v12, v14);
  }
  else
  {
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
