MULTISURF *__fastcall MULTISURF::MULTISURF(MULTISURF *this, struct _SURFOBJ *a2)
{
  struct _RECTL v4; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 0;
  *((_DWORD *)this + 13) = 0;
  *(_QWORD *)&v4.left = 0LL;
  *(SIZEL *)&v4.right = a2->sizlBitmap;
  MULTISURF::vInit(this, a2, &v4);
  return this;
}
