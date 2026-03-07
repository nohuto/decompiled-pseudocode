bool VslIsEncryptionKeyAvailable()
{
  _QWORD v1[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return (int)VslpEnterIumSecureMode(2u, 35, 0, (__int64)v1) >= 0 && v1[2] != 0LL;
}
