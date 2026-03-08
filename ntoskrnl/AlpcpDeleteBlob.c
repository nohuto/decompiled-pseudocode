/*
 * XREFs of AlpcpDeleteBlob @ 0x140715630
 * Callers:
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1406D3584 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeletePortSection @ 0x140711AE0 (NtAlpcDeletePortSection.c)
 *     NtAlpcCreatePortSection @ 0x140711C20 (NtAlpcCreatePortSection.c)
 *     NtAlpcCreateSecurityContext @ 0x140715210 (NtAlpcCreateSecurityContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x140715410 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpDeleteView @ 0x1407155FC (AlpcpDeleteView.c)
 *     AlpcpFlushResourcesPort @ 0x1407175F8 (AlpcpFlushResourcesPort.c)
 *     AlpcpMapLegacyPortView @ 0x1407829D0 (AlpcpMapLegacyPortView.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408A04F0 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
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
