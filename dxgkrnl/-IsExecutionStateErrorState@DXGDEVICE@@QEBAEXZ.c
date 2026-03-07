bool __fastcall DXGDEVICE::IsExecutionStateErrorState(DXGDEVICE *this)
{
  _D3DKMT_DEVICEEXECUTION_STATE v3; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  if ( (int)DXGDEVICE::GetDeviceExecutionState(this, &v3) >= 0 )
    return v3 != D3DKMT_DEVICEEXECUTION_ACTIVE;
  WdLogSingleEntry1(2LL, this);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"GetDeviceExecutionState failed for device 0x%I64x, unable to determine if the device is in device removed state",
    (__int64)this,
    0LL,
    0LL,
    0LL,
    0LL);
  return 1;
}
