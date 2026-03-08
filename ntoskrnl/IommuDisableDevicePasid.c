/*
 * XREFs of IommuDisableDevicePasid @ 0x14051FC00
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14050BD20 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14050C048 (IommupDomainDetachPasidDevice.c)
 *     IommupDeviceDisableSvm @ 0x140930CBC (IommupDeviceDisableSvm.c)
 *     IommupDeviceEnableSvm @ 0x140930DD4 (IommupDeviceEnableSvm.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IommuHvSetAddressSpace @ 0x140521E10 (IommuHvSetAddressSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IommuDisableDevicePasid(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // r13
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  _QWORD *v8; // r15
  _QWORD *v9; // rdi
  _QWORD *i; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // r12
  _QWORD *j; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  bool v16; // zf
  ULONG_PTR v17; // r14
  unsigned int v18; // ebp
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  KSPIN_LOCK *v26; // rbx
  _DWORD *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *v32; // r10
  int v33; // eax
  __int64 v34; // rcx
  unsigned __int8 v35; // al
  KIRQL v36; // bl
  struct _KPRCB *v37; // r10
  int v38; // eax
  _DWORD *v39; // r9
  unsigned __int8 v41; // [rsp+30h] [rbp-58h]
  volatile signed __int64 *v42; // [rsp+38h] [rbp-50h]
  KIRQL v44; // [rsp+98h] [rbp+10h]
  bool v45; // [rsp+A0h] [rbp+18h]
  __int64 v46; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a2 + 88);
  v46 = v2;
  v45 = *(_DWORD *)(a2 + 392) == 1;
  v4 = *(_QWORD *)(v3 + 24);
  v44 = KeAcquireSpinLockRaiseToDpc(&IommupPasidTableLock);
  CurrentIrql = KeGetCurrentIrql();
  v41 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v7) = 0x8000;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v7;
  }
  v42 = (volatile signed __int64 *)(v2 + 24);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 24));
  v8 = (_QWORD *)(v2 + 40);
  v9 = 0LL;
  for ( i = *(_QWORD **)(v2 + 40); i != v8; i = (_QWORD *)*i )
  {
    v9 = i;
    if ( i[2] == v4 )
      break;
  }
  v11 = v9 + 3;
  v12 = 0LL;
  for ( j = (_QWORD *)v9[3]; j != v11; j = (_QWORD *)*j )
  {
    v12 = j;
    if ( j[5] == v3 )
      break;
  }
  v14 = *v12;
  v15 = (_QWORD *)v12[1];
  if ( *(_QWORD **)(*v12 + 8LL) != v12 || (_QWORD *)*v15 != v12 )
    goto LABEL_64;
  v16 = HalpHvIommu == 0;
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  if ( !v16 )
  {
    v17 = *(_QWORD *)(v3 + 40);
    v18 = *(_DWORD *)(v46 + 16);
    if ( (unsigned int)((__int64 (__fastcall *)(ULONG_PTR, _QWORD))qword_140C62238)(v17, v18) == 3473497 )
      KeBugCheckEx(0x159u, 0x3001uLL, v17, v18, 0LL);
    CurrentIrql = v41;
  }
  if ( (_QWORD *)*v11 == v11 )
  {
    if ( !HalpHvIommu )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v4 + 240))(
        *(_QWORD *)(v4 + 16),
        *(_QWORD *)(v3 + 56),
        *(unsigned int *)(v46 + 16),
        0LL,
        0LL);
    v19 = *v9;
    v20 = (_QWORD *)v9[1];
    if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v20 != v9 )
      goto LABEL_64;
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
  }
  else
  {
    v9 = 0LL;
  }
  if ( HalpHvIommu && (_QWORD *)*v8 == v8 )
    IommuHvSetAddressSpace(a1, 0LL);
  KxAcquireSpinLock((PKSPIN_LOCK)(v3 + 16));
  --*(_DWORD *)(v3 + 36);
  v22 = v12[2];
  v23 = (_QWORD *)v12[3];
  if ( *(_QWORD **)(v22 + 8) != v12 + 2 || (_QWORD *)*v23 != v12 + 2 )
    goto LABEL_64;
  *v23 = v22;
  *(_QWORD *)(v22 + 8) = v23;
  if ( !*(_DWORD *)(v3 + 36) && !HalpHvIommu )
  {
    LOBYTE(v21) = v45;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v4 + 224))(
      *(_QWORD *)(v4 + 16),
      *(_QWORD *)(v3 + 40),
      0LL,
      v21);
    v24 = *(_QWORD *)(v3 + 64);
    v25 = *(_QWORD **)(v3 + 72);
    if ( *(_QWORD *)(v24 + 8) == v3 + 64 && *v25 == v3 + 64 )
    {
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      *(_QWORD *)(v3 + 56) = 0LL;
      goto LABEL_39;
    }
LABEL_64:
    __fastfail(3u);
  }
LABEL_39:
  KxReleaseSpinLock((volatile signed __int64 *)(v3 + 16));
  KxReleaseSpinLock(v42);
  v26 = (KSPIN_LOCK *)(v4 + 424);
  if ( HalpHvIommu )
    v26 = (KSPIN_LOCK *)(v4 + 32);
  KxAcquireSpinLock(v26);
  v27 = (_DWORD *)(v3 + 116);
  v28 = 512LL;
  do
  {
    if ( (*v27 & 1) != 0 && ((*v27 >> 1) & 0xFFFFF) == *(_DWORD *)(v46 + 16) )
      *(_QWORD *)(v27 - 1) = 0LL;
    v27 += 2;
    --v28;
  }
  while ( v28 );
  KxReleaseSpinLock((volatile signed __int64 *)v26);
  v29 = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    v30 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v29 = (unsigned int)CurrentIrql + 1;
      v32 = CurrentPrcb->SchedulerAssist;
      v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v16 = (v33 & v32[5]) == 0;
      v32[5] &= v33;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  HalpMmAllocCtxFree(v29, (__int64)v12);
  KxReleaseSpinLock((volatile signed __int64 *)&IommupPasidTableLock);
  v34 = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags && (v35 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v35 <= 0xFu )
  {
    v36 = v44;
    if ( v44 <= 0xFu && v35 >= 2u )
    {
      v37 = KeGetCurrentPrcb();
      v34 = (unsigned int)v44 + 1;
      v38 = ~(unsigned __int16)(-1LL << (v44 + 1));
      v39 = v37->SchedulerAssist;
      v16 = (v38 & v39[5]) == 0;
      v39[5] &= v38;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(v37);
    }
  }
  else
  {
    v36 = v44;
  }
  __writecr8(v36);
  if ( v9 )
    HalpMmAllocCtxFree(v34, (__int64)v9);
  return 0LL;
}
