void __fastcall CFlipExBuffer::NotifyPendingFlipPresent(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2,
        bool *a3,
        bool *a4)
{
  const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v5; // r10

  v5 = a2;
  if ( (a2->Flags.Value & 0x2000000) == 0 )
    CFlipExBuffer::UpdatePendingFlipValues(this, a2->FenceValue, a2->PresentLimitSemaphoreId);
  *a3 = CFlipExBuffer::CheckIndependentFlipAttributes(this, v5, a4);
}
