/*
 * XREFs of QueuePowerRequest @ 0x1C00108E0
 * Callers:
 *     UserPowerInfoCallout @ 0x1C000FBD4 (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1C0010460 (UserPowerStateCallout.c)
 *     W32CalloutDispatch @ 0x1C00DE840 (W32CalloutDispatch.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0132650 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     EtwTraceCompletePowerRequest @ 0x1C009FFE0 (EtwTraceCompletePowerRequest.c)
 *     LeavePowerCrit @ 0x1C00A0000 (LeavePowerCrit.c)
 *     EnterPowerCrit @ 0x1C00A0030 (EnterPowerCrit.c)
 *     Win32AllocPoolNonPagedZInit @ 0x1C00AEAD0 (Win32AllocPoolNonPagedZInit.c)
 *     ??0PoWin32CalloutDeadlockTracker@@QEAA@W4_POPWIN32CALLOUT_WATCHDOG_STATE_INDEX@@@Z @ 0x1C00D02EC (--0PoWin32CalloutDeadlockTracker@@QEAA@W4_POPWIN32CALLOUT_WATCHDOG_STATE_INDEX@@@Z.c)
 *     ??1PoWin32CalloutDeadlockTracker@@QEAA@XZ @ 0x1C00D0390 (--1PoWin32CalloutDeadlockTracker@@QEAA@XZ.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C013230C (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     McTemplateK0xdx_EtwWriteTransfer @ 0x1C013ECBC (McTemplateK0xdx_EtwWriteTransfer.c)
 */

__int64 __fastcall QueuePowerRequest(unsigned int *a1, char a2)
{
  __int64 v4; // rax
  char *v5; // rbx
  _OWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  NTSTATUS v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  char v38; // [rsp+50h] [rbp+18h] BYREF

  v4 = Win32AllocPoolNonPagedZInit(72LL, 1869640533LL);
  v5 = (char *)v4;
  if ( !v4 )
    return 3221225495LL;
  if ( a1 )
  {
    v7 = (_OWORD *)(v4 + 48);
    *v7 = *(_OWORD *)a1;
  }
  else
  {
    v7 = 0LL;
  }
  *((_QWORD *)v5 + 8) = v7;
  if ( a2 )
    KeInitializeEvent((PRKEVENT)(v5 + 16), SynchronizationEvent, 0);
  v5[44] = a2;
  EnterPowerCrit();
  if ( *(_DWORD *)(SGDGetUserSessionState(v9, v8, v10, v11) + 2936) )
  {
    if ( a1 )
    {
      v16 = *a1;
      if ( (((_DWORD)v16 - 4) & 0xFFFFFFF3) == 0 && (_DWORD)v16 != 8 )
      {
        v17 = SGDGetUserSessionState(v16, v12, v13, v14);
        ++*(_DWORD *)(v17 + 744);
        SGDGetUserSessionState(v19, v18, v20, v21);
        if ( *(_DWORD *)(SGDGetUserSessionState(v23, v22, v24, v25) + 744) == 1 )
        {
          v28 = SGDGetUserSessionState(v27, v26, v13, v14);
          ArmPowerWatchdog(*(_QWORD *)(v28 + 728), 16LL);
        }
      }
    }
    v29 = *((_QWORD *)v5 + 7);
    v30 = *((unsigned int *)v5 + 12);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0xdx_EtwWriteTransfer(v29, v30, v13, (_DWORD)v5, v30, *((_QWORD *)v5 + 7));
    v31 = SGDGetUserSessionState(v29, v30, v13, v14) + 680;
    v32 = *(_QWORD *)v31;
    if ( *(_QWORD *)(*(_QWORD *)v31 + 8LL) != v31 )
      __fastfail(3u);
    *(_QWORD *)v5 = v32;
    *((_QWORD *)v5 + 1) = v31;
    *(_QWORD *)(v32 + 8) = v5;
    *(_QWORD *)v31 = v5;
    LeavePowerCrit();
    v37 = SGDGetUserSessionState(v34, v33, v35, v36);
    KeSetEvent(*(PRKEVENT *)(v37 + 704), 1, 0);
    if ( !a2 )
      return 0LL;
    PoWin32CalloutDeadlockTracker::PoWin32CalloutDeadlockTracker(&v38, 3LL);
    v15 = KeWaitForSingleObject(v5 + 16, WrUserRequest, 0, 0, 0LL);
    PoWin32CalloutDeadlockTracker::~PoWin32CalloutDeadlockTracker((PoWin32CalloutDeadlockTracker *)&v38);
    if ( v15 >= 0 )
      v15 = *((_DWORD *)v5 + 10);
  }
  else
  {
    v15 = -2143420409;
    LeavePowerCrit();
  }
  EtwTraceCompletePowerRequest(v5, *((unsigned int *)v5 + 10));
  Win32FreePool(v5);
  return (unsigned int)v15;
}
