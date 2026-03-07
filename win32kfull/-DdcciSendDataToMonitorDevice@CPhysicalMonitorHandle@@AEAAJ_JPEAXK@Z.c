__int64 __fastcall CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(
        CPhysicalMonitorHandle *this,
        __int64 a2,
        unsigned __int8 *a3,
        int a4)
{
  char v7; // al
  __int64 v8; // r8
  int v9; // r11d
  _DWORD v11[2]; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int8 *v12; // [rsp+48h] [rbp-10h]

  v7 = CPhysicalMonitorHandle::ComputeDDCCIMessageChecksum(110, a3, a4 - 1);
  a3[v8] = v7;
  v11[0] = 110;
  v11[1] = v9;
  v12 = a3;
  return CPhysicalMonitorHandle::DdcciSendIoctlToMonitorDevice(this, 0x232443u, a2, v11, 0x10u, 0LL, 0);
}
