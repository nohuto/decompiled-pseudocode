/*
 * XREFs of CheckAllowForeground @ 0x1C003C200
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C003BF08 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 * Callees:
 *     CanForceForeground @ 0x1C003C490 (CanForceForeground.c)
 *     IsShellProcess @ 0x1C003C598 (IsShellProcess.c)
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CheckAllowForeground(__int64 a1)
{
  int v1; // r12d
  unsigned int v2; // ebx
  void *v3; // r14
  unsigned int v4; // r15d
  int v5; // esi
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edx
  unsigned int v12; // eax
  PACCESS_TOKEN v13; // rax
  void *v14; // r14
  unsigned int *v15; // rax
  bool v16; // zf
  int v17; // eax
  __int64 v19; // rax
  PEPROCESS Process; // [rsp+88h] [rbp+50h] BYREF
  _LUID AuthenticationId; // [rsp+90h] [rbp+58h] BYREF
  __int64 ProcessInheritedFromUniqueProcessId; // [rsp+98h] [rbp+60h]

  v1 = 1;
  v2 = 0;
  v3 = (void *)((__int64 (*)(void))PsGetProcessInheritedFromUniqueProcessId)();
  AuthenticationId = 0LL;
  v4 = 0;
  Process = 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( PsLookupProcessByProcessId(v3, &Process) < 0 )
      goto LABEL_33;
    if ( (unsigned int)PsGetProcessSessionId(Process) != gSessionId )
    {
      v15 = (unsigned int *)UPDWORDPointer(0x2000LL);
      if ( CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v15) )
        v5 = 1;
      ObfDereferenceObject(Process);
      v16 = v5 == 0;
      goto LABEL_25;
    }
    ProcessWin32Process = PsGetProcessWin32Process(Process);
    v7 = ProcessWin32Process;
    if ( !ProcessWin32Process )
      break;
    if ( !v1
      && ((unsigned int)IsShellProcess(ProcessWin32Process)
       || (v9 = *(_QWORD *)(v8 + 664)) != 0 && (*(_DWORD *)(v9 + 64) & 4) != 0) )
    {
      ObfDereferenceObject(Process);
      goto LABEL_26;
    }
    v5 = CanForceForeground(v7);
    if ( !v5 )
    {
      v10 = *(_QWORD *)(v7 + 320);
      if ( v10 && (*(_DWORD *)(v10 + 488) & 0x20) != 0 )
      {
        v5 = 1;
      }
      else
      {
        ProcessInheritedFromUniqueProcessId = PsGetProcessInheritedFromUniqueProcessId(Process);
        v3 = (void *)ProcessInheritedFromUniqueProcessId;
        if ( v1 )
        {
          v1 = 0;
          v13 = PsReferencePrimaryToken(Process);
          v14 = v13;
          if ( v13 )
          {
            if ( SeQueryAuthenticationIdToken(v13, &AuthenticationId) >= 0 )
            {
              if ( AuthenticationId.LowPart == luidSystem[0] && AuthenticationId.HighPart == luidSystem[1] )
              {
                *(_DWORD *)(v7 + 12) |= 0x80000u;
                v5 = 1;
              }
              else
              {
                v5 = 0;
              }
            }
            ObfDereferenceObject(v14);
          }
          v3 = (void *)ProcessInheritedFromUniqueProcessId;
        }
      }
    }
    ObfDereferenceObject(Process);
    if ( v5 )
      return 1;
    v12 = v4++;
    if ( v12 >= 5 )
      goto LABEL_26;
  }
  ObfDereferenceObject(Process);
LABEL_33:
  v19 = PsGetProcessInheritedFromUniqueProcessId(a1);
  v16 = (unsigned int)HasForegroundActivateRight(v19) == 0;
LABEL_25:
  if ( !v16 )
    return 1;
LABEL_26:
  if ( gptiForeground )
  {
    LOBYTE(v17) = 0;
    if ( *(_DWORD *)(gptiForeground + 632LL) <= 0x400u )
      v17 = *(_DWORD *)(gptiForeground + 648LL);
    if ( (v17 & 0x40) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_(gptiForeground, v11, 2, 53, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids);
      }
      return 1;
    }
  }
  return v2;
}
