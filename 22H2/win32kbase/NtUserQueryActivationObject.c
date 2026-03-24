/*
 * XREFs of NtUserQueryActivationObject @ 0x1C00A3580
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C00372A0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     ?QueryActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@AEAU_tagActivationObjectInformation@@@Z @ 0x1C009DB74 (-QueryActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@AEAU_tagActivationObjectInforma.c)
 */

__int64 __fastcall NtUserQueryActivationObject(struct _LUID *a1, _OWORD *a2)
{
  int v4; // ebx
  CActivationObjectManager *v5; // rcx
  NTSTATUS v6; // eax
  ULONG v8; // eax
  __int64 v9; // rdx
  __int128 v10; // [rsp+50h] [rbp-18h] BYREF
  struct _LUID v11; // [rsp+80h] [rbp+18h] BYREF

  v4 = 1;
  EnterSharedCrit(0, 1);
  v11 = 0LL;
  v10 = 0LL;
  v5 = (CActivationObjectManager *)&a1[1];
  if ( &a1[1] < a1 || (unsigned __int64)v5 > MmUserProbeAddress )
    a1 = (struct _LUID *)MmUserProbeAddress;
  v11 = *a1;
  v6 = CActivationObjectManager::QueryActivationObject(v5, &v11, (struct _tagActivationObjectInformation *)&v10);
  if ( v6 < 0 )
  {
    v4 = 0;
    v8 = RtlNtStatusToDosError(v6);
    UserSetLastError(v8, v9);
  }
  else
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = v10;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
