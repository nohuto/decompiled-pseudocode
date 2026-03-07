void PopThermalStateTransitionWorker()
{
  int v0; // ebx
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _DWORD v8[4]; // [rsp+30h] [rbp-38h] BYREF
  _OWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF

  memset(v9, 0, 24);
  v0 = 0;
  v1 = 2;
  while ( 1 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
    if ( !byte_140C3C431 && (!byte_140C3C433 || !byte_140C3C434) )
      break;
    if ( !byte_140C3C430 )
      break;
    if ( byte_140C3C431 )
    {
      if ( !byte_140C3C432 )
      {
        v0 = 3;
        byte_140C3C432 = 1;
        v1 = 2;
      }
      byte_140C3C431 = 0;
    }
    if ( byte_140C3C433 && byte_140C3C434 )
    {
      v0 = 6;
      byte_140C3C433 = 0;
      v1 = 3;
    }
    PopReleaseRwLock((ULONG_PTR)&PopThermalStateTransitionContext);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
    PopThermalStandbyEndTracking(v1, v2, v3);
    PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
    v8[2] = 0;
    v9[0] = 0x8000000001uLL;
    v8[0] = v0;
    v8[1] = -1073741820;
    PopAcquirePolicyLock(v4);
    if ( v0 == 6 )
      PopCriticalShutdownInProgress = 1;
    PopExecutePowerAction((unsigned int)v9, 0, (unsigned int)v8, 5, 1);
    PopReleasePolicyLock(v6, v5, v7);
  }
  PopOkayToQueueNextWorkItem((__int64)&PopThermalStateTransitionWorkItem);
  PopReleaseRwLock((ULONG_PTR)&PopThermalStateTransitionContext);
}
