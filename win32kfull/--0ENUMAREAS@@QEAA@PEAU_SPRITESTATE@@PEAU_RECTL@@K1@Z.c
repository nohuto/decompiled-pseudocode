ENUMAREAS *__fastcall ENUMAREAS::ENUMAREAS(
        ENUMAREAS *this,
        struct _SPRITESTATE *a2,
        struct _RECTL *a3,
        int a4,
        struct _RECTL *a5)
{
  LONG left; // eax
  LONG right; // r8d
  LONG top; // r9d
  LONG bottom; // r10d
  __int64 v13; // rdx
  LONG v14; // ecx
  LONG *i; // rcx
  LONG v16; // eax
  LONG v17; // eax
  __int64 j; // rbx

  *((_QWORD *)this + 11) = a2;
  SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)a2 + 120));
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 29);
  *(_DWORD *)this = a4;
  left = a3->left;
  *((_DWORD *)this + 5) = a3->left;
  *((_DWORD *)this + 1) = left;
  right = a3->right;
  *((_DWORD *)this + 7) = right;
  *((_DWORD *)this + 3) = right;
  top = a3->top;
  *((_DWORD *)this + 6) = top;
  *((_DWORD *)this + 2) = top;
  bottom = a3->bottom;
  *((_DWORD *)this + 8) = bottom;
  *((_DWORD *)this + 4) = bottom;
  v13 = *((_QWORD *)a2 + 17);
  v14 = bottom - 1;
  if ( (a4 & 2) == 0 )
    v14 = top;
  while ( *(_DWORD *)(v13 + 4) <= v14 )
    v13 += *(_QWORD *)(v13 + 8);
  if ( (a4 & 1) != 0 )
  {
    for ( i = (LONG *)(*(_QWORD *)(v13 + 8) + v13 - 16); *i >= right; i -= 4 )
      ;
  }
  else
  {
    for ( i = (LONG *)(v13 + 24); i[1] <= left; i += 4 )
      ;
  }
  v16 = *(_DWORD *)v13;
  if ( *(_DWORD *)v13 <= top )
    v16 = top;
  *((_DWORD *)this + 9) = v16;
  v17 = *(_DWORD *)(v13 + 4);
  *((_QWORD *)this + 7) = i;
  if ( v17 >= bottom )
    v17 = bottom;
  *((_DWORD *)this + 10) = v17;
  *((_QWORD *)this + 6) = v13;
  if ( a5 )
    *(struct _RECTL *)((char *)this + 20) = *a5;
  for ( j = *(_QWORD *)(*((_QWORD *)this + 11) + 1120LL); j; j = *(_QWORD *)(j + 24) )
  {
    if ( *(_DWORD *)(j + 80) < *((_DWORD *)this + 7)
      && *(_DWORD *)(j + 84) < *((_DWORD *)this + 8)
      && *(_DWORD *)(j + 88) > *((_DWORD *)this + 5)
      && *(_DWORD *)(j + 92) > *((_DWORD *)this + 6) )
    {
      SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(j + 248));
    }
  }
  return this;
}
