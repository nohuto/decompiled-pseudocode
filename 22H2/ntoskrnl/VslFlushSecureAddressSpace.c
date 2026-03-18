/*
 * XREFs of VslFlushSecureAddressSpace @ 0x14054B09C
 * Callers:
 *     KeFlushTb @ 0x140279850 (KeFlushTb.c)
 *     HvlpSlowFlushListTb @ 0x140549E14 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x140549F98 (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
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
