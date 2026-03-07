void __fastcall vIntersectHorizontal(
        struct DDA_CLIPLINE *this,
        LONG a2,
        struct _POINTL *a3,
        struct _POINTL *a4,
        int *a5)
{
  struct DDA_CLIPLINE *v7; // r11
  __int64 v8; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  LONG v12; // r10d
  LONG *p_y; // r8

  v7 = this;
  v8 = *((int *)this + 4) * (__int64)(a2 - *((_DWORD *)this + 2)) - *((_QWORD *)this + 3);
  v10 = *((unsigned int *)this + 3);
  v11 = v8 - 1;
  if ( v11 >= 0xFFFFFFFFLL )
    v10 = v11 / v10;
  else
    LODWORD(v10) = (unsigned int)v11 / (unsigned int)v10;
  v12 = v10 + *((_DWORD *)v7 + 1);
  if ( a3 )
  {
    a3->x = v12;
    p_y = &a3->y;
    *p_y = a2 - 1;
    DDA_CLIPLINE::vUnflip(v7, (int *)a3, p_y);
  }
  if ( a4 )
  {
    a4->x = v12 + 1;
    a4->y = a2;
    DDA_CLIPLINE::vUnflip(v7, (int *)a4, &a4->y);
  }
  *a5 = v12 - *((_DWORD *)v7 + 8);
}
