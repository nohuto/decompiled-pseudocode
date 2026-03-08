/*
 * XREFs of GreHLsurfSetPresentFlags @ 0x1C026A4C8
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C001E5D0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0029DD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall GreHLsurfSetPresentFlags(Gre::Base *a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rsi
  Gre::Base *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  Gre::Base *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = a1;
  v5 = -1071775733;
  if ( IsDwmActive(a1) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v13);
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
          v11 = v10;
          if ( v10 )
          {
            PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v13, (struct _EX_PUSH_LOCK *)(v10 + 256));
            *(_DWORD *)(v11 + 212) = a3;
            v5 = 0;
            PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v13);
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
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v13);
  }
  return v5;
}
