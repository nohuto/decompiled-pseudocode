__int64 __fastcall IommuDomainAttachDeviceEx(ULONG_PTR a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  int DomainTypes; // r8d
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rdx
  __int64 *v14; // rax
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  __int64 v21[7]; // [rsp+20h] [rbp-38h] BYREF
  char v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  v22 = 0;
  v3 = 0LL;
  v4 = 0LL;
  v23 = 0LL;
  v21[0] = 0LL;
  DomainTypes = HalpIommuDeviceGetDomainTypes(a2, a2);
  if ( !_bittest(&DomainTypes, *(_DWORD *)(a1 + 8)) )
    return (unsigned int)-1073741790;
  v8 = *(_QWORD *)(a2 + 24);
  if ( v8 )
  {
    if ( v8 == a1 )
      return 0;
    IommupFindAndPopCachedDevice(a2, &v23);
    v3 = v23;
  }
  if ( *(_BYTE *)(a2 + 266) )
  {
    if ( (unsigned int)Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage() )
    {
      if ( *(_QWORD *)(a2 + 24) || !IommupDeviceGetPasidDevice(a2, v10, 0, v21) )
      {
        v7 = -1073741823;
      }
      else
      {
        v4 = v21[0];
        v7 = IommupDomainAttachPasidDevice(a1, v21[0]);
        if ( v7 >= 0 )
        {
          *(_QWORD *)(a2 + 24) = a1;
LABEL_17:
          if ( v3 || (v23 = HalpMmAllocCtxAlloc(v9, 56LL), (v3 = v23) != 0) )
          {
            *(_OWORD *)v3 = 0LL;
            *(_OWORD *)(v3 + 16) = 0LL;
            *(_OWORD *)(v3 + 32) = 0LL;
            *(_QWORD *)(v3 + 48) = 0LL;
            *(_QWORD *)(v3 + 32) = a2;
            *(_QWORD *)(v3 + 16) = *(_QWORD *)(a2 + 8);
            *(_DWORD *)(v3 + 24) = 0;
            *(_DWORD *)(v3 + 28) = 1;
            *(_QWORD *)(v3 + 40) = a1;
            *(_QWORD *)(v3 + 48) = *(_QWORD *)a2;
          }
          else
          {
            v7 = -1073741670;
            if ( !*(_BYTE *)(a2 + 266) )
            {
              HalpIommuLeaveDmaDomain(a2, a1);
              return (unsigned int)v7;
            }
            IommupDomainDetachPasidDevice(v4);
          }
        }
      }
    }
    else
    {
      v7 = -1073741637;
    }
  }
  else
  {
    v7 = HalpIommuJoinDmaDomain(a2, a1, &v22);
    if ( v7 >= 0 )
      goto LABEL_17;
  }
  if ( v3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 12 )
        LODWORD(v13) = 4096;
      else
        v13 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
      v3 = v23;
      SchedulerAssist[5] |= v13;
    }
    KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
    v14 = (__int64 *)qword_140C5FD48;
    if ( *(__int64 **)qword_140C5FD48 != &HalpIommuParaVirtDeviceCache )
      __fastfail(3u);
    *(_QWORD *)v3 = &HalpIommuParaVirtDeviceCache;
    *(_QWORD *)(v3 + 8) = v14;
    *v14 = v3;
    qword_140C5FD48 = v3;
    KxReleaseSpinLock((volatile signed __int64 *)&HalpIommuParaVirtDeviceCacheLock);
    if ( KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  return (unsigned int)v7;
}
