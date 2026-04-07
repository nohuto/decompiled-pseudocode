/*
 * XREFs of ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x180053690
 * Callers:
 *     ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x180036260 (-ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180036E1C (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void CDesktopManager::ReleaseCVICache(void)
{
  CDesktopManager *v0; // rax
  __int64 v1; // rbx
  __int64 v2; // rdi
  CBaseObject *v3; // rcx

  v0 = CDesktopManager::s_pDesktopManagerInstance;
  v1 = 736LL;
  v2 = 2LL;
  do
  {
    v3 = *(CBaseObject **)((char *)v0 + v1);
    if ( v3 )
    {
      CBaseObject::Release(v3);
      v0 = CDesktopManager::s_pDesktopManagerInstance;
      *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + v1) = 0LL;
    }
    v1 += 8LL;
    --v2;
  }
  while ( v2 );
}
