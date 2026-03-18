/*
 * XREFs of ?SetProperties@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C0212030
 * Callers:
 *     ?SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0211E90 (-SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 * Callees:
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0022CDC (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CGenericInkMarshaler::SetProperties(
        void **this,
        const unsigned __int8 *a2,
        unsigned __int64 a3,
        bool *a4)
{
  int v8; // edi

  if ( !a2 || a3 > 0x400 )
    return 3221225485LL;
  v8 = DirectComposition::CDCompDynamicArrayBase::SetCount(
         (DirectComposition::CDCompDynamicArrayBase *)(this + 7),
         a3,
         0x69674344u);
  if ( v8 >= 0 )
  {
    memmove(this[7], a2, (_QWORD)this[11] * a3);
    *((_DWORD *)this + 4) &= ~0x20u;
    *a4 = 1;
  }
  return (unsigned int)v8;
}
