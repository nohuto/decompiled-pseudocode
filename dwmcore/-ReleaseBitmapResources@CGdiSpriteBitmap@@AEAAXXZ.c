/*
 * XREFs of ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x1800A8E8C
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x1800A87C4 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x1800A911C (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x1800A99F4 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x1800F4C2C (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::ReleaseBitmapResources(CGdiSpriteBitmap *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 44);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 44) = 0LL;
  }
  if ( *((_QWORD *)this + 51) )
    *((_QWORD *)this + 51) = 0LL;
  CGdiSpriteBitmap::ReleaseBitmapRealization(this);
}
