/*
 * XREFs of ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x18026B070
 * Callers:
 *     ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z @ 0x18026BFF8 (-AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180261C10 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1802630FC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWriteTe.c)
 *     ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z @ 0x18026B2A4 (-AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z.c)
 */

float __fastcall CMotion::AdvanceInertiaToTime(
        CMotion *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float a4,
        float a5,
        float a6)
{
  bool v6; // zf
  float *v7; // rdi
  float v8; // xmm6_4
  float v9; // xmm0_4
  double v13; // xmm0_8
  __int64 v14; // rax
  float v15; // xmm0_4
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  float v22; // [rsp+58h] [rbp-29h] BYREF
  float v23; // [rsp+5Ch] [rbp-25h] BYREF
  float v24; // [rsp+60h] [rbp-21h] BYREF
  wchar_t *v25; // [rsp+68h] [rbp-19h] BYREF
  CMotion *v26; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v27[24]; // [rsp+78h] [rbp-9h] BYREF

  v6 = *((_QWORD *)this + 12) == 0LL;
  v7 = (float *)((char *)this + 28);
  v8 = 0.0;
  v9 = fmaxf(a6, *((float *)this + 6));
  v22 = 0.0;
  *((float *)this + 16) = a4;
  *((float *)this + 6) = v9;
  *((float *)this + 9) = a5;
  if ( v6 )
  {
    v13 = (*(double (__fastcall **)(CMotion *))(*(_QWORD *)this + 16LL))(this);
    v14 = *(_QWORD *)this;
    v8 = *(float *)&v13;
    v22 = *(float *)&v13;
    *v7 = (*(float (__fastcall **)(CMotion *))(v14 + 32))(this);
  }
  if ( *((_QWORD *)this + 12) )
  {
    v15 = CMotion::AdvanceInertiaToTimeInertiaModifier(this, a2, a3);
    v16 = *((_QWORD *)this + 12);
    v8 = v15;
    v22 = v15;
    *v7 = *(float *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 32LL))(v16, v27) + 8);
  }
  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
  {
    v17 = *((_DWORD *)this + 3);
    v23 = a6;
    v24 = *v7;
    v25 = (wchar_t *)ScrollAxisToString(v17);
    v26 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v18,
      byte_18037ED0F,
      v19,
      v20,
      (__int64)&v26,
      &v25,
      (__int64)&v22,
      (__int64)&v24,
      (__int64)&v23);
  }
  return v8;
}
