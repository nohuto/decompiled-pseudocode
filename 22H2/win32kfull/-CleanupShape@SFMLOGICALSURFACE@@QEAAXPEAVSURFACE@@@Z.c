/*
 * XREFs of ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C0079E88
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C00587CC (GreTransferDwmStateToSpriteState.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x1C007B470 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C002D3F8 (GreDereferenceObject.c)
 */

void __fastcall SFMLOGICALSURFACE::CleanupShape(SFMLOGICALSURFACE *this, HSURF *a2)
{
  if ( (*((_DWORD *)this + 61) & 0x20) != 0 )
  {
    if ( a2 )
      GreDereferenceObject(a2[4], 1u);
    *((_DWORD *)this + 61) &= ~0x20u;
  }
}
