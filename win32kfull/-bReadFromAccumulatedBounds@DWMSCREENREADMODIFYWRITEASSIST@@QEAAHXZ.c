__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  _QWORD **v1; // rax
  unsigned int v3; // ebx
  struct _RECTL v5; // [rsp+20h] [rbp-28h] BYREF

  v1 = (_QWORD **)*((_QWORD *)this + 3);
  v3 = 0;
  if ( *v1 )
  {
    if ( (unsigned int)GreGetBounds(**v1, &v5, 4LL) )
    {
      ERECTL::bOffsetSubtract(
        (ERECTL *)&v5,
        (const struct _POINTL *)(**((_QWORD **)this + 3) + 8LL * (*(_DWORD *)(**((_QWORD **)this + 3) + 40LL) & 1) + 1016),
        0);
      if ( !ERECTL::bEmpty((ERECTL *)&v5) )
        return DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect(this, &v5);
    }
  }
  return v3;
}
