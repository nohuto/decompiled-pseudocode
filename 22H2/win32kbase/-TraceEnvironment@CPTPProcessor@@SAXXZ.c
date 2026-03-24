/*
 * XREFs of ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x1C01A767C
 * Callers:
 *     ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0121750 (-W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C000C920 (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 */

void CPTPProcessor::TraceEnvironment(void)
{
  CBaseInput *v0; // r9

  if ( gpHidInput && CBaseInput::_sessionInitialized && dword_1C0249170 && tlgKeywordOn((__int64)&dword_1C0249170, 1LL) )
    CBaseInput::EnumDevices(
      v0,
      0LL,
      (unsigned __int8 (__fastcall *)(struct DEVICEINFO *, void *))lambda_fa6a589edf23ed69d06e62f02aabf114_::_lambda_invoker_cdecl_);
}
