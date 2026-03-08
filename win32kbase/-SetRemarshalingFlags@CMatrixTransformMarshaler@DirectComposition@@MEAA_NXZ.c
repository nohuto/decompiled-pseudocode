/*
 * XREFs of ?SetRemarshalingFlags@CMatrixTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0251300
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024D91C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CMatrixTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CMatrixTransformMarshaler *this)
{
  char v2; // al
  char v3; // cl

  v2 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2
    || *((float *)this + 18) != 1.0
    || *((float *)this + 19) != 0.0
    || *((float *)this + 20) != 0.0
    || *((float *)this + 21) != 1.0
    || *((float *)this + 22) != 0.0
    || *((float *)this + 23) != 0.0 )
  {
    return 1;
  }
  return v3;
}
