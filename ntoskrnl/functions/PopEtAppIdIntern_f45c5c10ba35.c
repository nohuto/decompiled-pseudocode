__int64 __fastcall PopEtAppIdIntern(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD v11[4]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v12[24]; // [rsp+48h] [rbp-C0h] BYREF

  v11[0] = 88LL;
  v4 = 0;
  v11[1] = v12;
  v11[3] = 0LL;
  memset(v12, 0, sizeof(v12));
  v12[0] = *(_QWORD *)(a1 + 32);
  v12[4] = *(_QWORD *)(a1 + 40);
  v12[10] = *(unsigned __int16 *)(a1 + 86);
  v12[8] = *(_QWORD *)(a1 + 72);
  v5 = 2LL * *(unsigned __int16 *)(a1 + 80);
  v12[2] = 8LL;
  v12[14] = v5;
  v12[12] = *(_QWORD *)(a1 + 48);
  v6 = 2LL * *(unsigned __int16 *)(a1 + 82);
  v12[7] = 8LL;
  v12[18] = v6;
  v12[16] = *(_QWORD *)(a1 + 56);
  v7 = *(unsigned __int16 *)(a1 + 84);
  v12[6] = 8LL;
  v12[22] = 2 * v7;
  v8 = *(_QWORD *)(a1 + 64);
  v12[15] = 2LL;
  v12[19] = 2LL;
  v12[23] = 2LL;
  v12[3] = 4LL;
  v12[11] = 4LL;
  v12[20] = v8;
  v11[2] = 6LL;
  v9 = RtlInternTableIntern(PopEtGlobals + 56, v11);
  if ( v9 )
    *a2 = v9;
  else
    return (unsigned int)-1073741670;
  return v4;
}
