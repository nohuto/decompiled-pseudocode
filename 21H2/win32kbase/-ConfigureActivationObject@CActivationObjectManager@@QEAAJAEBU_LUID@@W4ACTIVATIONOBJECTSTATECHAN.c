/*
 * XREFs of ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_STATE@@2@Z @ 0x1C0127AC0
 * Callers:
 *     NtUserConfigureActivationObject @ 0x1C012D1C0 (NtUserConfigureActivationObject.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1C009CE9C (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 *     ?SetState@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_STATE@@2@Z @ 0x1C0127E88 (-SetState@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_RE.c)
 */

__int64 __fastcall CActivationObjectManager::ConfigureActivationObject(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  CActivationObjectManager *v5; // rdi
  struct CActivationObject *ActivationObjectFromLuid; // rax
  unsigned int v10; // ebx

  v5 = qword_1C0251778;
  RIMLockExclusive((__int64)&qword_1C0255590);
  ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid(v5, a2);
  if ( ActivationObjectFromLuid )
    v10 = CActivationObjectManager::SetState(v5, ActivationObjectFromLuid, a3, a4, a5);
  else
    v10 = -1073741275;
  qword_1C0255598 = 0LL;
  ExReleasePushLockExclusiveEx(&qword_1C0255590, 0LL);
  KeLeaveCriticalRegion();
  return v10;
}
