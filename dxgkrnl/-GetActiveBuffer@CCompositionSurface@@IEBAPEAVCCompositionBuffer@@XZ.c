/*
 * XREFs of ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C000DB08
 * Callers:
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C000DAA0 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C007C144 (-Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?PreNotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C007C330 (-PreNotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C007C3A0 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?Initialize@CContentResource@@IEAAJXZ @ 0x1C008771C (-Initialize@CContentResource@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CCompositionBuffer *__fastcall CCompositionSurface::GetActiveBuffer(CCompositionSurface *this)
{
  struct CCompositionBuffer *result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( *((_DWORD *)this + 22) )
  {
    v2 = *((_QWORD *)this + 9) - 24LL;
    if ( *(_BYTE *)(v2 + 40) )
      return (struct CCompositionBuffer *)v2;
  }
  return result;
}
