void __fastcall CFlipExBuffer::PreNotifyPendingFlipPresent(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2)
{
  CFlipExBuffer::UpdatePendingFlipValues(this, a2->FenceValue, a2->PresentLimitSemaphoreId);
}
