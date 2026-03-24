/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C027BF58
 * Callers:
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1C0084678 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C016ABE4 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this, __int64 a2)
{
  __int16 v4; // ax
  __int64 v5; // rcx

  DEC_SHARE_REF_CNT(this, a2);
  if ( (*((_DWORD *)this + 42))-- == 1 )
  {
    if ( (*(_DWORD *)this & 0x800000) != 0 )
    {
      v4 = *((_WORD *)this + 51);
      if ( (v4 & 0x400) != 0 )
      {
        v5 = *(_QWORD *)this;
        *((_WORD *)this + 51) = v4 & 0xFBFF;
        GreMakeBitmapNonStock(v5);
      }
    }
    *((_QWORD *)this + 20) = 0LL;
  }
}
