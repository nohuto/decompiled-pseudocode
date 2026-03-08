/*
 * XREFs of ?MarkInactive@CCompositionBuffer@@UEAA_NXZ @ 0x1C0026EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionBuffer::MarkInactive(CCompositionBuffer *this)
{
  bool result; // al

  result = *((_BYTE *)this + 40);
  *((_BYTE *)this + 40) = 0;
  return result;
}
