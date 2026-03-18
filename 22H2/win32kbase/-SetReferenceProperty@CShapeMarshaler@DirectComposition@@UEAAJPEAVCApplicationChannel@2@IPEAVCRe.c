/*
 * XREFs of ?SetReferenceProperty@CShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0030FF0
 * Callers:
 *     ?SetReferenceProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0032450 (-SetReferenceProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C003019C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C0092B30 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CShapeMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( a3 )
    return 3221225485LL;
  if ( a4
    && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)a4 + 9), 29LL) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( a4 != this[7] )
  {
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    DirectComposition::CApplicationChannel::ReleaseResource(a2, this[7]);
    this[7] = a4;
    *((_DWORD *)this + 4) |= 0x20u;
    *a5 = 1;
  }
  return v5;
}
