bool __fastcall PopFxIsDevicePotentialDripsConstraint(PVOID Object)
{
  bool v1; // di
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  ULONG RequiredSize; // [rsp+40h] [rbp-48h] BYREF
  ULONG Type; // [rsp+44h] [rbp-44h] BYREF
  __int64 Str1; // [rsp+48h] [rbp-40h] BYREF

  Str1 = 0LL;
  v1 = 0;
  RequiredSize = 0;
  Type = 0;
  ObfReferenceObjectWithTag(Object, 0x78466F50u);
  if ( Object )
  {
    v3 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
    if ( v3 )
    {
      v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 88));
      _m_prefetchw((const void *)(v3 + 296));
      if ( (_InterlockedOr((volatile signed __int32 *)(v3 + 296), 0) & 4) != 0 )
        v1 = (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v3 + 80) + 824LL), 0, 0) & 0x10) != 0;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 88));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v4);
      if ( !v1
        && IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(v3 + 32),
             &DEVPKEY_Device_EnumeratorName,
             0,
             0,
             8u,
             &Str1,
             &RequiredSize,
             &Type) >= 0
        && Type == 18
        && RequiredSize > 2
        && !*((_WORD *)&Type + ((unsigned __int64)RequiredSize >> 1) + 1) )
      {
        v1 = wcsicmp((const wchar_t *)&Str1, L"USB") == 0;
      }
    }
  }
  ObfDereferenceObjectWithTag(Object, 0x78466F50u);
  return v1;
}
