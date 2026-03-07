void __fastcall ADAPTER_DISPLAY::OpmReset(DXGADAPTER **this)
{
  DXGADAPTER **i; // rax
  _BYTE v3[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 6810LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6810LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v3, (struct DXGFASTMUTEX *const)(this + 46), 0);
  for ( i = (DXGADAPTER **)this[44]; i != this + 44; i = (DXGADAPTER **)*i )
    *((_BYTE *)i + 24) = 1;
  if ( v3[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v3);
}
