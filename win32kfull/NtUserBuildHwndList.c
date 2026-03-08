/*
 * XREFs of NtUserBuildHwndList @ 0x1C003FD60
 * Callers:
 *     <none>
 * Callees:
 *     GetThreadDesktopWindow @ 0x1C003BE08 (GetThreadDesktopWindow.c)
 *     MapDesktop @ 0x1C003E450 (MapDesktop.c)
 *     CallerCanSeeImmersiveWindows @ 0x1C003FA30 (CallerCanSeeImmersiveWindows.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     Feature_UserCritOpt__private_ReportDeviceUsage @ 0x1C012EAE0 (Feature_UserCritOpt__private_ReportDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtUserBuildHwndList(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        volatile void *Address,
        unsigned int *a8)
{
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v19; // rdx
  ShellWindowManagement *v20; // rdi
  struct tagTHREADINFO *v21; // r13
  __int64 v22; // rax
  unsigned int v23; // esi
  _DWORD *v24; // r8
  int v25; // edi
  PVOID v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 ThreadDesktopWindow; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  __int64 v37; // [rsp+60h] [rbp-68h]
  _DWORD v38[2]; // [rsp+78h] [rbp-50h] BYREF
  __int64 CurrentProcess; // [rsp+80h] [rbp-48h]
  PVOID v40; // [rsp+88h] [rbp-40h]
  __int64 v41; // [rsp+90h] [rbp-38h]

  Object = 0LL;
  v10 = 0LL;
  v38[1] = 0;
  if ( (unsigned __int8)ShouldRunShared(2LL) )
    EnterSharedCrit(v12, v11, v13);
  else
    EnterCrit(0LL, 1LL);
  if ( !*(_QWORD *)(SGDGetUserSessionState(v14) + 8)
    || (v16 = SGDGetUserSessionState(v15), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 8))) )
  {
    LODWORD(v37) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v17);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( a4 )
    CallerCanSeeImmersiveWindows(gpsi);
  if ( a2 )
  {
    v20 = (ShellWindowManagement *)ValidateHwnd(a2);
    if ( !v20 )
      goto LABEL_28;
  }
  else
  {
    v20 = 0LL;
  }
  if ( a5 )
  {
    v31 = PtiFromThreadId(a5);
    v21 = (struct tagTHREADINFO *)v31;
    if ( !v31 )
      goto LABEL_38;
    v32 = *(_QWORD *)(v31 + 456);
    if ( !v32 )
      goto LABEL_38;
    v20 = *(ShellWindowManagement **)(*(_QWORD *)(*(_QWORD *)(v32 + 8) + 24LL) + 112LL);
  }
  else
  {
    v21 = 0LL;
  }
  if ( !a1 )
    goto LABEL_12;
  LOBYTE(v19) = 1;
  if ( (int)ValidateHdesk(a1, v19, 1LL, &Object) < 0 )
  {
LABEL_28:
    v25 = -1073741816;
    goto LABEL_26;
  }
  v41 = 0LL;
  v40 = Object;
  v38[0] = 1;
  CurrentProcess = PsGetCurrentProcess(v26, v33, v34);
  v25 = MapDesktop((__int64)v38);
  if ( v25 < 0 )
  {
    v35 = 6LL;
    goto LABEL_45;
  }
  v20 = *(ShellWindowManagement **)(*(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) + 112LL);
LABEL_12:
  if ( v20 )
  {
    if ( a3 )
      v20 = (ShellWindowManagement *)*((_QWORD *)v20 + 14);
    goto LABEL_15;
  }
  if ( !Object )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(v21);
    if ( ThreadDesktopWindow )
    {
      v20 = *(ShellWindowManagement **)(ThreadDesktopWindow + 112);
      goto LABEL_15;
    }
LABEL_38:
    v25 = -1073741816;
    UserSetLastError(87LL);
    goto LABEL_26;
  }
LABEL_15:
  Feature_UserCritOpt__private_ReportDeviceUsage();
  v22 = BuildHwndList(v20);
  v10 = v22;
  v37 = v22;
  if ( v22 )
  {
    v23 = ((*(_QWORD *)(v22 + 8) - v22 - 32) >> 3) + 1;
    ProbeForWrite(Address, 8LL * a6, 4u);
    v24 = a8;
    if ( (unsigned __int64)a8 >= MmUserProbeAddress )
      v24 = (_DWORD *)MmUserProbeAddress;
    *v24 = *v24;
    if ( v23 > a6 )
    {
      v25 = -1073741789;
    }
    else
    {
      memmove((void *)Address, (const void *)(v10 + 32), 8LL * v23);
      v25 = 0;
    }
    *a8 = v23;
    goto LABEL_22;
  }
  v25 = -1073741816;
  v35 = 8LL;
LABEL_45:
  UserSetLastError(v35);
LABEL_22:
  if ( v10 )
    FreeHwndList(v10);
  v26 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_26:
  v27 = PsGetCurrentThreadWin32Thread(v26);
  --*(_DWORD *)(v27 + 48);
  UserSessionSwitchLeaveCrit(v28);
  return (unsigned int)v25;
}
