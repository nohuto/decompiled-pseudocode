__int64 __fastcall KeCopyPrivilegedPage(__int64 a1, __int128 *a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _OWORD v13[7]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v13, 0, 0x68uLL);
  v10 = *a4;
  *((_QWORD *)&v13[3] + 1) = a5;
  v11 = *a2;
  *((_QWORD *)&v13[0] + 1) = a3;
  LOBYTE(v13[4]) = a6 & 1;
  v13[1] = v10;
  *(_QWORD *)&v13[2] = a1;
  *(_OWORD *)((char *)&v13[2] + 8) = v11;
  return VslpEnterIumSecureMode(2u, 244, 0, (__int64)v13);
}
