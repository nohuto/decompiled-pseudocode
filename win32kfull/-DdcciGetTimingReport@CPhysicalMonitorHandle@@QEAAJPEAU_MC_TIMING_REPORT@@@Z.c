__int64 __fastcall CPhysicalMonitorHandle::DdcciGetTimingReport(
        CPhysicalMonitorHandle *this,
        struct _MC_TIMING_REPORT *a2)
{
  int v4; // r8d
  unsigned __int16 v5; // ax
  int v6; // ecx
  unsigned __int16 v7; // ax
  unsigned __int8 v9[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  *(_DWORD *)v9 = 491857;
  v4 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(this, -500000LL, v9, 4u);
  if ( v4 >= 0 )
  {
    v10 = 0LL;
    v11 = 0;
    v4 = CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(this, -500000LL, &v10, 9u);
    if ( v4 >= 0 )
    {
      if ( (v10 & 0x3C000000) != 0 )
      {
        return (unsigned int)-1071774330;
      }
      else
      {
        v5 = BYTE4(v10) << 8;
        *((_BYTE *)a2 + 8) = BYTE3(v10);
        v6 = BYTE5(v10) | v5;
        v7 = BYTE6(v10) << 8;
        *(_DWORD *)a2 = v6;
        *((_DWORD *)a2 + 1) = HIBYTE(v10) | v7;
      }
    }
  }
  return (unsigned int)v4;
}
