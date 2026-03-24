/*
 * XREFs of ?SetState@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_STATE@@2@Z @ 0x1C0127E88
 * Callers:
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_STATE@@2@Z @ 0x1C0127AC0 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 * Callees:
 *     ?notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@AEBU_LUID@@2AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C00976A0 (-notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTAT.c)
 *     ?GetContainingGroupIdFromActivationObject@CActivationObjectManager@@AEBA?AUACTIVATION_GROUP_ID@@AEBVCActivationObject@@@Z @ 0x1C009CE74 (-GetContainingGroupIdFromActivationObject@CActivationObjectManager@@AEBA-AUACTIVATION_GROUP_ID@@.c)
 *     ?SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActivationObject@@@Z @ 0x1C0127D0C (-SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActiv.c)
 */

__int64 __fastcall CActivationObjectManager::SetState(
        CActivationObjectManager *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        char a5)
{
  __int64 v8; // r8
  int v9; // eax
  char v10; // r9
  unsigned __int8 v11; // bl
  char v12; // si
  int v14; // [rsp+68h] [rbp+20h] BYREF

  CActivationObjectManager::GetContainingGroupIdFromActivationObject((__int64)a1, &v14, a2);
  v9 = *(_DWORD *)(v8 + 80);
  v11 = a5 & v10 | v9 & ~v10;
  v12 = v9 ^ v11;
  if ( (((unsigned __int8)v9 ^ v11) & 1) != 0 )
  {
    *(_DWORD *)(v8 + 80) = v11 & 1 | v9 & 0xFFFFFFFE;
    CActivationObject::notifyISM(a2, !(v11 & 1) + 5);
  }
  if ( (v12 & 2) != 0 )
    *(_DWORD *)(a2 + 80) ^= (v11 ^ (unsigned __int8)*(_DWORD *)(a2 + 80)) & 2;
  if ( (v12 & 4) != 0 )
    CActivationObjectManager::SetForeground(a1, (v11 & 4) != 0, a3, a2);
  return 0LL;
}
