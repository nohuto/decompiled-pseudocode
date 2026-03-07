__int64 __fastcall VslRelocateImage(__int64 a1, __int64 a2)
{
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = a1;
  v5[2] = a2;
  return VslpEnterIumSecureMode(2u, 29, 0, (__int64)v5);
}
