/*
 * XREFs of PfSnNameRemove @ 0x1402E820C
 * Callers:
 *     PfSnNameRemoveAll @ 0x140773CE0 (PfSnNameRemoveAll.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnNameRemove(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rbp
  unsigned int v5; // edi
  KIRQL v6; // al
  unsigned __int64 *v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  _QWORD *i; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r11
  _DWORD *v20; // r9
  int v21; // edx

  v2 = (volatile LONG *)(a1 + 576);
  v5 = 0;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
  v7 = (unsigned __int64 *)(a1 + 520);
  v8 = v6;
  v9 = *(_QWORD *)(a1 + 520);
  if ( (*(_BYTE *)(a1 + 528) & 1) != 0 && v9 )
    v9 ^= (unsigned __int64)v7;
  while ( v9 )
  {
    if ( *(_QWORD *)(v9 + 24) <= a2 )
    {
      if ( *(_QWORD *)(v9 + 24) >= a2 )
        break;
      v10 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      v10 = *(_QWORD *)v9;
    }
    if ( (*(_BYTE *)(a1 + 528) & 1) != 0 && v10 )
      v9 ^= v10;
    else
      v9 = v10;
  }
  if ( v9 )
  {
    RtlRbRemoveNode(v7, v9);
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v8);
    if ( *(_QWORD *)(v9 + 32) )
      KeBugCheckEx(0x191u, 0x76FuLL, 0LL, 0LL, 0LL);
    for ( i = (_QWORD *)(a1 + 488); (unsigned __int64)i < a1 + 520; ++i )
    {
      if ( *i == a2 )
        *i = 0LL;
    }
    v5 = 1;
    ExFreePoolWithTag((PVOID)v9, 0);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    if ( KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v17 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
    __writecr8(v8);
  }
  return v5;
}
