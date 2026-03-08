/*
 * XREFs of GetSavedCursorPosition @ 0x1C0217B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetSavedCursorPosition()
{
  return *(_QWORD *)((char *)&InputDelegation::CInputDelegationInfo::gInstance + 12);
}
