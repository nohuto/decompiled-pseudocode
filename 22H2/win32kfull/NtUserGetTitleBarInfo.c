/*
 * XREFs of NtUserGetTitleBarInfo @ 0x1C005DC60
 * Callers:
 *     <none>
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C005D000 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0060FB4 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetTitleBarInfo(__int64 a1, ULONG64 a2)
{
  ULONG64 v2; // r14
  int v4; // r13d
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  __int64 v10; // rcx
  int v11; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rcx
  struct _KTHREAD *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // rax
  int v25; // r14d
  unsigned int v26; // edi
  struct _KTHREAD *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v35; // rcx
  int v36; // edi
  struct _KTHREAD *v37; // r12
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // rax
  __int64 v43; // rax
  struct _KTHREAD *v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 *v49; // rax
  __int64 v50; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v54; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v56; // rax
  int v57; // ebx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // ebx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  int v65; // ebx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // ebx
  __int64 v70; // rcx
  __int64 v71; // rax
  unsigned int v72; // [rsp+20h] [rbp-C8h]
  int v73; // [rsp+20h] [rbp-C8h]
  __int64 v74; // [rsp+38h] [rbp-B0h]
  __int128 v76; // [rsp+58h] [rbp-90h] BYREF
  __int64 v77; // [rsp+68h] [rbp-80h]
  _OWORD v78[3]; // [rsp+80h] [rbp-68h] BYREF

  v2 = a2;
  memset(v78, 0, 44);
  v76 = 0LL;
  v77 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v6 = ValidateHwnd(a1);
  v74 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v76 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v76;
    *((_QWORD *)&v76 + 1) = v6;
    HMLockObject(v6);
    if ( PsGetCurrentProcessWow64Process(v7) )
      v8 = 0LL;
    else
      v8 = 3LL;
    if ( (v2 & v8) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)v2;
    if ( v2 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[43] = v9[43];
    LODWORD(v78[0]) = *(_DWORD *)v2;
    if ( LODWORD(v78[0]) == 44 )
    {
      memset((char *)&v78[1] + 4, 0, 24);
      xxxCommonGetTitleBarInfo((struct tagWND *)v6, (struct tagTITLEBARINFO *)v78);
      v11 = 1;
    }
    else
    {
      UserSetLastError(87LL);
      v11 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    v13 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v10)
      || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v54),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v13 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v13 + 480) + 224LL) & 1) == 0 )
    {
      v19 = KeGetCurrentThread();
      v20 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v18)
        || (v56 = PsGetCurrentProcess(v22, v21, v23),
            v57 = PsGetProcessSessionIdEx(v56),
            v59 = PsGetCurrentThreadProcess(v58),
            v57 == (unsigned int)PsGetProcessSessionIdEx(v59)) )
      {
        v24 = (__int64 *)PsGetThreadWin32Thread(v19);
        if ( v24 )
          v20 = *v24;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v20 + 480) + 224LL) & 0x20) == 0 )
      {
        v72 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL);
        v25 = 18;
        v26 = 18;
        v27 = KeGetCurrentThread();
        v28 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v72)
          || (v60 = PsGetCurrentProcess(v30, v29, v31),
              v61 = PsGetProcessSessionIdEx(v60),
              v63 = PsGetCurrentThreadProcess(v62),
              v61 == (unsigned int)PsGetProcessSessionIdEx(v63)) )
        {
          v32 = (__int64 *)PsGetThreadWin32Thread(v27);
          if ( v32 )
            v28 = *v32;
        }
        if ( v28 )
        {
          if ( *(_QWORD *)(v28 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v28);
          if ( *(_DWORD *)(v28 + 340) )
          {
            v26 = *(_DWORD *)(v28 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33);
            if ( CurrentProcessWin32Process )
              v26 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
          if ( (*(_DWORD *)(v28 + 328) & 4) != 0 && (v26 & 0xF) == 2 && (v26 & 0xF0) == 0x20 )
            v26 |= 0x20000000u;
        }
        if ( (((unsigned __int16)(v72 >> 8) ^ (unsigned __int16)(v26 >> 8)) & 0x1FF) != 0 )
          goto LABEL_64;
        v35 = *(unsigned int *)(*(_QWORD *)(v74 + 40) + 288LL);
        v73 = (*(_DWORD *)(*(_QWORD *)(v74 + 40) + 288LL) & 0xF) == 2 && (v35 & 0x20000000) != 0;
        LOBYTE(v36) = 18;
        v37 = KeGetCurrentThread();
        v38 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v35)
          || (v64 = PsGetCurrentProcess(v40, v39, v41),
              v65 = PsGetProcessSessionIdEx(v64),
              v67 = PsGetCurrentThreadProcess(v66),
              v65 == (unsigned int)PsGetProcessSessionIdEx(v67)) )
        {
          v42 = (__int64 *)PsGetThreadWin32Thread(v37);
          if ( v42 )
            v38 = *v42;
        }
        if ( v38 )
        {
          if ( *(_QWORD *)(v38 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v38);
          if ( *(_DWORD *)(v38 + 340) )
          {
            v36 = *(_DWORD *)(v38 + 340);
          }
          else
          {
            v43 = PsGetCurrentProcessWin32Process(v18);
            if ( v43 )
              v36 = *(_DWORD *)(v43 + 280);
          }
        }
        if ( (v36 & 0xF) != 2 )
          goto LABEL_54;
        v44 = KeGetCurrentThread();
        v45 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v18)
          || (v68 = PsGetCurrentProcess(v47, v46, v48),
              v69 = PsGetProcessSessionIdEx(v68),
              v71 = PsGetCurrentThreadProcess(v70),
              v69 == (unsigned int)PsGetProcessSessionIdEx(v71)) )
        {
          v49 = (__int64 *)PsGetThreadWin32Thread(v44);
          if ( v49 )
            v45 = *v49;
        }
        if ( v45 )
        {
          if ( *(_QWORD *)(v45 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v45);
          if ( *(_DWORD *)(v45 + 340) )
          {
            v25 = *(_DWORD *)(v45 + 340);
          }
          else
          {
            v50 = PsGetCurrentProcessWin32Process(v18);
            if ( v50 )
              v25 = *(_DWORD *)(v50 + 280);
          }
          if ( (*(_DWORD *)(v45 + 328) & 4) != 0 && (v25 & 0xF) == 2 && (v25 & 0xF0) == 0x20 )
            v25 |= 0x20000000u;
        }
        if ( (v25 & 0x20000000) == 0 )
LABEL_54:
          v4 = 0;
        if ( v73 != v4 )
LABEL_64:
          TransformRectBetweenCoordinateSpaces((char *)v78 + 4, (char *)v78 + 4, 0LL, v74);
        v2 = a2;
      }
    }
    if ( v11 )
    {
      *(_OWORD *)v2 = v78[0];
      *(_OWORD *)(v2 + 16) = v78[1];
      *(_QWORD *)(v2 + 32) = *(_QWORD *)&v78[2];
      *(_DWORD *)(v2 + 40) = DWORD2(v78[2]);
    }
    ThreadUnlock1(v18);
  }
  else
  {
    v11 = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v11;
}
