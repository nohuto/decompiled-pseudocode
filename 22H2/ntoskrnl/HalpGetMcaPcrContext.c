/*
 * XREFs of HalpGetMcaPcrContext @ 0x140380984
 * Callers:
 *     HalpCmciInitializeErrorPacket @ 0x140380734 (HalpCmciInitializeErrorPacket.c)
 *     HalpCmciInitProcessor @ 0x1403807F8 (HalpCmciInitProcessor.c)
 *     HalpCmciPollProcessor @ 0x1403808E8 (HalpCmciPollProcessor.c)
 *     HalpHvInitMcaPcrContext @ 0x140380934 (HalpHvInitMcaPcrContext.c)
 *     HalpMcaStuckErrorCheck @ 0x1405039BC (HalpMcaStuckErrorCheck.c)
 *     HalpMceHandlerCore @ 0x140503C28 (HalpMceHandlerCore.c)
 *     HalpMceInitializeErrorPacket @ 0x140A8B33C (HalpMceInitializeErrorPacket.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpGetMcaPcrContext(__int64 a1)
{
  if ( (a1 & 0x100000000LL) == 0 )
    return HalpMcaPcrContextData + 192LL * (unsigned int)a1;
  LODWORD(a1) = a1 & 0x7FFFFFFF;
  return HalpHvVpMcaPcrContextData + 192LL * (unsigned int)((__int64 (__fastcall *)(__int64))qword_140C62620)(a1);
}
