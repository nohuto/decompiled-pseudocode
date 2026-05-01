/*
 * XREFs of ??$Make@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@12@XZ @ 0x18029DA40
 * Callers:
 *     ?StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1802A6174 (-StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ??0UserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x18029F3DC (--0UserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1802A0694 (-Attach@-$ComPtr@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory,>(
        _QWORD *a1)
{
  Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory *v2; // rax
  Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory *v3; // rbx
  __int64 v4; // rax

  *a1 = 0LL;
  v2 = (Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory *)operator new(
                                                                                        0x60uLL,
                                                                                        (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x60uLL);
    v4 = Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory::UserPresenceListenerFactory(v3);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory>::Attach(
      a1,
      v4);
  }
  return a1;
}
