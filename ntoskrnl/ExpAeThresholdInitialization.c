/*
 * XREFs of ExpAeThresholdInitialization @ 0x140B5E160
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140B3F0B8 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExpAeMeasureContention @ 0x140391544 (ExpAeMeasureContention.c)
 *     KeGenericCallDpcEx @ 0x1403C07D0 (KeGenericCallDpcEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char ExpAeThresholdInitialization()
{
  unsigned __int64 v0; // rbp
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // r10
  unsigned __int8 v4; // r11
  __int64 v5; // r9
  unsigned __int64 v6; // rbx
  int v7; // eax
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rax
  unsigned __int8 v11; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  char v18; // cl
  unsigned __int64 v19; // rdx
  _DWORD v20[16]; // [rsp+60h] [rbp+0h] BYREF

  v0 = (unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) = 0;
  memset((void *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0xC0uLL);
  v1 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v10) = 4;
    if ( CurrentIrql != 2 )
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  do
    v1 += ExpAeMeasureContention((signed __int64 *)(v0 + 64));
  while ( v5 != 1 );
  if ( KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v11 <= v4 && CurrentIrql <= v4 && v11 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(v3 << (CurrentIrql + 1));
      v15 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  v6 = v1 >> 10;
  KeGenericCallDpcEx((__int64)ExpAeThresholdInitWorker, v0 + 64);
  if ( *(_QWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0)
     / 1024LL
     / (unsigned __int64)*(int *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) >= 4 * v6 )
  {
    if ( HIDWORD(v6) )
    {
      _BitScanReverse(&v17, HIDWORD(v6));
      v16 = v17 + 32;
    }
    else
    {
      _BitScanReverse(&v16, v6);
    }
    if ( v16 < 2 )
      v18 = 0;
    else
      v18 = v16 - 2;
    ExpAeCycleCountScaler = v18;
    v19 = (v6 + (v6 >> 2)) << 7 >> v18;
    if ( v19 > 0xFFFFFFFF )
      LODWORD(v19) = -1;
    v7 = 15728640;
    ExpAeCycleCountThreshold = v19;
  }
  else
  {
    v7 = -1;
    ExpAeCycleCountScaler = -1;
    ExpAeCycleCountThreshold = -1;
  }
  ExpAeSamplingPeriodMask = v7;
  return 1;
}
