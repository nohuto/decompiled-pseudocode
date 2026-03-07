__int64 __fastcall GreWindowBeginLayoutUpdate(Gre::Base *a1, __int64 a2)
{
  unsigned int v3; // ebx
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  __int64 v5; // rdx
  int v7; // eax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = a2;
  v3 = 0;
  v4 = Gre::Base::Globals(a1);
  v9 = *((_QWORD *)v4 + 15);
  GreAcquireSemaphore(v9);
  if ( (unsigned int)IsDwmActive() )
  {
    GreAcquireSemaphore(*((_QWORD *)v4 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v4 + 9), 7LL);
    if ( (unsigned int)IsDwmActive() )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v8, (HWND)a1);
      v5 = v8;
      if ( v8 )
      {
        v3 = 1;
        if ( *(int *)(v8 + 116) >= 1 )
        {
          v7 = *(_DWORD *)(v8 + 120);
          if ( v7 > 0 )
            *(_DWORD *)(v8 + 120) = v7 + 1;
        }
        if ( v5 )
          _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 9));
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  return v3;
}
