void __fastcall DXGOVERLAY::Destroy(DXGOVERLAY *this)
{
  __int64 (__fastcall **v2)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v3; // r8
  void *v4; // rdx
  unsigned int v5; // edx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 188LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceSharedOwner()",
      188LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    || v2[87] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v2[95] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v2[94] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v2[93] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    WdLogSingleEntry1(1LL, 189LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"GetAdapter()->IsOverlayEnabled()", 189LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 6) = 0LL;
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    ADAPTER_RENDER::DdiDestroyOverlay(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2928LL),
      v4,
      v3);
    *((_QWORD *)this + 5) = 0LL;
  }
  v5 = *((_DWORD *)this + 8);
  if ( v5 != -1 )
  {
    ADAPTER_RENDER::ReleaseOverlayId(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2928LL),
      v5);
    *((_DWORD *)this + 8) = -1;
  }
}
