/*
 * XREFs of ?SetReferenceProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C025D630
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0069940 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 */

int __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetReferenceProperty(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  *a5 = 0;
  switch ( a3 )
  {
    case '4':
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 47,
               (__int64)a4,
               1,
               92,
               (int *)this + 137,
               2,
               0,
               a5);
    case '9':
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 50,
               (__int64)a4,
               1,
               17,
               (int *)this + 137,
               64,
               0,
               a5);
    case ':':
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 51,
               (__int64)a4,
               1,
               67,
               (int *)this + 137,
               128,
               0,
               a5);
    case '=':
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 53,
               (__int64)a4,
               1,
               194,
               (int *)this + 137,
               1024,
               0,
               a5);
    case 'I':
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 63,
               (__int64)a4,
               1,
               121,
               (int *)this + 137,
               0x400000,
               0,
               a5);
    case 'J':
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 64,
               (__int64)a4,
               1,
               117,
               (int *)this + 137,
               0x800000,
               0,
               a5);
  }
  return DirectComposition::CVisualMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
}
