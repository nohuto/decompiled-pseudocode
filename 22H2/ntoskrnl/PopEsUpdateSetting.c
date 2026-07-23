/*
 * XREFs of PopEsUpdateSetting @ 0x1407D1CF8
 * Callers:
 *     PopEsWorker @ 0x1407810F0 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x1403CD37C (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PopEsUpdateSetting()
{
  __int64 v0; // rcx
  _DWORD Buffer[4]; // [rsp+40h] [rbp-28h] BYREF

  Buffer[0] = PopEsMode;
  Buffer[2] = (unsigned __int8)byte_140C23395;
  Buffer[1] = dword_140C23390;
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_SETTING, Buffer, 0xCu, 0LL, 0LL, 0, 0);
  return PopTraceEsSetting(v0, dword_140C23390, byte_140C23395);
}
