/*
 * XREFs of NdisMCoActivateVcComplete @ 0x1C00BA400
 * Callers:
 *     NdisCmActivateVc @ 0x1C00B8C50 (NdisCmActivateVc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMCoActivateVcComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisVcHandle,
        PCO_CALL_PARAMETERS CallParameters)
{
  __int64 v3; // rbx
  KIRQL v6; // al
  unsigned int v7; // r9d

  v3 = *((_QWORD *)NdisVcHandle + 9);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 8));
  v7 = *(_DWORD *)(v3 + 4) & 0xFFFFFFFD;
  *(_DWORD *)(v3 + 4) = v7;
  if ( !Status )
    *(_DWORD *)(v3 + 4) = v7 | 1;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 8), v6);
  (*(void (__fastcall **)(_QWORD, _QWORD, PCO_CALL_PARAMETERS))(v3 + 96))(
    (unsigned int)Status,
    *(_QWORD *)(v3 + 88),
    CallParameters);
}
