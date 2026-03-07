__int64 __fastcall HalpIommuMapLogical(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  int v6; // r10d
  __int64 v7; // r15
  __int64 v8; // rbp
  unsigned __int64 v9; // r13
  int v10; // r14d
  __int64 v11; // rbx
  unsigned int v13; // r11d
  int v14; // r9d
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  PVOID v22; // rcx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v24; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  unsigned int v30; // ecx
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  int v34; // r8d
  __int64 v35; // r10
  unsigned int v36; // esi
  int v37; // eax
  __int64 v38; // r9
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  int v41; // eax
  _DWORD *v42; // r8
  unsigned int v44; // [rsp+30h] [rbp-A8h]
  char v45; // [rsp+34h] [rbp-A4h]
  unsigned int v46; // [rsp+38h] [rbp-A0h]
  __int64 v48; // [rsp+40h] [rbp-98h]
  __int64 v49; // [rsp+40h] [rbp-98h]
  __int64 v50; // [rsp+48h] [rbp-90h] BYREF
  __int64 v51; // [rsp+50h] [rbp-88h]
  volatile signed __int64 *v52; // [rsp+58h] [rbp-80h]
  __int64 v53; // [rsp+60h] [rbp-78h]
  _OWORD v54[3]; // [rsp+68h] [rbp-70h] BYREF

  v6 = *(_DWORD *)(a2 + 28);
  v7 = *(_QWORD *)(a2 + 16);
  v8 = 0LL;
  v9 = a6;
  memset(v54, 0, sizeof(v54));
  v10 = 1 << v6;
  LODWORD(v11) = 0;
  *(_QWORD *)&v54[0] = v7;
  v13 = 0;
  v51 = a4;
  v45 = v6;
  v46 = 1 << v6;
  v44 = 0;
  v53 = a6;
  v50 = 0LL;
  if ( !a5 )
    return 0LL;
  while ( 1 )
  {
    v14 = *(_DWORD *)(a2 + 24);
    if ( (unsigned int)v11 < v14 - 1 )
      break;
LABEL_22:
    v30 = *(_DWORD *)(a2 + 4LL * (unsigned int)v11 + 36);
    if ( a3 )
    {
      if ( v30 < 0x40 )
        v33 = (1LL << v30) - 1;
      else
        LODWORD(v33) = -1;
      v34 = v33 & (v9 >> *(_DWORD *)(a2 + 4LL * (unsigned int)v11 + 60));
      v35 = v7 + (unsigned int)(v34 << v6);
      v36 = (1 << *(_DWORD *)(a2 + 4LL * (unsigned int)(v14 - 1) + 36)) - v34;
      if ( (unsigned int)a5 - v13 <= v36 )
        v36 = a5 - v13;
      v49 = v35;
      v37 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(a2 + 88) + 16LL))(
              v35,
              v51 + 8LL * v13,
              a3,
              v36);
      v8 += (unsigned int)(v37 << 12);
      v50 = v8;
      if ( v37 != v36 )
      {
        HalpIommuUnmapLogicalRange(a2, &v50, v53);
        return 3221225485LL;
      }
      if ( !HalpIommuPageTableCacheCoherent )
        KeInvalidateRangeAllCachesNoIpi(v49, v10 * v36);
      v13 = v44;
      LODWORD(v32) = v36;
      v31 = v9 + ((unsigned __int64)v36 << 12);
    }
    else
    {
      v31 = ~((1LL << ((unsigned __int8)v30 + 12)) - 1) & ((1LL << ((unsigned __int8)v30 + 12)) + v9);
      v32 = (v31 - v9) >> 12;
    }
    v13 += v32;
    v44 = v13;
    if ( (_DWORD)v11 )
    {
      do
      {
        v38 = (unsigned int)(v11 - 1);
        if ( ((1LL << *(_DWORD *)(a2 + 4 * v38 + 60)) & v31) == (v9 & (1LL << *(_DWORD *)(a2 + 4 * v38 + 60))) )
          break;
        LODWORD(v11) = v11 - 1;
      }
      while ( (_DWORD)v38 );
    }
    v9 = v31;
    v7 = *((_QWORD *)v54 + (unsigned int)v11);
    if ( v13 >= a5 )
      return 0LL;
    LOBYTE(v6) = v45;
  }
  v15 = (unsigned int)v11;
  while ( 1 )
  {
    v16 = *(_DWORD *)(a2 + 4 * v15 + 36);
    v17 = v7 + (1 << v16 << v6);
    if ( v16 < 0x40 )
      v18 = (1LL << v16) - 1;
    else
      LODWORD(v18) = -1;
    v19 = (unsigned int)v18 & (unsigned int)(v9 >> *(_DWORD *)(a2 + 4 * v15 + 60));
    v20 = v19;
    v48 = v19;
    if ( !*(_QWORD *)(v17 + 8 * v19) )
      break;
LABEL_20:
    v7 = *(_QWORD *)(v17 + 8 * v20);
    v11 = (unsigned int)(v11 + 1);
    v14 = *(_DWORD *)(a2 + 24);
    v15 = (unsigned int)v11;
    *((_QWORD *)v54 + v11) = v7;
    if ( (unsigned int)v11 >= v14 - 1 )
    {
      v8 = v50;
      v10 = v46;
      v13 = v44;
      goto LABEL_22;
    }
  }
  v52 = (volatile signed __int64 *)(a2 + 8);
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 8));
  if ( *(_QWORD *)(v17 + 8 * v19) )
  {
LABEL_12:
    KxReleaseSpinLock((volatile signed __int64 *)(a2 + 8));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v21 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
        v29 = (v28 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v28;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v21);
    v20 = v48;
    LOBYTE(v6) = v45;
    goto LABEL_20;
  }
  v22 = HalpIommuAllocateAndZeroPageTable(a2, (int)v11 + 1, 0LL);
  *(_QWORD *)(v17 + 8 * v19) = v22;
  if ( v22 )
  {
    PhysicalAddress = MmGetPhysicalAddress(v22);
    v24 = v7 + (unsigned int)((_DWORD)v19 << v45);
    (**(void (__fastcall ***)(__int64, _QWORD, PHYSICAL_ADDRESS))(a2 + 88))(
      v24,
      (unsigned int)(*(_DWORD *)(a2 + 24) - v11 - 1),
      PhysicalAddress);
    if ( !HalpIommuPageTableCacheCoherent )
      KeInvalidateRangeAllCachesNoIpi(v24, v46);
    goto LABEL_12;
  }
  KxReleaseSpinLock(v52);
  if ( KiIrqlFlags )
  {
    v39 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v39 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v39 >= 2u )
    {
      v40 = KeGetCurrentPrcb();
      v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
      v42 = v40->SchedulerAssist;
      v29 = (v41 & v42[5]) == 0;
      v42[5] &= v41;
      if ( v29 )
        KiRemoveSystemWorkPriorityKick(v40);
    }
  }
  __writecr8(v21);
  return 3221225626LL;
}
