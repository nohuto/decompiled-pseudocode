__int64 __fastcall InteractiveControlDevice::CreateDeadzone(
        InteractiveControlDevice *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  int UserHandedness; // ebp
  unsigned int v8; // edi
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct InteractiveControlManager *v13; // rax
  _DWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  int v18; // edx
  __int64 v19; // rcx
  int v20; // eax
  struct InteractiveControlManager *v21; // rax
  _DWORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  void **v25; // rcx
  __int64 i; // rsi

  v4 = *((_QWORD *)this + 30);
  UserHandedness = GetUserHandedness((__int64)this, a2, a3, a4);
  if ( !v4 )
    return (unsigned int)-1073741811;
  if ( !*((_DWORD *)InteractiveControlManager::Instance(v6) + 67) )
    return 0;
  v9 = (_DWORD *)Win32AllocPoolZInit(24LL, 1819440195LL);
  v10 = v9;
  if ( !v9 )
    return (unsigned int)-1073741670;
  *v9 = 2;
  v9[4] = 1;
  v11 = Win32AllocPoolZInit(24LL, 1819440195LL);
  *((_QWORD *)v10 + 1) = v11;
  if ( UserHandedness == 1 )
  {
    if ( v11 )
    {
      v13 = InteractiveControlManager::Instance(v12);
      v14 = (_DWORD *)*((_QWORD *)v10 + 1);
      *v14 = *((_DWORD *)v13 + 73);
      *(_DWORD *)(*((_QWORD *)v10 + 1) + 4LL) = *((_DWORD *)InteractiveControlManager::Instance((__int64)v14) + 75);
      *(_DWORD *)(*((_QWORD *)v10 + 1) + 16LL) = 1;
      v15 = Win32AllocPoolZInit(8LL * *(unsigned int *)(*((_QWORD *)v10 + 1) + 16LL), 1819440195LL);
      v16 = *((_QWORD *)v10 + 1);
      *(_QWORD *)(v16 + 8) = v15;
      if ( *(_QWORD *)(*((_QWORD *)v10 + 1) + 8LL) )
      {
        v17 = *((_DWORD *)InteractiveControlManager::Instance(v16) + 77);
        **(_DWORD **)(*((_QWORD *)v10 + 1) + 8LL) = 0;
        v18 = 100 * v17;
        v19 = *(_QWORD *)(*((_QWORD *)v10 + 1) + 8LL);
        v20 = 1;
LABEL_15:
        *(_DWORD *)(v19 + 4) = v18;
        *((_DWORD *)this + 84) = v20;
        v8 = RIMCreatePointerDeviceDeadzone(v4 + 72, v10, (char *)this + 344);
        goto LABEL_16;
      }
    }
  }
  else if ( v11 )
  {
    v21 = InteractiveControlManager::Instance(v12);
    v22 = (_DWORD *)*((_QWORD *)v10 + 1);
    *v22 = *((_DWORD *)v21 + 69);
    *(_DWORD *)(*((_QWORD *)v10 + 1) + 4LL) = *((_DWORD *)InteractiveControlManager::Instance((__int64)v22) + 71);
    *(_DWORD *)(*((_QWORD *)v10 + 1) + 16LL) = 1;
    v23 = Win32AllocPoolZInit(8LL * *(unsigned int *)(*((_QWORD *)v10 + 1) + 16LL), 1819440195LL);
    v24 = *((_QWORD *)v10 + 1);
    *(_QWORD *)(v24 + 8) = v23;
    if ( *(_QWORD *)(*((_QWORD *)v10 + 1) + 8LL) )
    {
      v18 = 100 * *((_DWORD *)InteractiveControlManager::Instance(v24) + 77);
      **(_DWORD **)(*((_QWORD *)v10 + 1) + 8LL) = 0;
      v19 = *(_QWORD *)(*((_QWORD *)v10 + 1) + 8LL);
      v20 = 0;
      goto LABEL_15;
    }
  }
  v8 = -1073741670;
LABEL_16:
  v25 = (void **)*((_QWORD *)v10 + 1);
  if ( v25 )
  {
    for ( i = 0LL; (unsigned int)i < v10[4]; i = (unsigned int)(i + 1) )
    {
      if ( v25[3 * i + 1] )
      {
        Win32FreePool(v25[3 * i + 1]);
        *(_QWORD *)(*((_QWORD *)v10 + 1) + 24 * i + 8) = 0LL;
        v25 = (void **)*((_QWORD *)v10 + 1);
      }
    }
    Win32FreePool(v25);
    *((_QWORD *)v10 + 1) = 0LL;
  }
  Win32FreePool(v10);
  return v8;
}
