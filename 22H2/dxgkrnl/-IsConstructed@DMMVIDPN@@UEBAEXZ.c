/*
 * XREFs of ?IsConstructed@DMMVIDPN@@UEBAEXZ @ 0x1C001A060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDPN::IsConstructed(DMMVIDPN *this)
{
  return *((_DWORD *)this + 4) == 2;
}
