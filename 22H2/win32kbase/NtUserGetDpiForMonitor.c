/*
 * XREFs of NtUserGetDpiForMonitor @ 0x1C005DE70
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C004D320 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EngMulDiv @ 0x1C005A530 (EngMulDiv.c)
 *     HMValidateSharedHandle @ 0x1C005E0B0 (HMValidateSharedHandle.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C005E15C (DrvGetCurrentDpiInfoFromHDev.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     UserSetLastStatus @ 0x1C00CDAF4 (UserSetLastStatus.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 */

__int64 __fastcall NtUserGetDpiForMonitor(__int64 a1, __int64 a2, INT *a3, INT *a4)
{
  int v4; // r13d
  INT v6; // esi
  INT v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r15
  int v11; // r12d
  __int64 v12; // r8
  _DWORD *v13; // rdx
  ULONG64 v14; // rcx
  __int64 v15; // r9
  _DWORD *v16; // rdx
  INT v18; // edi
  NTSTATUS CurrentDpiInfoFromHDev; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rdx
  INT v26; // edx
  INT v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // rax
  INT v30; // edx
  INT v31; // ebx
  INT v32; // eax
  INT v33[28]; // [rsp+30h] [rbp-98h] BYREF

  v4 = a2;
  v6 = 0;
  v7 = 0;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, (__int64)a3, (__int64)a4);
  v8 = HMValidateSharedHandle(a1);
  v9 = v8;
  if ( !v8 || (v10 = *(_QWORD *)(v8 + 80)) == 0 )
  {
    v11 = 0;
    UserSetLastError(6LL);
    goto LABEL_12;
  }
  if ( v4 )
  {
    v18 = 96;
    memset(v33, 0, 0x60uLL);
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v10, v33);
    if ( CurrentDpiInfoFromHDev < 0 )
    {
      v11 = 0;
      UserSetLastStatus(CurrentDpiInfoFromHDev);
      goto LABEL_12;
    }
    v11 = 1;
    if ( v4 == 2 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
      {
        v6 = v33[10];
        v7 = v33[11];
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
          v25 = CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process )
            v25 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
          v26 = *(unsigned __int16 *)(v25 + 284);
          v18 = v26;
        }
        else
        {
          v26 = 96;
        }
        v27 = *(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 60LL);
        v6 = EngMulDiv(v33[10], v26, v27);
        v7 = EngMulDiv(v33[11], v18, v27);
      }
      if ( (v33[23] & 1) != 0 || (v33[23] & 2) != 0 || !v6 )
      {
        v7 = 0;
        v6 = 0;
        UserSetLastError(50LL);
        v11 = 0;
      }
      goto LABEL_21;
    }
    if ( v4 == 1 )
    {
      if ( !v33[14] || (v33[23] & 2) != 0 )
      {
        v7 = 96;
        v6 = 96;
      }
      else
      {
        v6 = EngMulDiv(v33[14], 96, 100);
        v7 = EngMulDiv(v33[15], 96, 100);
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
      {
        v29 = PsGetCurrentProcessWin32Process(v28);
        if ( v29 )
          v29 &= -(__int64)(*(_QWORD *)v29 != 0LL);
        v30 = *(unsigned __int16 *)(v29 + 284);
        v18 = v30;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
          goto LABEL_21;
        v30 = 96;
      }
      v31 = *(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 60LL);
      v6 = EngMulDiv(v6, v30, v31);
      v7 = EngMulDiv(v7, v18, v31);
    }
LABEL_21:
    if ( SLOBYTE(v33[23]) < 0 )
    {
      v32 = v7;
      v7 = v6;
      v6 = v32;
    }
    goto LABEL_7;
  }
  v11 = 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    v6 = *(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 60LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
  {
    v21 = PsGetCurrentProcessWin32Process(v20);
    v22 = v21;
    if ( v21 )
      v22 = -(__int64)(*(_QWORD *)v21 != 0LL) & v21;
    v6 = *(unsigned __int16 *)(v22 + 284);
  }
  else
  {
    v6 = 96;
  }
  v7 = v6;
LABEL_7:
  v12 = (__int64)a3;
  v13 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v13 = (_DWORD *)MmUserProbeAddress;
  *v13 = *v13;
  v14 = MmUserProbeAddress;
  v15 = (__int64)a4;
  v16 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v16 = (_DWORD *)MmUserProbeAddress;
  *v16 = *v16;
  *a3 = v6;
  *a4 = v7;
LABEL_12:
  UserSessionSwitchLeaveCrit(v14, (__int64)v16, v12, v15);
  return v11;
}
