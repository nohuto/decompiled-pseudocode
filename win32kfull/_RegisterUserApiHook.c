// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterUserApiHook(ULONG64 a1, ULONG64 a2, ULONG64 a3, ULONG64 a4)
{
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // ecx
  ULONG64 v14; // r11
  ULONG64 v15; // rdx
  int v16; // ecx
  const unsigned __int16 *v17; // r8
  ULONG64 v18; // rdx
  int v19; // ecx
  unsigned __int64 v20; // rbx
  ULONG64 v21; // rdx
  int v22; // ecx
  const unsigned __int16 *v23; // r8
  ULONG64 v24; // r9
  __int64 v25; // r11
  unsigned int HmodTableIndex; // eax
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  int v31; // ecx

  if ( gihmodUserApiHook >= 0 || (unsigned __int8)IsRestricted(KeGetCurrentThread()) )
    goto LABEL_64;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  v10 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( *(_DWORD *)(v10 + 772) != luidSystem[0] )
    goto LABEL_64;
  v11 = PsGetCurrentProcessWin32Process(luidSystem[0]);
  v12 = v11;
  if ( v11 )
    v12 = -(__int64)(*(_QWORD *)v11 != 0LL) & v11;
  if ( *(_DWORD *)(v12 + 776) != luidSystem[1] || !(unsigned int)IsPrivileged(psTcb) )
  {
LABEL_64:
    v31 = 5;
LABEL_65:
    UserSetLastError(v31);
    return 0LL;
  }
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v13 = *(_DWORD *)a1;
  v14 = *(_QWORD *)(a1 + 8);
  if ( (v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (unsigned __int16)v13 + v14 + 2;
  if ( v15 <= v14 || v15 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v13 > (unsigned __int16)HIWORD(*(_DWORD *)a1) )
  {
    if ( (v13 & 1) == 0 )
      goto LABEL_57;
    goto LABEL_56;
  }
  if ( (v13 & 1) != 0 )
  {
LABEL_56:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2934LL);
LABEL_57:
    ExRaiseAccessViolation();
  }
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v16 = *(_DWORD *)a2;
  v17 = *(const unsigned __int16 **)(a2 + 8);
  if ( ((unsigned __int8)v17 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = (ULONG64)v17 + (unsigned __int16)v16 + 2;
  if ( v18 <= (unsigned __int64)v17 || v18 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v16 > (unsigned __int16)HIWORD(*(_DWORD *)a2) )
  {
    if ( (v16 & 1) == 0 )
      goto LABEL_53;
    goto LABEL_52;
  }
  if ( (v16 & 1) != 0 )
  {
LABEL_52:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2937LL);
LABEL_53:
    ExRaiseAccessViolation();
  }
  RtlStringCchCopyW(gszFunctionUserApiHook, 0x104uLL, v17);
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v19 = *(_DWORD *)a3;
  v20 = *(_QWORD *)(a3 + 8);
  if ( (v20 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v21 = (unsigned __int16)v19 + v20 + 2;
  if ( v21 <= v20 || v21 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v19 > (unsigned __int16)HIWORD(*(_DWORD *)a3) )
  {
    if ( (v19 & 1) == 0 )
      goto LABEL_49;
    goto LABEL_48;
  }
  if ( (v19 & 1) != 0 )
  {
LABEL_48:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2943LL);
LABEL_49:
    ExRaiseAccessViolation();
  }
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v22 = *(_DWORD *)a4;
  v23 = *(const unsigned __int16 **)(a4 + 8);
  if ( ((unsigned __int8)v23 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v24 = (ULONG64)v23 + (unsigned __int16)v22 + 2;
  if ( v24 <= (unsigned __int64)v23 || v24 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v22 > (unsigned __int16)HIWORD(*(_DWORD *)a4) )
  {
    if ( (v22 & 1) == 0 )
      goto LABEL_45;
    goto LABEL_44;
  }
  if ( (v22 & 1) != 0 )
  {
LABEL_44:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2946LL);
LABEL_45:
    ExRaiseAccessViolation();
  }
  RtlStringCchCopyW(&gszFunctionUserApiHookWOW, 0x104uLL, v23);
  HmodTableIndex = GetHmodTableIndex(v25);
  gihmodUserApiHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v31 = 126;
    goto LABEL_65;
  }
  AddHmodDependency(HmodTableIndex);
  v27 = GetHmodTableIndex(v20);
  gihmodUserApiHookWOW = v27;
  if ( v27 == -1 )
  {
    UserSetLastError(126);
    RemoveHmodDependency((unsigned int)gihmodUserApiHook);
    gihmodUserApiHook = -1;
    return 0LL;
  }
  AddHmodDependency(v27);
  v29 = PsGetCurrentProcessWin32Process(v28);
  if ( v29 )
    v29 &= -(__int64)(*(_QWORD *)v29 != 0LL);
  gppiUserApiHook = v29;
  _InterlockedOr(gpsi, 0x10u);
  return 1LL;
}
