/*
 * XREFs of ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18019A63C
 * Callers:
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x18019B9B8 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019BEFC (-ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1801A2408 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180027640 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1F6C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
        int *a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v5; // esi
  int v6; // edi
  char *v7; // rax
  char *v8; // rcx
  char *v9; // rcx

  v2 = a1[2];
  v5 = 1;
  if ( (int)v2 + 1 <= 0 )
    return 0;
  if ( (_DWORD)v2 == a1[3] )
  {
    if ( (int)v2 > 0x3FFFFFFF || v2 > 0xFFFFFFFFFFFFFFFLL )
      return 0;
    v6 = 2;
    if ( a1[3] >= 2 )
      v6 = v2 + ((int)v2 >> 1);
    v7 = (char *)((_DWORD)v2 ? DefaultHeap::Realloc(*(void **)a1, 8LL * v6) : DefaultHeap::AllocClear(8LL * v6));
    if ( !v7 )
      return 0;
    a1[3] = v6;
    *(_QWORD *)a1 = v7;
  }
  v8 = *(char **)a1;
  a1[2] = v2 + 1;
  v9 = &v8[8 * v2];
  if ( v9 )
  {
    *(_QWORD *)v9 = *a2;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))v9);
  }
  return v5;
}
