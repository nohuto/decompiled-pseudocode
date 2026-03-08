/*
 * XREFs of ExpFastResourceLegacyIsAcquiredShared2 @ 0x140410288
 * Callers:
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x1406081A8 (ExpFastResourceLegacyIsAcquiredShared.c)
 * Callees:
 *     ExpIsFastResourceOwned @ 0x14041057C (ExpIsFastResourceOwned.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpFastResourceLegacyIsAcquiredShared2(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 *v3; // r8
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  int v7; // eax
  unsigned __int64 *i; // rax
  char v9; // dl
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v12; // r9
  int v13; // edx
  bool v14; // zf

  v2 = 0;
  if ( (unsigned __int8)ExpIsFastResourceOwned(a1, a2) )
  {
    CurrentThread = KeGetCurrentThread();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v7 = 4;
      if ( CurrentIrql != 2 )
        v7 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v7;
    }
    for ( i = (unsigned __int64 *)CurrentThread[1].WaitBlock[3].SparePtr;
          i != &CurrentThread[1].Spare19;
          i = (unsigned __int64 *)*i )
    {
      v9 = *((_BYTE *)i + 37);
      if ( (v9 & 2) == 0 && (unsigned __int64 *)i[3] == v3 || (v9 & 2) != 0 && v3 == i - 8 )
        v2 += *((_DWORD *)i + 8);
    }
    if ( KiIrqlFlags )
    {
      v10 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  return v2;
}
