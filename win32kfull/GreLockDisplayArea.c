/*
 * XREFs of GreLockDisplayArea @ 0x1C02862E0
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00519F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001884C (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0088198 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00E42C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0268FB8 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 */

void __fastcall GreLockDisplayArea(__int64 a1, struct tagRECT *a2)
{
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rsi
  struct tagRECT v9; // xmm6
  __int64 v10; // rbx
  void (__fastcall *v11)(_QWORD, struct _RECTL *); // rax
  void (__fastcall *v12)(_QWORD, struct tagRECT *); // r14
  struct tagRECT v13; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v14; // [rsp+30h] [rbp-40h] BYREF
  struct _RECTL v15; // [rsp+40h] [rbp-30h] BYREF

  v13 = *a2;
  ERECTL::vOrder((ERECTL *)&v13);
  if ( !IsRectEmptyInl(&v13) )
  {
    v5 = Gre::Base::Globals(v4);
    v6 = *((_QWORD *)v5 + 14);
    if ( *(_DWORD *)(a1 + 140) )
    {
      v7 = 0LL;
      if ( !(unsigned int)GreIsSemaphoreOwnedByCurrentThread(v6) )
      {
        GreAcquireSemaphore(*((_QWORD *)v5 + 14));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v5 + 14), 5LL);
        v7 = 1LL;
      }
      v8 = 0LL;
      if ( *(_DWORD *)(a1 + 140) )
      {
        v9 = v13;
        do
        {
          v10 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v8);
          v14 = v9;
          v13.left = *(_DWORD *)(v10 + 2560);
          v13.top = *(_DWORD *)(v10 + 2564);
          ERECTL::bOffsetSubtract((ERECTL *)&v14, (const struct _POINTL *)&v13, 0);
          if ( bIntersect((const struct _RECTL *)&v14, (const struct _RECTL *)(v10 + 120), &v15) )
          {
            if ( v7 )
              SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v10 + 200));
            v11 = *(void (__fastcall **)(_QWORD, struct _RECTL *))(v10 + 3472);
            if ( v11 )
              v11(*(_QWORD *)(v10 + 1768), &v15);
          }
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (unsigned int)v8 < *(_DWORD *)(a1 + 140) );
      }
    }
    else
    {
      v12 = *(void (__fastcall **)(_QWORD, struct tagRECT *))(a1 + 3472);
      if ( !(unsigned int)GreIsSemaphoreOwnedByCurrentThread(v6) )
      {
        GreAcquireSemaphore(*((_QWORD *)v5 + 14));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v5 + 14), 5LL);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 200));
      }
      if ( v12 )
        v12(*(_QWORD *)(a1 + 1768), a2);
    }
  }
}
