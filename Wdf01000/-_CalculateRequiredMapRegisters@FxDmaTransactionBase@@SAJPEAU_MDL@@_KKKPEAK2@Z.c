/*
 * XREFs of ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x1C000CE60
 * Callers:
 *     ?InitializeResources@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C000C530 (-InitializeResources@FxDmaScatterGatherTransaction@@UEAAJXZ.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C001C9D4 (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C001E730 (-StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDmaTransactionBase::_CalculateRequiredMapRegisters(
        _MDL *Mdl,
        unsigned __int64 CurrentOffset,
        unsigned int Length,
        unsigned int AvailableMapRegisters,
        unsigned int *PossibleTransferLength,
        unsigned int *MapRegistersRequired)
{
  unsigned int v8; // ebx
  unsigned int ByteOffset; // r10d
  unsigned int v10; // edx
  unsigned int ByteCount; // r11d
  unsigned int i; // r8d
  unsigned int v13; // r9d
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v17; // edx

  v8 = Mdl->ByteCount - CurrentOffset;
  ByteOffset = ((_WORD)CurrentOffset + LOWORD(Mdl->StartVa) + LOWORD(Mdl->ByteOffset)) & 0xFFF;
  v10 = 0;
  ByteCount = v8;
  for ( i = 0; v8 < Length; i = v13 )
  {
    Mdl = Mdl->Next;
    v13 = v8;
    if ( !Mdl )
      break;
    v14 = ByteCount + 4095;
    ByteCount = Mdl->ByteCount;
    v15 = ByteOffset + v14;
    v8 += ByteCount;
    ByteOffset = Mdl->ByteOffset;
    v10 += v15 >> 12;
    if ( v10 > AvailableMapRegisters )
      v13 = i;
  }
  if ( v8 + 4096 < ByteOffset + Length )
    return 3221225507LL;
  v17 = ((ByteCount + ByteOffset - v8 + Length + 4095) >> 12) + v10;
  if ( v17 <= AvailableMapRegisters )
    i += Length + ByteCount - v8;
  if ( PossibleTransferLength )
    *PossibleTransferLength = i;
  *MapRegistersRequired = v17;
  return 0LL;
}
