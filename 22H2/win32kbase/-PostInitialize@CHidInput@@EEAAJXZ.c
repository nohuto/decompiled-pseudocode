/*
 * XREFs of ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00B7DB0
 * Callers:
 *     <none>
 * Callees:
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     isInputVirtualizationEnabled @ 0x1C0042ABC (isInputVirtualizationEnabled.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0043670 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     ?ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z @ 0x1C01BA054 (-ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01BD108 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 */

__int64 __fastcall CHidInput::PostInitialize(struct RawInputManagerObject **this)
{
  unsigned int v2; // esi
  CInputThread *v4; // rdi
  bool v5; // bl

  v2 = 0;
  if ( isInputVirtualizationEnabled() )
  {
    v4 = gpInputThread;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4, 0LL);
    v5 = CInputThread::_CalledOnInputThread(v4);
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    if ( v5 )
    {
      v2 = CBaseInput::ivRegisterChildLifetimeNotifications((CBaseInput *)this, 2u);
      if ( isChildPartition() )
        return (unsigned int)CBaseInput::ivChildLoop((CBaseInput *)this, 2u, this[2]);
    }
  }
  return v2;
}
