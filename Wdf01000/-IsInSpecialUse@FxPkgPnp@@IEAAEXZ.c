bool __fastcall FxPkgPnp::IsInSpecialUse(FxPkgPnp *this)
{
  return this->m_SpecialFileCount[0]
      || this->m_SpecialFileCount[1]
      || this->m_SpecialFileCount[2]
      || this->m_SpecialFileCount[3]
      || this->m_SpecialFileCount[5] != 0;
}
