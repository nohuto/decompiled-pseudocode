/*
 * XREFs of HvlPrepareForRootCrashdump @ 0x140542CB4
 * Callers:
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405786C8 (KiBugCheckRecoveryPrepareForCrashDump.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14022B710 (KeStallExecutionProcessor.c)
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlNotifyRootCrashdump @ 0x140542C28 (HvlNotifyRootCrashdump.c)
 */

__int64 __fastcall HvlPrepareForRootCrashdump(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  v1 = (unsigned __int8)a1;
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlNotifyRootCrashdump(1);
    KeStallExecutionProcessor(0xC350u);
  }
  if ( VslVsmEnabled )
  {
    memset(v3, 0, 0x68uLL);
    v3[1] = v1;
    VslpEnterIumSecureMode(2u, 260, 0, (__int64)v3);
    if ( (HvlpFlags & 2) != 0 )
    {
      if ( (_BYTE)v1 )
        PoAllProcIntrDisabled = 1;
    }
  }
  if ( (HvlpFlags & 2) != 0 )
    HvlNotifyRootCrashdump(2);
  LOBYTE(a1) = 1;
  ((void (__fastcall *)(__int64))off_140C01BB0[0])(a1);
  return ((__int64 (__fastcall *)(__int64))off_140C01AA8[0])(1LL);
}
