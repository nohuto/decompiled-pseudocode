/*
 * XREFs of ?RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C02192E0
 * Callers:
 *     ?SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0219410 (-SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPE.c)
 * Callees:
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C000B678 (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 *     ?GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ @ 0x1C0219200 (-GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ.c)
 */

__int64 __fastcall DirectComposition::CGenericInkMarshaler::RemoveSegmentsAtEnd(
        DirectComposition::CGenericInkMarshaler *this,
        __int64 a2,
        bool *a3)
{
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // r9d
  __int64 v8; // r10
  int v9; // r9d
  unsigned int SegmentCount; // eax

  if ( *((_QWORD *)this + 18) && (v5 = DirectComposition::CGenericInkMarshaler::GetSegmentCount(this), v7 <= v5) )
  {
    v9 = DirectComposition::CDCompDynamicArrayBase::Shrink(
           (DirectComposition::CDCompDynamicArrayBase *)(v6 + 104),
           v8 * v7);
    if ( v9 >= 0 )
    {
      SegmentCount = DirectComposition::CGenericInkMarshaler::GetSegmentCount(this);
      if ( SegmentCount < *((_DWORD *)this + 39) )
      {
        *((_DWORD *)this + 39) = SegmentCount;
        *((_BYTE *)this + 160) = 1;
      }
      if ( SegmentCount < *((_DWORD *)this + 38) )
      {
        *((_DWORD *)this + 4) &= ~0x40u;
        *((_DWORD *)this + 38) = SegmentCount;
      }
      *a3 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
