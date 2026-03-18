/*
 * XREFs of NtUserConfigureActivationObject @ 0x1C00BA470
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1C00913AC (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?CheckProcessForeground@ForegroundManagement@@YA_NK@Z @ 0x1C0142740 (-CheckProcessForeground@ForegroundManagement@@YA_NK@Z.c)
 *     ?QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectData@@@Z @ 0x1C0142ABC (-QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectDat.c)
 *     ValidateHbwnd @ 0x1C0144300 (ValidateHbwnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserConfigureActivationObject(
        struct _LUID *a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        char a5)
{
  struct tagTHREADINFO *v9; // rax
  _BOOL8 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  __int64 CurrentProcessWin32Process; // rax
  char v16; // al
  struct tagKERNELHANDLETABLEENTRY *v17; // rdi
  CActivationObjectManager *v18; // rcx
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rcx
  PVOID CurrentProcess; // rax
  bool v27; // zf
  unsigned int CurrentProcessId; // eax
  unsigned int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rax
  struct _LUID v32; // [rsp+40h] [rbp-58h] BYREF
  __int128 v33; // [rsp+50h] [rbp-48h] BYREF
  __int128 v34; // [rsp+60h] [rbp-38h]

  v9 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v9;
  v14 = 0;
  if ( v9 )
  {
    *((_DWORD *)v9 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
          || (v16 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
        {
          v16 = 0;
        }
        if ( v16 )
        {
          while ( 1 )
          {
            v17 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v17 + 2) = 0LL;
            v25 = *(_QWORD *)v17;
            if ( !*(_DWORD *)(*(_QWORD *)v17 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v10, v12);
              v25 = *(_QWORD *)v17;
            }
            HMUnlockObject(v25);
          }
        }
      }
    }
  }
  v32 = 0LL;
  v18 = (CActivationObjectManager *)&a1[1];
  if ( &a1[1] < a1 || (unsigned __int64)v18 > MmUserProbeAddress )
    a1 = (struct _LUID *)MmUserProbeAddress;
  v32 = *a1;
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_34;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v18, v10, v12, v13);
    v10 = 0LL;
    if ( CurrentProcess )
      v10 = CurrentProcess == g_pepDwm;
    v27 = !v10;
LABEL_25:
    if ( v27 )
      goto LABEL_26;
    goto LABEL_14;
  }
  if ( a3 != 1 )
  {
    if ( !a3 )
      goto LABEL_14;
LABEL_34:
    v30 = 87LL;
    goto LABEL_28;
  }
  v33 = 0LL;
  v34 = 0LL;
  if ( CActivationObjectManager::QueryActivationObjectData(v18, &v32, (struct _tagActivationObjectData *)&v33) < 0 )
    goto LABEL_34;
  if ( HIDWORD(v34) != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
LABEL_26:
    v30 = 5LL;
LABEL_28:
    UserSetLastError(v30, v10, v12, v13);
    goto LABEL_16;
  }
  v31 = ValidateHbwnd(*((_QWORD *)&v33 + 1));
  if ( !v31 )
    goto LABEL_34;
  if ( !*(_QWORD *)(v31 + 136) )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    v27 = !ForegroundManagement::CheckProcessForeground((ForegroundManagement *)(CurrentProcessId & 0xFFFFFFFC), v29);
    goto LABEL_25;
  }
LABEL_14:
  v19 = CActivationObjectManager::ConfigureActivationObject((__int64)v18, &v32, a2, a3, a4, a5);
  if ( v19 < 0 )
  {
    v30 = RtlNtStatusToDosError(v19);
    goto LABEL_28;
  }
  v14 = 1;
LABEL_16:
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return v14;
}
