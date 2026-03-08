/*
 * XREFs of ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C009AF18
 * Callers:
 *     DCompositionThreadCallout @ 0x1C009AEF0 (DCompositionThreadCallout.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005E51C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0098744 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 */

void DirectComposition::CConnection::OnDwmRenderThreadExit(void)
{
  struct _ERESOURCE *v0; // rbx
  DirectComposition::CConnection *v1; // rbx
  unsigned int v2; // edx

  DirectComposition::CConnection::s_pDwmRenderThread = 0LL;
  v0 = DirectComposition::CConnection::s_pSessionConnectionLock;
  if ( DirectComposition::CConnection::s_pSessionConnectionLock )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v0, 1u);
    v1 = DirectComposition::CConnection::s_pSessionConnection;
    if ( DirectComposition::CConnection::s_pSessionConnection )
      _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
    ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
    KeLeaveCriticalRegion();
    if ( v1 )
    {
      DirectComposition::CConnection::Disconnect(v1);
      DirectComposition::CConnection::Release(v1, v2);
    }
  }
}
