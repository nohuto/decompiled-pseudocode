/*
 * XREFs of RaidpAdapterTimerDpcRoutine @ 0x1C000B8A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterReleaseStartIoLock @ 0x1C000B944 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000B978 (RaidAdapterAcquireStartIoLock.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C000B9B4 (RaidAcquireAdapterRemoveLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qdd @ 0x1C00336F8 (WPP_SF_qdd.c)
 */

void __fastcall RaidpAdapterTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        unsigned __int64 SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  void (__fastcall *v5)(__int64); // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _DEVICE_OBJECT *v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v4 = DeferredContext[8];
  v11 = 0LL;
  v10 = 0LL;
  v5 = (void (__fastcall *)(__int64))_InterlockedExchange64((volatile __int64 *)(v4 + 1984), 0LL);
  if ( v5 )
  {
    v6 = *(unsigned int *)(v4 + 288);
    if ( (int)v6 < 6 || (SystemArgument1 = *(unsigned int *)(v4 + 292), (int)SystemArgument1 < 4) )
    {
      if ( (int)RaidAcquireAdapterRemoveLock(v4, v6, SystemArgument1, SystemArgument2) >= 0 )
      {
        RaidAdapterAcquireStartIoLock(v4, &v10, v7, v8);
        v5(*(_QWORD *)(v4 + 560) + 16LL);
        RaidAdapterReleaseStartIoLock(v4, &v10);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 280));
        if ( *(_BYTE *)(v4 + 105) )
        {
          v9 = *(struct _DEVICE_OBJECT **)(v4 + 32);
          *(_BYTE *)(v4 + 105) = 0;
          IoInvalidateDeviceRelations(v9, BusRelations);
        }
      }
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qdd(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        SystemArgument1,
        v4,
        v6,
        *(_DWORD *)(v4 + 292),
        v10,
        *((_QWORD *)&v10 + 1),
        v11);
    }
  }
}
