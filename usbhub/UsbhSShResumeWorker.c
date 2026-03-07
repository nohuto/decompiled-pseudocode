__int64 __fastcall UsbhSShResumeWorker(__int64 a1, unsigned int a2)
{
  __int64 v2; // r9
  __int64 v3; // r10

  Log(a1, 0x10000, 1400066647, a1, a2);
  return Usbh_SSH_Event(v2, 6u, v3);
}
