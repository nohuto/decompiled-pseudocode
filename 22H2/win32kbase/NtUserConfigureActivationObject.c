/*
 * XREFs of NtUserConfigureActivationObject @ 0x1C012D490
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_STATE@@2@Z @ 0x1C0127D90 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 */

__int64 __fastcall NtUserConfigureActivationObject(struct _LUID *a1, unsigned int a2, unsigned int a3, int a4)
{
  int v8; // ebx
  ULONG64 v9; // rcx
  NTSTATUS v10; // eax
  ULONG v11; // eax
  __int64 v12; // rdx
  struct _LUID v14; // [rsp+40h] [rbp-18h] BYREF

  v8 = 1;
  EnterCrit(0, 1);
  v14 = 0LL;
  v9 = (ULONG64)&a1[1];
  if ( &a1[1] < a1 || v9 > MmUserProbeAddress )
    a1 = (struct _LUID *)MmUserProbeAddress;
  v14 = *a1;
  v10 = CActivationObjectManager::ConfigureActivationObject(v9, &v14, a2, a3, a4);
  if ( v10 < 0 )
  {
    v8 = 0;
    v11 = RtlNtStatusToDosError(v10);
    UserSetLastError(v11, v12);
  }
  UserSessionSwitchLeaveCrit();
  return v8;
}
