/*
 * XREFs of ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C02B26A4
 * Callers:
 *     DpiDisableMsBddFallbackDriver @ 0x1C0395D30 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C0395EF8 (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0003484 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0166DF0 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

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
