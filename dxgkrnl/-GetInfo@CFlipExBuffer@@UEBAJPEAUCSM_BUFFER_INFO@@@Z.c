/*
 * XREFs of ?GetInfo@CFlipExBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0014030
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInfoInternal@CFlipExBuffer@@QEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0014048 (-GetInfoInternal@CFlipExBuffer@@QEBAJPEAUCSM_BUFFER_INFO@@@Z.c)
 */

__int64 __fastcall CFlipExBuffer::GetInfo(CFlipExBuffer *this, struct CSM_BUFFER_INFO *a2)
{
  return CFlipExBuffer::GetInfoInternal(this, a2);
}
