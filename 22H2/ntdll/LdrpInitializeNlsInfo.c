/*
 * XREFs of LdrpInitializeNlsInfo @ 0x1800D1D10
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitNlsTables @ 0x1800E5370 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1800E53F0 (RtlResetRtlTranslations.c)
 */

void __fastcall LdrpInitializeNlsInfo(PUSHORT *a1)
{
  _NLSTABLEINFO TableInfo; // [rsp+20h] [rbp-98h] BYREF

  RtlInitNlsTables(a1[20], a1[21], a1[22], &TableInfo);
  RtlResetRtlTranslations(&TableInfo);
}
