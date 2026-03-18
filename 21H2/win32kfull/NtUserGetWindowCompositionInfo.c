/*
 * XREFs of NtUserGetWindowCompositionInfo @ 0x1C01F6FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C004D894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall NtUserGetWindowCompositionInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _BYTE *v6; // rdx
  NTSTATUS v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  const struct tagWND *v11; // rax
  __int64 v12; // rcx
  bool v13; // sf
  ULONG v14; // eax
  __int64 v15; // rdx
  _OWORD v17[4]; // [rsp+70h] [rbp-68h] BYREF

  v4 = 0LL;
  if ( PsGetCurrentProcessWow64Process(a1) )
    v5 = 0LL;
  else
    v5 = 3LL;
  if ( (v5 & a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = (_BYTE *)a2;
  if ( a2 >= MmUserProbeAddress )
    v6 = (_BYTE *)MmUserProbeAddress;
  *v6 = *v6;
  v6[63] = v6[63];
  v7 = 0;
  memset(v17, 0, sizeof(v17));
  EnterSharedCrit(v9, v8, v10);
  v11 = (const struct tagWND *)ValidateHwnd(a1);
  if ( v11 && (unsigned int)_GetWindowCompositionInfo(v11, (struct WINDOWCOMPOSITIONINFO *)v17) )
  {
    *(_OWORD *)a2 = v17[0];
    *(_OWORD *)(a2 + 16) = v17[1];
    *(_OWORD *)(a2 + 32) = v17[2];
    *(_OWORD *)(a2 + 48) = v17[3];
  }
  else
  {
    v7 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v12);
  v13 = v7 < 0;
  if ( v7 < 0 )
  {
    v14 = RtlNtStatusToDosError(v7);
    UserSetLastError(v14, v15);
    v13 = v7 < 0;
  }
  LOBYTE(v4) = !v13;
  return v4;
}
