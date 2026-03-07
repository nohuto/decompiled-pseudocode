__int64 __fastcall VslCollectLiveDumpInSk(char a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = (-(__int64)((a1 & 2) != 0) & 0xFFFFFFFFFFFFFFEBuLL) + 24;
  return VslpEnterIumSecureMode(2u, 251, 0, (__int64)v3);
}
