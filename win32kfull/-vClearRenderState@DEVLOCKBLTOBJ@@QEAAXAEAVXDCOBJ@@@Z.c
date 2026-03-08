/*
 * XREFs of ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0055220
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0002180 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00149D0 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0051480 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00D2CA8 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00D32E4 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00DEA84 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00589A0 (-vClearRendering@DC@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::vClearRenderState(DEVLOCKBLTOBJ *this, DC **a2)
{
  int v4; // eax
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  _QWORD *v7; // rax
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rbx
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rax

  if ( *a2 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) != 0
      && (!*((_QWORD *)this + 18)
       || !*((_BYTE *)this + 161)
       || (v12 = (_QWORD *)*((_QWORD *)this + 15)) == 0LL
       || !*((_BYTE *)this + 137)
       || **((_QWORD **)this + 18) != *v12) )
    {
      v4 = *((_DWORD *)*a2 + 9);
      if ( (v4 & 0x200) != 0 )
      {
        if ( (v4 & 0x4000) == 0 )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( ThreadWin32Thread )
          {
            v6 = *ThreadWin32Thread;
            if ( v6 )
              *(_DWORD *)(v6 + 328) &= ~1u;
          }
        }
        v7 = (_QWORD *)*((_QWORD *)this + 15);
        if ( v7 && *((_BYTE *)this + 137) && (v8 = *a2, *(_QWORD *)*a2 == *v7) && !*((_QWORD *)this + 22)
          || (v13 = (_QWORD *)*((_QWORD *)this + 18)) != 0LL
          && *((_BYTE *)this + 161)
          && (v8 = *a2, *(_QWORD *)*a2 == *v13)
          && !*((_QWORD *)this + 25) )
        {
          v9 = Gre::Base::Globals(v8);
          GreAcquireSemaphoreSharedInternal(*((_QWORD *)v9 + 11));
          EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDCVisRgn", *((_QWORD *)v9 + 11));
          DC::vClearRendering(*a2);
          v11 = Gre::Base::Globals(v10);
          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
          GreReleaseSemaphoreInternal(*((_QWORD *)v11 + 11));
        }
      }
    }
  }
}
