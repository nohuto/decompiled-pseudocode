/*
 * XREFs of DwmAsyncNotifyRotationModeChange @ 0x1C0272938
 * Callers:
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01CE29C (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncNotifyRotationModeChange(PVOID Object, int a2)
{
  unsigned int v3; // edi
  _DWORD v5[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+48h] [rbp-10h]
  int v8; // [rsp+4Ch] [rbp-Ch]

  v3 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v5, 0, sizeof(v5));
    v5[0] = 3145736;
    v6 = 0LL;
    v8 = a2;
    LOWORD(v5[1]) = 0x8000;
    v7 = 1073741880;
    v3 = LpcRequestPort(Object, v5);
    ObfDereferenceObject(Object);
  }
  return v3;
}
