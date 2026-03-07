__int64 __fastcall HvlRegisterPerfFeedbackCounters(int a1, __int128 *a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rdx
  _OWORD v12[26]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v12, 0, 0x194uLL);
  v4 = *a2;
  LODWORD(v12[0]) = 1;
  v5 = a2[1];
  DWORD2(v12[0]) = a1;
  v12[1] = v4;
  v6 = a2[2];
  v12[2] = v5;
  v7 = a2[3];
  v12[3] = v6;
  v8 = a2[4];
  v12[4] = v7;
  v9 = a2[5];
  v12[5] = v8;
  *(_QWORD *)&v12[7] = *((_QWORD *)a2 + 12);
  v12[6] = v9;
  return HvlpSetPowerProperty(v12, v10);
}
