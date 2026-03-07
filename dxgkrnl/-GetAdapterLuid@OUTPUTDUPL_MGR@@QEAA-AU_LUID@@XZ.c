struct _LUID __fastcall OUTPUTDUPL_MGR::GetAdapterLuid(OUTPUTDUPL_MGR *this, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  v4 = *(_QWORD *)this;
  if ( v4 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v4 + 16)) )
  {
    WdLogSingleEntry1(1LL, 2500LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
      2500LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_BYTE *)this + 88) )
  {
    v5 = (__int64)this + 96;
    if ( !this )
      v5 = 120LL;
    *(_QWORD *)a2 = *(_QWORD *)v5;
  }
  else if ( *(_QWORD *)this )
  {
    *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 404LL);
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
  }
  return (struct _LUID)a2;
}
