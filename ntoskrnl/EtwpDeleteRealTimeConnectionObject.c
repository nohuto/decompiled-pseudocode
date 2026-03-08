/*
 * XREFs of EtwpDeleteRealTimeConnectionObject @ 0x14067FD40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 */

LONG_PTR __fastcall EtwpDeleteRealTimeConnectionObject(HANDLE *a1)
{
  ZwClose(a1[2]);
  ObfDereferenceObject(a1[6]);
  return ObfDereferenceObject(a1[7]);
}
