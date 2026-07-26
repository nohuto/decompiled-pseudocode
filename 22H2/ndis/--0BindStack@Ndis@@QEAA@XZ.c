/*
 * XREFs of ??0BindStack@Ndis@@QEAA@XZ @ 0x1C0109124
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C0031CE4 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0108C18 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ??0BindState@Ndis@@QEAA@XZ @ 0x1C0104000 (--0BindState@Ndis@@QEAA@XZ.c)
 */

Ndis::BindStack *__fastcall Ndis::BindStack::BindStack(Ndis::BindStack *this)
{
  this->Protocols.m_bufferSize = 0;
  this->Protocols.m_numElements = 0;
  this->Protocols._p = 0LL;
  this->Filters.m_bufferSize = 0;
  this->Filters.m_numElements = 0;
  this->Filters._p = 0LL;
  Ndis::BindState::BindState(&this->Miniport);
  this->ChangeEpoch = 0;
  return this;
}
