void __fastcall InteractiveControlDevice::Deinitialize(InteractiveControlDevice *this)
{
  void *v1; // rdx
  SimpleHapticsController *v3; // rcx
  SimpleHapticsController *v4; // rcx
  void *v5; // rcx
  InteractiveControlInput **v6; // rsi
  InteractiveControlInput *v7; // rdi
  InteractiveControlInput *v8; // rax

  v1 = (void *)*((_QWORD *)this + 44);
  if ( v1 )
  {
    FindTimer(0LL, v1, 4u, 1, 0LL);
    *((_QWORD *)this + 44) = 0LL;
  }
  InteractiveControlDevice::SetFocus(this, 0LL, *((unsigned int *)this + 16), 0LL);
  v3 = (SimpleHapticsController *)*((_QWORD *)this + 48);
  if ( v3 )
  {
    SimpleHapticsController::DeInitialize(v3);
    v4 = (SimpleHapticsController *)*((_QWORD *)this + 48);
    if ( v4 )
      SimpleHapticsController::`scalar deleting destructor'(v4);
    *((_QWORD *)this + 48) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 32);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 32) = 0LL;
  }
  if ( *((_QWORD *)this + 43) != -1LL )
    InteractiveControlDevice::DestroyDeadzone(this);
  if ( *(_QWORD *)this )
  {
    RawInputManagerDeviceObjectDereference(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
  InteractiveControlParser::FreeDeviceCapabilities((InteractiveControlDevice *)((char *)this + 72));
  v6 = (InteractiveControlInput **)((char *)this + 16);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (InteractiveControlInput *)v6 )
      break;
    if ( *((InteractiveControlInput ***)v7 + 1) != v6
      || (v8 = *(InteractiveControlInput **)v7, *(InteractiveControlInput **)(*(_QWORD *)v7 + 8LL) != v7) )
    {
      __fastfail(3u);
    }
    *v6 = v8;
    *((_QWORD *)v8 + 1) = v6;
    InteractiveControlInput::`scalar deleting destructor'(v7, 0);
    Win32FreePool(v7);
    --*((_DWORD *)this + 8);
  }
  InteractiveControlDevice::SetTargetWindow(this, 0LL);
  InteractiveControlDevice::SetBackgroundAccessor(this, 0LL, 0);
  *((_DWORD *)this + 2) = 0;
}
