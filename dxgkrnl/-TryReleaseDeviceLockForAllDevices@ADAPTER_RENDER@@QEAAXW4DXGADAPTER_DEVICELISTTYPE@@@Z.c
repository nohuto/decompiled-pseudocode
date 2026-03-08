/*
 * XREFs of ?TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C01E0B88
 * Callers:
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01E0968 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_RENDER::TryReleaseDeviceLockForAllDevices(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 **v6; // rsi
  __int64 *i; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 48LL;
  v4 = 160LL;
  if ( a2 != 1 )
    v3 = 24LL;
  v5 = a1 + v3;
  if ( a2 != 1 )
    v4 = 144LL;
  v6 = (__int64 **)(a1 + v4);
  if ( *(struct _KTHREAD **)(v5 + 8) == CurrentThread
    || DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
  {
    for ( i = *v6;
          i != (__int64 *)v6 && i && (*((_BYTE *)i + 72) || ExIsResourceAcquiredExclusiveLite((PERESOURCE)i[17]));
          i = (__int64 *)*i )
    {
      ExReleaseResourceLite((PERESOURCE)i[17]);
      if ( (struct _KTHREAD *)i[19] != KeGetCurrentThread() )
        break;
      i[19] = 0LL;
      ExReleasePushLockExclusiveEx(i + 18, 0LL);
    }
    if ( *(struct _KTHREAD **)(v5 + 8) == KeGetCurrentThread() )
    {
      *(_QWORD *)(v5 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v5, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
