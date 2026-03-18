/*
 * XREFs of VslFlushSecureAddressSpace @ 0x14054E120
 * Callers:
 *     KeFlushTb @ 0x1402F391C (KeFlushTb.c)
 *     HvlpSlowFlushListTb @ 0x14039D79C (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x14054CFC4 (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
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
