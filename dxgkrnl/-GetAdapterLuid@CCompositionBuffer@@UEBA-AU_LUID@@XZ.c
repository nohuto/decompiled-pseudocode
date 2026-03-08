/*
 * XREFs of ?GetAdapterLuid@CCompositionBuffer@@UEBA?AU_LUID@@XZ @ 0x1C0019FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CCompositionBuffer::GetAdapterLuid(CCompositionBuffer *this, _QWORD *a2)
{
  *a2 = `CCompositionBuffer::GetAdapterLuid'::`2'::sc_luidZero;
  return (struct _LUID)a2;
}
