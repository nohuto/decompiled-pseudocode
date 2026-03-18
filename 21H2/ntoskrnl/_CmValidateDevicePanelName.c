/*
 * XREFs of _CmValidateDevicePanelName @ 0x140A29BBC
 * Callers:
 *     _PnpDispatchDevicePanel @ 0x14083D8B0 (_PnpDispatchDevicePanel.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x140A28CA4 (_CmGetDevicePanelRegKeyPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _CmSplitDevicePanelId @ 0x140A295FC (_CmSplitDevicePanelId.c)
 */

__int64 __fastcall CmValidateDevicePanelName(__int64 a1, const wchar_t *a2)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v4; // [rsp+24h] [rbp-24h] BYREF
  GUID Guid; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0;
  v3 = 0;
  Guid = 0LL;
  result = CmSplitDevicePanelId(a2, &Guid, &v4, &v3);
  if ( (int)result < 0 )
    return 3221225523LL;
  return result;
}
