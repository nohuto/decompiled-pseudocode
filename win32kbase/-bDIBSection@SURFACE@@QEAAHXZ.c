/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C001D270
 * Callers:
 *     GreMakeBitmapNonStock @ 0x1C001D190 (GreMakeBitmapNonStock.c)
 *     GreSetBitmapOwnerEx @ 0x1C001D614 (GreSetBitmapOwnerEx.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
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
