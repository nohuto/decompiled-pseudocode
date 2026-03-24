/*
 * XREFs of ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180205520
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801C94D0 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801C95D0 (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x1801C96D0 (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x1801CD3E4 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180203C10 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1802051E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWriteTe.c)
 *     ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z @ 0x18020EF7C (-AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::CalculateInertiaValueWorker(
        CInteractionTrackerPositionAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float a4,
        float *a5)
{
  CInteractionTracker *v5; // rdi
  __int64 v8; // rax
  float MostRecentCenterPoint; // xmm7_4
  float CurrentVelocity; // xmm6_4
  float CurrentValue; // xmm3_4
  float v14; // xmm2_4
  _DWORD *v15; // rcx
  int v16; // r11d
  float v17; // xmm0_4
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  wchar_t *v23; // [rsp+50h] [rbp-58h] BYREF
  CInteractionTrackerPositionAnimation *v24; // [rsp+58h] [rbp-50h] BYREF
  float v25; // [rsp+B0h] [rbp+8h] BYREF
  float v26; // [rsp+C8h] [rbp+20h] BYREF

  v26 = a4;
  v5 = 0LL;
  v8 = *((_QWORD *)this + 41);
  if ( v8 )
    v5 = *(CInteractionTracker **)(v8 + 16);
  MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint((__int64)v5, 2, *((_DWORD *)this + 79));
  v25 = MostRecentCenterPoint;
  CurrentVelocity = CInteractionTracker::GetCurrentVelocity(v5, 2);
  CurrentValue = CInteractionTracker::GetCurrentValue((__int64)v5, 2);
  v14 = CInteractionTracker::ValueFromBoundary(v5, 2LL, *((_DWORD *)this + 79));
  v17 = CInteractionTracker::ValueFromBoundary(v15, 1LL, v16);
  LODWORD(v23) = CPositionMotion::AdvanceInertiaToTime(
                   (CInteractionTrackerPositionAnimation *)((char *)this + 432),
                   a2,
                   a3,
                   a4,
                   v17,
                   v14,
                   CurrentValue,
                   CurrentVelocity,
                   MostRecentCenterPoint);
  *(_DWORD *)a5 = (_DWORD)v23;
  if ( (unsigned int)dword_180344E80 > 4 && (qword_180344E90 & 2) != 0 && (qword_180344E98 & 2) == qword_180344E98 )
  {
    v18 = *((_DWORD *)this + 79);
    *(float *)&a5 = v25;
    v25 = *(float *)&v23;
    v23 = (wchar_t *)ScrollAxisToString(v18);
    v24 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v19,
      byte_1802E9DFE,
      v20,
      v21,
      (__int64)&v24,
      &v23,
      (__int64)&v25,
      (__int64)&a5,
      (__int64)&v26);
  }
  return 0LL;
}
