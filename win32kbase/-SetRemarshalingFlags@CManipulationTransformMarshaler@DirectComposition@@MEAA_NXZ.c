/*
 * XREFs of ?SetRemarshalingFlags@CManipulationTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0252240
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024D91C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CManipulationTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CManipulationTransformMarshaler *this)
{
  char v2; // al
  char v3; // cl

  *((_DWORD *)this + 4) &= 0xFFFFFE7F;
  v2 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2
    || *((float *)this + 18) != 0.0
    || *((float *)this + 19) != 0.0
    || *((float *)this + 20) != 0.0
    || *((float *)this + 21) != 0.0
    || *((float *)this + 22) != 0.0
    || *((float *)this + 23) != 0.0
    || *((float *)this + 24) != 1.0
    || *((float *)this + 25) != 1.0
    || *((float *)this + 26) != 1.0
    || *((float *)this + 27) != 0.0
    || *((float *)this + 28) != 0.0
    || *((float *)this + 29) != 0.0
    || *((_DWORD *)this + 30) )
  {
    return 1;
  }
  return v3;
}
