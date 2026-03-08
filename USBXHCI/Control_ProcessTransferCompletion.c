/*
 * XREFs of Control_ProcessTransferCompletion @ 0x1C0042704
 * Callers:
 *     Control_WdfEvtDpcForTransferCompletion @ 0x1C0042F30 (Control_WdfEvtDpcForTransferCompletion.c)
 *     Control_WdfEvtWorkItemForTransferCompletion @ 0x1C0043460 (Control_WdfEvtWorkItemForTransferCompletion.c)
 * Callees:
 *     Control_Transfer_CompleteCancelable @ 0x1C0006FBC (Control_Transfer_CompleteCancelable.c)
 *     TR_TransfersReclaimed @ 0x1C000E578 (TR_TransfersReclaimed.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Control_ProcessTransferCompletion(__int64 a1)
{
  bool v1; // di
  __int64 v2; // rbx
  KIRQL v3; // al
  bool v4; // zf

  v1 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063388);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  v4 = *(_QWORD *)(v2 + 344) == 0LL;
  *(_BYTE *)(v2 + 104) = v3;
  if ( !v4 && (int)Control_Transfer_CompleteCancelable((_QWORD *)v2) >= 0 )
    v1 = (*(_BYTE *)(v2 + 352) & 2) != 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), *(_BYTE *)(v2 + 104));
  if ( v1 )
    TR_TransfersReclaimed(v2);
}
