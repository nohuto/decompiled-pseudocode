/*
 * XREFs of NtUserCreateActivationObject @ 0x1C00A2710
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUID@@@Z @ 0x1C00982F8 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUI.c)
 */

__int64 __fastcall NtUserCreateActivationObject(void *a1, unsigned __int64 *a2, ULONG_PTR a3)
{
  struct _LUID *v3; // rsi
  struct _OBJECT_ATTRIBUTES *v6; // rdx
  struct _OBJECT_ATTRIBUTES *v7; // r8
  char v8; // r9
  int v9; // ebx
  NTSTATUS v10; // eax
  __int64 v12; // rcx
  char v13; // [rsp+20h] [rbp-68h]
  struct _LUID v14; // [rsp+90h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp+18h]

  BugCheckParameter2 = a3;
  v3 = (struct _LUID *)a3;
  EnterCrit(0, 1);
  v9 = 0;
  v14 = 0LL;
  if ( !a1 )
  {
    v12 = 87LL;
LABEL_12:
    UserSetLastError(v12, (__int64)v6);
    goto LABEL_9;
  }
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    a2 = (unsigned __int64 *)MmUserProbeAddress;
  v10 = CActivationObjectManager::CreateActivationObject(
          (CActivationObjectManager *)&v14,
          v6,
          v7,
          v8,
          v13,
          a1,
          *a2,
          &v14);
  if ( v10 < 0 )
  {
    v12 = RtlNtStatusToDosError(v10);
    goto LABEL_12;
  }
  v9 = 1;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct _LUID *)MmUserProbeAddress;
  *v3 = v14;
LABEL_9:
  UserSessionSwitchLeaveCrit();
  return v9;
}
