__int64 __fastcall InitializeTouchPadSysParams(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rcx
  _DWORD *v7; // rax
  wchar_t **v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rax

  v1 = SGDGetUserSessionState(a1);
  v2 = v1 + 16800;
  *(_OWORD *)(v1 + 16800) = 0LL;
  *(_QWORD *)(v1 + 16816) = 0LL;
  *(_DWORD *)(v1 + 16820) |= 8u;
  *(_DWORD *)(SGDGetUserSessionState(v3) + 544) = 1;
  v4 = *(_DWORD *)(v2 + 20) & 0xFFFFFFBF;
  *(_DWORD *)(v2 + 8) = 2;
  *(_DWORD *)(v2 + 16) = 10;
  *(_DWORD *)(v2 + 20) = v4 | 7;
  v5 = *(_DWORD *)(v2 + 12) & 0xFFFFFFF7;
  *(_BYTE *)(v2 + 21) = 50;
  *(_DWORD *)(v2 + 20) |= 0x10000u;
  *(_DWORD *)(v2 + 12) = v5 | 0x780;
  v7 = (_DWORD *)(SGDGetUserSessionState(v6) + 16376);
  v8 = (wchar_t **)&gAapDefaults;
  do
  {
    v9 = *(unsigned int *)v8;
    v8 += 2;
    *v7++ = v9;
  }
  while ( v8 != &ext_ms_win_moderncore_win32k_base_sysentry_l1_host );
  v10 = (_DWORD *)SGDGetUserSessionState(v9);
  v10[4199] = 50;
  v10 += 4126;
  v10[32] = 50;
  v10[38] = 0;
  v10[5] = 20;
  v10[15] = 20;
  v10[13] = 90000;
  v10[14] = 90000;
  v10[34] = 270;
  v10[35] = 270;
  v10[36] = 270;
  v10[37] = 270;
  v10[39] = 70;
  v10[54] = 70;
  v10[61] = 10000;
  v10[62] = 10000;
  *v10 = 300;
  v10[1] = 300;
  v10[2] = 300;
  v10[3] = 450;
  v10[4] = 500;
  v10[6] = 500;
  v10[7] = 500;
  v10[8] = 500;
  v10[9] = 500;
  v10[10] = 750;
  v10[20] = 215;
  v10[21] = 1000;
  v10[23] = 500;
  v10[16] = 1000000;
  v10[17] = 250;
  v10[18] = 50;
  v10[19] = 200;
  v10[22] = 100;
  v10[24] = 300;
  v10[25] = 300;
  v10[26] = 300;
  v10[27] = 300;
  v10[29] = 50;
  v10[30] = 50;
  v10[31] = 50;
  v10[33] = 200;
  v10[68] = 100;
  v10[69] = 100;
  v10[70] = 100;
  v10[40] = 200;
  v10[11] = 150;
  v10[12] = 500;
  v10[48] = 300;
  v10[49] = 300;
  v10[50] = 300;
  v10[51] = 300;
  v10[52] = 300;
  v10[53] = 300;
  v10[55] = 1000;
  v10[56] = 1000;
  v10[28] = 1022;
  v10[60] = 300;
  v10[63] = 125;
  v10[64] = 33;
  v10[58] = 500;
  v10[57] = -423;
  v10[66] = 100;
  v10[67] = 200;
  v10[47] = 25000000;
  v10[71] = 100;
  v10[72] = 1000;
  v10[44] = 250;
  v10[45] = 1000000;
  v10[46] = 16000000;
  return CPTPProcessor::EnvironmentChanged();
}
