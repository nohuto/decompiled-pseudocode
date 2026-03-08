/*
 * XREFs of ?IsValid@CD3DResource@@UEBAJXZ @ 0x1800FA890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DResource::IsValid(CD3DResource *this)
{
  return *((_BYTE *)this + 70) == 0 ? 0x8898008D : 0;
}
