/*
 * XREFs of ?ReleaseAllReferences@CPathGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00ADA30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CGeometryMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00ADAC0 (-ReleaseAllReferences@CGeometryMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CPathGeometryMarshaler::ReleaseAllReferences(
        DirectComposition::CPathGeometryMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 12) = 0LL;
  }
  DirectComposition::CGeometryMarshaler::ReleaseAllReferences(this, a2);
}
