/*
 * XREFs of IommuUnregisterInterfaceStateChangeCallback @ 0x140524540
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 */

__int64 __fastcall IommuUnregisterInterfaceStateChangeCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rcx

  v2 = *(_QWORD *)(a2 + 72);
  v3 = 0;
  if ( v2 && *(_QWORD *)(v2 + 16) == a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
    v5 = *(_QWORD *)v2;
    if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || (v6 = *(_QWORD **)(v2 + 8), *v6 != v2) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock);
    KeAbPostRelease((ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock);
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x446C6148u);
    *(_OWORD *)v2 = 0LL;
    *(_OWORD *)(v2 + 16) = 0LL;
    *(_OWORD *)(v2 + 32) = 0LL;
    HalpMmAllocCtxFree(v7, v2);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
