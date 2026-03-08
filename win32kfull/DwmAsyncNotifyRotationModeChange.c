/*
 * XREFs of DwmAsyncNotifyRotationModeChange @ 0x1C026FD28
 * Callers:
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A8DC4 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x1C0028164 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 */

__int64 __fastcall DwmAsyncNotifyRotationModeChange(PVOID Object, int a2)
{
  unsigned int v4; // edi
  _OWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+48h] [rbp-10h]
  int v9; // [rsp+4Ch] [rbp-Ch]

  v4 = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object);
  if ( Object )
  {
    memset(v6, 0, sizeof(v6));
    v7 = 0LL;
    LODWORD(v6[0]) = 3145736;
    WORD2(v6[0]) = 0x8000;
    v8 = 1073741880;
    v9 = a2;
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
