/*
 * XREFs of ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C0091630
 * Callers:
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1C00913AC (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C009149C (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1C01427AC (-DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z.c)
 *     ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1C0142DB0 (-SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z.c)
 * Callees:
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C006F3A0 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     EtwTraceFocusChange @ 0x1C00B6DB0 (EtwTraceFocusChange.c)
 *     EtwTraceFocusedProcessChange @ 0x1C00B6F00 (EtwTraceFocusedProcessChange.c)
 *     MarkQueuesForKeyStateUpdate @ 0x1C01E8070 (MarkQueuesForKeyStateUpdate.c)
 *     ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x1C01F6448 (-VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z.c)
 *     CitModerncoreProcessForegroundChange @ 0x1C0240944 (CitModerncoreProcessForegroundChange.c)
 */

void __fastcall CActivationObjectManager::ForegroundChangeTracker::~ForegroundChangeTracker(
        CActivationObjectManager::ForegroundChangeTracker *this)
{
  unsigned int v2; // edx

  if ( *((_DWORD *)this + 8) != *((_DWORD *)this + 2) || *((_DWORD *)this + 9) != *((_DWORD *)this + 3) )
  {
    EtwTraceFocusChange(*((unsigned int *)this + 7), *((unsigned int *)this + 1));
    if ( *((_DWORD *)this + 6) != *(_DWORD *)this )
    {
      EtwTraceFocusedProcessChange();
      CitModerncoreProcessForegroundChange(*((unsigned int *)this + 6), *(unsigned int *)this);
      IVRootDeliver::Keyboard::VirtualizeFullKeyboardStates((IVRootDeliver::Keyboard *)*(unsigned int *)this, v2);
    }
    CCursorClip::ClearClip(gpCursorClip);
    MarkQueuesForKeyStateUpdate(0LL, 0LL, 0LL);
  }
}
