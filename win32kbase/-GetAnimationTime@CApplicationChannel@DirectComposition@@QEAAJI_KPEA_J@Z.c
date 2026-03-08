/*
 * XREFs of ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C024AEE4
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00609AC (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?GetAnimationTime@CAnimationMarshaler@DirectComposition@@IEAAX_KPEA_J@Z @ 0x1C024CEF8 (-GetAnimationTime@CAnimationMarshaler@DirectComposition@@IEAAX_KPEA_J@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetAnimationTime(
        union _SLIST_HEADER *this,
        int a2,
        unsigned __int64 a3,
        __int64 *a4)
{
  unsigned int v4; // ebx
  ULONGLONG v5; // r10
  __int64 v9; // rcx
  DirectComposition::CAnimationMarshaler *v10; // rsi

  v4 = 0;
  v5 = (unsigned int)(a2 - 1);
  if ( a2
    && v5 < this[5].Alignment
    && (_mm_lfence(), (v9 = *(_QWORD *)(this[5].Region * v5 + this[3].Region)) != 0)
    && (v10 = (DirectComposition::CAnimationMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9)) != 0LL )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
    DirectComposition::CAnimationMarshaler::GetAnimationTime(v10, a3, a4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
