/*
 * XREFs of DxgkEngAcquireStableSprite @ 0x1C014D190
 * Callers:
 *     <none>
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001884C (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 */

void __fastcall DxgkEngAcquireStableSprite(Gre::Base *a1, int a2)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 HDEV; // rax
  __int64 v7; // rbx

  v3 = Gre::Base::Globals(a1);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v3 + 14));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v3 + 14));
  v5 = 0;
  if ( a2 )
  {
    HDEV = UserGetHDEV(v4);
    v7 = HDEV;
    if ( HDEV )
    {
      if ( *(_DWORD *)(HDEV + 140) )
      {
        do
          SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(*(_QWORD *)(*(_QWORD *)(v7 + 144) + 8LL * v5++) + 200LL));
        while ( v5 < *(_DWORD *)(v7 + 140) );
      }
      else
      {
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(HDEV + 200));
      }
    }
  }
}
