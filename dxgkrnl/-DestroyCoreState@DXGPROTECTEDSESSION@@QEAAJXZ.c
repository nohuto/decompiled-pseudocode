__int64 __fastcall DXGPROTECTEDSESSION::DestroyCoreState(DXGPROTECTEDSESSION *this)
{
  __int64 v2; // r8
  void *v3; // rdx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1073LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceExclusiveOwner()",
      1073LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v3 = (void *)*((_QWORD *)this + 19);
  if ( v3 )
  {
    ADAPTER_DISPLAY::DdiDestroyProtectedSession(*((ADAPTER_DISPLAY **)this + 2), v3, v2);
    *((_QWORD *)this + 19) = 0LL;
  }
  return 0LL;
}
