/*
 * XREFs of HalpIommuMapLogicalRange @ 0x14037A478
 * Callers:
 *     HalpIommuDomainMapIdentityRange @ 0x140515774 (HalpIommuDomainMapIdentityRange.c)
 *     HalpIommuDomainMapLogicalRange @ 0x140515914 (HalpIommuDomainMapLogicalRange.c)
 *     HalpIommuConstructReservedPageTable @ 0x140A8775C (HalpIommuConstructReservedPageTable.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1402149F0 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x14037AC5C (HalpIommuAllocateAndZeroPageTable.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpIommuUnmapLogicalRange @ 0x140524F80 (HalpIommuUnmapLogicalRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpIommuMapLogicalRange(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  int v6; // r10d
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r11
  __int64 v12; // r15
  __int64 v13; // rbp
  int v14; // r9d
  __int64 v15; // rdx
  unsigned int v16; // r8d
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  void *v22; // rcx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v24; // rbp
  unsigned int v25; // ecx
  __int64 v26; // rax
  int v27; // r8d
  __int64 v28; // r10
  unsigned int v29; // esi
  int v30; // eax
  __int64 v31; // rsi
  unsigned __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v38; // eax
  bool v39; // zf
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r9
  int v42; // eax
  _DWORD *v43; // r8
  char v44; // [rsp+30h] [rbp-C8h]
  unsigned int v45; // [rsp+34h] [rbp-C4h]
  unsigned int v46; // [rsp+38h] [rbp-C0h]
  __int64 v47; // [rsp+40h] [rbp-B8h]
  __int64 v48; // [rsp+40h] [rbp-B8h]
  __int64 v49; // [rsp+48h] [rbp-B0h]
  __int64 v50; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-A0h]
  __int64 v52; // [rsp+60h] [rbp-98h]
  volatile signed __int64 *v53; // [rsp+68h] [rbp-90h]
  unsigned __int64 v54; // [rsp+70h] [rbp-88h]
  _OWORD v55[3]; // [rsp+78h] [rbp-80h] BYREF

  v6 = *(_DWORD *)(a2 + 28);
  v8 = a6;
  LODWORD(v9) = 0;
  v52 = a1;
  v10 = *(_QWORD *)(a2 + 16);
  v11 = a6 + ((a5 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  v45 = a3;
  v44 = v6;
  v51 = v11;
  v54 = a6;
  v46 = 1 << v6;
  v55[0] = v10;
  v12 = a4 & -(__int64)(a3 != 0);
  v13 = 0LL;
  v47 = v12;
  v50 = 0LL;
  memset(&v55[1], 0, 32);
  if ( a6 >= v11 )
    return 0LL;
  while ( 1 )
  {
    v14 = *(_DWORD *)(a2 + 24);
    if ( (unsigned int)v9 < v14 - 1 )
      break;
LABEL_15:
    v25 = *(_DWORD *)(a2 + 4LL * (unsigned int)v9 + 36);
    if ( a3 )
    {
      if ( v25 >= 0x40 )
        LODWORD(v26) = -1;
      else
        v26 = (1LL << v25) - 1;
      v27 = v26 & (v8 >> *(_DWORD *)(a2 + 4LL * (unsigned int)v9 + 60));
      v28 = v10 + (unsigned int)(v27 << v6);
      v29 = (1 << *(_DWORD *)(a2 + 4LL * (unsigned int)(v14 - 1) + 36)) - v27;
      if ( (unsigned int)((v11 - v8) >> 12) <= v29 )
        v29 = (v11 - v8) >> 12;
      v48 = v28;
      v30 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(a2 + 88) + 8LL))(
              v28,
              v12,
              v45,
              v29);
      v13 += (unsigned int)(v30 << 12);
      v50 = v13;
      if ( v30 != v29 )
      {
        HalpIommuUnmapLogicalRange(a2, &v50, v54);
        return 3221225485LL;
      }
      if ( !HalpIommuPageTableCacheCoherent )
        KeInvalidateRangeAllCachesNoIpi(v48, v46 * v29);
      v31 = v29 << 12;
      v12 += (unsigned int)v31;
      v47 = v12;
      v32 = v31 + v8;
    }
    else
    {
      v32 = ~((1LL << ((unsigned __int8)v25 + 12)) - 1) & ((1LL << ((unsigned __int8)v25 + 12)) + v8);
    }
    if ( (_DWORD)v9 )
    {
      do
      {
        v33 = (unsigned int)(v9 - 1);
        if ( ((1LL << *(_DWORD *)(a2 + 4 * v33 + 60)) & v32) == (v8 & (1LL << *(_DWORD *)(a2 + 4 * v33 + 60))) )
          break;
        LODWORD(v9) = v9 - 1;
      }
      while ( (_DWORD)v33 );
    }
    v11 = v51;
    v8 = v32;
    v10 = *((_QWORD *)v55 + (unsigned int)v9);
    if ( v32 >= v51 )
      return 0LL;
    LOBYTE(v6) = v44;
    a3 = v45;
  }
  v15 = (unsigned int)v9;
  while ( 1 )
  {
    v16 = *(_DWORD *)(a2 + 4 * v15 + 36);
    v17 = v10 + (1 << v16 << v6);
    if ( v16 >= 0x40 )
      LODWORD(v18) = -1;
    else
      v18 = (1LL << v16) - 1;
    v19 = (unsigned int)v18 & (unsigned int)(v8 >> *(_DWORD *)(a2 + 4 * v15 + 60));
    v20 = v19;
    v49 = v19;
    if ( !*(_QWORD *)(v17 + 8 * v19) )
      break;
LABEL_13:
    v10 = *(_QWORD *)(v17 + 8 * v20);
    v9 = (unsigned int)(v9 + 1);
    v14 = *(_DWORD *)(a2 + 24);
    v15 = (unsigned int)v9;
    *((_QWORD *)v55 + v9) = v10;
    if ( (unsigned int)v9 >= v14 - 1 )
    {
      v13 = v50;
      v12 = v47;
      v11 = v51;
      a3 = v45;
      goto LABEL_15;
    }
  }
  v53 = (volatile signed __int64 *)(a2 + 8);
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 8));
  if ( *(_QWORD *)(v17 + 8 * v19) )
  {
LABEL_11:
    KxReleaseSpinLock((volatile signed __int64 *)(a2 + 8));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v21 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
        v39 = (v38 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v38;
        if ( v39 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v21);
    v20 = v49;
    LOBYTE(v6) = v44;
    goto LABEL_13;
  }
  v22 = (void *)HalpIommuAllocateAndZeroPageTable(a2, (unsigned int)(v9 + 1), v52);
  *(_QWORD *)(v17 + 8 * v19) = v22;
  if ( v22 )
  {
    PhysicalAddress = MmGetPhysicalAddress(v22);
    v24 = v10 + (unsigned int)((_DWORD)v19 << v44);
    (**(void (__fastcall ***)(__int64, _QWORD, PHYSICAL_ADDRESS))(a2 + 88))(
      v24,
      (unsigned int)(*(_DWORD *)(a2 + 24) - v9 - 1),
      PhysicalAddress);
    if ( !HalpIommuPageTableCacheCoherent )
      KeInvalidateRangeAllCachesNoIpi(v24, v46);
    goto LABEL_11;
  }
  KxReleaseSpinLock(v53);
  if ( KiIrqlFlags )
  {
    v40 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v40 >= 2u )
    {
      v41 = KeGetCurrentPrcb();
      v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
      v43 = v41->SchedulerAssist;
      v39 = (v42 & v43[5]) == 0;
      v43[5] &= v42;
      if ( v39 )
        KiRemoveSystemWorkPriorityKick(v41);
    }
  }
  __writecr8(v21);
  return 3221225626LL;
}
