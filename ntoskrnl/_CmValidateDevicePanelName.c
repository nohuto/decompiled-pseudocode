/*
 * XREFs of _CmValidateDevicePanelName @ 0x140823928
 * Callers:
 *     _PnpDispatchDevicePanel @ 0x140823890 (_PnpDispatchDevicePanel.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x140A63A70 (_CmGetDevicePanelRegKeyPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _CmSplitDevicePanelId @ 0x14082509C (_CmSplitDevicePanelId.c)
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
