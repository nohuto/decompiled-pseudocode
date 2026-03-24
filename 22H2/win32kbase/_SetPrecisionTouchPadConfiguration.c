/*
 * XREFs of _SetPrecisionTouchPadConfiguration @ 0x1C011C2E0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C000CD30 (xxxSystemParametersInfo.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C01347E0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     UnpackTouchpadSettings @ 0x1C01AFB3C (UnpackTouchpadSettings.c)
 * Callees:
 *     UpdateTPCurrentActiveState @ 0x1C000C880 (UpdateTPCurrentActiveState.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C000D350 (BroadcastSettingsUpdateToAllContainers.c)
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C006F718 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     WriteSettingValues @ 0x1C0127CB0 (WriteSettingValues.c)
 */

__int64 __fastcall SetPrecisionTouchPadConfiguration(_DWORD *a1)
{
  int v2; // edx
  int v3; // ecx
  unsigned int v4; // edi
  int v5; // ecx

  if ( !a1 || *a1 )
    return 0LL;
  v2 = qword_1C024ED38;
  dword_1C024977C = DWORD2(gTouchPadParameters);
  dword_1C02497EC = qword_1C024ED38;
  if ( a1[2] <= 4u )
  {
    dword_1C024977C = a1[2];
    DWORD2(gTouchPadParameters) = a1[2];
  }
  v3 = a1[4];
  if ( (unsigned int)(v3 - 1) <= 0x13 )
    v2 = v3;
  dword_1C02497EC = v2;
  dword_1C024978C = -__CFSHR__(a1[3], 3);
  dword_1C024979C = -__CFSHR__(a1[3], 4);
  dword_1C02497AC = -__CFSHR__(a1[3], 8);
  dword_1C02497BC = -__CFSHR__(a1[3], 9);
  dword_1C02497CC = -__CFSHR__(a1[3], 10);
  dword_1C02497DC = -__CFSHR__(a1[3], 11);
  dword_1C02497FC = -(a1[5] & 1);
  dword_1C024980C = -__CFSHR__(a1[5], 2);
  dword_1C024981C = -__CFSHR__(a1[5], 3);
  dword_1C024983C = -__CFSHR__(a1[5], 7);
  v4 = WriteSettingValues(0LL, &off_1C0249770, 13LL);
  if ( v4 )
  {
    HIDWORD(gTouchPadParameters) ^= (BYTE12(gTouchPadParameters) ^ (unsigned __int8)a1[3]) & 8;
    HIDWORD(gTouchPadParameters) ^= (BYTE12(gTouchPadParameters) ^ (unsigned __int8)a1[3]) & 4;
    v5 = a1[4];
    if ( qword_1C024ED38 != v5 && (unsigned int)(v5 - 1) <= 0x13 )
    {
      qword_1C024ED38 = a1[4];
      CDeviceAcceleration::ResetAccelerationCurves(qword_1C02450B0);
    }
    HIDWORD(gTouchPadParameters) ^= (BYTE12(gTouchPadParameters) ^ (unsigned __int8)a1[3]) & 0x80;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x100;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x200;
    HIDWORD(gTouchPadParameters) ^= (WORD6(gTouchPadParameters) ^ (unsigned __int16)a1[3]) & 0x400;
    *(&qword_1C024ED38 + 1) ^= (*((_BYTE *)&qword_1C024ED38 + 4) ^ (unsigned __int8)a1[5]) & 1;
    *(&qword_1C024ED38 + 1) ^= (*((_BYTE *)&qword_1C024ED38 + 4) ^ (unsigned __int8)a1[5]) & 2;
    *(&qword_1C024ED38 + 1) ^= (a1[5] ^ *(&qword_1C024ED38 + 1)) & 4;
    *(&qword_1C024ED38 + 1) ^= (a1[5] ^ *(&qword_1C024ED38 + 1)) & 0x40;
  }
  UpdateTPCurrentActiveState();
  if ( v4 )
    BroadcastSettingsUpdateToAllContainers();
  return v4;
}
