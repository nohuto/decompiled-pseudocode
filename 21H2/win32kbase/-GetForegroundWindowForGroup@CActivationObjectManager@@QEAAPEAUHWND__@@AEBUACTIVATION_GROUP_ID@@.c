/*
 * XREFs of ?GetForegroundWindowForGroup@CActivationObjectManager@@QEAAPEAUHWND__@@AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C0127C80
 * Callers:
 *     GetForegroundWindow @ 0x1C0128080 (GetForegroundWindow.c)
 * Callees:
 *     ?GetGroupFromGroupId@CActivationObjectManager@@AEBAPEAVCActivationGroup@@AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C00977CC (-GetGroupFromGroupId@CActivationObjectManager@@AEBAPEAVCActivationGroup@@AEBUACTIVATION_GROUP_ID.c)
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1C009CE9C (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall CActivationObjectManager::GetForegroundWindowForGroup(
        CActivationObjectManager *this,
        const struct ACTIVATION_GROUP_ID *a2)
{
  CActivationObjectManager *v2; // rbx
  const struct ACTIVATION_GROUP_ID *v3; // rdx
  struct CActivationObject *ActivationObjectFromLuid; // rax
  __int64 v5; // rbx
  struct _LUID v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = (struct _LUID)a2;
  v2 = qword_1C0251778;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&qword_1C0255590, 0LL);
  v7 = *(struct _LUID *)((char *)CActivationObjectManager::GetGroupFromGroupId(v2, v3) + 20);
  ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid(v2, &v7);
  v5 = 0LL;
  if ( ActivationObjectFromLuid )
    v5 = *((_QWORD *)ActivationObjectFromLuid + 11);
  ExReleasePushLockSharedEx(&qword_1C0255590, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
