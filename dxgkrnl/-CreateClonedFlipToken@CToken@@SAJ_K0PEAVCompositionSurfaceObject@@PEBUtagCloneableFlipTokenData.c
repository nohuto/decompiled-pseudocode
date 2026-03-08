/*
 * XREFs of ?CreateClonedFlipToken@CToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x1C0077D14
 * Callers:
 *     ?InsertCompletedToken@CCompositionSurface@@IEAAJ_K0PEAUtagCloneableFlipTokenData@@PEAPEAVCToken@@@Z @ 0x1C007BD04 (-InsertCompletedToken@CCompositionSurface@@IEAAJ_K0PEAUtagCloneableFlipTokenData@@PEAPEAVCToken@.c)
 * Callees:
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C0077FB0 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x1C0078A74 (-CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEA.c)
 */

__int64 __fastcall CToken::CreateClonedFlipToken(
        unsigned __int64 a1,
        unsigned __int64 a2,
        struct CompositionSurfaceObject *this,
        const struct tagCloneableFlipTokenData *a4,
        struct CToken **a5)
{
  int v8; // ebx
  struct CFlipToken *v10; // [rsp+30h] [rbp-18h] BYREF

  v10 = 0LL;
  *a5 = 0LL;
  v8 = CFlipToken::CreateCloned(a1, a2, this, a4, &v10);
  if ( v8 < 0 )
    CompositionSurfaceObject::SignalGpuFence(this, a1, a2, 1);
  else
    *a5 = v10;
  return (unsigned int)v8;
}
