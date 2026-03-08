/*
 * XREFs of MarkQueuesForKeyStateUpdate @ 0x1C02180C0
 * Callers:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C005BD48 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 * Callees:
 *     ?ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1C0155E9C (-ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z.c)
 */

void __fastcall MarkQueuesForKeyStateUpdate(CActivationObjectManager *a1, void (*a2)(struct tagQ *, void *), char a3)
{
  _DWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  void (*v4)(struct tagQ *, void *); // [rsp+28h] [rbp-20h]
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
