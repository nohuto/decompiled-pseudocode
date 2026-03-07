void __fastcall PIDLOCKSPRITEAREA::vUnlock(PIDLOCKSPRITEAREA *this)
{
  struct _SPRITESTATE *v2; // rcx

  v2 = *(struct _SPRITESTATE **)this;
  if ( v2 && *((_DWORD *)this + 2) != *((_DWORD *)this + 4) && *((_DWORD *)this + 3) != *((_DWORD *)this + 5) )
    vSpPIDUnlockSpriteArea(v2, (struct _RECTL *)((char *)this + 8), this);
  *(_QWORD *)this = 0LL;
}
