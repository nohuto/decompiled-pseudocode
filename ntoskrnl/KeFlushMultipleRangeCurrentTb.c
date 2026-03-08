/*
 * XREFs of KeFlushMultipleRangeCurrentTb @ 0x140387610
 * Callers:
 *     MiAgeWorkingSetTail @ 0x1402C9E50 (MiAgeWorkingSetTail.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x140211FFC (KiIsSecureProcessFlush.c)
 *     KiFlushRangeTb @ 0x140387C18 (KiFlushRangeTb.c)
 *     HvlFlushRangeListTb @ 0x1403C689C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x1403C8E3C (KiPrepareFlushParameters.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     VmFlushTb @ 0x14045DE9C (VmFlushTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiPrepareFlushCurrentAffinity @ 0x14056FB44 (KiPrepareFlushCurrentAffinity.c)
 *     ExFlushTb @ 0x14060AC48 (ExFlushTb.c)
 */

char __fastcall KeFlushMultipleRangeCurrentTb(unsigned int a1, unsigned __int64 *a2, unsigned int a3)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  char result; // al
  __int64 v8; // r8
  char v9; // si
  char v10; // bl
  unsigned __int64 *v11; // rbx
  __int64 v12; // rsi
  int v13; // r8d
  int v14; // r9d
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v17; // rdx
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  char v23[8]; // [rsp+40h] [rbp-158h] BYREF
  __int64 v24; // [rsp+48h] [rbp-150h] BYREF
  _BYTE v25[272]; // [rsp+50h] [rbp-148h] BYREF

  v24 = 0LL;
  v5 = a1;
  memset(v25, 0, 0x108uLL);
  v6 = *a2;
  v23[0] = 0;
  result = KiIsSecureProcessFlush(v6, a3);
  v9 = result;
  v10 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
  if ( !result && !v10
    || (KiPrepareFlushParameters(a3, &v24, v23),
        KiPrepareFlushCurrentAffinity(v25),
        LOBYTE(v13) = v23[0],
        LOBYTE(v14) = v9,
        (result = HvlFlushRangeListTb(v24, (unsigned int)v25, v13, v14, v10, v5, (__int64)a2)) == 0) )
  {
    if ( (_DWORD)v5 )
    {
      v11 = a2;
      v12 = v5;
      do
      {
        result = KiFlushRangeTb(*v11++, a3, v8);
        --v12;
      }
      while ( v12 );
    }
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb((unsigned int)v5, a2, a3);
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        LODWORD(v17) = 0x8000;
      else
        v17 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      SchedulerAssist[5] |= v17;
    }
    ExFlushTb((unsigned int)v5, a2, a3);
    if ( KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
