/*
 * XREFs of ??0?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x1C0092E30
 * Callers:
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1C0092B5C (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1C0092E6C (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00302B4 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 */

DirectComposition::CVisualMarshaler *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>(
        DirectComposition::CVisualMarshaler *a1,
        __int64 a2)
{
  DirectComposition::CVisualMarshaler::CVisualMarshaler(a1);
  *((_QWORD *)a1 + 47) = a2;
  *(_QWORD *)a1 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::`vftable';
  return a1;
}
