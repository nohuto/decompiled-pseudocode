/*
 * XREFs of ?ReleaseAllReferences@CSharedWriteLegacyAnimationTriggerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00C40D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    ObfDereferenceObject((PVOID)(v3 - 24));
    *((_QWORD *)this + 9) = 0LL;
  }
}
