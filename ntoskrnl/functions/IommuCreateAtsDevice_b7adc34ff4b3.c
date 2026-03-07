__int64 __fastcall IommuCreateAtsDevice(_BYTE *Src, __int64 a2, _DWORD *a3, __int64 *a4)
{
  char v4; // bp
  __int64 result; // rax
  KIRQL v9; // al
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  bool v16; // zf
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // edi
  __int64 v22[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v23 = 0LL;
  v4 = 0;
  v22[0] = 0LL;
  if ( *(_DWORD *)Src != 1 || (Src[4] & 1) != 0 || (Src[10] & 3) != 0 || (*a3 & 1) == 0 )
    return 3221225659LL;
  if ( (unsigned int)HalpIommuLocateFromDevice(Src, v22) == -1073741275 )
    return 3221226537LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&HalpIommuAtsDeviceLock);
  v10 = HalpIommuAtsDeviceList;
  v11 = v9;
  if ( (__int64 *)HalpIommuAtsDeviceList != &HalpIommuAtsDeviceList )
  {
    while ( *(_WORD *)(v10 + 24) != *((_WORD *)Src + 4) || *(_WORD *)(v10 + 28) != *((_WORD *)Src + 6) )
    {
      v10 = *(_QWORD *)v10;
      if ( (__int64 *)v10 == &HalpIommuAtsDeviceList )
        goto LABEL_13;
    }
    v4 = 1;
  }
LABEL_13:
  KxReleaseSpinLock((volatile signed __int64 *)&HalpIommuAtsDeviceLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v11);
  if ( !v4 )
    return 3221226021LL;
  result = HalpIommuCreateDevice(Src, (__int64)&v23);
  if ( (int)result >= 0 )
  {
    v18 = v23;
    v19 = *(_QWORD *)(v23 + 32);
    if ( HalpHvIommu )
    {
      v20 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))qword_140C62268)(v19, 26LL, (*a3 >> 7) & 0x3E0);
    }
    else
    {
      LOBYTE(v17) = 1;
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v19 + 384))(
              *(_QWORD *)(v19 + 16),
              *(_QWORD *)(v23 + 48),
              v17);
    }
    v21 = v20;
    if ( v20 < 0 )
    {
      HalpIommuDeleteDevice(v18);
    }
    else
    {
      if ( !HalpHvIommu )
      {
        *(_DWORD *)(v18 + 60) = (*a3 >> 12) & 0x1F;
        ExInitializePushLock((PEX_RUNDOWN_REF)(v18 + 64));
        ++*(_DWORD *)(v18 + 56);
      }
      *a4 = v18;
    }
    return v21;
  }
  return result;
}
