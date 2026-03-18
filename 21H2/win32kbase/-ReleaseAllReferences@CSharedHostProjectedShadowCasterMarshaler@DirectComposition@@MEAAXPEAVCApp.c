/*
 * XREFs of ?ReleaseAllReferences@CSharedHostProjectedShadowCasterMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C023B840
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CProjectedShadowCasterMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00096F0 (-ReleaseAllReferences@CProjectedShadowCasterMarshaler@DirectComposition@@MEAAXPEAVCApplicationCh.c)
 */

void __fastcall DirectComposition::CSharedHostProjectedShadowCasterMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedHostProjectedShadowCasterMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rax

  DirectComposition::CProjectedShadowCasterMarshaler::ReleaseAllReferences(this, a2);
  v3 = *((_QWORD *)this + 14);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 32) = 0;
    ObfDereferenceObject((PVOID)(*((_QWORD *)this + 14) - 24LL));
    *((_QWORD *)this + 14) = 0LL;
  }
}
