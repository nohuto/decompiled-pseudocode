void __fastcall PIDLOCKSPRITEAREA::vLock(PIDLOCKSPRITEAREA *this, struct _SPRITESTATE *a2, struct _RECTL *a3)
{
  struct _RECTL *v4; // rdx

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 5) = 0;
  v4 = (struct _RECTL *)((char *)this + 8);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 3) = 0;
  if ( a3->left != a3->right && a3->top != a3->bottom )
  {
    *(_QWORD *)this = a2;
    *v4 = *a3;
    if ( (unsigned int)vSpPIDLockSpriteArea(a2, v4, this) == 2 )
      *(_QWORD *)this = 0LL;
  }
}
