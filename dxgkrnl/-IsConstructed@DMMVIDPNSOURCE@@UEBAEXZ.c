/*
 * XREFs of ?IsConstructed@DMMVIDPNSOURCE@@UEBAEXZ @ 0x1C0014C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDPNSOURCE::IsConstructed(DMMVIDPNSOURCE *this)
{
  return *((_DWORD *)this + 6) == 2;
}
