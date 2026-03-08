/*
 * XREFs of DxgkEngGetAdapterUniquenessPointer @ 0x1C00D4220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngGetAdapterUniquenessPointer(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1928LL) + 1573024LL;
}
