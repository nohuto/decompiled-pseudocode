/*
 * XREFs of ?v_CanPositionWindow@LegacyWindowWrapper@@EEAA_NXZ @ 0x18034A810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall LegacyWindowWrapper::v_CanPositionWindow(LegacyWindowWrapper *this)
{
  return (*((_DWORD *)this + 91) & 0x10) == 0;
}
