/*
 * XREFs of ?SetReferenceProperty@CSurfaceBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0064B30
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C0061AAC (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CSurfaceBrushMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  unsigned int v9; // r9d
  unsigned int v11; // r9d
  unsigned int v12; // r9d

  v5 = 0;
  if ( !a3 )
  {
    if ( !a4 )
      goto LABEL_6;
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)a4 + 9), 42LL)
      && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v9, 202LL)
      && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v11, 129LL)
      && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v12, 71LL) )
    {
      return 3221225485LL;
    }
    if ( a4
      && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                             *((unsigned int *)a4 + 9),
                             147LL) )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
LABEL_6:
      if ( a4 != this[9] )
      {
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        DirectComposition::CApplicationChannel::ReleaseResource(a2, this[9]);
        this[9] = a4;
        *((_DWORD *)this + 4) |= 0x20u;
        *a5 = 1;
      }
    }
    return v5;
  }
  if ( a3 == 6 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             this + 10,
             a4,
             1LL,
             29,
             this + 2,
             64,
             0,
             a5);
  return 3221225485LL;
}
