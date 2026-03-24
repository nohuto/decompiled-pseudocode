/*
 * XREFs of NtUserPhysicalToLogicalPoint @ 0x1C00FB4E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     DCEPtInRect @ 0x1C00FB848 (DCEPtInRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPhysicalToLogicalPoint(__int64 a1, __int64 *a2)
{
  int v4; // esi
  __int64 v5; // rbx
  ULONG64 v6; // rcx
  __int64 v7; // r13
  __int64 *v8; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rcx
  struct _KTHREAD *v16; // r15
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 *v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // edi
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rcx
  int v27; // eax
  struct _KTHREAD *v28; // r15
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 *v33; // rax
  __int64 v34; // rcx
  struct _KTHREAD *v35; // r15
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 *v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // edi
  __int64 v43; // rcx
  int v44; // edi
  __int64 v45; // rcx
  _QWORD *v46; // rdx
  bool v48; // cf
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v51; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v53; // rax
  int v54; // edi
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // edi
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // edi
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v66; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v67; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  v66 = 0LL;
  v5 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v8 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v8 = (__int64 *)MmUserProbeAddress;
    v67 = *v8;
    v66 = v67;
    CurrentThread = KeGetCurrentThread();
    v10 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(MmUserProbeAddress)
      || (CurrentProcess = PsGetCurrentProcess(v12, v11, v13),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v51),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v10 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v10 + 480) + 224LL) & 1) == 0 )
    {
      v16 = KeGetCurrentThread();
      v17 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v15)
        || (v53 = PsGetCurrentProcess(v19, v18, v20),
            v54 = PsGetProcessSessionIdEx(v53),
            v56 = PsGetCurrentThreadProcess(v55),
            v54 == (unsigned int)PsGetProcessSessionIdEx(v56)) )
      {
        v21 = (__int64 *)PsGetThreadWin32Thread(v16);
        if ( v21 )
          v17 = *v21;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v17 + 480) + 224LL) & 0x20) == 0 )
      {
        v23 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
        if ( (((unsigned __int16)(v23 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v22) >> 8)) & 0x1FF) != 0 )
          goto LABEL_36;
        v24 = *(unsigned int *)(*(_QWORD *)(v7 + 40) + 288LL);
        if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL) & 0xF) != 2 || (v25 = 1, (v24 & 0x20000000) == 0) )
          v25 = 0;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v24) & 0xF) != 2
          || (v48 = (W32GetCurrentThreadDpiAwarenessContext(v26) & 0x20000000) != 0, v27 = 1, !v48) )
        {
          v27 = 0;
        }
        if ( v25 != v27 )
LABEL_36:
          v5 = v66;
      }
    }
    TransformPointBetweenCoordinateSpaces(&v66, &v66, v7, 0LL);
    if ( (unsigned int)DCEPtInRect(*(_QWORD *)(v7 + 40) + 88LL, v66) )
    {
      v28 = KeGetCurrentThread();
      v29 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v6)
        || (v57 = PsGetCurrentProcess(v31, v30, v32),
            v58 = PsGetProcessSessionIdEx(v57),
            v60 = PsGetCurrentThreadProcess(v59),
            v58 == (unsigned int)PsGetProcessSessionIdEx(v60)) )
      {
        v33 = (__int64 *)PsGetThreadWin32Thread(v28);
        if ( v33 )
          v29 = *v33;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v29 + 480) + 224LL) & 1) == 0 )
      {
        v35 = KeGetCurrentThread();
        v36 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v34)
          || (v61 = PsGetCurrentProcess(v38, v37, v39),
              v62 = PsGetProcessSessionIdEx(v61),
              v64 = PsGetCurrentThreadProcess(v63),
              v62 == (unsigned int)PsGetProcessSessionIdEx(v64)) )
        {
          v40 = (__int64 *)PsGetThreadWin32Thread(v35);
          if ( v40 )
            v36 = *v40;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v36 + 480) + 224LL) & 0x20) == 0 )
        {
          v42 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
          if ( (((unsigned __int16)(v42 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v41) >> 8)) & 0x1FF) != 0 )
            goto LABEL_37;
          v43 = *(unsigned int *)(*(_QWORD *)(v7 + 40) + 288LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL) & 0xF) != 2 || (v44 = 1, (v43 & 0x20000000) == 0) )
            v44 = 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v43) & 0xF) == 2
            && (W32GetCurrentThreadDpiAwarenessContext(v45) & 0x20000000) != 0 )
          {
            v4 = 1;
          }
          if ( v44 != v4 )
LABEL_37:
            v66 = v5;
        }
      }
      v6 = MmUserProbeAddress;
      v46 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v46 = (_QWORD *)MmUserProbeAddress;
      *v46 = *v46;
      *a2 = v66;
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
