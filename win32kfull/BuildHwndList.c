// write access to const memory has been detected, the output may be wrong!
struct tagBWL *__fastcall BuildHwndList(ShellWindowManagement *this, char a2, __int64 a3, int a4)
{
  __int64 v4; // r15
  ShellWindowManagement *v8; // rbx
  struct tagBWL *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 *ThreadWin32Thread; // rax
  int v16; // edx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rsi
  struct tagWND *v20; // rdx
  __int64 v21; // rax
  const struct tagWND *v22; // rdx

  v4 = 0LL;
  v8 = this;
  if ( a4 == 1 && (v9 = pbwlCache) != 0LL )
  {
    pbwlCache = 0LL;
  }
  else
  {
    v21 = Win32AllocPoolZInit(296LL, 1819767637LL);
    v9 = (struct tagBWL *)v21;
    if ( !v21 )
      return 0LL;
    *(_QWORD *)(v21 + 16) = v21 + 280;
  }
  *((_QWORD *)v9 + 3) = a3;
  for ( *((_QWORD *)v9 + 1) = (char *)v9 + 32; v8; v8 = (ShellWindowManagement *)*((_QWORD *)v8 + 11) )
  {
    v10 = *((_QWORD *)v9 + 3);
    if ( (a2 & 0x10) == 0 || (v16 = *(_DWORD *)(*((_QWORD *)v8 + 5) + 236LL), (unsigned int)(v16 - 1) <= 1) || v16 == 16 )
    {
      if ( (a2 & 0x20) == 0
        || (v22 = (const struct tagWND *)*((_QWORD *)v8 + 5), (*((_BYTE *)v22 + 31) & 0x11) != 0x10)
        || (*((_BYTE *)v22 + 20) & 0x40) != 0
        || !ShellWindowManagement::EligibleWindow(v8, v22) )
      {
        if ( !v10 || v10 == *((_QWORD *)v8 + 2) )
        {
          this = (ShellWindowManagement *)*((_QWORD *)v9 + 1);
          *(_QWORD *)this = *(_QWORD *)v8;
          v11 = *((_QWORD *)v9 + 1) + 8LL;
          *((_QWORD *)v9 + 1) = v11;
          if ( v11 == *((_QWORD *)v9 + 2) )
          {
            v17 = v11 - (_QWORD)v9;
            v18 = UserReAllocPool(v9, (unsigned int)v17 + 8LL, (unsigned int)v17 + 72LL, 1819767637LL);
            if ( !v18 )
              break;
            v19 = v18 + v17;
            v9 = (struct tagBWL *)v18;
            *(_QWORD *)(v18 + 8) = v19;
            this = (ShellWindowManagement *)(v19 + 64);
            *(_QWORD *)(v18 + 16) = v19 + 64;
          }
        }
      }
    }
    if ( (a2 & 1) != 0 )
    {
      v20 = (struct tagWND *)*((_QWORD *)v8 + 14);
      if ( v20 )
      {
        v9 = InternalBuildHwndList(v9, v20, 3u);
        if ( *((_QWORD *)v9 + 1) >= *((_QWORD *)v9 + 2) )
          break;
      }
    }
    if ( (a2 & 2) == 0 )
      break;
  }
  v12 = (_QWORD *)*((_QWORD *)v9 + 1);
  if ( (unsigned __int64)v12 >= *((_QWORD *)v9 + 2) )
  {
    Win32FreePool(v9);
    return 0LL;
  }
  *v12 = 1LL;
  if ( (a2 & 8) != 0 )
    v9 = InternalRebuildHwndListForIMEClass(v9);
  v13 = SGDGetUserSessionState(this);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  *((_QWORD *)v9 + 3) = v4;
  if ( a4 )
  {
    *((_QWORD *)v9 + 3) = gptiCurrent;
    *(_QWORD *)v9 = gpbwlList;
    gpbwlList = v9;
  }
  else
  {
    *(_QWORD *)v9 = 3LL;
  }
  return v9;
}
