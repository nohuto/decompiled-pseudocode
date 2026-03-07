void __fastcall DXGOVERLAY::Reset(DXGOVERLAY *this)
{
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 226LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceExclusiveOwner()",
      226LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_DWORD *)this + 8) = -1;
  *((_DWORD *)this + 7) = 2;
}
