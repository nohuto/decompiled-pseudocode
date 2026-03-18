/*
 * XREFs of DCompositionThreadCallout @ 0x1C00A7760
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C00A7788 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 */

__int64 __fastcall DCompositionThreadCallout(struct _ETHREAD *a1, int a2)
{
  if ( a2 == 1 && a1 == DirectComposition::CConnection::s_pDwmRenderThread )
    DirectComposition::CConnection::OnDwmRenderThreadExit();
  return 0LL;
}
