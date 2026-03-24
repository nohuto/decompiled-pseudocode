/*
 * XREFs of NtUserDestroyActivationObject @ 0x1C0002FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0003048 (-DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     EnterSharedCrit @ 0x1C0035E30 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1C009CE9C (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall NtUserDestroyActivationObject(struct _LUID *a1)
{
  int v2; // edi
  struct CActivationObject *ActivationObjectFromLuid; // rax
  NTSTATUS v4; // eax
  ULONG v6; // eax
  struct _LUID v7; // [rsp+58h] [rbp+10h] BYREF

  v2 = 1;
  EnterSharedCrit(0LL, 1LL);
  v7 = 0LL;
  if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
    a1 = (struct _LUID *)MmUserProbeAddress;
  v7 = *a1;
  ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid(qword_1C0251778, &v7);
  v4 = CActivationObjectManager::DestroyActivationObjectInternal(qword_1C0251778, ActivationObjectFromLuid);
  if ( v4 < 0 )
  {
    v2 = 0;
    v6 = RtlNtStatusToDosError(v4);
    UserSetLastError(v6);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
