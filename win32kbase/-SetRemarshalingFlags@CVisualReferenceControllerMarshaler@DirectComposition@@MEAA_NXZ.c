/*
 * XREFs of ?SetRemarshalingFlags@CVisualReferenceControllerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0253200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CVisualReferenceControllerMarshaler::SetRemarshalingFlags(
        DirectComposition::CVisualReferenceControllerMarshaler *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 7);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 16) != 0LL;
  return result;
}
