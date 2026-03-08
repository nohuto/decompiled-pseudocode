/*
 * XREFs of IommuDomainAttachDevice @ 0x140523210
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     HalpIommuGetDeviceId @ 0x14038CC4C (HalpIommuGetDeviceId.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     HalpIommuJoinDmaDomain @ 0x140515ED4 (HalpIommuJoinDmaDomain.c)
 *     IommupFindAndPopCachedDevice @ 0x140524604 (IommupFindAndPopCachedDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIommuCreateDevice @ 0x140822B28 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140930ACC (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall IommuDomainAttachDevice(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v10; // rcx
  int DeviceId; // edi
  int Device; // eax
  __int64 v13; // rax
  void *v14; // rax
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v17; // rdx
  __int64 *v18; // rax
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  __int64 v25; // [rsp+38h] [rbp-18h] BYREF
  __int64 v26; // [rsp+40h] [rbp-10h] BYREF
  void *Src; // [rsp+48h] [rbp-8h] BYREF

  Src = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  DeviceId = HalpIommuGetDeviceId(a2, (__int64 *)&Src);
  if ( DeviceId < 0 )
    goto LABEL_40;
  if ( a3 || a4 != 1 )
  {
    DeviceId = -1073741583;
    LOBYTE(a4) = 0;
  }
  else
  {
    Device = HalpIommuCreateDevice(Src, (__int64)&v25);
    v6 = v25;
    DeviceId = Device;
    if ( Device < 0 )
      goto LABEL_36;
    v13 = *(_QWORD *)(v25 + 24);
    if ( v13 )
    {
      if ( v13 == a1 )
      {
        DeviceId = 0;
        goto LABEL_39;
      }
      IommupFindAndPopCachedDevice(v25, &v26);
      v7 = v26;
    }
    else
    {
      LOBYTE(a4) = 0;
    }
    DeviceId = HalpIommuJoinDmaDomain(v6, a1, 0LL);
    if ( DeviceId >= 0 )
    {
      if ( !v7 )
      {
        v26 = HalpMmAllocCtxAlloc(v10, 56LL);
        v7 = v26;
        if ( !v26 )
        {
          DeviceId = -1073741670;
          goto LABEL_36;
        }
      }
      *(_OWORD *)v7 = 0LL;
      *(_OWORD *)(v7 + 16) = 0LL;
      *(_OWORD *)(v7 + 32) = 0LL;
      *(_QWORD *)(v7 + 48) = 0LL;
      *(_QWORD *)(v7 + 32) = v6;
      *(_QWORD *)(v7 + 16) = a2;
      *(_DWORD *)(v7 + 24) = 0;
      v14 = Src;
      *(_DWORD *)(v7 + 28) = 1;
      *(_QWORD *)(v7 + 40) = a1;
      *(_QWORD *)(v7 + 48) = v14;
    }
  }
  if ( v7 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 12 )
        LODWORD(v17) = 4096;
      else
        v17 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
      v7 = v26;
      v6 = v25;
      SchedulerAssist[5] |= v17;
    }
    KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
    v18 = (__int64 *)qword_140C5FD48;
    if ( *(__int64 **)qword_140C5FD48 != &HalpIommuParaVirtDeviceCache )
      __fastfail(3u);
    *(_QWORD *)v7 = &HalpIommuParaVirtDeviceCache;
    *(_QWORD *)(v7 + 8) = v18;
    *v18 = v7;
    qword_140C5FD48 = v7;
    KxReleaseSpinLock((volatile signed __int64 *)&HalpIommuParaVirtDeviceCacheLock);
    v10 = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      v19 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = (unsigned int)CurrentIrql + 1;
        v21 = CurrentPrcb->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v6 = v25;
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( DeviceId >= 0 )
  {
    if ( !(_BYTE)a4 )
      return (unsigned int)DeviceId;
    goto LABEL_39;
  }
LABEL_36:
  if ( v6 )
  {
LABEL_39:
    HalpIommuDeleteDevice(v6);
    if ( DeviceId >= 0 )
      return (unsigned int)DeviceId;
  }
LABEL_40:
  if ( Src )
    HalpMmAllocCtxFree(v10, (__int64)Src);
  return (unsigned int)DeviceId;
}
