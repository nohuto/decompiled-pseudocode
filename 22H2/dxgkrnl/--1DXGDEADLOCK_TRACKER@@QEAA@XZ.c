/*
 * XREFs of ??1DXGDEADLOCK_TRACKER@@QEAA@XZ @ 0x1C0195EDC
 * Callers:
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@_N@Z @ 0x1C0197A00 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01CB6E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1C0195F94 (-Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 */

void __fastcall DXGDEADLOCK_TRACKER::~DXGDEADLOCK_TRACKER(DXGDEADLOCK_TRACKER *this)
{
  __int64 v1; // rbx
  DXGDEADLOCK_TRACKER **v3; // rdx
  DXGDEADLOCK_TRACKER **v4; // rcx
  __int64 v5; // rcx

  v1 = *((_QWORD *)this + 3);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 4688, 0LL);
  *(_QWORD *)(v1 + 4696) = KeGetCurrentThread();
  v3 = (DXGDEADLOCK_TRACKER **)*((_QWORD *)this + 28);
  if ( v3[1] != (DXGDEADLOCK_TRACKER *)((char *)this + 224)
    || (v4 = (DXGDEADLOCK_TRACKER **)*((_QWORD *)this + 29), *v4 != (DXGDEADLOCK_TRACKER *)((char *)this + 224)) )
  {
    __fastfail(3u);
  }
  *v4 = (DXGDEADLOCK_TRACKER *)v3;
  v3[1] = (DXGDEADLOCK_TRACKER *)v4;
  v5 = *((_QWORD *)this + 3) + 4688LL;
  *(_QWORD *)(v5 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  DXGDEADLOCK_TRACKER::Cancel(this);
  DXGADAPTER::ReleaseReference(*((DXGADAPTER **)this + 3));
}
