/*
 * XREFs of CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1D2A4
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A262F8 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140262F00 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1CE0C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardReplacePost @ 0x140A1D350 (CmpPrepareDiscardReplacePost.c)
 */

__int64 __fastcall CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int128 v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = 0LL;
  CmpInitializeDelayDerefContext(&v7);
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)v4 = a1;
  CmpEnumerateAllHigherLayerKcbs(
    a1,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanupDiscardReplacePre,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpPrepareDiscardReplacePost,
    (__int64)&v7,
    v4,
    1,
    0);
  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 >= 0 )
  {
    CmpPrepareDiscardReplacePost(a1, &v7, a2);
    v5 = 0;
    if ( *(int *)(a2 + 8) < 0 )
      v5 = *(_DWORD *)(a2 + 8);
  }
  CmpDrainDelayDerefContext((_QWORD **)&v7);
  return (unsigned int)v5;
}
