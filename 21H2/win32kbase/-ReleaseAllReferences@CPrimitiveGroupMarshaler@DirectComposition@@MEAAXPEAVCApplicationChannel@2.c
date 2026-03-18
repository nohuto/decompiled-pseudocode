/*
 * XREFs of ?ReleaseAllReferences@CPrimitiveGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B0750
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C00063D4 (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CPrimitiveGroupMarshaler::ReleaseAllReferences(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CPrimitiveGroupMarshaler *v4; // rcx

  DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
    this,
    a2,
    *((struct DirectComposition::CResourceMarshaler ***)this + 11),
    (unsigned int *)this + 24);
  DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
    v4,
    a2,
    *((struct DirectComposition::CResourceMarshaler ***)this + 13),
    (unsigned int *)this + 28);
  DirectComposition::CApplicationChannel::ReleaseResource(
    a2,
    *((struct DirectComposition::CResourceMarshaler **)this + 8));
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
}
