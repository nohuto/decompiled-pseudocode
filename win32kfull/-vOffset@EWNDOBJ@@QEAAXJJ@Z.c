void __fastcall EWNDOBJ::vOffset(EWNDOBJ *this, LONG a2, LONG a3)
{
  struct _POINTL v4; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 || a3 )
  {
    v4.x = a2;
    v4.y = a3;
    RGNOBJ::bOffset((EWNDOBJ *)((char *)this + 56), &v4);
    ERECTL::bOffsetAdd((EWNDOBJ *)((char *)this + 4), &v4, 0);
    ERECTL::bOffsetAdd((EWNDOBJ *)((char *)this + 32), &v4, 0);
  }
}
