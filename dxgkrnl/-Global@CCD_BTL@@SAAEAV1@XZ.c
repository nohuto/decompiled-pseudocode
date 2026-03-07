struct CCD_BTL *CCD_BTL::Global(void)
{
  if ( !CCD_BTL::m_pGlobalBtl )
    WdLogSingleEntry0(1LL);
  return CCD_BTL::m_pGlobalBtl;
}
