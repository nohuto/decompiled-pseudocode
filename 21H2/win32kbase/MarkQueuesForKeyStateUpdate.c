/*
 * XREFs of MarkQueuesForKeyStateUpdate @ 0x1C01AEB90
 * Callers:
 *     ?SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActivationObject@@@Z @ 0x1C0127D0C (-SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActiv.c)
 * Callees:
 *     ?ForEachActivatableQueue@CActivationObjectManager@@QEAAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1C0127B6C (-ForEachActivatableQueue@CActivationObjectManager@@QEAAXA6AXPEAUtagQ@@PEAX@Z1@Z.c)
 */

void __fastcall MarkQueuesForKeyStateUpdate(CActivationObjectManager *a1, struct CInpPushLock *a2, char a3)
{
  _DWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  struct CInpPushLock *v4; // [rsp+28h] [rbp-20h]
  char v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+31h] [rbp-17h]
  __int16 v7; // [rsp+35h] [rbp-13h]
  char v8; // [rsp+37h] [rbp-11h]

  v5 = a3;
  v3[1] = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v3[0] = (_DWORD)a1;
  v4 = a2;
  CActivationObjectManager::ForEachActivatableQueue(a1, a2, (struct tagQ *)v3);
}
