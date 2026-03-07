__int64 __fastcall DXGVMBUSCHANNEL::UpdateVmBusHandle(DXGVMBUSCHANNEL *this, void *a2)
{
  int v4; // eax
  __int64 v5; // rdi
  _BYTE v7[24]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGVMBUSCHANNEL *)((char *)this + 120), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v4 = ((__int64 (__fastcall *)(_QWORD, void *))qword_1C013D098)(*((_QWORD *)this + 2), a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry3(2LL, v4, 431LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmbServerChannelInitSetVmbusHandle failed. Returning 0x%I64x",
      v5,
      431LL,
      (__int64)this,
      0LL,
      0LL);
  }
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  return (unsigned int)v5;
}
