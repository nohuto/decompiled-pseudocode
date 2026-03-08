/*
 * XREFs of Bulk_WdfEvtIoCanceledOnQueue @ 0x1C00473D0
 * Callers:
 *     <none>
 * Callees:
 *     TR_QueueDpcForTransferCompletion @ 0x1C000F284 (TR_QueueDpcForTransferCompletion.c)
 *     Bulk_TransferData_Initialize @ 0x1C00128DC (Bulk_TransferData_Initialize.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Bulk_WdfEvtIoCanceledOnQueue(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rdx

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063388);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0063090);
  v5 = v4;
  if ( !*(_BYTE *)(v4 + 16) )
    Bulk_TransferData_Initialize(v3, (_QWORD *)v4, a2);
  *(_DWORD *)(v5 + 64) = 3;
  *(_BYTE *)(v3 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  v6 = *(__int64 **)(v3 + 408);
  if ( *v6 != v3 + 400 )
    __fastfail(3u);
  *(_QWORD *)v5 = v3 + 400;
  *(_QWORD *)(v5 + 8) = v6;
  *v6 = v5;
  *(_QWORD *)(v3 + 408) = v5;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), *(_BYTE *)(v3 + 104));
  return TR_QueueDpcForTransferCompletion(v3);
}
