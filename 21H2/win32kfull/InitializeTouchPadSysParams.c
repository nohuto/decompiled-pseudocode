/*
 * XREFs of InitializeTouchPadSysParams @ 0x1C012DA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitializeTouchPadSysParams()
{
  wchar_t **v0; // rcx
  _DWORD *v1; // rdx
  int v2; // eax

  v0 = (wchar_t **)&gAapDefaults;
  gTouchPadParameters = 0LL;
  *((_QWORD *)&gTouchPadParameters + 2) = 0LL;
  *((_DWORD *)&gTouchPadParameters + 5) |= 8u;
  *((_DWORD *)&gTouchPadParameters + 5) |= 1u;
  *((_DWORD *)&gTouchPadParameters + 2) = 2;
  *((_DWORD *)&gTouchPadParameters + 3) |= 0x200u;
  *((_DWORD *)&gTouchPadParameters + 3) |= 0x400u;
  *((_DWORD *)&gTouchPadParameters + 5) |= 4u;
  *((_DWORD *)&gTouchPadParameters + 5) |= 2u;
  *((_DWORD *)&gTouchPadParameters + 5) &= ~0x40u;
  *((_DWORD *)&gTouchPadParameters + 3) &= ~8u;
  *((_DWORD *)&gTouchPadParameters + 3) |= 0x80u;
  *((_DWORD *)&gTouchPadParameters + 3) |= 0x100u;
  *((_DWORD *)&gTouchPadParameters + 4) = 10;
  v1 = (_DWORD *)gAapState;
  do
  {
    v2 = *(_DWORD *)v0;
    v0 += 2;
    *v1++ = v2;
  }
  while ( v0 != &ext_ms_win_moderncore_win32k_base_sysentry_l1_host );
  gTPThresholds[0] = 300;
  gTPThresholds[1] = 300;
  gTPThresholds[2] = 300;
  gTPThresholds[3] = 450;
  gTPThresholds[4] = 500;
  gTPThresholds[5] = 20;
  gTPThresholds[6] = 500;
  gTPThresholds[7] = 500;
  gTPThresholds[8] = 500;
  gTPThresholds[9] = 500;
  gTPThresholds[10] = 750;
  gTPThresholds[15] = 20;
  gTPThresholds[20] = 215;
  gTPThresholds[21] = 1000;
  gTPThresholds[23] = 500;
  gTPThresholds[73] = 50;
  gTPThresholds[13] = 90000;
  gTPThresholds[14] = 90000;
  gTPThresholds[16] = 1000000;
  gTPThresholds[17] = 250;
  gTPThresholds[18] = 50;
  gTPThresholds[19] = 200;
  gTPThresholds[22] = 100;
  gTPThresholds[24] = 300;
  gTPThresholds[25] = 300;
  gTPThresholds[26] = 300;
  gTPThresholds[27] = 300;
  gTPThresholds[29] = 50;
  gTPThresholds[30] = 50;
  gTPThresholds[31] = 50;
  gTPThresholds[32] = 50;
  gTPThresholds[33] = 200;
  gTPThresholds[68] = 100;
  gTPThresholds[69] = 100;
  gTPThresholds[70] = 100;
  gTPThresholds[34] = 270;
  gTPThresholds[35] = 270;
  gTPThresholds[36] = 270;
  gTPThresholds[37] = 270;
  gTPThresholds[38] = 0;
  gTPThresholds[39] = 70;
  gTPThresholds[40] = 120;
  gTPThresholds[48] = 300;
  gTPThresholds[49] = 300;
  gTPThresholds[50] = 300;
  gTPThresholds[51] = 540;
  gTPThresholds[52] = 270;
  gTPThresholds[53] = 810;
  gTPThresholds[54] = 300;
  gTPThresholds[55] = 1000;
  gTPThresholds[56] = 1000;
  gTPThresholds[28] = 1022;
  gTPThresholds[60] = 300;
  gTPThresholds[61] = 22500;
  gTPThresholds[62] = 10000;
  gTPThresholds[63] = 33;
  gTPThresholds[65] = 776;
  gTPThresholds[66] = 100;
  gTPThresholds[67] = 200;
  gTPThresholds[47] = 25000000;
  gTPThresholds[71] = 100;
  gTPThresholds[72] = 1000;
  gTPThresholds[44] = 250;
  gTPThresholds[45] = 10;
  gTPThresholds[46] = 40;
  gTPThresholds[45] *= 10000 * gTPThresholds[45];
  gTPThresholds[46] *= 10000 * gTPThresholds[46];
  return CPTPProcessor::EnvironmentChanged();
}
