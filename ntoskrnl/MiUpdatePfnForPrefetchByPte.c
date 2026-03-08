/*
 * XREFs of MiUpdatePfnForPrefetchByPte @ 0x14031D5F0
 * Callers:
 *     MiSystemFault @ 0x1402220A0 (MiSystemFault.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407C42F0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x140225A14 (MiRelinkStandbyPage.c)
 *     MiSetNonResidentPteHeat @ 0x140287A90 (MiSetNonResidentPteHeat.c)
 *     MiLockPfnByPte @ 0x14031A8C0 (MiLockPfnByPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiAddPageToHeatRanges @ 0x140651704 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x140652018 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiUpdatePfnForPrefetchByPte(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  int v5; // ebp
  __int64 result; // rax
  ULONG_PTR v7; // rbx
  char v8; // r8
  unsigned int v9; // ecx
  unsigned __int8 v10; // di
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  int v15; // edx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // [rsp+48h] [rbp+20h] BYREF

  v21 = 0;
  v5 = 0;
  result = MiLockPfnByPte(a1, &v21);
  v7 = result;
  if ( result )
  {
    v8 = *(_BYTE *)(result + 35);
    if ( (v8 & 8) != 0 )
      v9 = 5;
    else
      v9 = v8 & 7;
    if ( a2 != v9 && a2 >= v9 )
    {
      if ( (*(_BYTE *)(result + 34) & 7) == 2 )
      {
        if ( v9
          || (v11 = *(_QWORD *)(result + 16), (v11 & 0x400) != 0)
          || (v12 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)),
              (*(_DWORD *)(v12 + 4) & 0x80u) != 0)
          || (v11 & 4) == 0
          || (unsigned __int16)v11 >> 12 != *(_DWORD *)(v12 + 1188) )
        {
          MiRelinkStandbyPage(v7, a2);
        }
      }
      else
      {
        *(_BYTE *)(result + 35) = v8 ^ (a2 ^ v8) & 7;
      }
    }
    if ( a3 && (*(_BYTE *)(v7 + 34) & 7) == 2 )
    {
      v13 = *(_QWORD *)(v7 + 16);
      v14 = v13 >> 11;
      if ( (v13 & 0x400) == 0 )
        v14 = v13 >> 3;
      if ( (v14 & 1) != 0 )
      {
        MiSetNonResidentPteHeat((unsigned __int64 *)(v7 + 16), 0);
        v5 = v15 + 1;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v10 = v21;
      if ( v21 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = v21;
        v19 = ~(unsigned __int16)(-1LL << (v21 + 1));
        v20 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v10 = v21;
    }
    result = v10;
    __writecr8(v10);
    if ( v5 )
    {
      result = MiAddPageToHeatRanges(a3, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v7 + 0x220000000000LL) >> 4), 3LL);
      if ( (_DWORD)result )
        return MiNotifyPageHeat(a3);
    }
  }
  return result;
}
