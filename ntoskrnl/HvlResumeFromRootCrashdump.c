/*
 * XREFs of HvlResumeFromRootCrashdump @ 0x1405430E4
 * Callers:
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x140578228 (KiBugCheckRecoveryCleanupFromCrashDump.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlNotifyRootCrashdump @ 0x140542C28 (HvlNotifyRootCrashdump.c)
 */

__int64 __fastcall HvlResumeFromRootCrashdump(char a1)
{
  __int64 result; // rax
  _BYTE v3[112]; // [rsp+20h] [rbp-88h] BYREF

  if ( !VslVsmEnabled || (HvlpForceAllPages = (unsigned int)HvlpForceAllPages >> 1, a1) )
  {
    if ( (HvlpFlags & 2) != 0 )
      HvlNotifyRootCrashdump(3);
    if ( VslVsmEnabled )
    {
      if ( a1 )
      {
        memset(v3, 0, 0x68uLL);
        VslpEnterIumSecureMode(2u, 2051, 0, (__int64)v3);
      }
    }
    HvlEnlightenments = HvlpEnlightenments;
    return off_140C01BB8[0]();
  }
  return result;
}
