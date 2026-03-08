/*
 * XREFs of HalpMcUpdateMicrocode @ 0x14037CB18
 * Callers:
 *     HalpMcLoadMicrocodeWorker @ 0x140519630 (HalpMcLoadMicrocodeWorker.c)
 *     HalpLoadMicrocodeSerialized @ 0x140931D78 (HalpLoadMicrocodeSerialized.c)
 *     HalpProcInitSystem @ 0x140A878D0 (HalpProcInitSystem.c)
 *     HalpPostSleepMP @ 0x140A93F28 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140A94574 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpMcUpdateMicrocode(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ecx

  LODWORD(a2) = KeGetPcr()->Prcb.Number;
  v3 = 0;
  if ( HalpMcUpdateMicrocodeFuncEx )
  {
    LOBYTE(a3) = HalpMcUpdateSelfHosting;
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64))HalpMcUpdateMicrocodeFuncEx)(1LL, a2, a3);
  }
  return v3;
}
