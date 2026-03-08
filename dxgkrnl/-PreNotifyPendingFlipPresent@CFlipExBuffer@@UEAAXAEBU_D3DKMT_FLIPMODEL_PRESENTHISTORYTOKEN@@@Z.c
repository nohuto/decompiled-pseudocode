/*
 * XREFs of ?PreNotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C007DA90
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePendingFlipValues@CFlipExBuffer@@QEAAX_K0@Z @ 0x1C007E484 (-UpdatePendingFlipValues@CFlipExBuffer@@QEAAX_K0@Z.c)
 */

void __fastcall CFlipExBuffer::PreNotifyPendingFlipPresent(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2)
{
  CFlipExBuffer::UpdatePendingFlipValues(this, a2->FenceValue, a2->PresentLimitSemaphoreId);
}
