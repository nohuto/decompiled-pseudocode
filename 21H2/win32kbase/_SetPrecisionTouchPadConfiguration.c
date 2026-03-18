/*
 * XREFs of _SetPrecisionTouchPadConfiguration @ 0x1C0148CEC
 * Callers:
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0162240 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     xxxSystemParametersInfo @ 0x1C0165BD0 (xxxSystemParametersInfo.c)
 *     UnpackTouchpadSettings @ 0x1C01E90D4 (UnpackTouchpadSettings.c)
 * Callees:
 *     UpdateTPCurrentActiveState @ 0x1C0097280 (UpdateTPCurrentActiveState.c)
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C0097320 (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 *     ResetAccelerationCurves @ 0x1C00A0780 (ResetAccelerationCurves.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C00BE610 (BroadcastSettingsUpdateToAllContainers.c)
 *     WriteSettingValues @ 0x1C0152050 (WriteSettingValues.c)
 */

__int64 __fastcall SetPrecisionTouchPadConfiguration(__int64 a1)
{
  int v2; // edx
  int v3; // ecx
  unsigned int v4; // edi
  int v5; // ecx

  if ( a1 && !*(_DWORD *)a1 )
  {
    v2 = qword_1C0294F10;
    dword_1C028D51C = DWORD2(gTouchPadParameters);
    dword_1C028D58C = qword_1C0294F10;
    if ( *(_DWORD *)(a1 + 8) <= 4u )
    {
      dword_1C028D51C = *(_DWORD *)(a1 + 8);
      DWORD2(gTouchPadParameters) = *(_DWORD *)(a1 + 8);
    }
    v3 = *(_DWORD *)(a1 + 16);
    if ( (unsigned int)(v3 - 1) <= 0x13 )
      v2 = v3;
    dword_1C028D58C = v2;
    if ( *(_BYTE *)(a1 + 21) <= 0x64u )
      dword_1C028D5DC = *(char *)(a1 + 21);
    dword_1C028D52C = -__CFSHR__(*(_DWORD *)(a1 + 12), 3);
    dword_1C028D53C = -__CFSHR__(*(_DWORD *)(a1 + 12), 4);
    dword_1C028D54C = -__CFSHR__(*(_DWORD *)(a1 + 12), 8);
    dword_1C028D55C = -__CFSHR__(*(_DWORD *)(a1 + 12), 9);
    dword_1C028D56C = -__CFSHR__(*(_DWORD *)(a1 + 12), 10);
    dword_1C028D57C = -__CFSHR__(*(_DWORD *)(a1 + 12), 11);
    dword_1C028D59C = -(*(_DWORD *)(a1 + 20) & 1);
    dword_1C028D5AC = -__CFSHR__(*(_DWORD *)(a1 + 20), 2);
    dword_1C028D5BC = -__CFSHR__(*(_DWORD *)(a1 + 20), 3);
    dword_1C028D5CC = -__CFSHR__(*(_DWORD *)(a1 + 20), 7);
    dword_1C028D5EC = -__CFSHR__(*(_DWORD *)(a1 + 20), 17);
    v4 = WriteSettingValues(0LL, &off_1C028D510, 14LL);
    if ( !v4 )
      goto LABEL_19;
    HIDWORD(gTouchPadParameters) ^= (BYTE12(gTouchPadParameters) ^ (unsigned __int8)*(_DWORD *)(a1 + 12)) & 8;
    HIDWORD(gTouchPadParameters) ^= (*(_DWORD *)(a1 + 12) ^ HIDWORD(gTouchPadParameters)) & 4;
    v5 = *(_DWORD *)(a1 + 16);
    if ( qword_1C0294F10 != v5 && (unsigned int)(v5 - 1) <= 0x13 )
    {
      qword_1C0294F10 = *(_DWORD *)(a1 + 16);
      ResetAccelerationCurves(1);
    }
    HIDWORD(gTouchPadParameters) ^= (BYTE12(gTouchPadParameters) ^ (unsigned __int8)*(_DWORD *)(a1 + 12)) & 0x80;
    HIDWORD(gTouchPadParameters) ^= (*(_DWORD *)(a1 + 12) ^ HIDWORD(gTouchPadParameters)) & 0x100;
    HIDWORD(gTouchPadParameters) ^= (*(_DWORD *)(a1 + 12) ^ HIDWORD(gTouchPadParameters)) & 0x200;
    HIDWORD(gTouchPadParameters) ^= (*(_DWORD *)(a1 + 12) ^ HIDWORD(gTouchPadParameters)) & 0x400;
    *(&qword_1C0294F10 + 1) ^= (*(_DWORD *)(a1 + 20) ^ *(&qword_1C0294F10 + 1)) & 1;
    *(&qword_1C0294F10 + 1) ^= (*(_DWORD *)(a1 + 20) ^ *(&qword_1C0294F10 + 1)) & 2;
    *(&qword_1C0294F10 + 1) ^= (*(_DWORD *)(a1 + 20) ^ *(&qword_1C0294F10 + 1)) & 4;
    *(&qword_1C0294F10 + 1) ^= (*(_DWORD *)(a1 + 20) ^ *(&qword_1C0294F10 + 1)) & 0x40;
    if ( *((_BYTE *)&qword_1C0294F10 + 5) == *(_BYTE *)(a1 + 21)
      && ((*(_DWORD *)(a1 + 20) ^ *(&qword_1C0294F10 + 1)) & 0x10000) == 0 )
    {
      goto LABEL_19;
    }
    *(&qword_1C0294F10 + 1) ^= (*(_DWORD *)(a1 + 20) ^ *(&qword_1C0294F10 + 1)) & 0x10000;
    if ( *(_BYTE *)(a1 + 21) <= 0x64u )
      *((_BYTE *)&qword_1C0294F10 + 5) = *(_BYTE *)(a1 + 21);
    if ( *((char *)&qword_1C0294F10 + 4) < 0 )
    {
      CBaseInput::EnumDevices(
        gpHidInput,
        0LL,
        (unsigned __int8 (__fastcall *)(struct DEVICEINFO *, void *))lambda_45e2658b615a226a62ee073301d92df2_::_lambda_invoker_cdecl_);
      UpdateTPCurrentActiveState();
    }
    else
    {
LABEL_19:
      UpdateTPCurrentActiveState();
      if ( !v4 )
        return v4;
    }
    BroadcastSettingsUpdateToAllContainers();
    return v4;
  }
  return 0LL;
}
