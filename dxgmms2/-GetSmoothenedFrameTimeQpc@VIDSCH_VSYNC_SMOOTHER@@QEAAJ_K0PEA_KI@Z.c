/*
 * XREFs of ?GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_KI@Z @ 0x1C0034940
 * Callers:
 *     ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C0034EA0 (-UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PE.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0036748 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 * Callees:
 *     ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z @ 0x1C00117E4 (-ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z.c)
 *     _tlgKeywordOn @ 0x1C0014A7C (_tlgKeywordOn.c)
 *     ?floor@@YANN@Z @ 0x1C002D668 (-floor@@YANN@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@2@Z @ 0x1C0034448 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWr.c)
 */

__int64 __fastcall VIDSCH_VSYNC_SMOOTHER::GetSmoothenedFrameTimeQpc(
        VIDSCH_VSYNC_SMOOTHER *this,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned int a5)
{
  __int64 v5; // rdx
  unsigned int v6; // ebp
  unsigned int v9; // edi
  __int64 v10; // r8
  char v11; // r10
  double v12; // xmm0_8
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int16 v17; // [rsp+40h] [rbp-48h] BYREF
  int v18; // [rsp+48h] [rbp-40h]
  unsigned int v19; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+58h] [rbp-30h] BYREF
  __int64 v21; // [rsp+60h] [rbp-28h] BYREF

  v5 = a2 - *((_QWORD *)this + 5);
  v6 = _mm_getcsr();
  v18 = v6 | 1;
  v9 = 0;
  _mm_setcsr(v6 | 1);
  v12 = floor((double)(int)v5 * *((double *)this + 3) + (double)(int)*((_QWORD *)this + 6) + *((double *)this + 2) + 0.5);
  v13 = (unsigned int)(int)v12;
  *a4 = v13;
  if ( (int)abs32(v10 - v13) > (unsigned __int64)a5 >> 1 )
  {
    WdLogSingleEntry2(3LL, (unsigned int)(int)v12, v10);
    VIDSCH_VSYNC_SMOOTHER::ResetSmoother(this, a5, a5);
    *a4 = 0LL;
    v11 = 1;
    v9 = -1073741823;
  }
  v18 = v6;
  _mm_setcsr(v6);
  if ( v11 && (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000010LL) )
  {
    v20 = 1LL;
    v19 = a5;
    v17 = 1;
    v21 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v14,
      byte_1C0056911,
      v15,
      (__int64)&v21,
      (__int64)&v17,
      (__int64)&v19,
      (__int64)&v20);
  }
  return v9;
}
