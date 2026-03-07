_OWORD *__fastcall GetPTPShellTarget(_OWORD *a1)
{
  _OWORD *v2; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  _OWORD *result; // rax
  _OWORD v14[7]; // [rsp+20h] [rbp-78h] BYREF

  if ( qword_1C02D7E90 )
  {
    v2 = (_OWORD *)qword_1C02D7E90(v14);
    v3 = v2[1];
    *a1 = *v2;
    v4 = v2[2];
    a1[1] = v3;
    v5 = v2[3];
    a1[2] = v4;
    v6 = v2[4];
    a1[3] = v5;
    v7 = v2[5];
    a1[4] = v6;
    v8 = v2[6];
  }
  else
  {
    memset(v14, 0, sizeof(v14));
    v9 = v14[1];
    *a1 = v14[0];
    v10 = v14[2];
    a1[1] = v9;
    v11 = v14[3];
    a1[2] = v10;
    v12 = v14[4];
    a1[3] = v11;
    v7 = v14[5];
    a1[4] = v12;
    v8 = v14[6];
  }
  a1[5] = v7;
  result = a1;
  a1[6] = v8;
  return result;
}
