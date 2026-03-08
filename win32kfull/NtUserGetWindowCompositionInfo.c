/*
 * XREFs of NtUserGetWindowCompositionInfo @ 0x1C00E9E40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0043348 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
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
  ULONG v15; // eax
  _OWORD v16[4]; // [rsp+70h] [rbp-68h] BYREF

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
  memset_0(v16, 0, sizeof(v16));
  EnterSharedCrit(v9, v8, v10);
  v11 = (const struct tagWND *)ValidateHwnd(a1);
  if ( v11 && (unsigned int)_GetWindowCompositionInfo(v11, (struct WINDOWCOMPOSITIONINFO *)v16) )
  {
    *(_OWORD *)a2 = v16[0];
    *(_OWORD *)(a2 + 16) = v16[1];
    *(_OWORD *)(a2 + 32) = v16[2];
    *(_OWORD *)(a2 + 48) = v16[3];
  }
  else
  {
    v7 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v12);
  v13 = v7 < 0;
  if ( v7 < 0 )
  {
    v15 = RtlNtStatusToDosError(v7);
    UserSetLastError(v15);
    v13 = v7 < 0;
  }
  LOBYTE(v4) = !v13;
  return v4;
}
