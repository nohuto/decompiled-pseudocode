/*
 * XREFs of ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C003CF50
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0037F54 (IAMThreadAccessGranted.c)
 *     LockProcessByClientId @ 0x1C003C078 (LockProcessByClientId.c)
 *     CanForceForeground @ 0x1C003C490 (CanForceForeground.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004F2B4 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F390 (WPP_RECORDER_SF_q.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _AllowSetForegroundWindow(int a1)
{
  void *v1; // rdi
  __int64 v2; // rcx
  bool v3; // bl
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rcx
  __int64 ProcessWin32Process; // rdi
  char v8; // al
  int v9; // edx
  int v10; // ecx
  struct tagTHREADINFO *PtiLastWokenHotKey; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  char v15; // al
  int v16; // edx
  int v17; // ecx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = (void *)a1;
  v3 = 0;
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    gppiLockSFW = 0LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    if ( !CanForceForeground(CurrentProcessWin32Process) )
    {
      v5 = 5LL;
LABEL_4:
      UserSetLastError(v5);
      return 0LL;
    }
  }
  Object = 0LL;
  if ( (_DWORD)v1 == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = PsGetCurrentProcessWin32Process(&WPP_RECORDER_INITIALIZED);
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_q(v17, v16, 2, 36, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids, v15);
    }
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  }
  else
  {
    if ( (int)LockProcessByClientId(v1, (PEPROCESS *)&Object) < 0
      || (ProcessWin32Process = PsGetProcessWin32Process(Object), ObfDereferenceObject(Object), !ProcessWin32Process) )
    {
      v5 = 87LL;
      goto LABEL_4;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = PsGetCurrentProcessWin32Process(&WPP_RECORDER_INITIALIZED);
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_qq(
        v10,
        v9,
        2,
        35,
        (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids,
        v8,
        ProcessWin32Process);
    }
    PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
    v13 = PsGetCurrentProcessWin32Process(v12);
    if ( (unsigned int)IsDesktopApp(v13)
      && (!PtiLastWokenHotKey || *((_QWORD *)PtiLastWokenHotKey + 53) == PsGetCurrentProcessWin32Process(v14)) )
    {
      v3 = 1;
    }
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(ProcessWin32Process + 320), v3);
  }
  return 1LL;
}
