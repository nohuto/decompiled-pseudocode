volatile void *__fastcall xxxClientAllocWindowClassExtraBytes(__int64 Length, __int64 a2)
{
  SIZE_T v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rcx
  char v6; // di
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  volatile void **v11; // rcx
  volatile void *v12; // rdi
  __int64 CurrentProcessWow64Process; // rax
  int v15; // [rsp+88h] [rbp+10h] BYREF
  int v16; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  v3 = (unsigned int)Length;
  v4 = 0LL;
  v17 = 0LL;
  v15 = 0;
  v16 = Length;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 232LL) & 0x10) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6591LL);
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(Length) || (v6 = 1, !IS_USERCRIT_OWNED_AT_ALL(v5)) )
    v6 = 0;
  UserSessionSwitchLeaveCrit(v5);
  EtwTraceBeginCallback(123LL);
  v7 = KeUserModeCallback(123LL, &v16, 4LL, &v17, &v15);
  EtwTraceEndCallback(123LL);
  if ( v6 )
    EnterSharedCrit(v9, v8, v10);
  else
    EnterCrit(0LL, 0LL);
  if ( v7 < 0 || v15 != 24 )
    return 0LL;
  v11 = (volatile void **)v17;
  if ( v17 + 8 < v17 || v17 + 8 > MmUserProbeAddress )
    v11 = (volatile void **)MmUserProbeAddress;
  v12 = *v11;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11);
  ProbeForRead(v12, v3, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 232LL) & 0x10) == 0 )
    return v12;
  return (volatile void *)v4;
}
