/*
 * XREFs of ??0?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x1C00A1AF0
 * Callers:
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1C00A1820 (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1C00A1B7C (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00A1B1C (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 */

_QWORD *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>(
        DirectComposition::CVisualMarshaler *a1)
{
  _QWORD *v1; // rcx
  __int64 v2; // r8

  DirectComposition::CVisualMarshaler::CVisualMarshaler(a1);
  v1[47] = v2;
  *v1 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::`vftable';
  return v1;
}
