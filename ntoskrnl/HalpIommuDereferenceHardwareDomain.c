/*
 * XREFs of HalpIommuDereferenceHardwareDomain @ 0x14051567C
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14050BD20 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14050C048 (IommupDomainDetachPasidDevice.c)
 *     HalpIommuJoinDmaDomain @ 0x140515ED4 (HalpIommuJoinDmaDomain.c)
 *     HalpIommuLeaveDmaDomain @ 0x140516044 (HalpIommuLeaveDmaDomain.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     HalpIommuFreeDomain @ 0x140512F14 (HalpIommuFreeDomain.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpIommuDereferenceHardwareDomain(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 32));
  if ( a1 != HalpIommuBypassDomain )
    --a2[2];
  if ( !a2[2] )
  {
    v5 = *a2;
    v6 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v6 != a2 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    HalpIommuFreeDomain(a2[3], (__int64)(a2 + 4));
    HalpMmAllocCtxFree(v7, (__int64)a2);
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)(a1 + 32));
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v11 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  return result;
}
