/*
 * XREFs of ?SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C002C200
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C002D3BC (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C002D3BC.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C003019C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0031090 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C0092B30 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

int __fastcall DirectComposition::CSpriteVisualMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v8; // edi

  switch ( a3 )
  {
    case 0xAu:
      return -1073741811;
    case 0x34u:
      v8 = 0;
      if ( a4
        && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                               *((unsigned int *)a4 + 9),
                               17LL) )
      {
        return -1073741811;
      }
      if ( a4 != this[47] )
      {
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        DirectComposition::CApplicationChannel::ReleaseResource(a2, this[47]);
        this[47] = a4;
        *((_DWORD *)this + 98) |= 1u;
        *a5 = 1;
      }
      return v8;
    case 0x35u:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               this + 48,
               a4,
               1LL,
               39,
               this + 49,
               2,
               0,
               a5);
    default:
      return DirectComposition::CVisualMarshaler::SetReferenceProperty(
               (DirectComposition::CVisualMarshaler *)this,
               a2,
               a3,
               a4,
               a5);
  }
}
