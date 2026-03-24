/*
 * XREFs of ?NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N1@Z @ 0x1C0018630
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckIndependentFlipAttributes@CFlipExBuffer@@IEAA_NAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C0018678 (-CheckIndependentFlipAttributes@CFlipExBuffer@@IEAA_NAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@.c)
 */

void __fastcall CFlipExBuffer::NotifyPendingFlipPresent(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2,
        bool *a3,
        bool *a4)
{
  UINT64 PresentLimitSemaphoreId; // r10

  if ( (a2->Flags.Value & 0x2000000) == 0 )
  {
    PresentLimitSemaphoreId = a2->PresentLimitSemaphoreId;
    if ( a2->FenceValue )
      *((_QWORD *)this + 40) = a2->FenceValue;
    if ( PresentLimitSemaphoreId )
      ++*((_DWORD *)this + 76);
  }
  *a3 = CFlipExBuffer::CheckIndependentFlipAttributes(this, a2, a4);
}
