void __fastcall DEVLOCKOBJ::vClearRenderState(DEVLOCKOBJ *this)
{
  Gre::Base *v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  Gre::Base *v4; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  struct Gre::Base::SESSION_GLOBALS *v7; // rbx

  v2 = (Gre::Base *)*((_QWORD *)this + 4);
  if ( v2 && *((_BYTE *)this + 49) && (*((_DWORD *)this + 6) & 0x1000) != 0 && (*((_DWORD *)v2 + 9) & 0x200) != 0 )
  {
    v3 = Gre::Base::Globals(v2);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v3 + 11));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDCVisRgn", *((_QWORD *)v3 + 11));
    if ( !*((_QWORD *)this + 7) )
      DC::vClearRendering(*((DC **)this + 4));
    if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
      {
        v6 = *ThreadWin32Thread;
        if ( v6 )
          *(_DWORD *)(v6 + 328) &= ~1u;
      }
    }
    v7 = Gre::Base::Globals(v4);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
    GreReleaseSemaphoreInternal(*((_QWORD *)v7 + 11));
  }
}
