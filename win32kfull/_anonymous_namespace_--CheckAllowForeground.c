char __fastcall anonymous_namespace_::CheckAllowForeground(__int64 a1)
{
  char v1; // di
  int v2; // r15d
  unsigned int v3; // r12d
  int v4; // esi
  void *v6; // r14
  int ProcessSessionId; // ebx
  __int64 v8; // rcx
  const struct tagPROCESSINFO *ProcessWin32Process; // rax
  const struct tagPROCESSINFO *v10; // rbx
  bool v11; // al
  int v12; // edx
  int v13; // r8d
  unsigned int *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  PACCESS_TOKEN v18; // rax
  void *v19; // r14
  unsigned int v20; // eax
  __int64 v21; // rax
  PEPROCESS Process; // [rsp+88h] [rbp+48h] BYREF
  _LUID AuthenticationId; // [rsp+90h] [rbp+50h] BYREF
  __int64 ProcessInheritedFromUniqueProcessId; // [rsp+98h] [rbp+58h]

  v1 = 0;
  v2 = 1;
  AuthenticationId = 0LL;
  Process = 0LL;
  v3 = 0;
  v4 = 0;
  v6 = (void *)((__int64 (*)(void))PsGetProcessInheritedFromUniqueProcessId)();
  while ( 1 )
  {
    if ( PsLookupProcessByProcessId(v6, &Process) < 0 )
      goto LABEL_24;
    ProcessSessionId = PsGetProcessSessionId(Process);
    if ( ProcessSessionId != *(_DWORD *)SGDGetUserSessionState(v8) )
      break;
    ProcessWin32Process = (const struct tagPROCESSINFO *)PsGetProcessWin32Process(Process);
    v10 = ProcessWin32Process;
    if ( !ProcessWin32Process || !*(_QWORD *)ProcessWin32Process )
    {
      ObfDereferenceObject(Process);
LABEL_24:
      if ( (unsigned __int8)anonymous_namespace_::HasLegacyForegroundActivateRight(a1) )
        v4 = 1;
      goto LABEL_18;
    }
    if ( !v2 )
    {
      if ( (unsigned int)IsShellProcess(ProcessWin32Process) )
        goto LABEL_17;
      v21 = *((_QWORD *)v10 + 82);
      if ( v21 )
      {
        if ( (*(_DWORD *)(v21 + 64) & 4) != 0 )
          goto LABEL_17;
      }
    }
    v11 = CanForceForeground(v10);
    v4 = v11;
    if ( !v11 )
    {
      v17 = *((_QWORD *)v10 + 40);
      if ( v17 && (*(_DWORD *)(v17 + 488) & 0x20) != 0 )
      {
        v4 = 1;
      }
      else
      {
        ProcessInheritedFromUniqueProcessId = PsGetProcessInheritedFromUniqueProcessId(Process);
        v6 = (void *)ProcessInheritedFromUniqueProcessId;
        if ( v2 )
        {
          v2 = 0;
          v18 = PsReferencePrimaryToken(Process);
          v19 = v18;
          if ( v18 )
          {
            if ( SeQueryAuthenticationIdToken(v18, &AuthenticationId) >= 0 )
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
            ObfDereferenceObject(v19);
          }
          v6 = (void *)ProcessInheritedFromUniqueProcessId;
        }
      }
    }
    ObfDereferenceObject(Process);
    if ( v4 )
      return 1;
    v20 = v3++;
    if ( v20 >= 5 )
      goto LABEL_18;
  }
  v15 = (unsigned int *)UPDWORDPointer(0x2000LL);
  if ( CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v15) )
  {
    v4 = 1;
  }
  else if ( v2 )
  {
    Feature_StrictParentBasedAllowForegroundActivate__private_ReportDeviceUsage();
    v16 = PsGetProcessWin32Process(a1);
    if ( v16 )
    {
      if ( *(_QWORD *)v16 && (*(_BYTE *)(v16 + 12) & 1) != 0 )
        v4 = 1;
    }
  }
LABEL_17:
  ObfDereferenceObject(Process);
LABEL_18:
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
      LOBYTE(v12) = 0;
    }
    else
    {
      v12 = 1;
    }
    if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v13,
        104,
        4,
        2,
        104,
        (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
    }
    return 1;
  }
  return v1;
}
