/*
 * XREFs of ?ReleaseAllReferences@CDDisplayRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C02664E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CDDisplayRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  void *v5; // rcx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 20);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 20) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 10);
  if ( v5 )
  {
    DxgkReleaseCompositionObjectReference(v5);
    *((_QWORD *)this + 10) = 0LL;
  }
}
