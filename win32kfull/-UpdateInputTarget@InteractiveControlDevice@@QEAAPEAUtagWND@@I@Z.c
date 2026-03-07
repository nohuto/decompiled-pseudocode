struct tagWND *__fastcall InteractiveControlDevice::UpdateInputTarget(InteractiveControlDevice *this, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  struct InteractiveControlManager *v6; // rax
  InteractiveControlManager *v7; // rax
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  InteractiveControlManager *v13; // rax
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // r9

  v3 = 0LL;
  v4 = *((_QWORD *)this + 6);
  if ( v4 && (a2 & *((_DWORD *)this + 14)) != 0 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( *(char *)(v5 + 20) < 0 || *(char *)(v5 + 19) < 0 )
    {
      v7 = InteractiveControlManager::Instance(v4);
      InteractiveControlManager::ClearBackgroundAccessors(v7, v8, v9, v10);
    }
    else
    {
      v6 = InteractiveControlManager::Instance(v4);
      InteractiveControlManager::SetDeviceFocus((__int64)v6, 0, 0, *((_QWORD *)this + 6));
    }
  }
  v11 = *((_QWORD *)this + 5);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 40);
    if ( *(char *)(v12 + 20) < 0 || *(char *)(v12 + 19) < 0 )
    {
      v13 = InteractiveControlManager::Instance(v12);
      InteractiveControlManager::ClearDeviceFocus(v13, v14, v15, v16);
    }
    else
    {
      return (struct tagWND *)*((_QWORD *)this + 5);
    }
  }
  return (struct tagWND *)v3;
}
