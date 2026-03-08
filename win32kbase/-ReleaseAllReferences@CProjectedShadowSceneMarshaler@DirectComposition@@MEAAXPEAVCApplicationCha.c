/*
 * XREFs of ?ReleaseAllReferences@CProjectedShadowSceneMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000A3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C000A5EC (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CProjectedShadowSceneMarshaler::ReleaseAllReferences(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CPrimitiveGroupMarshaler *v4; // rcx
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
    this,
    a2,
    *((struct DirectComposition::CResourceMarshaler ***)this + 9),
    (unsigned int *)this + 20);
  DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
    v4,
    a2,
    *((struct DirectComposition::CResourceMarshaler ***)this + 11),
    (unsigned int *)this + 24);
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 21) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 25) = 0;
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 16) = 0LL;
  }
}
