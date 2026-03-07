void __fastcall HandleFullWindowDestruction(__int64 a1)
{
  _OWORD *v1; // rax
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _OWORD v11[7]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v12; // [rsp+90h] [rbp-78h] BYREF

  v1 = (_OWORD *)INPUTDEST_FROM_PWND(&v12, a1);
  v2 = v1[1];
  v11[0] = *v1;
  v3 = v1[2];
  v11[1] = v2;
  v4 = v1[3];
  v11[2] = v3;
  v5 = v1[4];
  v11[3] = v4;
  v6 = v1[5];
  v11[4] = v5;
  v7 = v1[6];
  v11[5] = v6;
  v11[6] = v7;
  HandleInputDestDestruction((__int64)v11, v8, v9, v10);
}
