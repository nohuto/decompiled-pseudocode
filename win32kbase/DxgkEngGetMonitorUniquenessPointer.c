/*
 * XREFs of DxgkEngGetMonitorUniquenessPointer @ 0x1C00D41F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngGetMonitorUniquenessPointer(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1928LL) + 1573032LL;
}
