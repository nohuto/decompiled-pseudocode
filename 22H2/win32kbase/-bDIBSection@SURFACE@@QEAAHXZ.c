/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0060B10
 * Callers:
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreMakeBitmapNonStock @ 0x1C0060A30 (GreMakeBitmapNonStock.c)
 *     GreSetBitmapOwnerEx @ 0x1C0062058 (GreSetBitmapOwnerEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bDIBSection(SURFACE *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_WORD *)this + 50) )
  {
    if ( *((_QWORD *)this + 24) )
      return 1LL;
  }
  return result;
}
