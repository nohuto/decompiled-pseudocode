void __fastcall OUTPUTDUPL_MGR::ProcessAdapterReset(OUTPUTDUPL_CONTEXT **this)
{
  OUTPUTDUPL_CONTEXT *v2; // rcx
  unsigned int i; // edi

  v2 = *this;
  if ( v2 && !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v2 + 2)) )
  {
    WdLogSingleEntry1(1LL, 1420LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
      1420LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = 0; i < *((_DWORD *)this + 19); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, 0LL, 0, 0, 2);
}
