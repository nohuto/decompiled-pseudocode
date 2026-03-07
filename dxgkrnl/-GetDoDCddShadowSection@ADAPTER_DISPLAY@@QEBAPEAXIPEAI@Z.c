void *__fastcall ADAPTER_DISPLAY::GetDoDCddShadowSection(ADAPTER_DISPLAY *this, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdi
  void *v7; // rcx
  __int64 v8; // rcx

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 1422LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      1422LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 2)) )
  {
    WdLogSingleEntry1(1LL, 1423LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 1423LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 2928LL) )
  {
    WdLogSingleEntry1(1LL, 1424LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsDisplayOnlyAdapter()",
      1424LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = 4000 * v3;
  v7 = *(void **)(v6 + *((_QWORD *)this + 16) + 616);
  if ( v7 )
    ObfReferenceObject(v7);
  v8 = *((_QWORD *)this + 16);
  *a3 = *(_DWORD *)(v8 + v6 + 612);
  return *(void **)(v8 + v6 + 616);
}
