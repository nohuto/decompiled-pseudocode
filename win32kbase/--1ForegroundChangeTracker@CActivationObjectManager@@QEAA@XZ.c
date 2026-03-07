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
