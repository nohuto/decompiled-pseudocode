void __fastcall vSpPIDUnlockSpriteArea(struct _SPRITESTATE *a1, struct _RECTL *a2, void *a3)
{
  struct SPRITE *v5; // rcx
  struct _RECTL *i; // rsi
  struct SPRITE *v7; // rax
  struct SPRITE *v8; // rbx

  v5 = (struct SPRITE *)*((_QWORD *)a1 + 2);
  for ( i = a2; ; a2 = i )
  {
    v7 = pSpReverseFindInZForPidLock(v5, a2);
    v8 = v7;
    if ( !v7 )
      break;
    SURFACE::bUnMap((SURFACE *)(*((_QWORD *)v7 + 16) - 24LL), a3, 0LL);
    v5 = (struct SPRITE *)*((_QWORD *)v8 + 4);
  }
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)a1 + 120));
}
