void __fastcall FxDmaTransactionBase::_ComputeNextTransferAddress(
        _MDL *CurrentMdl,
        unsigned __int64 CurrentOffset,
        unsigned int Transferred,
        _MDL **NextMdl,
        unsigned __int64 *NextOffset)
{
  unsigned __int64 ByteCount; // rax
  unsigned __int64 v6; // r10

  ByteCount = CurrentMdl->ByteCount - CurrentOffset;
  v6 = Transferred;
  if ( Transferred >= ByteCount )
  {
    do
    {
      CurrentMdl = CurrentMdl->Next;
      v6 -= ByteCount;
      ByteCount = CurrentMdl->ByteCount;
    }
    while ( v6 >= ByteCount );
  }
  else
  {
    v6 = CurrentOffset + Transferred;
  }
  *NextMdl = CurrentMdl;
  *NextOffset = v6;
}
