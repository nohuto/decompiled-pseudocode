/*
 * XREFs of QueuePowerRequest @ 0x1C00B7EA0
 * Callers:
 *     UserPowerInfoCallout @ 0x1C00B657C (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1C00B7A1C (UserPowerStateCallout.c)
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0159EA0 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     Win32AllocPoolNonPagedZInit @ 0x1C002E0C0 (Win32AllocPoolNonPagedZInit.c)
 *     Win32FreePool @ 0x1C0070430 (Win32FreePool.c)
 *     EtwTraceCompletePowerRequest @ 0x1C00B561C (EtwTraceCompletePowerRequest.c)
 *     LeavePowerCrit @ 0x1C00B5640 (LeavePowerCrit.c)
 *     EnterPowerCrit @ 0x1C00B5670 (EnterPowerCrit.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00D229C (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ??0PoWin32CalloutDeadlockTracker@@QEAA@W4_POPWIN32CALLOUT_WATCHDOG_STATE_INDEX@@@Z @ 0x1C00DCD58 (--0PoWin32CalloutDeadlockTracker@@QEAA@W4_POPWIN32CALLOUT_WATCHDOG_STATE_INDEX@@@Z.c)
 *     ??1PoWin32CalloutDeadlockTracker@@QEAA@XZ @ 0x1C00DCDE8 (--1PoWin32CalloutDeadlockTracker@@QEAA@XZ.c)
 *     McTemplateK0xdx_EtwWriteTransfer @ 0x1C0167C1C (McTemplateK0xdx_EtwWriteTransfer.c)
 */

__int64 __fastcall QueuePowerRequest(unsigned int *a1, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  _OWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  NTSTATUS v20; // edi
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  char v47; // [rsp+50h] [rbp+18h] BYREF

  v4 = Win32AllocPoolNonPagedZInit(0x48uLL, 0x6F707355u);
  v9 = v4;
  if ( !v4 )
    return 3221225495LL;
  if ( a1 )
  {
    v11 = (_OWORD *)(v4 + 48);
    *v11 = *(_OWORD *)a1;
  }
  else
  {
    v11 = 0LL;
  }
  *(_QWORD *)(v9 + 64) = v11;
  if ( a2 )
    KeInitializeEvent((PRKEVENT)(v9 + 16), SynchronizationEvent, 0);
  *(_BYTE *)(v9 + 44) = a2;
  EnterPowerCrit(v6, v5, v7, v8);
  if ( *(_DWORD *)(SGDGetUserSessionState(v13, v12, v14, v15) + 2936) )
  {
    if ( a1 )
    {
      v22 = *a1;
      if ( (((_DWORD)v22 - 4) & 0xFFFFFFF3) == 0 && (_DWORD)v22 != 8 )
      {
        v23 = SGDGetUserSessionState(v22, v16, v18, v19);
        ++*(_DWORD *)(v23 + 744);
        SGDGetUserSessionState(v25, v24, v26, v27);
        if ( *(_DWORD *)(SGDGetUserSessionState(v29, v28, v30, v31) + 744) == 1 )
        {
          v34 = SGDGetUserSessionState(v33, v32, v18, v19);
          ArmPowerWatchdog(*(_QWORD *)(v34 + 728), 16LL);
        }
      }
    }
    v35 = *(_QWORD *)(v9 + 56);
    v36 = *(unsigned int *)(v9 + 48);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0xdx_EtwWriteTransfer(v35, v36, v18, v9, v36, *(_QWORD *)(v9 + 56));
    v37 = SGDGetUserSessionState(v35, v36, v18, v19) + 680;
    v41 = *(_QWORD *)v37;
    if ( *(_QWORD *)(*(_QWORD *)v37 + 8LL) != v37 )
      __fastfail(3u);
    *(_QWORD *)v9 = v41;
    *(_QWORD *)(v9 + 8) = v37;
    *(_QWORD *)(v41 + 8) = v9;
    *(_QWORD *)v37 = v9;
    LeavePowerCrit(v41, v38, v39, v40);
    v46 = SGDGetUserSessionState(v43, v42, v44, v45);
    KeSetEvent(*(PRKEVENT *)(v46 + 704), 1, 0);
    if ( !a2 )
      return 0LL;
    PoWin32CalloutDeadlockTracker::PoWin32CalloutDeadlockTracker(&v47, 3LL);
    v20 = KeWaitForSingleObject((PVOID)(v9 + 16), WrUserRequest, 0, 0, 0LL);
    PoWin32CalloutDeadlockTracker::~PoWin32CalloutDeadlockTracker((PoWin32CalloutDeadlockTracker *)&v47);
    if ( v20 >= 0 )
      v20 = *(_DWORD *)(v9 + 40);
  }
  else
  {
    v20 = -2143420409;
    LeavePowerCrit(v17, v16, v18, v19);
  }
  EtwTraceCompletePowerRequest(v9, *(_DWORD *)(v9 + 40), v21);
  Win32FreePool((char *)v9);
  return (unsigned int)v20;
}
