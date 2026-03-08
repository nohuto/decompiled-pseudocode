/*
 * XREFs of ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJIPEAI@Z @ 0x1C0034818
 * Callers:
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x1C0017488 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C0034EA0 (-UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PE.c)
 * Callees:
 *     ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z @ 0x1C00117E4 (-ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z.c)
 *     _tlgKeywordOn @ 0x1C0014A7C (_tlgKeywordOn.c)
 *     ?floor@@YANN@Z @ 0x1C002D668 (-floor@@YANN@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@2@Z @ 0x1C0034448 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWr.c)
 */

__int64 __fastcall VIDSCH_VSYNC_SMOOTHER::GetSmoothenedDurationQpc(
        VIDSCH_VSYNC_SMOOTHER *this,
        unsigned int a2,
        unsigned int *a3)
{
  unsigned int v3; // esi
  unsigned int v6; // edi
  char v7; // r9
  unsigned int v8; // r10d
  VIDSCH_VSYNC_SMOOTHER *v9; // r11
  int v10; // edx
  unsigned int *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v15; // [rsp+44h] [rbp-34h] BYREF
  __int64 v16; // [rsp+48h] [rbp-30h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+98h] [rbp+20h] BYREF

  v3 = _mm_getcsr();
  v6 = 0;
  _mm_setcsr(v3 | 1);
  v8 = (int)floor(*((double *)this + 3) + 0.5);
  *v11 = v8;
  if ( (int)abs32(v10 - v8) > (unsigned __int64)a2 >> 1 )
  {
    VIDSCH_VSYNC_SMOOTHER::ResetSmoother(v9, v8, a2);
    *a3 = 0;
    v7 = 1;
    v6 = -1073741823;
  }
  v18 = v3;
  _mm_setcsr(v3);
  if ( v7 && (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000010LL) )
  {
    v16 = 1LL;
    v15 = a2;
    LOWORD(v18) = 1;
    v17 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v12,
      byte_1C005697A,
      v13,
      (__int64)&v17,
      (__int64)&v18,
      (__int64)&v15,
      (__int64)&v16);
  }
  return v6;
}
