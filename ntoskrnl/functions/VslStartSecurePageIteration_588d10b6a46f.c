__int64 __fastcall VslStartSecurePageIteration(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  _QWORD v10[14]; // [rsp+20h] [rbp-88h] BYREF

  v6 = a1;
  v7 = a4;
  memset(v10, 0, 0x68uLL);
  v10[5] = a5;
  v10[1] = v6;
  v10[2] = a2;
  v10[3] = a3;
  v10[4] = v7;
  return VslpEnterIumSecureMode(2u, 2048, 0, (__int64)v10);
}
