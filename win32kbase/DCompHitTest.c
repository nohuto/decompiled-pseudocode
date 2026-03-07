_OWORD *__fastcall DCompHitTest(_OWORD *a1)
{
  _OWORD *v2; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _BYTE v10[128]; // [rsp+20h] [rbp-98h] BYREF

  v2 = (_OWORD *)CSpatialProcessor::SpeedHitTest(v10);
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
  a1[5] = v7;
  a1[6] = v8;
  CInputDest::SetEmpty((CInputDest *)v10);
  return a1;
}
