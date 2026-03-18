/*
 * XREFs of vDbgPrintExWithPrefix @ 0x140463540
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14032A5D0 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __stdcall vDbgPrintExWithPrefix(PCCH Prefix, ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal(Prefix, ComponentId, Level, Format, arglist, 1);
}
