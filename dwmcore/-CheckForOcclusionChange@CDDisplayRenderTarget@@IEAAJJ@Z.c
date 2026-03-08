/*
 * XREFs of ?CheckForOcclusionChange@CDDisplayRenderTarget@@IEAAJJ@Z @ 0x1801E5008
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801E5044 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x1801E52AC (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::CheckForOcclusionChange(CDDisplayRenderTarget *this, int a2)
{
  if ( a2 == 142213121 )
  {
    *((_BYTE *)this + 18666) = 1;
  }
  else if ( a2 >= 0 && *((_BYTE *)this + 18666) )
  {
    *(_WORD *)((char *)this + 18665) = 1;
    a2 = 0;
    *((_BYTE *)this + 141) = 1;
  }
  return (unsigned int)a2;
}
