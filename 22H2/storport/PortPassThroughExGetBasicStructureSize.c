/*
 * XREFs of PortPassThroughExGetBasicStructureSize @ 0x1C0059E18
 * Callers:
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0059E40 (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     PortPassThroughExNormalize @ 0x1C005A018 (PortPassThroughExNormalize.c)
 *     PortPassThroughExSendAsync @ 0x1C007D8B0 (PortPassThroughExSendAsync.c)
 * Callees:
 *     RtlULongAdd @ 0x1C0045F20 (RtlULongAdd.c)
 */

NTSTATUS __fastcall PortPassThroughExGetBasicStructureSize(__int64 a1, ULONG *a2)
{
  return RtlULongAdd(0x40u, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) - 1, a2);
}
