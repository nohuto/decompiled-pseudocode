/*
 * XREFs of ?MarkInactive@CCompositionSwapchainBuffer@@UEAA_NXZ @ 0x1C0026F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSwapchainBuffer::MarkInactive(CCompositionSwapchainBuffer *this)
{
  bool result; // al

  result = *((_BYTE *)this + 40);
  *((_QWORD *)this + 89) = 0LL;
  *((_BYTE *)this + 40) = 0;
  return result;
}
