/*
 * XREFs of NtUserConfigureActivationObject @ 0x1C00C8D70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1C00C2680 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CheckProcessForeground@ForegroundManagement@@YA_NK@Z @ 0x1C0155E30 (-CheckProcessForeground@ForegroundManagement@@YA_NK@Z.c)
 *     ?QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectData@@@Z @ 0x1C0156004 (-QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectDat.c)
 *     ValidateHbwnd @ 0x1C01576D0 (ValidateHbwnd.c)
 */

__int64 __fastcall NtUserConfigureActivationObject(
        struct _LUID *a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        char a5)
{
  struct _LUID *v8; // rsi
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rax
  char v17; // al
  __int64 *v18; // rdi
  CActivationObjectManager *v19; // rcx
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 CurrentProcess; // rax
  BOOL v27; // edx
  bool v28; // zf
  unsigned int CurrentProcessId; // eax
  unsigned int v30; // edx
  ULONG v31; // ecx
  __int64 v32; // rax
  struct _LUID v33; // [rsp+30h] [rbp-68h] BYREF
  __int128 v34; // [rsp+50h] [rbp-48h] BYREF
  __int128 v35; // [rsp+60h] [rbp-38h]

  v8 = a1;
  LOBYTE(a1) = 1;
  v9 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v9;
  v14 = 0;
  if ( v9 )
  {
    *((_DWORD *)v9 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    if ( CurrentProcessWin32Process )
    {
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v16 = v10 & CurrentProcessWin32Process;
      if ( v16 )
      {
        if ( (*(_DWORD *)(v16 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v17 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v17 = 0;
          }
          if ( v17 )
          {
            while ( 1 )
            {
              v18 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v18[2] = 0LL;
              if ( !*(_DWORD *)(*v18 + 8) )
              {
                v33.LowPart = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              }
              HMUnlockObject(*v18);
            }
          }
        }
      }
    }
  }
  v33 = 0LL;
  v19 = (CActivationObjectManager *)&v8[1];
  if ( &v8[1] < v8 || (unsigned __int64)v19 > MmUserProbeAddress )
    v8 = (struct _LUID *)MmUserProbeAddress;
  v33 = *v8;
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_35;
    CurrentProcess = PsGetCurrentProcess(v19, v10, v12, v13);
    v27 = 0;
    if ( CurrentProcess )
      v27 = CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
    v28 = !v27;
LABEL_26:
    if ( v28 )
      goto LABEL_27;
    goto LABEL_15;
  }
  if ( a3 != 1 )
  {
    if ( !a3 )
      goto LABEL_15;
LABEL_35:
    v31 = 87;
    goto LABEL_29;
  }
  v34 = 0LL;
  v35 = 0LL;
  if ( CActivationObjectManager::QueryActivationObjectData(v19, &v33, (struct _tagActivationObjectData *)&v34) < 0 )
    goto LABEL_35;
  if ( HIDWORD(v35) != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
LABEL_27:
    v31 = 5;
LABEL_29:
    UserSetLastError(v31);
    goto LABEL_17;
  }
  v32 = ValidateHbwnd(*((_QWORD *)&v34 + 1));
  if ( !v32 )
    goto LABEL_35;
  if ( !*(_QWORD *)(v32 + 136) )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    v28 = !ForegroundManagement::CheckProcessForeground((ForegroundManagement *)(CurrentProcessId & 0xFFFFFFFC), v30);
    goto LABEL_26;
  }
LABEL_15:
  v20 = CActivationObjectManager::ConfigureActivationObject((__int64)v19, &v33, a2, a3, a4, a5);
  if ( v20 < 0 )
  {
    v31 = RtlNtStatusToDosError(v20);
    goto LABEL_29;
  }
  v14 = 1;
LABEL_17:
  UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  return v14;
}
