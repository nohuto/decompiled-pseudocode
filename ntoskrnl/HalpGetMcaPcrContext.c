/*
 * XREFs of HalpGetMcaPcrContext @ 0x14037CEF4
 * Callers:
 *     HalpCmciInitializeErrorPacket @ 0x14037CCA4 (HalpCmciInitializeErrorPacket.c)
 *     HalpCmciInitProcessor @ 0x14037CD68 (HalpCmciInitProcessor.c)
 *     HalpCmciPollProcessor @ 0x14037CE58 (HalpCmciPollProcessor.c)
 *     HalpHvInitMcaPcrContext @ 0x14037CEA4 (HalpHvInitMcaPcrContext.c)
 *     HalpMcaStuckErrorCheck @ 0x1405018DC (HalpMcaStuckErrorCheck.c)
 *     HalpMceHandlerCore @ 0x140501B48 (HalpMceHandlerCore.c)
 *     HalpMceInitializeErrorPacket @ 0x140A87D2C (HalpMceInitializeErrorPacket.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpGetMcaPcrContext(__int64 a1)
{
  if ( (a1 & 0x100000000LL) == 0 )
    return HalpMcaPcrContextData + 192LL * (unsigned int)a1;
  LODWORD(a1) = a1 & 0x7FFFFFFF;
  return HalpHvVpMcaPcrContextData + 192LL * (unsigned int)((__int64 (__fastcall *)(__int64))qword_140C621C0)(a1);
}
