/*
 * XREFs of HalpMcUpdateMicrocode @ 0x1403A5E14
 * Callers:
 *     HalpLoadMicrocode @ 0x140866070 (HalpLoadMicrocode.c)
 *     HalpPostSleepMP @ 0x140995854 (HalpPostSleepMP.c)
 *     HalpProcInitSystem @ 0x14099E630 (HalpProcInitSystem.c)
 *     HalpDpPostReplaceInitialization @ 0x1409A8618 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     HalpMcRecordProcessorInfo @ 0x1403A5EB4 (HalpMcRecordProcessorInfo.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpMcUpdateMicrocode(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _OWORD v5[3]; // [rsp+40h] [rbp-48h] BYREF

  v3 = 0;
  memset(v5, 0, sizeof(v5));
  if ( HalpMcUpdateMicrocodeFuncEx )
  {
    LODWORD(a2) = KeGetPcr()->Prcb.Number;
    LOBYTE(a3) = HalpMcUpdateSelfHosting;
    v3 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _OWORD *, PVOID, _BYTE, char))HalpMcUpdateMicrocodeFuncEx)(
           1LL,
           a2,
           a3,
           v5,
           HalpMcUpdateData,
           0,
           HalpMcUpdateMinVerSupported);
    HalpMcRecordProcessorInfo(v5);
  }
  return v3;
}
