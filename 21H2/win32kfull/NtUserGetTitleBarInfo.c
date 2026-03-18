/*
 * XREFs of NtUserGetTitleBarInfo @ 0x1C0066AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0066D38 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetTitleBarInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rcx
  struct tagWND *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  _BYTE *v8; // rdx
  int v9; // edi
  __int64 v10; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 *v16; // rax
  unsigned int v17; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int128 v20; // [rsp+40h] [rbp-78h] BYREF
  __int64 v21; // [rsp+50h] [rbp-68h]
  _OWORD v22[3]; // [rsp+68h] [rbp-50h] BYREF

  memset(v22, 0, 44);
  v20 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 1LL);
  v5 = (struct tagWND *)ValidateHwnd(a1);
  if ( v5 )
  {
    *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v20;
    *((_QWORD *)&v20 + 1) = v5;
    HMLockObject(v5);
    if ( PsGetCurrentProcessWow64Process(v6) )
      v7 = 0LL;
    else
      v7 = 3LL;
    if ( (v7 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[43] = v8[43];
    LODWORD(v22[0]) = *(_DWORD *)a2;
    if ( LODWORD(v22[0]) == 44 )
    {
      memset((char *)&v22[1] + 4, 0, 24);
      xxxCommonGetTitleBarInfo(v5, (struct tagTITLEBARINFO *)v22);
      v9 = 1;
    }
    else
    {
      UserSetLastError(87LL);
      v9 = 0;
    }
    v10 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v10 = *ThreadWin32Thread;
    if ( (*(_BYTE *)(*(_QWORD *)(v10 + 480) + 224LL) & 1) == 0 )
    {
      v15 = 0LL;
      v16 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v16 )
        v15 = *v16;
      if ( (*(_BYTE *)(*(_QWORD *)(v15 + 480) + 224LL) & 0x20) == 0 )
      {
        v17 = *(_DWORD *)(*((_QWORD *)v5 + 5) + 288LL);
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v13, v12);
        v13 = 511LL;
        if ( (((unsigned __int16)(v17 >> 8) ^ (unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8)) & 0x1FF) != 0 )
          TransformRectBetweenCoordinateSpaces((char *)v22 + 4, (char *)v22 + 4, 0LL, v5);
      }
    }
    if ( v9 )
    {
      *(_OWORD *)a2 = v22[0];
      *(_OWORD *)(a2 + 16) = v22[1];
      *(_QWORD *)(a2 + 32) = *(_QWORD *)&v22[2];
      *(_DWORD *)(a2 + 40) = DWORD2(v22[2]);
    }
    ThreadUnlock1(v13, v12, v14);
  }
  else
  {
    v9 = 0;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v9;
}
