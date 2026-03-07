void __fastcall DXGADAPTER::EnableMsBddFallback(DXGADAPTER *this, char a2)
{
  if ( *((struct _KTHREAD **)this + 18) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 8975LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsStopResetLockExclusiveOwner()", 8975LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry1(1LL, 8976LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 8976LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsBddFallbackDriver(this) )
  {
    WdLogSingleEntry1(1LL, 8978LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"this->IsBddFallbackDriver()", 8978LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a2 )
  {
    *((_DWORD *)this + 50) = 1;
  }
  else
  {
    if ( *((_QWORD *)this + 366) )
    {
      WdLogSingleEntry1(1LL, 8990LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayOnlyAdapter()", 8990LL, 0LL, 0LL, 0LL, 0LL);
    }
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(*((PERESOURCE ***)this + 365), 0LL);
    *((_DWORD *)this + 50) = 3;
  }
}
