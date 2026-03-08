/*
 * XREFs of MiGenerateAccessViolation @ 0x1406439D8
 * Callers:
 *     MiSystemFault @ 0x1402220A0 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x140222830 (MiCheckSystemPageTables.c)
 *     MiRaisedIrqlFault @ 0x1402DA4D0 (MiRaisedIrqlFault.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14020DEF0 (MiDeterminePoolType.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGenerateAccessViolation(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rsi
  unsigned int v2; // edi
  KIRQL v3; // al
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // edx
  bool v10; // zf

  v1 = *a1;
  v2 = 0;
  if ( (unsigned int)MiDeterminePoolType(*a1) == 32 || KeGetCurrentIrql() > 2u )
    return 0LL;
  v3 = ExAcquireSpinLockShared(&dword_140C65130);
  v4 = (_QWORD *)BugCheckParameter2;
  v5 = v3;
  while ( v4 )
  {
    if ( v1 <= v4[4] )
    {
      if ( v1 >= v4[3] )
        break;
      v4 = (_QWORD *)*v4;
    }
    else
    {
      v4 = (_QWORD *)v4[1];
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C65130);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v5);
  LOBYTE(v2) = v4 != 0LL;
  return v2;
}
