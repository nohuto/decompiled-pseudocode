/*
 * XREFs of MiGetDanglingExtent @ 0x14063B2F8
 * Callers:
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiGetDanglingExtent(_QWORD *a1)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r10
  int v10; // r8d
  bool v11; // zf
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r10
  unsigned __int8 v15; // bp
  _DWORD *v16; // r9
  __int64 v17; // rax
  volatile signed __int32 *v18; // rdi
  unsigned __int64 v19; // rsi
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  int v24; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = ExAcquireSpinLockExclusive(&dword_140C6CB20);
  do
  {
    v5 = v3;
    if ( !qword_140C65360 )
      break;
    v3 = qword_140C65360;
    if ( v2 )
      v3 = v5;
    v6 = qword_140C65360 - 48;
    qword_140C65360 = *(_QWORD *)qword_140C65360;
    ++v2;
  }
  while ( qword_140C65360 == v6 );
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6CB20);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
  if ( !v2 )
    return -1LL;
  v13 = v3 - 48 * v2;
  v14 = v13 + 48;
  v15 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v15 <= 0xFu )
  {
    v16 = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v17) = 4;
    if ( v15 != 2 )
      v17 = (-1LL << (v15 + 1)) & 4;
    v16[5] |= v17;
  }
  if ( v14 <= v3 )
  {
    v18 = (volatile signed __int32 *)(v13 + 72);
    v19 = (v3 - v14) / 0x30 + 1;
    do
    {
      v24 = 0;
      while ( _interlockedbittestandset64(v18, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v24);
        while ( *(__int64 *)v18 < 0 );
      }
      _InterlockedAnd64((volatile signed __int64 *)v18, 0x7FFFFFFFFFFFFFFFuLL);
      v18 += 12;
      --v19;
    }
    while ( v19 );
  }
  if ( KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && v15 <= 0xFu && v20 >= 2u )
    {
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << (v15 + 1));
      v11 = (v23 & v22[5]) == 0;
      v22[5] &= v23;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)v21);
    }
  }
  __writecr8(v15);
  *a1 = v2;
  return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v13 + 0x220000000030LL) >> 4);
}
