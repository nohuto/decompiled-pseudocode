/*
 * XREFs of IommupDomainDetachPasidDevice @ 0x14050C048
 * Callers:
 *     IommuDomainAttachDeviceEx @ 0x1405234A0 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDeviceEx @ 0x1405238E0 (IommuDomainDetachDeviceEx.c)
 *     IommuDomainDetachPasidDevice @ 0x140932780 (IommuDomainDetachPasidDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpIommuGetHardwareDomain @ 0x1403A414C (HalpIommuGetHardwareDomain.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x14051567C (HalpIommuDereferenceHardwareDomain.c)
 *     IommuDisableDevicePasid @ 0x14051FC00 (IommuDisableDevicePasid.c)
 *     IommuSetAddressSpace @ 0x1405213A0 (IommuSetAddressSpace.c)
 *     IommupHvDetachPasidDeviceDomain @ 0x140522474 (IommupHvDetachPasidDeviceDomain.c)
 *     IommupHvDetachPasidSubDeviceDomain @ 0x14052251C (IommupHvDetachPasidSubDeviceDomain.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IommupDomainDetachPasidDevice(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // r13
  char v5; // r15
  unsigned __int64 v6; // rsi
  _QWORD *i; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  unsigned __int64 v13; // rsi
  __int64 v14; // r8
  _QWORD *v15; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  int v18; // eax
  _DWORD *v19; // r8
  int v20; // eax
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v22 = 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
    return 3221225711LL;
  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 88));
  for ( i = *(_QWORD **)(v2 + 72); i != (_QWORD *)(v2 + 72); i = (_QWORD *)*i )
  {
    if ( i - 4 == (_QWORD *)a1 )
    {
      v5 = 1;
      break;
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)(v2 + 88));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v6);
  if ( !v5 )
    return 3221225711LL;
  if ( HalpHvIommu )
  {
    if ( *(_DWORD *)(a1 + 48) )
      IommupHvDetachPasidSubDeviceDomain(a1);
    else
      IommupHvDetachPasidDeviceDomain(v3, 0LL);
  }
  else
  {
    IommuSetAddressSpace(v4, 0LL);
  }
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 88));
  v14 = *(_QWORD *)(a1 + 32);
  v15 = *(_QWORD **)(a1 + 40);
  if ( *(_QWORD *)(v14 + 8) != a1 + 32 || *v15 != a1 + 32 )
    __fastfail(3u);
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  KxReleaseSpinLock((volatile signed __int64 *)(v2 + 88));
  if ( KiIrqlFlags )
  {
    v16 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v16 >= 2u )
    {
      v17 = KeGetCurrentPrcb();
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
      v19 = v17->SchedulerAssist;
      v12 = (v18 & v19[5]) == 0;
      v19[5] &= v18;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(v17);
    }
  }
  __writecr8(v13);
  v20 = *(_DWORD *)(a1 + 48);
  if ( HalpHvIommu )
  {
    if ( !v20 )
      IommupHvDetachPasidDeviceDomain(v3, 1LL);
  }
  else
  {
    if ( v20 )
      IommuDisableDevicePasid(v4, v3);
    HalpIommuGetHardwareDomain(v2, *(_QWORD *)(v3 + 32), 0, 0, 0, &v22);
    if ( v22 )
      HalpIommuDereferenceHardwareDomain(v2);
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  return 0LL;
}
