/*
 * XREFs of ?AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C0218E9C
 * Callers:
 *     ?SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0219370 (-SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0016048 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CGenericInkMarshaler::AddSegments(
        DirectComposition::CGenericInkMarshaler *this,
        const unsigned __int8 *a2,
        unsigned __int64 a3,
        bool *a4)
{
  unsigned __int64 v8; // r10
  int v9; // esi

  if ( !a2 )
    return 3221225485LL;
  v8 = *((_QWORD *)this + 18);
  if ( !v8 || a3 % v8 )
    return 3221225485LL;
  v9 = DirectComposition::CDCompDynamicArrayBase::Grow(
         (DirectComposition::CGenericInkMarshaler *)((char *)this + 104),
         a3,
         0x69674344u);
  if ( v9 >= 0 )
  {
    memmove(
      (void *)(*((_QWORD *)this + 13) + *((_QWORD *)this + 17) * (*((_QWORD *)this + 16) - a3)),
      a2,
      a3 * *((_QWORD *)this + 17));
    *a4 = 1;
  }
  return (unsigned int)v9;
}
