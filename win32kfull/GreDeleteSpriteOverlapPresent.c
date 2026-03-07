void __fastcall GreDeleteSpriteOverlapPresent(HDEV a1, HWND a2)
{
  unsigned int v2; // esi
  int v5; // r14d
  SPRITERANGELOCK *v6; // rbx
  __int64 i; // rdx
  unsigned int v8; // edi
  __int64 v9; // r12
  struct _PRESENT *Present; // rdx
  HDEV v11; // rcx
  void *v12; // rdx
  void *v13; // rdx
  Gre::Base *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rbx
  Gre::Base *v17; // rcx

  v2 = 0;
  v5 = 0;
  if ( *((_DWORD *)a1 + 35) )
  {
    v8 = 0;
    do
    {
      v9 = *(_QWORD *)(*((_QWORD *)a1 + 18) + 8LL * v8);
      SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v9 + 200));
      Present = pSpGetPresent(*(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * v8), a2);
      if ( Present )
      {
        vSpRemovePresent(v11, Present);
        Win32FreePool(v12);
        v5 = 1;
      }
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v9 + 200));
      ++v8;
    }
    while ( v8 < *((_DWORD *)a1 + 35) );
    v6 = (SPRITERANGELOCK *)(a1 + 50);
  }
  else
  {
    v6 = (SPRITERANGELOCK *)(a1 + 50);
    GreAcquireSemaphore(*((_QWORD *)a1 + 25));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_QWORD *)v6, 8LL);
    if ( a2 )
    {
      for ( i = *((_QWORD *)a1 + 20); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(HWND *)i == a2 )
        {
          vSpRemovePresent(a1, (struct _PRESENT *)i);
          Win32FreePool(v13);
          v5 = 1;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(*(_QWORD *)v6);
  }
  if ( v5 )
  {
    if ( *((_DWORD *)a1 + 35) )
    {
      do
      {
        v15 = *(_QWORD *)(*((_QWORD *)a1 + 18) + 8LL * v2);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v15 + 200));
        v16 = *(_QWORD *)(*((_QWORD *)a1 + 18) + 8LL * v2);
        Gre::Base::Globals(v17);
        vSpComputeNoPresentRegion((struct _SPRITESTATE *)(v16 + 80), 0);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v15 + 200));
        ++v2;
      }
      while ( v2 < *((_DWORD *)a1 + 35) );
    }
    else
    {
      SPRITERANGELOCK::vLockExclusive(v6);
      Gre::Base::Globals(v14);
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)(a1 + 20), 0);
      SPRITERANGELOCK::vUnlock(v6);
    }
  }
}
