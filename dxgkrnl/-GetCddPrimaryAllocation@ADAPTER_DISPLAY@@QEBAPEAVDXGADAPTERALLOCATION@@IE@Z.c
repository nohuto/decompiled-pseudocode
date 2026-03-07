struct DXGADAPTERALLOCATION *__fastcall ADAPTER_DISPLAY::GetCddPrimaryAllocation(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        char a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx

  v4 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 1354LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      1354LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 2)) )
  {
    WdLogSingleEntry1(1LL, 1355LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 1355LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = *(_QWORD *)(4000 * v4 + *((_QWORD *)this + 16) + 88);
  if ( v6 && (a3 || (*(_DWORD *)(*(_QWORD *)(v6 + 48) + 4LL) & 0x10) == 0) )
    return *(struct DXGADAPTERALLOCATION **)(v6 + 48);
  else
    return 0LL;
}
