int __fastcall CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(
        CPhysicalMonitorHandle *this,
        __int64 a2,
        void *a3,
        unsigned int a4)
{
  int result; // eax
  unsigned __int8 v7; // cl
  _DWORD v8[6]; // [rsp+40h] [rbp-18h] BYREF

  v8[1] = 0;
  v8[0] = 111;
  result = CPhysicalMonitorHandle::DdcciSendIoctlToMonitorDevice(this, 0x232447u, a2, v8, 8u, a3, a4);
  if ( result >= 0 )
    return CPhysicalMonitorHandle::VerifyDDCCIMessageChecksum(v7, (const unsigned __int8 *)a3, a4);
  return result;
}
