void __fastcall ADAPTER_RENDER::RestoreFromPurgeSegments(PERESOURCE **this)
{
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 3120LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3120LL, 0LL, 0LL, 0LL, 0LL);
  }
  ((void (__fastcall *)(PERESOURCE *))this[95][1]->Reserved2)(this[96]);
}
