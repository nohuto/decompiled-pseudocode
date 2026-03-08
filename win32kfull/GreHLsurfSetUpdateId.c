/*
 * XREFs of GreHLsurfSetUpdateId @ 0x1C026A5FC
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C001E5D0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C001EC6C (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0029DD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

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
