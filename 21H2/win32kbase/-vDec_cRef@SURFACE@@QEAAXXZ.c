/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C002A988
 * Callers:
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C0082384 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C9DD0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00CC090 (GreRestoreDCInternal.c)
 * Callees:
 *     GreMakeBitmapNonStock @ 0x1C0015E30 (GreMakeBitmapNonStock.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002E210 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  __int64 v2; // rdx
  __int16 v4; // ax
  unsigned __int64 v5; // rcx

  HmgDecrementShareReferenceCountEx(this, 0LL);
  if ( (*((_DWORD *)this + 42))-- == 1 )
  {
    if ( (*(_DWORD *)this & 0x800000) != 0 )
    {
      v4 = *((_WORD *)this + 51);
      if ( (v4 & 0x400) != 0 )
      {
        v5 = *(_QWORD *)this;
        *((_WORD *)this + 51) = v4 & 0xFBFF;
        GreMakeBitmapNonStock(v5, v2);
      }
    }
    *((_QWORD *)this + 20) = 0LL;
  }
}
