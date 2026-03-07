__int64 __fastcall VslpKsrEnterIumSecureMode(_OWORD *a1)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 result; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _QWORD v13[14]; // [rsp+20h] [rbp-29h] BYREF

  memset(v13, 0, 0x68uLL);
  v2 = a1[1];
  *(_OWORD *)&v13[1] = *a1;
  v3 = a1[2];
  *(_OWORD *)&v13[3] = v2;
  v4 = a1[3];
  *(_OWORD *)&v13[5] = v3;
  v5 = a1[4];
  *(_OWORD *)&v13[7] = v4;
  v6 = a1[5];
  *(_OWORD *)&v13[9] = v5;
  *(_OWORD *)&v13[11] = v6;
  result = VslpEnterIumSecureMode(2u, 267, 0, (__int64)v13);
  v8 = *(_OWORD *)&v13[3];
  *a1 = *(_OWORD *)&v13[1];
  v9 = *(_OWORD *)&v13[5];
  a1[1] = v8;
  v10 = *(_OWORD *)&v13[7];
  a1[2] = v9;
  v11 = *(_OWORD *)&v13[9];
  a1[3] = v10;
  v12 = *(_OWORD *)&v13[11];
  a1[4] = v11;
  a1[5] = v12;
  return result;
}
