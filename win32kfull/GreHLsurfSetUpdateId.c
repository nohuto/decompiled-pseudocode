__int64 __fastcall GreHLsurfSetUpdateId(Gre::Base *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rsi
  Gre::Base *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  SFMLOGICALSURFACE *v11; // rbx
  __int64 v12; // rcx
  Gre::Base *v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = a1;
  v5 = -1071775733;
  if ( IsDwmActive(a1) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14);
    v7 = Gre::Base::Globals(v6);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v7 + 9));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v7 + 9));
    if ( IsDwmActive(v8) )
    {
      if ( (unsigned int)UserIsCurrentProcessDwm() )
      {
        v5 = -1073741811;
        if ( a2 )
        {
          LOBYTE(v9) = 18;
          v10 = HmgShareLockCheck(a2, v9);
          v11 = (SFMLOGICALSURFACE *)v10;
          if ( v10 )
          {
            PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v14, (struct _EX_PUSH_LOCK *)(v10 + 256));
            if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v12) + 32) + 8692LL)
              && *((_QWORD *)v11 + 23)
              && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v11) )
            {
              *((_QWORD *)v11 + 35) = a3;
              v5 = 0;
            }
            PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v14);
            DEC_SHARE_REF_CNT(v11);
          }
        }
      }
      else
      {
        v5 = -1073741790;
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v7 + 9));
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14);
  }
  return v5;
}
