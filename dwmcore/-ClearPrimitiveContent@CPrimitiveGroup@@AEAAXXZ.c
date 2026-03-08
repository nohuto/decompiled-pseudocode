/*
 * XREFs of ?ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ @ 0x180111BAC
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180010140 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x1800E0DB4 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPrimitiveGroup::ClearPrimitiveContent(CPrimitiveGroup *this)
{
  *((_DWORD *)this + 135) = -1;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_BYTE *)this + 544) = 0;
  *(_QWORD *)((char *)this + 532) = 0LL;
  *((_DWORD *)this + 132) = 0;
}
