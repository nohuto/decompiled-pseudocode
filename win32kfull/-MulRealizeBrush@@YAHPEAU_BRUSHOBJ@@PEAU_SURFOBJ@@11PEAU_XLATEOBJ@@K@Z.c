_BOOL8 __fastcall MulRealizeBrush(struct _BRUSHOBJ *a1, struct _SURFOBJ *a2, struct _SURFOBJ *a3, struct _SURFOBJ *a4)
{
  unsigned int v4; // edx

  v4 = *((_DWORD *)a2->dhpdev + 4);
  return v4 > 1
      && v4 - 1 <= 0xFFFFFFF
      && 16 * (unsigned __int64)(v4 - 1) + 24 >= 16 * (unsigned __int64)(v4 - 1)
      && BRUSHOBJ_pvAllocRbrush(a1, 16 * v4 + 8) != 0LL;
}
