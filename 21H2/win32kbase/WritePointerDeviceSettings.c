/*
 * XREFs of WritePointerDeviceSettings @ 0x1C0151F20
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0165BD0 (xxxSystemParametersInfo.c)
 * Callees:
 *     WriteSettingValues @ 0x1C0152050 (WriteSettingValues.c)
 */

__int64 __fastcall WritePointerDeviceSettings(int a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a1 == 147 )
  {
    v3 = 1;
    dword_1C028DBAC = *a2 == 0;
    dword_1C028DBBC = a2[1];
    dword_1C028DBCC = a2[2];
    dword_1C028DBDC = a2[3];
    dword_1C028DBEC = a2[5];
    dword_1C028DBFC = a2[6];
    dword_1C028DC0C = a2[7];
    dword_1C028DC1C = a2[8];
    dword_1C028DC2C = a2[9];
    dword_1C028DC3C = a2[10];
    dword_1C028DC4C = a2[11];
    dword_1C028DC5C = a2[12];
    dword_1C028DC6C = a2[13];
    RawInputManagerObject::bTouchInputAllowed = a2[7];
    if ( !a3 || (v3 = WriteSettingValues(2LL, &gaTouchGestureSettings, 13LL)) != 0 )
    {
      if ( !gTouchMonitor )
        gTouchMonitor = 1;
      dword_1C028DB9C = a2[4];
      if ( a3 )
        v3 = WriteSettingValues(3LL, &gMultiTouchGetSettings, 1LL);
      if ( v3 && !gMultiTouchMonitor )
        gMultiTouchMonitor = 1;
    }
  }
  return v3;
}
