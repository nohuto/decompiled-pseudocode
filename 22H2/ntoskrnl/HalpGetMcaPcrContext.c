/*
 * XREFs of HalpGetMcaPcrContext @ 0x1403A04C8
 * Callers:
 *     HalpCmciPollProcessor @ 0x1403A03AC (HalpCmciPollProcessor.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C5150 (HalpHvInitMcaPcrContext.c)
 *     HalpMcaReadError @ 0x1404BA760 (HalpMcaReadError.c)
 *     HalpMceHandlerCore @ 0x1404BAD14 (HalpMceHandlerCore.c)
 *     HalpCmciInitProcessor @ 0x140999D10 (HalpCmciInitProcessor.c)
 *     HalpMceInitializeErrorPacket @ 0x1409A0D50 (HalpMceInitializeErrorPacket.c)
 *     HalpCmciInitializeErrorPacket @ 0x1409A0FDC (HalpCmciInitializeErrorPacket.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpGetMcaPcrContext(__int64 a1)
{
  if ( (a1 & 0x100000000LL) == 0 )
    return HalpMcaPcrContextData + 184LL * (unsigned int)a1;
  LODWORD(a1) = a1 & 0x7FFFFFFF;
  return HalpHvVpMcaPcrContextData + 184LL * (unsigned int)((__int64 (__fastcall *)(__int64))qword_140C4A2A0)(a1);
}
