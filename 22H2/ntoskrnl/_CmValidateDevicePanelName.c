/*
 * XREFs of _CmValidateDevicePanelName @ 0x14082B998
 * Callers:
 *     _PnpDispatchDevicePanel @ 0x14082B900 (_PnpDispatchDevicePanel.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x140A66770 (_CmGetDevicePanelRegKeyPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _CmSplitDevicePanelId @ 0x14082D10C (_CmSplitDevicePanelId.c)
 */

__int64 __fastcall CmValidateDevicePanelName(__int64 a1, const wchar_t *a2)
{
  __int64 result; // rax
  GUID Guid; // [rsp+28h] [rbp-20h] BYREF

  Guid = 0LL;
  result = CmSplitDevicePanelId(a2, &Guid);
  if ( (int)result < 0 )
    return 3221225523LL;
  return result;
}
