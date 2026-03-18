/*
 * XREFs of HvlPrepareForRootCrashdump @ 0x140545154
 * Callers:
 *     KeBugCheck2 @ 0x140568330 (KeBugCheck2.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x14057ABD8 (KiBugCheckRecoveryPrepareForCrashDump.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x1402C3000 (KeStallExecutionProcessor.c)
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     HvlNotifyRootCrashdump @ 0x1405450C8 (HvlNotifyRootCrashdump.c)
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
