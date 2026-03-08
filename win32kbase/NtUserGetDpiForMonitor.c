/*
 * XREFs of NtUserGetDpiForMonitor @ 0x1C003DF40
 * Callers:
 *     <none>
 * Callees:
 *     EngMulDiv @ 0x1C003BF30 (EngMulDiv.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C003CAE4 (DrvGetCurrentDpiInfoFromHDev.c)
 *     HMValidateSharedHandle @ 0x1C003DE88 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0041AF0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSetLastStatus @ 0x1C00DA3A4 (UserSetLastStatus.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall NtUserGetDpiForMonitor(__int64 a1, __int64 a2, INT *a3, INT *a4)
{
  int v4; // r13d
  int v5; // ebx
  INT v6; // esi
  INT v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r15
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  INT *v18; // r8
  _DWORD *v19; // rdx
  ULONG64 v20; // rcx
  _DWORD *v21; // rdx
  INT v23; // edi
  NTSTATUS CurrentDpiInfoFromHDev; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v36; // rdx
  INT v37; // edx
  INT v38; // ebx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  INT v44; // edx
  INT v45; // ebx
  INT v46; // eax
  INT v47[28]; // [rsp+30h] [rbp-98h] BYREF

  v4 = a2;
  v5 = a1;
  v6 = 0;
  v7 = 0;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v8 = HMValidateSharedHandle(v5);
  v12 = v8;
  if ( !v8 || (v13 = *(_QWORD *)(v8 + 80)) == 0 )
  {
    v14 = 0;
    UserSetLastError(6LL);
    goto LABEL_12;
  }
  if ( v4 )
  {
    v23 = 96;
    memset(v47, 0, 0x60uLL);
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v13, (__int64)v47);
    if ( CurrentDpiInfoFromHDev < 0 )
    {
      v14 = 0;
      UserSetLastStatus(CurrentDpiInfoFromHDev);
      goto LABEL_12;
    }
    v14 = 1;
    if ( v4 == 2 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v26, v25, v27) & 0xF) == 2 )
      {
        v6 = v47[10];
        v7 = v47[11];
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30) & 0xF) == 1 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v34);
          v36 = CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process )
            v36 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
          v37 = *(unsigned __int16 *)(v36 + 284);
          v23 = v37;
        }
        else
        {
          v37 = 96;
        }
        v38 = *(unsigned __int16 *)(*(_QWORD *)(v12 + 40) + 60LL);
        v6 = EngMulDiv(v47[10], v37, v38);
        v7 = EngMulDiv(v47[11], v23, v38);
      }
      if ( (v47[23] & 1) != 0 || (v47[23] & 2) != 0 || !v6 )
      {
        v7 = 0;
        v6 = 0;
        UserSetLastError(50LL);
        v14 = 0;
      }
      goto LABEL_21;
    }
    if ( v4 == 1 )
    {
      v39 = (unsigned int)v47[14];
      if ( !v47[14] || (v47[23] & 2) != 0 )
      {
        v7 = 96;
        v6 = 96;
      }
      else
      {
        v6 = EngMulDiv(v47[14], 96, 100);
        v7 = EngMulDiv(v47[15], 96, 100);
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext(v39, v25, v27) & 0xF) == 1 )
      {
        v43 = PsGetCurrentProcessWin32Process(v41);
        if ( v43 )
          v43 &= -(__int64)(*(_QWORD *)v43 != 0LL);
        v44 = *(unsigned __int16 *)(v43 + 284);
        v23 = v44;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v41, v40, v42) & 0xF) == 2 )
          goto LABEL_21;
        v44 = 96;
      }
      v45 = *(unsigned __int16 *)(*(_QWORD *)(v12 + 40) + 60LL);
      v6 = EngMulDiv(v6, v44, v45);
      v7 = EngMulDiv(v7, v23, v45);
    }
LABEL_21:
    if ( SLOBYTE(v47[23]) < 0 )
    {
      v46 = v7;
      v7 = v6;
      v6 = v46;
    }
    goto LABEL_7;
  }
  v14 = 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11) & 0xF) == 2 )
  {
    v6 = *(unsigned __int16 *)(*(_QWORD *)(v12 + 40) + 60LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17) & 0xF) == 1 )
  {
    v32 = PsGetCurrentProcessWin32Process(v31);
    v33 = v32;
    if ( v32 )
      v33 = -(__int64)(*(_QWORD *)v32 != 0LL) & v32;
    v6 = *(unsigned __int16 *)(v33 + 284);
  }
  else
  {
    v6 = 96;
  }
  v7 = v6;
LABEL_7:
  v18 = a3;
  v19 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v19 = (_DWORD *)MmUserProbeAddress;
  *v19 = *v19;
  v20 = MmUserProbeAddress;
  v21 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v21 = (_DWORD *)MmUserProbeAddress;
  *v21 = *v21;
  *a3 = v6;
  *a4 = v7;
LABEL_12:
  UserSessionSwitchLeaveCrit(v20, v21, v18);
  return v14;
}
