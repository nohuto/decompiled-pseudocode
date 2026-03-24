/*
 * XREFs of ?ReleaseAllReferences@CVisualTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F8190
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CSharedReadMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C004BDE0 (-ReleaseAllReferences@CSharedReadMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?UpdateRootVisual@CVisualTargetMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C0096FCC (-UpdateRootVisual@CVisualTargetMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVC.c)
 */

void __fastcall DirectComposition::CVisualTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rax
  bool v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  DirectComposition::CVisualTargetMarshaler::UpdateRootVisual(this, a2, 0LL, &v5);
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
    *(_DWORD *)(v4 + 28) = 0;
  DirectComposition::CSharedReadMarshaler::ReleaseAllReferences(this, a2);
}
