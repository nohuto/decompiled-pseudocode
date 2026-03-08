/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00C1CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C006B010 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 47);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) = 0;
    ObfDereferenceObject((PVOID)(*((_QWORD *)this + 47) - 24LL));
    *((_QWORD *)this + 47) = 0LL;
  }
  DirectComposition::CVisualMarshaler::ReleaseAllReferences(this, a2);
}
