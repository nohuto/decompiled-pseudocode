/*
 * XREFs of ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C005BD48
 * Callers:
 *     ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1C000C19C (-DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z.c)
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C005BBB8 (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1C00C2680 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1C01562F8 (-SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z.c)
 * Callees:
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C0015530 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     isRootPartition @ 0x1C007B02C (isRootPartition.c)
 *     EtwTraceFocusChange @ 0x1C00C2FD0 (EtwTraceFocusChange.c)
 *     EtwTraceFocusedProcessChange @ 0x1C00C35C0 (EtwTraceFocusedProcessChange.c)
 *     Feature_KeyboardInputVirtualization__private_ReportDeviceUsage @ 0x1C00E1194 (Feature_KeyboardInputVirtualization__private_ReportDeviceUsage.c)
 *     PpiFromProcessId @ 0x1C01544D0 (PpiFromProcessId.c)
 *     MarkQueuesForKeyStateUpdate @ 0x1C02180C0 (MarkQueuesForKeyStateUpdate.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C02265A4 (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C0228560 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     CitModerncoreProcessForegroundChange @ 0x1C0273840 (CitModerncoreProcessForegroundChange.c)
 */

void __fastcall CActivationObjectManager::ForegroundChangeTracker::~ForegroundChangeTracker(
        CActivationObjectManager::ForegroundChangeTracker *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax
  const struct CONTAINER_ID *v9; // rdx
  int v10; // eax
  int v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 8) != *((_DWORD *)this + 2) || *((_DWORD *)this + 9) != *((_DWORD *)this + 3) )
  {
    EtwTraceFocusChange(*((unsigned int *)this + 7), *((unsigned int *)this + 1));
    if ( *((_DWORD *)this + 6) != *(_DWORD *)this )
    {
      EtwTraceFocusedProcessChange();
      CitModerncoreProcessForegroundChange(*((unsigned int *)this + 6), *(unsigned int *)this);
      v2 = *(_DWORD *)this;
      Feature_KeyboardInputVirtualization__private_ReportDeviceUsage();
      if ( (unsigned __int8)isRootPartition() )
      {
        v7 = SGDGetUserSessionState(v4, v3, v5, v6);
        if ( CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(v7 + 12672) + 1360LL)) )
        {
          v8 = PpiFromProcessId(v2);
          if ( v8 )
            v10 = *(_DWORD *)(v8 + 1072);
          else
            v10 = 0;
          v11 = v10;
          if ( v10 )
            IVRootDeliver::Keyboard::Detail::SendFullKeyboardStates((IVRootDeliver::Keyboard::Detail *)&v11, v9);
        }
      }
    }
    CCursorClip::ClearClip(*((CCursorClip **)&WPP_MAIN_CB.Reserved + 1));
    MarkQueuesForKeyStateUpdate(0LL, 0LL, 0LL);
  }
}
