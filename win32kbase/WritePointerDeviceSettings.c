__int64 __fastcall WritePointerDeviceSettings(int a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // esi

  v4 = 0;
  v5 = a3;
  if ( a1 == 147 )
  {
    v4 = 1;
    dword_1C02C98BC = *a2 == 0;
    dword_1C02C98CC = a2[1];
    dword_1C02C98DC = a2[2];
    dword_1C02C98EC = a2[3];
    dword_1C02C98FC = a2[5];
    dword_1C02C990C = a2[6];
    dword_1C02C991C = a2[7];
    dword_1C02C992C = a2[8];
    dword_1C02C993C = a2[9];
    dword_1C02C994C = a2[10];
    dword_1C02C995C = a2[11];
    dword_1C02C996C = a2[12];
    dword_1C02C997C = a2[13];
    SetTouchInputStatus((unsigned int)a2[7], (__int64)a2, a3, a4);
    if ( !v5 || (v4 = WriteSettingValues(2LL, &gaTouchGestureSettings, 13LL)) != 0 )
    {
      if ( !gTouchMonitor )
        gTouchMonitor = 1;
      dword_1C02C98AC = a2[4];
      if ( v5 )
        v4 = WriteSettingValues(3LL, &gMultiTouchGetSettings, 1LL);
      if ( v4 && !gMultiTouchMonitor )
        gMultiTouchMonitor = 1;
    }
  }
  return v4;
}
