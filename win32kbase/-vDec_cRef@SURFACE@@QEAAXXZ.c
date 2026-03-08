/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C0046684
 * Callers:
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A49CC (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C017E448 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 * Callees:
 *     GreMakeBitmapNonStock @ 0x1C001D190 (GreMakeBitmapNonStock.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  __int64 v2; // rdx
  __int64 v4; // rcx

  HmgDecrementShareReferenceCountEx(this, 0LL);
  if ( (*((_DWORD *)this + 42))-- == 1 )
  {
    if ( (*(_DWORD *)this & 0x800000) != 0 )
    {
      if ( _bittest16((const signed __int16 *)this + 51, 0xAu) )
      {
        v4 = *(_QWORD *)this;
        *((_WORD *)this + 51) &= ~0x400u;
        GreMakeBitmapNonStock(v4, v2);
      }
    }
    *((_QWORD *)this + 20) = 0LL;
  }
}
