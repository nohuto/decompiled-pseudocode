/*
 * XREFs of WritePointerDeviceSettings @ 0x1C0127B80
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C000CD30 (xxxSystemParametersInfo.c)
 * Callees:
 *     WriteSettingValues @ 0x1C0127CB0 (WriteSettingValues.c)
 */

__int64 __fastcall WritePointerDeviceSettings(int a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a1 == 147 )
  {
    v3 = 1;
    dword_1C024985C = *a2 == 0;
    dword_1C024986C = a2[1];
    dword_1C024987C = a2[2];
    dword_1C024988C = a2[3];
    dword_1C024989C = a2[5];
    dword_1C02498AC = a2[6];
    dword_1C02498BC = a2[7];
    dword_1C02498CC = a2[8];
    dword_1C02498DC = a2[9];
    dword_1C02498EC = a2[10];
    dword_1C02498FC = a2[11];
    dword_1C024990C = a2[12];
    dword_1C024991C = a2[13];
    RawInputManagerObject::bTouchInputAllowed = a2[7];
    if ( !a3 || (v3 = WriteSettingValues(2LL, &gaTouchGestureSettings, 13LL)) != 0 )
    {
      if ( !gTouchMonitor )
        gTouchMonitor = 1;
      dword_1C024984C = a2[4];
      if ( a3 )
        v3 = WriteSettingValues(3LL, &gMultiTouchGetSettings, 1LL);
      if ( v3 && !gMultiTouchMonitor )
        gMultiTouchMonitor = 1;
    }
  }
  return v3;
}
