/*
 * XREFs of ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00CA358
 * Callers:
 *     xxxCsDdeInitialize @ 0x1C00AC42C (xxxCsDdeInitialize.c)
 *     NtUserSetWindowLongPtr @ 0x1C00CA250 (NtUserSetWindowLongPtr.c)
 * Callees:
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C00CA914 (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     xxxSetWindowData @ 0x1C00CA930 (xxxSetWindowData.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C00CCA34 (safe_cast_wf_to_PDIALOG.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139CA0 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxSetWindowLongPtr(struct tagWND *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v11; // rcx
  HANDLE v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 CurrentProcess; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  char *v29; // r14
  __int64 *v30; // rax
  __int64 v31; // rcx
  __int64 v33; // r9
  unsigned int v34; // r8d
  unsigned int v35; // r8d
  unsigned int v36; // r8d
  unsigned int v37; // r8d
  __int64 v38; // rcx
  __int16 *v39; // rdx
  __int64 v40; // rcx
  __int16 v41; // r8
  _DWORD *v42; // rdx
  __int64 v43; // r15
  BOOL v44; // ecx
  int v45; // eax
  __int64 v46; // rcx
  unsigned __int64 v47; // r8
  int v48; // edi
  __int64 v49; // r8
  __int64 *v50; // rax
  __int64 v51; // rcx
  char v52[8]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v53; // [rsp+28h] [rbp-70h]
  char *v54; // [rsp+30h] [rbp-68h]

  v6 = a2;
  v8 = 0LL;
  v52[0] = 0;
  v9 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v9 + 488) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 0xC) == 0 )
    goto LABEL_10;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9);
  v11 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v12 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v11 = gpidLogon;
    if ( v12 != (HANDLE)gpidLogon )
      goto LABEL_10;
  }
  if ( (unsigned __int8)Enforced(v11)
    || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15), (unsigned int)IsProcessDwm(CurrentProcess)) )
  {
    v16 = 1;
    goto LABEL_11;
  }
  v18 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  v19 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_DWORD *)(v19 + 772) != *(_DWORD *)(v18 + 772) || (v16 = 1, *(_DWORD *)(v19 + 776) != *(_DWORD *)(v18 + 776)) )
LABEL_10:
    v16 = 0;
LABEL_11:
  if ( !v16 )
    goto LABEL_83;
  if ( (int)v6 >= 0 )
  {
    v20 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 248LL);
    if ( v6 + 8 > v20 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
      v22 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v22 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      v23 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v23 != v22 )
      {
        v24 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
        if ( (v24 & 0x10) == 0 )
        {
          v25 = v23 + 888;
          v26 = PsGetCurrentProcessWin32Process(v24);
          if ( v26 )
            v26 &= -(__int64)(*(_QWORD *)v26 != 0LL);
          if ( !(unsigned __int8)CheckAccess(v26 + 888, v25) )
          {
            v28 = PsGetCurrentProcessWin32Process(v27);
            if ( v28 )
              v28 &= -(__int64)(*(_QWORD *)v28 != 0LL);
            if ( *(int *)(v28 + 12) >= 0 )
              goto LABEL_83;
          }
          KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
          v52[0] = 1;
        }
      }
    }
  }
  v29 = (char *)a1 + 40;
  v54 = (char *)a1 + 40;
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0 )
    goto LABEL_63;
  v30 = (__int64 *)safe_cast_wf_to_PDIALOG(a1);
  if ( !v30 )
  {
    if ( (int)v6 < 0 )
    {
LABEL_64:
      v8 = xxxSetWindowData(a1);
      goto LABEL_40;
    }
    v33 = *(_QWORD *)v29;
    if ( (int)v6 >= *(unsigned __int16 *)(gpsi + 2LL * ((*(_WORD *)(*(_QWORD *)v29 + 42LL) & 0x2FFFu) - 666) + 328)
                  - 328 )
      goto LABEL_63;
    v34 = *(_WORD *)(*(_QWORD *)v29 + 42LL) & 0x2FFF;
    if ( v34 > 0x2A6 )
    {
      v36 = v34 - 679;
      if ( !v36 )
      {
        if ( (_DWORD)v6 != 8 )
          goto LABEL_59;
        v38 = **(_QWORD **)(v33 + 296);
        v53 = v38;
LABEL_56:
        if ( v38 && *(char *)(*(_QWORD *)v29 + 19LL) >= 0 )
          goto LABEL_59;
        goto LABEL_58;
      }
    }
    else if ( v34 == 678 || (v35 = v34 - 673) == 0 || (v36 = v35 - 1) == 0 )
    {
LABEL_52:
      if ( (_DWORD)v6 )
      {
LABEL_59:
        v31 = 1413LL;
        goto LABEL_60;
      }
      if ( *(_DWORD *)(v33 + 248) )
      {
        v38 = **((_QWORD **)a1 + 35);
      }
      else
      {
        v38 = **(_QWORD **)(v33 + 296);
        v53 = v38;
      }
      goto LABEL_56;
    }
    v37 = v36 - 1;
    if ( v37 && v37 - 1 >= 2 )
      goto LABEL_59;
    goto LABEL_52;
  }
  if ( !(_DWORD)v6 )
  {
    v8 = *v30;
    v53 = *v30;
    *v30 = a3;
    goto LABEL_40;
  }
  if ( (_DWORD)v6 == 16 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v29 + 248LL) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 493LL);
    }
    else if ( *(int *)(*(_QWORD *)v29 + 200LL) >= 30 )
    {
      v8 = v30[2];
      v53 = v8;
      v30[2] = a3;
LABEL_40:
      CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v52);
      return v8;
    }
    if ( *(int *)(*(_QWORD *)v29 + 200LL) < 30 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 494LL);
    goto LABEL_40;
  }
  if ( (unsigned int)v6 <= 0x1D )
  {
    v31 = 1415LL;
LABEL_60:
    UserSetLastError(v31);
    goto LABEL_40;
  }
LABEL_63:
  if ( (int)v6 < 0 )
    goto LABEL_64;
LABEL_58:
  if ( (unsigned __int64)(unsigned int)v6 + 8 > (unsigned int)(*(_DWORD *)(*(_QWORD *)v29 + 248LL)
                                                             + *(_DWORD *)(*(_QWORD *)v29 + 200LL)) )
    goto LABEL_59;
  if ( !a5 )
    goto LABEL_77;
  v39 = *(__int16 **)(*((_QWORD *)a1 + 17) + 8LL);
  if ( !_bittest16(v39 + 3, 8u) )
    goto LABEL_77;
  v40 = 0LL;
  v41 = *v39;
  v42 = &gDefaultServerClasses;
  while ( v41 != *(_WORD *)(gpsi + 2LL * ((*v42 >> 3) & 0x1F) + 868) )
  {
    v40 = (unsigned int)(v40 + 1);
    v42 += 12;
    if ( (unsigned int)v40 >= 8 )
      goto LABEL_77;
  }
  v43 = 6LL * (unsigned int)v40;
  if ( (int)v6 >= *((_DWORD *)&gDefaultServerClasses + 12 * (unsigned int)v40 + 6) )
    goto LABEL_77;
  v44 = Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage(v40, v42) != 0;
  v45 = *((_DWORD *)&gDefaultServerClasses + 2 * v43) & 0xF8;
  if ( v44 )
  {
    if ( v45 == 176 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 597LL);
    goto LABEL_77;
  }
  if ( v45 == 176 && (unsigned __int64)((int)v6 + 8LL) <= 0xFFFFFFFFFFFFFEE8uLL )
  {
LABEL_77:
    v46 = *(_QWORD *)v29;
    v47 = *(unsigned int *)(*(_QWORD *)v29 + 248LL);
    if ( (int)v6 + 8LL <= v47 )
    {
      v51 = *((_QWORD *)a1 + 35);
      v8 = *(_QWORD *)((int)v6 + v51);
      *(_QWORD *)((int)v6 + v51) = a3;
    }
    else
    {
      v48 = v6 - v47;
      v49 = *(_QWORD *)(v46 + 296);
      if ( (*(_DWORD *)(v46 + 232) & 0x10) != 0 )
        v50 = (__int64 *)(v49 + v48 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 136LL));
      else
        v50 = (__int64 *)(v48 + v49);
      v8 = *v50;
      v53 = *v50;
      *v50 = a3;
    }
    goto LABEL_40;
  }
LABEL_83:
  UserSetLastError(5LL);
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v52);
  return 0LL;
}
