/*
 * XREFs of VslFlushSecureAddressSpace @ 0x140548BFC
 * Callers:
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     HvlpSlowFlushListTb @ 0x140547974 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x140547AF8 (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 VslFlushSecureAddressSpace()
{
  _QWORD v1[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  if ( KeGetCurrentIrql() > 2u )
    return 255LL;
  v1[1] = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
  return VslpEnterIumSecureMode(2u, 240, 0, (__int64)v1);
}
