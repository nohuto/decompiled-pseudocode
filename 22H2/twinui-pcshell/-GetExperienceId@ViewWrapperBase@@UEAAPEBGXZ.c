/*
 * XREFs of ?GetExperienceId@ViewWrapperBase@@UEAAPEBGXZ @ 0x18033EA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PCWSTR __fastcall ViewWrapperBase::GetExperienceId(HSTRING *this)
{
  return WindowsGetStringRawBuffer(this[19], 0LL);
}
