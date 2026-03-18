/*
 * XREFs of NtUserGetScrollBarInfo @ 0x1C0064D00
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetScrollBarInfo @ 0x1C0064F60 (xxxGetScrollBarInfo.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetScrollBarInfo(__int64 a1, __int64 a2, ULONG64 a3)
{
  __int64 v5; // rcx
  ULONG_PTR v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  int ScrollBarInfo; // edi
  __int64 v11; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 *v17; // rax
  unsigned int v18; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int128 v21; // [rsp+40h] [rbp-88h] BYREF
  __int64 v22; // [rsp+50h] [rbp-78h]
  __int128 v23; // [rsp+68h] [rbp-60h] BYREF
  __int128 v24; // [rsp+78h] [rbp-50h]
  __int128 v25; // [rsp+88h] [rbp-40h]
  __int64 v26; // [rsp+98h] [rbp-30h]
  int v27; // [rsp+A0h] [rbp-28h]

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v21;
    *((_QWORD *)&v21 + 1) = v6;
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
    LODWORD(v23) = *(_DWORD *)a3;
    ScrollBarInfo = xxxGetScrollBarInfo(v6);
    v11 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
    v15 = *(_QWORD *)(v11 + 480);
    if ( (*(_BYTE *)(v15 + 224) & 1) == 0 )
    {
      v16 = 0LL;
      v17 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v17 )
        v16 = *v17;
      if ( (*(_BYTE *)(*(_QWORD *)(v16 + 480) + 224LL) & 0x20) == 0 )
      {
        v18 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL);
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v15, v13);
        v15 = 511LL;
        if ( (((unsigned __int16)(v18 >> 8) ^ (unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8)) & 0x1FF) != 0 )
          TransformRectBetweenCoordinateSpaces((char *)&v23 + 4, (char *)&v23 + 4, 0LL, v6);
      }
    }
    if ( ScrollBarInfo )
    {
      *(_OWORD *)a3 = v23;
      *(_OWORD *)(a3 + 16) = v24;
      *(_OWORD *)(a3 + 32) = v25;
      *(_QWORD *)(a3 + 48) = v26;
      *(_DWORD *)(a3 + 56) = v27;
    }
    ThreadUnlock1(v15, v13, v14);
  }
  else
  {
    ScrollBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return ScrollBarInfo;
}
