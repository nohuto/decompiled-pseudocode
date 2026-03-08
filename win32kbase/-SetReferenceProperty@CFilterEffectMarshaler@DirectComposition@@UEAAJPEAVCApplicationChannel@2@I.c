/*
 * XREFs of ?SetReferenceProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C024D570
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?SetInput@CEffectInputSet@DirectComposition@@QEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@@Z @ 0x1C024D8A8 (-SetInput@CEffectInputSet@DirectComposition@@QEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarsha.c)
 */

__int64 __fastcall DirectComposition::CFilterEffectMarshaler::SetReferenceProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  signed int v9; // r9d
  unsigned int v10; // r10d

  v9 = (a3 & 0xC0000000) != 0x40000000 ? 0xC000000D : 0;
  if ( !a4
    || DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)a4 + 9), 61)
    || DirectComposition::CResourceMarshaler::IsDerivedResourceType(v10, 42) )
  {
    if ( v9 >= 0 )
    {
      v9 = DirectComposition::CEffectInputSet::SetInput(
             (DirectComposition::CFilterEffectMarshaler *)((char *)this + 72),
             a2,
             a3 & 0x3FFFFFFF,
             a4);
      if ( v9 >= 0 )
        *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
