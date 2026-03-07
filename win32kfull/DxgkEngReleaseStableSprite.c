__int64 __fastcall DxgkEngReleaseStableSprite(Gre::Base *a1, int a2)
{
  unsigned int v2; // edi
  __int64 HDEV; // rax
  __int64 v4; // rbx
  unsigned int v5; // eax
  struct Gre::Base::SESSION_GLOBALS *v6; // rbx

  v2 = 0;
  if ( a2 )
  {
    HDEV = UserGetHDEV(a1);
    v4 = HDEV;
    if ( HDEV )
    {
      v5 = *(_DWORD *)(HDEV + 140);
      if ( v5 )
      {
        do
        {
          SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(*(_QWORD *)(*(_QWORD *)(v4 + 144) + 8LL * (v5 - v2 - 1)) + 200LL));
          v5 = *(_DWORD *)(v4 + 140);
          ++v2;
        }
        while ( v2 < v5 );
      }
      else
      {
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v4 + 200));
      }
    }
  }
  v6 = Gre::Base::Globals(a1);
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
  return GreReleaseSemaphoreInternal(*((_QWORD *)v6 + 14));
}
