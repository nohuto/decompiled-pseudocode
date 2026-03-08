/*
 * XREFs of IommupDomainAttachPasidDevice @ 0x14050BD20
 * Callers:
 *     IommuDomainAttachDeviceEx @ 0x1405234A0 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainAttachPasidDevice @ 0x140932680 (IommuDomainAttachPasidDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpIommuGetDmarptRootAddress @ 0x14037C9D0 (HalpIommuGetDmarptRootAddress.c)
 *     HalpIommuGetHardwareDomain @ 0x1403A414C (HalpIommuGetHardwareDomain.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x14051567C (HalpIommuDereferenceHardwareDomain.c)
 *     IommuDisableDevicePasid @ 0x14051FC00 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x14051FFF0 (IommuEnableDevicePasid.c)
 *     IommuSetAddressSpace @ 0x1405213A0 (IommuSetAddressSpace.c)
 *     IommupHvAttachPasidDeviceDomain @ 0x1405220DC (IommupHvAttachPasidDeviceDomain.c)
 *     IommupHvAttachPasidSubDeviceDomain @ 0x14052223C (IommupHvAttachPasidSubDeviceDomain.c)
 *     IommupHvDetachPasidDeviceDomain @ 0x140522474 (IommupHvDetachPasidDeviceDomain.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IommupDomainAttachPasidDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r12
  int DmarptRootAddress; // edi
  bool v7; // zf
  __int64 v9; // rax
  PHYSICAL_ADDRESS v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 **v12; // rdx
  __int64 *v13; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // sf
  int v19; // eax
  KIRQL v20; // al
  __int64 *v21; // rdx
  unsigned __int64 v22; // rbx
  __int64 **v23; // rax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  __int64 v28[9]; // [rsp+30h] [rbp-48h] BYREF
  char v29; // [rsp+88h] [rbp+10h]
  char v30; // [rsp+90h] [rbp+18h]
  PHYSICAL_ADDRESS v31; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 56);
  v31.QuadPart = 0LL;
  DmarptRootAddress = 0;
  v30 = 0;
  v7 = *(_DWORD *)(v2 + 392) == 1;
  v28[0] = 0LL;
  v29 = 0;
  if ( v7 )
    return (unsigned int)-1073741637;
  if ( *(_DWORD *)(a1 + 8) != 3 )
    return (unsigned int)-1073741585;
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 )
  {
    if ( v9 != a1 )
      return (unsigned int)-1073741823;
    return (unsigned int)DmarptRootAddress;
  }
  DmarptRootAddress = HalpIommuGetDmarptRootAddress(*(_QWORD *)(a1 + 40), 4u, &v31);
  if ( DmarptRootAddress < 0 )
    return (unsigned int)DmarptRootAddress;
  v10 = v31;
  if ( HalpHvIommu )
  {
    if ( !*(_DWORD *)(a2 + 48) )
    {
      DmarptRootAddress = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))IommupHvAttachPasidDeviceDomain)(
                            v2,
                            a1,
                            (PHYSICAL_ADDRESS)v31.QuadPart,
                            0LL);
      if ( DmarptRootAddress < 0 )
        return (unsigned int)DmarptRootAddress;
      v29 = 1;
    }
    goto LABEL_20;
  }
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(*(_QWORD *)v3 + 16LL);
  DmarptRootAddress = HalpIommuGetHardwareDomain(a1, *(_QWORD *)(v2 + 32), 1, 1, 1, v28);
  if ( DmarptRootAddress < 0 )
    goto LABEL_50;
  if ( *(_DWORD *)(v28[0] + 80) != *(_DWORD *)(*(_QWORD *)v3 + 16LL) )
  {
    DmarptRootAddress = -1073741823;
    goto LABEL_50;
  }
  if ( !*(_DWORD *)(a2 + 48) )
  {
LABEL_20:
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v12 = *(__int64 ***)(a1 + 80);
    v13 = (__int64 *)(a2 + 32);
    if ( *v12 != (__int64 *)(a1 + 72) )
      goto LABEL_52;
    *v13 = a1 + 72;
    *(_QWORD *)(a2 + 40) = v12;
    *v12 = v13;
    *(_QWORD *)(a1 + 80) = v13;
    KxReleaseSpinLock((volatile signed __int64 *)(a1 + 88));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v7 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v10 = v31;
      }
    }
    __writecr8(v11);
    if ( HalpHvIommu )
    {
      if ( *(_DWORD *)(a2 + 48) )
        v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD))IommupHvAttachPasidSubDeviceDomain)(
                a2,
                (PHYSICAL_ADDRESS)v10.QuadPart);
      else
        v19 = IommupHvAttachPasidDeviceDomain(v2, a1, 0LL, 1LL);
      DmarptRootAddress = v19;
      v18 = v19 < 0;
    }
    else
    {
      DmarptRootAddress = ((__int64 (__fastcall *)(_QWORD, _QWORD))IommuSetAddressSpace)(
                            v3,
                            (PHYSICAL_ADDRESS)v10.QuadPart);
      v18 = DmarptRootAddress < 0;
    }
    if ( !v18 )
    {
      *(_QWORD *)(a2 + 24) = a1;
      return (unsigned int)DmarptRootAddress;
    }
    v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v21 = (__int64 *)*v13;
    v22 = v20;
    v23 = *(__int64 ***)(a2 + 40);
    if ( *(__int64 **)(*v13 + 8) != v13 || *v23 != v13 )
LABEL_52:
      __fastfail(3u);
    *v23 = v21;
    v21[1] = (__int64)v23;
    KxReleaseSpinLock((volatile signed __int64 *)(a1 + 88));
    if ( KiIrqlFlags )
    {
      v24 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
        v7 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
    __writecr8(v22);
    if ( v29 )
      IommupHvDetachPasidDeviceDomain(v2, 1LL);
    if ( v30 )
      IommuDisableDevicePasid(v3, v2);
    goto LABEL_50;
  }
  DmarptRootAddress = IommuEnableDevicePasid(v3, v2);
  if ( DmarptRootAddress >= 0 )
  {
    v30 = 1;
    goto LABEL_20;
  }
LABEL_50:
  if ( v28[0] )
    HalpIommuDereferenceHardwareDomain(a1);
  return (unsigned int)DmarptRootAddress;
}
