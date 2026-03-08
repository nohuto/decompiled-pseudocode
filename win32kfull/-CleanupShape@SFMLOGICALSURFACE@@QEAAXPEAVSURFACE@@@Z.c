/*
 * XREFs of ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C00D7E3C
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C007CDBC (GreTransferDwmStateToSpriteState.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x1C00D7A20 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C00447CC (GreDereferenceObject.c)
 */

void __fastcall SFMLOGICALSURFACE::CleanupShape(SFMLOGICALSURFACE *this, struct SURFACE *a2)
{
  if ( (*((_DWORD *)this + 61) & 0x20) != 0 )
  {
    if ( a2 )
      GreDereferenceObject(*((_QWORD *)a2 + 4), 1LL);
    *((_DWORD *)this + 61) &= ~0x20u;
  }
}
