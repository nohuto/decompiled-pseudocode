/*
 * XREFs of MiGetLargePageChain @ 0x1402E98A8
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x140330760 (MiInitializePoolCommitPacket.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x14034DF94 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiIsFreeZeroPfnCold @ 0x140350240 (MiIsFreeZeroPfnCold.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeLargePageChain @ 0x14064CB6C (MiFreeLargePageChain.c)
 *     MiAddPageToHeatRanges @ 0x140651704 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x140652018 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiGetLargePageChain(unsigned int a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  BOOL v6; // ebx
  unsigned __int64 v7; // r12
  __int64 LargePagesDemoteAsNeeded; // rax
  __int64 v9; // r14
  unsigned __int64 v11; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h]
  int v19; // [rsp+48h] [rbp-C0h]
  _DWORD v20[32]; // [rsp+4Ch] [rbp-BCh] BYREF

  v3 = a1;
  memset(v20, 0, sizeof(v20));
  if ( !*(_QWORD *)(qword_140C6B0D0 + 25408 * v3 + 22832) && (MiFlags & 0x30) != 0 )
    return 0LL;
  v4 = 0LL;
  v5 = a2 >> 9;
  v19 = 16;
  v6 = qword_140C6F348 > 0x110000;
  v17 = 1;
  v18 = 0;
  v7 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      LargePagesDemoteAsNeeded = MiGetLargePagesDemoteAsNeeded(
                                   (unsigned int)&MiSystemPartition,
                                   v3,
                                   512,
                                   512,
                                   0LL,
                                   0,
                                   v6,
                                   1);
      v9 = LargePagesDemoteAsNeeded;
      if ( !LargePagesDemoteAsNeeded )
        break;
      if ( (unsigned int)MiIsFreeZeroPfnCold(LargePagesDemoteAsNeeded) && (HvlEnlightenments & 0x200000) != 0 )
      {
        if ( (unsigned int)MiAddPageToHeatRanges(&v17, 0xAAAAAAAAAAAAAAABuLL * ((v9 + 0x220000000000LL) >> 4), 1LL) )
          MiNotifyPageHeat(&v17);
        v11 = (unsigned __int8)MiLockPageInline(v9);
        *(_QWORD *)(v9 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v9 + 16), 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v16 = (v15 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v15;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v11);
      }
      ++v7;
      *(_QWORD *)v9 = v4;
      v4 = v9;
      if ( v7 >= v5 )
        goto LABEL_6;
    }
    MiFreeLargePageChain(v4);
    v4 = 0LL;
LABEL_6:
    if ( v18 )
      MiNotifyPageHeat(&v17);
  }
  return v4;
}
