/*
 * XREFs of ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x18004F994
 * Callers:
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x18004FD48 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180094D90 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800E7884 (--_V@YAXPEAX_K@Z.c)
 */

void __fastcall CPrimitiveGroupDrawListGenerator::DestroyBitmapRealizations(CPrimitiveGroupDrawListGenerator *this)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rbx
  char *v5; // rbx

  *((_OWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v2 = (char *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v2 )
  {
    v4 = v2 - 8;
    `vector destructor iterator'(v2, 0x30uLL, *((_QWORD *)v2 - 1), (void (*)(void *))CDrawListBitmap::~CDrawListBitmap);
    operator delete[](v4, 48LL * *(_QWORD *)v4 + 8);
  }
  v3 = (char *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v3 )
  {
    v5 = v3 - 8;
    `vector destructor iterator'(v3, 0x30uLL, *((_QWORD *)v3 - 1), (void (*)(void *))CDrawListBitmap::~CDrawListBitmap);
    operator delete[](v5, 48LL * *(_QWORD *)v5 + 8);
  }
}
