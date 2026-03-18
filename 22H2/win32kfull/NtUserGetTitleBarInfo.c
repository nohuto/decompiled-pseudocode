/*
 * XREFs of NtUserGetTitleBarInfo @ 0x1C0062D60
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0062F3C (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetTitleBarInfo(__int64 a1, ULONG64 a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagWND *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  _BYTE *v11; // rdx
  __int64 v12; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v18; // [rsp+40h] [rbp-68h] BYREF
  __int64 v19; // [rsp+50h] [rbp-58h]
  _OWORD v20[3]; // [rsp+68h] [rbp-40h] BYREF

  memset(v20, 0, 44);
  v18 = 0LL;
  v19 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  v7 = (struct tagWND *)ValidateHwnd(a1);
  if ( v7 )
  {
    *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v18;
    *((_QWORD *)&v18 + 1) = v7;
    HMLockObject(v7);
    if ( PsGetCurrentProcessWow64Process() )
      v10 = 0LL;
    else
      v10 = 3LL;
    if ( (v10 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v11 = (_BYTE *)MmUserProbeAddress;
    *v11 = *v11;
    v11[43] = v11[43];
    LODWORD(v20[0]) = *(_DWORD *)a2;
    if ( LODWORD(v20[0]) == 44 )
    {
      memset((char *)&v20[1] + 4, 0, 24);
      xxxCommonGetTitleBarInfo(v7, (struct tagTITLEBARINFO *)v20);
    }
    else
    {
      UserSetLastError(87LL);
      v4 = 0;
    }
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v12);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v7, CurrentThreadDpiAwarenessContext) )
      TransformRectBetweenCoordinateSpaces((char *)v20 + 4, (char *)v20 + 4, 0LL, v7);
    if ( v4 )
    {
      *(_OWORD *)a2 = v20[0];
      *(_OWORD *)(a2 + 16) = v20[1];
      *(_QWORD *)(a2 + 32) = *(_QWORD *)&v20[2];
      *(_DWORD *)(a2 + 40) = DWORD2(v20[2]);
    }
    ThreadUnlock1(v15, v14, v16);
  }
  else
  {
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v4;
}
