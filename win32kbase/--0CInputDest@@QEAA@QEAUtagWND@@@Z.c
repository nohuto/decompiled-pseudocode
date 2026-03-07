CInputDest *__fastcall CInputDest::CInputDest(CInputDest *this, struct tagWND *const a2)
{
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  _OWORD v11[7]; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD v12[30]; // [rsp+90h] [rbp-78h] BYREF

  v3 = INPUTDEST_FROM_PWND(v12, (__int64)a2);
  v4 = v3[1];
  v11[0] = *v3;
  v5 = v3[2];
  v11[1] = v4;
  v6 = v3[3];
  v11[2] = v5;
  v7 = v3[4];
  v11[3] = v6;
  v8 = v3[5];
  v11[4] = v7;
  v9 = v3[6];
  v11[5] = v8;
  v11[6] = v9;
  CInputDest::CInputDest(this, (const struct tagINPUTDEST *)v11);
  return this;
}
