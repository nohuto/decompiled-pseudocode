/*
 * XREFs of PnpNotifyTargetDeviceChangeNotifyEntry @ 0x140953980
 * Callers:
 *     PnpProcessDeferredRegistrations @ 0x1406895A4 (PnpProcessDeferredRegistrations.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1402456C0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PnpNotifyDriverCallback @ 0x1406F55F4 (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromPDO @ 0x1406F72F8 (IopGetSessionIdFromPDO.c)
 */

char __fastcall PnpNotifyTargetDeviceChangeNotifyEntry(__int64 a1, __int64 a2, int *a3, _DWORD *a4)
{
  int SessionIdFromPDO; // edi
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rcx
  int v11; // eax

  SessionIdFromPDO = -1;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( *(_DWORD *)(a1 + 20) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
    SessionIdFromPDO = IopGetSessionIdFromPDO(*(struct _DEVICE_OBJECT **)(a1 + 88));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 72), 1u);
  if ( (SessionIdFromPDO == -1 || *(_DWORD *)(a1 + 20) == SessionIdFromPDO) && !*(_BYTE *)(a1 + 58) )
  {
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 80);
    v11 = PnpNotifyDriverCallback(a1, a2, a4);
  }
  else
  {
    *a4 = -1073741637;
    v11 = -1073741808;
  }
  *a3 = v11;
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 72));
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
