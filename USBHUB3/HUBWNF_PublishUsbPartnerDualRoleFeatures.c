/*
 * XREFs of HUBWNF_PublishUsbPartnerDualRoleFeatures @ 0x1C008C594
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C002AE70 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C007DFC0 (HUBPDO_EvtDeviceReleaseHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 */

__int64 __fastcall HUBWNF_PublishUsbPartnerDualRoleFeatures(__int64 a1, char a2, int a3)
{
  __int64 v4; // [rsp+40h] [rbp-28h] BYREF
  char v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+49h] [rbp-1Fh]

  v4 = a1;
  v5 = a2;
  v6 = a3;
  return ZwUpdateWnfStateData(&WNF_USB_TYPE_C_PARTNER_STATE, &v4, 13LL, 0LL, 0LL, 0, 0);
}
