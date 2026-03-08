/*
 * XREFs of ?ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0268E50
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0268A90 (-CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@A.c)
 */

void __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::ReleaseAllReferences(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  unsigned int v2; // esi
  __int64 v5; // rax
  size_t v6; // r8
  __int128 *v7; // rcx
  __int128 v8; // xmm0
  __int128 Src; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]

  v2 = 0;
  if ( *((_QWORD *)this + 12) )
  {
    v5 = 0LL;
    do
    {
      v6 = *((_QWORD *)this + 13);
      v7 = (__int128 *)(*((_QWORD *)this + 9) + v5 * v6);
      v8 = *v7;
      v10 = v7[1];
      LODWORD(v10) = 0;
      Src = v8;
      memmove(v7, &Src, v6);
      v5 = ++v2;
    }
    while ( (unsigned __int64)v2 < *((_QWORD *)this + 12) );
  }
  DirectComposition::CInteractionTrackerBindingManagerMarshaler::CleanUpListItemsPendingDeletion(this, a2);
}
