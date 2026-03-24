/*
 * XREFs of _RegisterUserApiHook @ 0x1C011CC58
 * Callers:
 *     NtUserRegisterUserApiHook @ 0x1C011CBD0 (NtUserRegisterUserApiHook.c)
 * Callees:
 *     RemoveHmodDependency @ 0x1C002031C (RemoveHmodDependency.c)
 *     AddHmodDependency @ 0x1C00203A8 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00203EC (GetHmodTableIndex.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00499CC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     IsPrivileged @ 0x1C011D26C (IsPrivileged.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterUserApiHook(ULONG64 a1, __int64 a2, ULONG64 a3, ULONG64 a4)
{
  ULONG64 v6; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v11; // ecx
  char *v12; // rbx
  ULONG64 v13; // rdx
  _BYTE **v14; // rax
  int v15; // ecx
  char *v16; // rbx
  ULONG64 v17; // rdx
  _BYTE **v18; // rax
  int HmodTableIndex; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  int v26; // [rsp+24h] [rbp-44h]

  v6 = a2;
  if ( gihmodUserApiHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || (v9 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v8) + 780), (_DWORD)v9 != luidSystem[0])
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9),
        a2 = (unsigned int)luidSystem[1],
        *(_DWORD *)(CurrentProcessWin32Process + 784) != (_DWORD)a2)
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v20 = 5LL;
    goto LABEL_34;
  }
  if ( v6 >= MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  v11 = *(_DWORD *)v6;
  v26 = *(_DWORD *)v6;
  v12 = *(char **)(v6 + 8);
  if ( ((unsigned __int8)v12 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = (ULONG64)&v12[(unsigned __int16)v11 + 2];
  v14 = (_BYTE **)MmUserProbeAddress;
  if ( v13 < MmUserProbeAddress && (unsigned __int16)v11 <= HIWORD(v26) )
  {
    if ( (v11 & 1) != 0 )
    {
LABEL_15:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2842LL);
      v14 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_16;
    }
    if ( v13 > (unsigned __int64)v12 )
      goto LABEL_17;
  }
  if ( (v11 & 1) != 0 )
    goto LABEL_15;
LABEL_16:
  **v14 = 0;
LABEL_17:
  RtlStringCchCopyW((char *)gszFunctionUserApiHook, 260LL, v12);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v15 = *(_DWORD *)a4;
  v16 = *(char **)(a4 + 8);
  if ( ((unsigned __int8)v16 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = (ULONG64)&v16[(unsigned __int16)v15 + 2];
  v18 = (_BYTE **)MmUserProbeAddress;
  if ( v17 < MmUserProbeAddress && (unsigned __int16)v15 <= (unsigned __int16)HIWORD(*(_DWORD *)a4) )
  {
    if ( (v15 & 1) != 0 )
    {
LABEL_26:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2848LL);
      v18 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_27;
    }
    if ( v17 > (unsigned __int64)v16 )
      goto LABEL_28;
  }
  if ( (v15 & 1) != 0 )
    goto LABEL_26;
LABEL_27:
  **v18 = 0;
LABEL_28:
  RtlStringCchCopyW((char *)gszFunctionUserApiHookWOW, 260LL, v16);
  HmodTableIndex = GetHmodTableIndex(a1);
  gihmodUserApiHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v20 = 126LL;
LABEL_34:
    UserSetLastError(v20, a2, a3);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  v21 = GetHmodTableIndex(a3);
  gihmodUserApiHookWOW = v21;
  if ( v21 != -1 )
  {
    AddHmodDependency(v21);
    gppiUserApiHook = PsGetCurrentProcessWin32Process(v24);
    _InterlockedOr(gpsi, 0x10u);
    return 1LL;
  }
  UserSetLastError(126LL, v22, v23);
  RemoveHmodDependency(gihmodUserApiHook);
  gihmodUserApiHook = -1;
  return 0LL;
}
