/*
 * XREFs of PopEsUpdateSetting @ 0x14085DF30
 * Callers:
 *     PopEsWorker @ 0x140870CA0 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x1403AD718 (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PopEsUpdateSetting()
{
  __int64 v0; // rcx
  _DWORD v2[4]; // [rsp+40h] [rbp-28h] BYREF

  v2[0] = PopEsMode;
  v2[2] = (unsigned __int8)byte_140C3D4D5;
  v2[1] = dword_140C3D4D0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_SETTING, (__int64)v2);
  return PopTraceEsSetting(v0, dword_140C3D4D0, byte_140C3D4D5);
}
