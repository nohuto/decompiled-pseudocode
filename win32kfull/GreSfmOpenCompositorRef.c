/*
 * XREFs of GreSfmOpenCompositorRef @ 0x1C001E854
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C001E5D0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0029DD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C002A404 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C002D794 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall GreSfmOpenCompositorRef(Gre::Base *a1, HLSURF a2)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rdi
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  Gre::Base *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = a1;
  v3 = Gre::Base::Globals(a1);
  GreAcquireSemaphore(*((_QWORD *)v3 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v3 + 9), 7LL);
  v4 = 0;
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( (unsigned int)IsDwmActive() )
    {
      v8 = 0LL;
      v9 = 0;
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v8, a2);
      v5 = v8;
      if ( v8 )
      {
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v10, (struct _EX_PUSH_LOCK *)(v8 + 256));
        v6 = *(_DWORD *)(v5 + 244);
        if ( (v6 & 8) != 0 )
        {
          if ( (v6 & 0x10) != 0 )
            *(_DWORD *)(v5 + 244) = v6 & 0xFFFFFFEF;
          ++*(_DWORD *)(v5 + 248);
        }
        else
        {
          v4 = -2147020579;
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v10);
      }
      else
      {
        v4 = -1073741816;
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v8);
    }
    else
    {
      v4 = -1071775733;
    }
  }
  else
  {
    v4 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v3 + 9));
  return v4;
}
