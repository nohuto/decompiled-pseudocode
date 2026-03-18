/*
 * XREFs of ?SetRemarshalingFlags@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021B060
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0216428 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CComponentTransform2DMarshaler::SetRemarshalingFlags(
        DirectComposition::CComponentTransform2DMarshaler *this)
{
  char v2; // al
  char v3; // cl

  *((_DWORD *)this + 4) &= 0xFFFFE07F;
  v2 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2
    || *((float *)this + 26) != 0.0
    || *((float *)this + 20) != 0.0
    || *((float *)this + 21) != 0.0
    || *((float *)this + 22) != 0.0
    || *((float *)this + 23) != 0.0
    || *((float *)this + 24) != 0.0
    || *((float *)this + 25) != 0.0
    || *((float *)this + 27) != 1.0
    || *((float *)this + 28) != 1.0
    || *((float *)this + 29) != 1.0
    || *((float *)this + 30) != 0.0
    || *((float *)this + 31) != 0.0
    || *((float *)this + 32) != 1.0
    || *((float *)this + 33) != 0.0
    || *((float *)this + 34) != 0.0 )
  {
    return 1;
  }
  return v3;
}
