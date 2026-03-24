/*
 * XREFs of AlpcpDeleteBlob @ 0x1405EA09C
 * Callers:
 *     AlpcpFlushResourcesPort @ 0x1405E220C (AlpcpFlushResourcesPort.c)
 *     NtAlpcDeleteSecurityContext @ 0x1405EAC90 (NtAlpcDeleteSecurityContext.c)
 *     NtAlpcDeletePortSection @ 0x140684EE0 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1406D9604 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpDeleteView @ 0x1406DB348 (AlpcpDeleteView.c)
 *     NtAlpcCreateSecurityContext @ 0x1406DB380 (NtAlpcCreateSecurityContext.c)
 *     AlpcpMapLegacyPortView @ 0x1406FFA18 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreatePortSection @ 0x140701AE0 (NtAlpcCreatePortSection.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408C34C0 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

char __fastcall AlpcpDeleteBlob(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  char v3; // al

  v1 = (volatile signed __int64 *)(a1 - 16);
  ExAcquirePushLockExclusiveEx(a1 - 16, 0LL);
  v3 = *(_BYTE *)(a1 - 32);
  if ( (v3 & 8) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 - 32) = v3 | 8;
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    (*(void (__fastcall **)(__int64))(AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 31)] + 32))(a1);
    return 1;
  }
}
