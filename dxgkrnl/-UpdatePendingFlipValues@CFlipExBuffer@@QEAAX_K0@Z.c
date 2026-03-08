/*
 * XREFs of ?UpdatePendingFlipValues@CFlipExBuffer@@QEAAX_K0@Z @ 0x1C007E484
 * Callers:
 *     ?NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N1@Z @ 0x1C007D930 (-NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N1@.c)
 *     ?PreNotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C007DA90 (-PreNotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::UpdatePendingFlipValues(CFlipExBuffer *this, __int64 a2, __int64 a3)
{
  if ( a2 )
    *((_QWORD *)this + 44) = a2;
  if ( a3 )
    ++*((_DWORD *)this + 84);
}
