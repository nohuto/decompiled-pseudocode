/*
 * XREFs of SaveCursorPosition @ 0x1C0218400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SaveCursorPosition(__int64 a1)
{
  *(_QWORD *)((char *)&InputDelegation::CInputDelegationInfo::gInstance + 12) = a1;
}
