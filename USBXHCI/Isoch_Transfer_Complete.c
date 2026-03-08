/*
 * XREFs of Isoch_Transfer_Complete @ 0x1C00454C0
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C0003800 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     TR_QueueDpcForTransferCompletion @ 0x1C000F284 (TR_QueueDpcForTransferCompletion.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Isoch_Transfer_PrepareForCompletion @ 0x1C0045868 (Isoch_Transfer_PrepareForCompletion.c)
 */

void __fastcall Isoch_Transfer_Complete(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD *v7; // rcx
  KIRQL v8; // bl

  Isoch_Transfer_PrepareForCompletion();
  if ( a5 )
  {
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v7 = *(_QWORD **)(a1 + 424);
    if ( *v7 != a1 + 416 )
      __fastfail(3u);
    *(_QWORD *)(a2 + 8) = v7;
    *(_QWORD *)a2 = a1 + 416;
    *v7 = a2;
    *(_QWORD *)(a1 + 424) = a2;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    TR_QueueDpcForTransferCompletion(a1);
  }
  else
  {
    v8 = KfRaiseIrql(2u);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2104))(
      WdfDriverGlobals,
      *(_QWORD *)(a2 + 24),
      *(unsigned int *)(a2 + 68));
    KeLowerIrql(v8);
  }
}
