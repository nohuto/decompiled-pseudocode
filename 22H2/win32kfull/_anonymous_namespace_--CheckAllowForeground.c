/*
 * XREFs of _anonymous_namespace_::CheckAllowForeground @ 0x1C00E3878
 * Callers:
 *     EditionPushExitingAppForegroundPolicy @ 0x1C00E5000 (EditionPushExitingAppForegroundPolicy.c)
 *     ?ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z @ 0x1C00E52A0 (-ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z.c)
 *     _anonymous_namespace_::ApplyForegroundPolicy @ 0x1C00E55C0 (_anonymous_namespace_--ApplyForegroundPolicy.c)
 * Callees:
 *     IsShellProcess @ 0x1C0066FBC (IsShellProcess.c)
 *     _anonymous_namespace_::HasLegacyForegroundActivateRight @ 0x1C00AC170 (_anonymous_namespace_--HasLegacyForegroundActivateRight.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1C00E3BA4 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

char __fastcall anonymous_namespace_::CheckAllowForeground(__int64 a1)
{
  char v1; // di
  int v2; // r15d
  unsigned int v3; // r12d
  int v4; // esi
  void *ProcessInheritedFromUniqueProcessId; // r14
  int ProcessSessionId; // ebx
  __int64 v8; // rcx
  const struct tagPROCESSINFO *ProcessWin32Process; // rax
  const struct tagPROCESSINFO *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  bool v13; // al
  __int64 v14; // rax
  PACCESS_TOKEN v15; // rax
  void *v16; // r14
  int v17; // edx
  int v18; // r8d
  unsigned int v19; // eax
  unsigned int *v20; // rax
  __int64 v21; // rax
  PEPROCESS Process; // [rsp+88h] [rbp+48h] BYREF
  struct _LUID AuthenticationId; // [rsp+90h] [rbp+50h] BYREF
  __int64 v25; // [rsp+98h] [rbp+58h]

  v1 = 0;
  v2 = 1;
  AuthenticationId = 0LL;
  Process = 0LL;
  v3 = 0;
  v4 = 0;
  ProcessInheritedFromUniqueProcessId = (void *)PsGetProcessInheritedFromUniqueProcessId(a1);
  while ( 1 )
  {
    if ( PsLookupProcessByProcessId(ProcessInheritedFromUniqueProcessId, &Process) < 0 )
      goto LABEL_27;
    ProcessSessionId = PsGetProcessSessionId(Process);
    if ( ProcessSessionId != *(_DWORD *)SGDGetUserSessionState(v8) )
      break;
    ProcessWin32Process = (const struct tagPROCESSINFO *)PsGetProcessWin32Process(Process);
    v10 = ProcessWin32Process;
    if ( !ProcessWin32Process || !*(_QWORD *)ProcessWin32Process )
    {
      ObfDereferenceObject(Process);
LABEL_27:
      if ( anonymous_namespace_::HasLegacyForegroundActivateRight(a1) )
        v4 = 1;
      goto LABEL_29;
    }
    if ( !v2 )
    {
      if ( (unsigned int)IsShellProcess((__int64)ProcessWin32Process) )
        goto LABEL_39;
      v12 = *(_QWORD *)(v11 + 656);
      if ( v12 )
      {
        if ( (*(_DWORD *)(v12 + 64) & 4) != 0 )
          goto LABEL_39;
      }
    }
    v13 = CanForceForeground(v10);
    v4 = v13;
    if ( !v13 )
    {
      v14 = *((_QWORD *)v10 + 40);
      if ( v14 && (*(_DWORD *)(v14 + 488) & 0x20) != 0 )
      {
        v4 = 1;
      }
      else
      {
        v25 = PsGetProcessInheritedFromUniqueProcessId(Process);
        ProcessInheritedFromUniqueProcessId = (void *)v25;
        if ( v2 )
        {
          v2 = 0;
          v15 = PsReferencePrimaryToken(Process);
          v16 = v15;
          if ( v15 )
          {
            if ( SeQueryAuthenticationIdToken(v15, &AuthenticationId) >= 0 )
            {
              if ( AuthenticationId.LowPart == luidSystem[0] && AuthenticationId.HighPart == luidSystem[1] )
              {
                *((_DWORD *)v10 + 3) |= 0x80000u;
                v4 = 1;
              }
              else
              {
                v4 = 0;
              }
            }
            ObfDereferenceObject(v16);
          }
          ProcessInheritedFromUniqueProcessId = (void *)v25;
        }
      }
    }
    ObfDereferenceObject(Process);
    if ( v4 )
      return 1;
    v19 = v3++;
    if ( v19 >= 5 )
      goto LABEL_29;
  }
  v20 = (unsigned int *)UPDWORDPointer(0x2000LL);
  if ( CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v20) )
  {
    v4 = 1;
  }
  else if ( v2 )
  {
    v21 = PsGetProcessWin32Process(a1);
    if ( v21 )
    {
      if ( *(_QWORD *)v21 && (*(_BYTE *)(v21 + 12) & 1) != 0 )
        v4 = 1;
    }
  }
LABEL_39:
  ObfDereferenceObject(Process);
LABEL_29:
  if ( v4 )
    return 1;
  if ( gptiForeground
    && *(_DWORD *)(gptiForeground + 632LL) <= 0x400u
    && (*(_DWORD *)(gptiForeground + 648LL) & 0x40) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      LOBYTE(v17) = 0;
    }
    else
    {
      v17 = 1;
    }
    if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        v18,
        105,
        4,
        2,
        105,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
    }
    return 1;
  }
  return v1;
}
