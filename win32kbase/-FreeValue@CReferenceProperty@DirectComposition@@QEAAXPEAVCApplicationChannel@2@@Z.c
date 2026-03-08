/*
 * XREFs of ?FreeValue@CReferenceProperty@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C026F460
 * Callers:
 *     ?ReleaseAllReferences@CGenericMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C026F490 (-ReleaseAllReferences@CGenericMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C026F620 (-SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVC.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CReferenceProperty::FreeValue(
        DirectComposition::CReferenceProperty *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 1) = 0LL;
  }
}
