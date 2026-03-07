void __fastcall DXGOVERLAY::Stop(DXGOVERLAY *this)
{
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 250LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceExclusiveOwner()",
      250LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGOVERLAY::Destroy(this);
  *((_DWORD *)this + 7) = 3;
}
