/*
 * XREFs of TR_AcquireDoubleBuffer @ 0x1C00073E0
 * Callers:
 *     Control_MapTransfer @ 0x1C00071B4 (Control_MapTransfer.c)
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x1C00126B0 (Bulk_TransferData_DetermineTransferMechanism.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x1C0013038 (CommonBuffer_AcquireBuffer.c)
 */

_QWORD *__fastcall TR_AcquireDoubleBuffer(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdx

  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v2 = (_QWORD *)(a1 + 224);
  v3 = *(_QWORD **)(a1 + 224);
  if ( v3 == (_QWORD *)(a1 + 224) )
  {
    v3 = (_QWORD *)CommonBuffer_AcquireBuffer(*(PVOID *)(*(_QWORD *)(a1 + 40) + 120LL));
  }
  else
  {
    if ( (_QWORD *)v3[1] != v2 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    v3[1] = v3;
    *v3 = v3;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return v3;
}
