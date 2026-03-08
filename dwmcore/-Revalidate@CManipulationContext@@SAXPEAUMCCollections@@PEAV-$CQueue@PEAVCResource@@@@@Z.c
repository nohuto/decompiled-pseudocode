/*
 * XREFs of ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801A2374
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18003263C (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1F6C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801A2A58 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 *     ?RevalidateMCsAndLists@CManipulationContext@@CAXPEAUMCCollections@@PEAH@Z @ 0x1801A3134 (-RevalidateMCsAndLists@CManipulationContext@@CAXPEAUMCCollections@@PEAH@Z.c)
 */

__int64 __fastcall CManipulationContext::Revalidate(struct MCCollections *a1, __int64 a2)
{
  int v2; // esi
  __int64 v5; // r14
  CManipulationContext *v6; // rbx
  CManipulationContext *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((int *)a1 + 8) > 0 )
  {
    v5 = 0LL;
    do
    {
      v8 = *(CManipulationContext **)(v5 + *((_QWORD *)a1 + 3));
      v6 = v8;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v8);
      if ( (*((_BYTE *)v6 + 28) & 4) != 0 )
        CManipulationContext::RevalidateMCTree(v6, a1);
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v8);
      ++v2;
      v5 += 8LL;
    }
    while ( v2 < *((_DWORD *)a1 + 8) );
  }
  CManipulationContext::RevalidateMCsAndLists(a1, (int *)&v8);
  return CManipulationContext::RevalidationCleanup((unsigned int)v8, a1, a2);
}
