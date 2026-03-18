/*
 * XREFs of WritePointerDeviceSettings @ 0x1C013F160
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0094FF0 (xxxSystemParametersInfo.c)
 * Callees:
 *     SetTouchInputStatus @ 0x1C013F130 (SetTouchInputStatus.c)
 *     WriteSettingValues @ 0x1C013F2A0 (WriteSettingValues.c)
 */

__int64 __fastcall WritePointerDeviceSettings(int a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // esi

  v4 = 0;
  v5 = a3;
  if ( a1 == 147 )
  {
    v4 = 1;
    dword_1C02888BC = *a2 == 0;
    dword_1C02888CC = a2[1];
    dword_1C02888DC = a2[2];
    dword_1C02888EC = a2[3];
    dword_1C02888FC = a2[5];
    dword_1C028890C = a2[6];
    dword_1C028891C = a2[7];
    dword_1C028892C = a2[8];
    dword_1C028893C = a2[9];
    dword_1C028894C = a2[10];
    dword_1C028895C = a2[11];
    dword_1C028896C = a2[12];
    dword_1C028897C = a2[13];
    dword_1C028898C = a2[14];
    dword_1C028899C = a2[15];
    SetTouchInputStatus((unsigned int)a2[7], (__int64)a2, a3, a4);
    if ( !v5 || (v4 = WriteSettingValues(2LL, &gaTouchGestureSettings, 15LL)) != 0 )
    {
      if ( !gTouchMonitor )
        gTouchMonitor = 1;
      dword_1C02888AC = a2[4];
      if ( v5 )
        v4 = WriteSettingValues(3LL, &gMultiTouchGetSettings, 1LL);
      if ( v4 && !gMultiTouchMonitor )
        gMultiTouchMonitor = 1;
    }
  }
  return v4;
}
