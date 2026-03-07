__int64 __fastcall VslInitializeSecurePool(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  SecurePoolBase = a1;
  v3[2] = 0x8000000000LL;
  v3[1] = a1;
  SecurePoolEnd = a1 + 0x8000000000LL;
  return VslpEnterIumSecureMode(2u, 214, 0, (__int64)v3);
}
