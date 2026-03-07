struct tagWND *__fastcall TopLevelSpeedHitTest(struct tagDESKTOP *a1, struct tagPOINT *a2, const struct _SUBPIXELS *a3)
{
  _QWORD *v3; // r10
  __int64 v4; // rdi
  struct tagWND *i; // rbx

  v3 = (_QWORD *)*((_QWORD *)a1 + 1);
  v4 = 0LL;
  if ( (*(_DWORD *)(*v3 + 64LL) & 1) != 0 )
    return DCETopLevelSpeedHitTest(a1, a2, a3);
  for ( i = *(struct tagWND **)(v3[3] + 112LL); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( (unsigned int)ClassicIsWindowHit(i, *a2) )
      return i;
  }
  return (struct tagWND *)v4;
}
