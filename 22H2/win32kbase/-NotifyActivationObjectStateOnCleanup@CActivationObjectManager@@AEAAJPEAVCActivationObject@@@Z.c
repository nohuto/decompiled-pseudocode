/*
 * XREFs of ?NotifyActivationObjectStateOnCleanup@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C00031A8
 * Callers:
 *     ?DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0003048 (-DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 * Callees:
 *     ?notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@AEBU_LUID@@2AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C0098460 (-notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTAT.c)
 *     ?GetContainingGroupIdFromActivationObject@CActivationObjectManager@@AEBA?AUACTIVATION_GROUP_ID@@AEBVCActivationObject@@@Z @ 0x1C009DC34 (-GetContainingGroupIdFromActivationObject@CActivationObjectManager@@AEBA-AUACTIVATION_GROUP_ID@@.c)
 *     ?SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActivationObject@@@Z @ 0x1C0127FDC (-SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActiv.c)
 */

__int64 __fastcall CActivationObjectManager::NotifyActivationObjectStateOnCleanup(
        CActivationObjectManager *this,
        struct CActivationObject *a2)
{
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // [rsp+20h] [rbp-18h]
  __int64 ContainingGroupIdFromActivationObject; // [rsp+28h] [rbp-10h]
  char v9; // [rsp+48h] [rbp+10h] BYREF

  result = 3221226021LL;
  if ( a2 )
  {
    v5 = *((_DWORD *)a2 + 20);
    if ( (v5 & 1) != 0 )
    {
      ContainingGroupIdFromActivationObject = CActivationObjectManager::GetContainingGroupIdFromActivationObject(
                                                this,
                                                &v9,
                                                a2);
      v7 = v6;
      CActivationObject::notifyISM(a2, 6LL);
      v5 = *((_DWORD *)a2 + 20);
    }
    if ( (v5 & 4) != 0 )
      CActivationObjectManager::SetForeground(this, 0LL, 0LL, a2, v7, ContainingGroupIdFromActivationObject);
    return 0LL;
  }
  return result;
}
