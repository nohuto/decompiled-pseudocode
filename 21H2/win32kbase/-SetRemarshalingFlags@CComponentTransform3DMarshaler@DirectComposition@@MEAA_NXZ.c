/*
 * XREFs of ?SetRemarshalingFlags@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021B1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0216428 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CComponentTransform3DMarshaler::SetRemarshalingFlags(
        DirectComposition::CComponentTransform3DMarshaler *this)
{
  char v2; // al
  char v3; // cl

  *((_DWORD *)this + 4) &= 0xFFFF807F;
  v2 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2
    || *((float *)this + 35) != 0.0
    || *((float *)this + 23) != 0.0
    || *((float *)this + 24) != 0.0
    || *((float *)this + 25) != 0.0
    || *((float *)this + 26) != 0.0
    || *((float *)this + 27) != 0.0
    || *((float *)this + 36) != 1.0
    || *((float *)this + 37) != 1.0
    || *((float *)this + 38) != 1.0
    || *((float *)this + 20) != 0.0
    || *((float *)this + 21) != 0.0
    || *((float *)this + 22) != 0.0
    || *((float *)this + 32) != 0.0
    || *((float *)this + 33) != 0.0
    || *((float *)this + 34) != 1.0
    || *((float *)this + 28) != 0.0
    || *((float *)this + 29) != 0.0
    || *((float *)this + 30) != 0.0
    || *((float *)this + 31) != 1.0
    || *((float *)this + 39) != 1.0
    || *((float *)this + 40) != 0.0
    || *((float *)this + 41) != 0.0
    || *((float *)this + 42) != 0.0
    || *((float *)this + 43) != 0.0
    || *((float *)this + 44) != 1.0
    || *((float *)this + 45) != 0.0
    || *((float *)this + 46) != 0.0
    || *((float *)this + 47) != 0.0
    || *((float *)this + 48) != 0.0
    || *((float *)this + 49) != 1.0
    || *((float *)this + 50) != 0.0
    || *((float *)this + 51) != 0.0
    || *((float *)this + 52) != 0.0
    || *((float *)this + 53) != 0.0
    || *((float *)this + 54) != 1.0 )
  {
    return 1;
  }
  return v3;
}
