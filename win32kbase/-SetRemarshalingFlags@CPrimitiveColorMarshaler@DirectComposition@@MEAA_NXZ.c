/*
 * XREFs of ?SetRemarshalingFlags@CPrimitiveColorMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0262270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CPrimitiveColorMarshaler::SetRemarshalingFlags(
        DirectComposition::CPrimitiveColorMarshaler *this)
{
  return *((float *)this + 14) != 0.0
      || *((float *)this + 15) != 0.0
      || *((float *)this + 16) != 0.0
      || *((float *)this + 17) != 0.0;
}
