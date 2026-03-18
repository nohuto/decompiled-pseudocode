/*
 * XREFs of NtUserBuildHwndList @ 0x1C0070A10
 * Callers:
 *     <none>
 * Callees:
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C0071408 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C0071510 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     CallerCanSeeImmersiveWindows @ 0x1C0072530 (CallerCanSeeImmersiveWindows.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     MapDesktop @ 0x1C0077E30 (MapDesktop.c)
 *     GetThreadDesktopWindow @ 0x1C00F26A0 (GetThreadDesktopWindow.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtUserBuildHwndList(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        volatile void *Address,
        ULONG64 a8)
{
  _QWORD *v10; // r15
  AtomicExecutionCheck *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *Data; // rax
  ULONG64 v16; // rdx
  PVOID v17; // rcx
  ShellWindowManagement *v18; // rdi
  _DWORD *v19; // r8
  __int64 v20; // r13
  _QWORD *v21; // rax
  unsigned int v22; // esi
  _DWORD *v23; // r14
  int v24; // edi
  _DWORD *v25; // rax
  __int64 ThreadDesktopWindow; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  PVOID Object[3]; // [rsp+68h] [rbp-70h] BYREF
  _DWORD v32[2]; // [rsp+80h] [rbp-58h] BYREF
  __int64 CurrentProcess; // [rsp+88h] [rbp-50h]
  PVOID v34; // [rsp+90h] [rbp-48h]
  int v35; // [rsp+98h] [rbp-40h]
  int v36; // [rsp+9Ch] [rbp-3Ch]
  int v38; // [rsp+E8h] [rbp+10h] BYREF
  int v39; // [rsp+F0h] [rbp+18h]
  char v40; // [rsp+F8h] [rbp+20h]

  v39 = a3;
  Object[0] = 0LL;
  v10 = 0LL;
  v32[1] = 0;
  if ( (unsigned __int8)ShouldRunShared(2LL) )
    EnterSharedCrit();
  else
    EnterCrit(0LL, 1LL);
  v40 = 0;
  AtomicExecutionCheck::EnforceConsistency(v11);
  Data = (_DWORD *)GetData(v13, v12, v14);
  if ( Data )
  {
    ++*Data;
    v40 = 1;
  }
  if ( a4 )
    CallerCanSeeImmersiveWindows();
  if ( a2 )
  {
    v18 = (ShellWindowManagement *)ValidateHwnd(a2);
    if ( !v18 )
      goto LABEL_40;
  }
  else
  {
    v18 = 0LL;
  }
  if ( a5 )
  {
    v28 = PtiFromThreadId(a5);
    v20 = v28;
    if ( !v28 )
      goto LABEL_44;
    v29 = *(_QWORD *)(v28 + 456);
    if ( !v29 )
      goto LABEL_44;
    v18 = *(ShellWindowManagement **)(*(_QWORD *)(*(_QWORD *)(v29 + 8) + 24LL) + 112LL);
  }
  else
  {
    v20 = 0LL;
  }
  if ( !a1 )
    goto LABEL_12;
  LOBYTE(v16) = 1;
  if ( (int)ValidateHdesk(a1, v16, 1LL, Object) < 0 )
  {
LABEL_40:
    v24 = -1073741816;
    goto LABEL_27;
  }
  v35 = 0;
  v36 = 0;
  v34 = Object[0];
  v32[0] = 1;
  CurrentProcess = PsGetCurrentProcess(v17, v16);
  v24 = MapDesktop(v32);
  if ( v24 < 0 )
  {
    v30 = 6LL;
    goto LABEL_47;
  }
  v18 = *(ShellWindowManagement **)(*(_QWORD *)(*((_QWORD *)Object[0] + 1) + 24LL) + 112LL);
LABEL_12:
  if ( v18 )
  {
    if ( v39 )
      v18 = (ShellWindowManagement *)*((_QWORD *)v18 + 14);
    goto LABEL_15;
  }
  if ( !Object[0] )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(v20);
    if ( ThreadDesktopWindow )
    {
      v18 = *(ShellWindowManagement **)(ThreadDesktopWindow + 112);
      goto LABEL_15;
    }
LABEL_44:
    v24 = -1073741816;
    UserSetLastError(87LL);
    goto LABEL_27;
  }
LABEL_15:
  v38 = 3;
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(&Feature_UserCritOpt__private_reporting)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(
      0x176581Cu,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_StrictIAMForegroundCheck_logged_traits,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v38,
      0LL,
      0,
      1uLL);
  }
  v21 = (_QWORD *)BuildHwndList(v18);
  v10 = v21;
  Object[1] = v21;
  if ( v21 )
  {
    v22 = ((v21[1] - (_QWORD)v21 - 32LL) >> 3) + 1;
    ProbeForWrite(Address, 8LL * a6, 4u);
    v23 = (_DWORD *)a8;
    v16 = MmUserProbeAddress;
    v19 = (_DWORD *)a8;
    if ( a8 >= MmUserProbeAddress )
      v19 = (_DWORD *)MmUserProbeAddress;
    *v19 = *v19;
    if ( v22 > a6 )
    {
      v24 = -1073741789;
    }
    else
    {
      memmove((void *)Address, v10 + 4, 8LL * v22);
      v24 = 0;
    }
    *v23 = v22;
    goto LABEL_23;
  }
  v24 = -1073741816;
  v30 = 8LL;
LABEL_47:
  UserSetLastError(v30);
LABEL_23:
  if ( v10 )
    FreeHwndList(v10);
  v17 = Object[0];
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
LABEL_27:
  if ( v40 )
  {
    v25 = (_DWORD *)GetData(v17, v16, v19);
    --*v25;
  }
  UserSessionSwitchLeaveCrit(v17);
  return (unsigned int)v24;
}
