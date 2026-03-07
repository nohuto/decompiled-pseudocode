struct SPRITE *__fastcall pSpFindInZ(struct SPRITE *a1, struct _RECTL *a2)
{
  LONG left; // ebp
  struct SPRITE *v3; // rbx
  LONG top; // r14d
  LONG right; // r15d
  LONG i; // r12d
  SINGLEREADERLOCK *v8; // rdi
  int IsCursorSprite; // esi

  left = a2->left;
  v3 = a1;
  top = a2->top;
  right = a2->right;
  for ( i = a2->bottom; v3; v3 = (struct SPRITE *)*((_QWORD *)v3 + 3) )
  {
    v8 = (struct SPRITE *)((char *)v3 + 248);
    IsCursorSprite = bIsCursorSprite(v3);
    if ( IsCursorSprite == 1 )
      SINGLEREADERLOCK::vLock(v8);
    if ( (*(_DWORD *)v3 & 0x400) == 0
      && *((_DWORD *)v3 + 20) <= right
      && *((_DWORD *)v3 + 21) <= i
      && *((_DWORD *)v3 + 22) >= left
      && *((_DWORD *)v3 + 23) >= top )
    {
      break;
    }
    if ( IsCursorSprite == 1 )
      SINGLEREADERLOCK::vUnlock(v8);
  }
  return v3;
}
