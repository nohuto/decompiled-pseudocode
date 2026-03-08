/*
 * XREFs of ?ReleaseAllReferences@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025BB50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CScenePbrMaterialMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025BC30 (-ReleaseAllReferences@CScenePbrMaterialMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel.c)
 */

void __fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::ReleaseAllReferences(
        DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 15) = 0LL;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 19);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 19) = 0LL;
  }
  DirectComposition::CScenePbrMaterialMarshaler::ReleaseAllReferences(this, a2);
}
