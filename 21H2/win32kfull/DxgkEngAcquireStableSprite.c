/*
 * XREFs of DxgkEngAcquireStableSprite @ 0x1C0276A40
 * Callers:
 *     <none>
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00F0FDC (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 */

void __fastcall DxgkEngAcquireStableSprite(__int64 a1, int a2)
{
  unsigned int v3; // edi
  __int64 HDEV; // rax
  __int64 v5; // rbx

  GreAcquireSemaphoreSharedInternal(ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemSprite", ghsemSprite);
  v3 = 0;
  if ( a2 )
  {
    HDEV = UserGetHDEV();
    v5 = HDEV;
    if ( HDEV )
    {
      if ( *(_DWORD *)(HDEV + 148) )
      {
        do
          SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(*(_QWORD *)(*(_QWORD *)(v5 + 152) + 8LL * v3++) + 208LL));
        while ( v3 < *(_DWORD *)(v5 + 148) );
      }
      else
      {
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(HDEV + 208));
      }
    }
  }
}
