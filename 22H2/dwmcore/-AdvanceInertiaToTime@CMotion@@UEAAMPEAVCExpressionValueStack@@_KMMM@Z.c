/*
 * XREFs of ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x18020E040
 * Callers:
 *     ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z @ 0x18020EF7C (-AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180203C10 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1802051E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWriteTe.c)
 *     ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z @ 0x18020E260 (-AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z.c)
 */

float __fastcall CMotion::AdvanceInertiaToTime(
        CMotion *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float a4,
        float a5,
        float a6)
{
  float v6; // xmm0_4
  __int64 v7; // rax
  double v11; // xmm0_8
  __int64 v12; // rax
  float v13; // xmm6_4
  __int64 v14; // rax
  float v15; // xmm0_4
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  float v22; // [rsp+58h] [rbp-19h] BYREF
  float v23; // [rsp+5Ch] [rbp-15h] BYREF
  int v24; // [rsp+60h] [rbp-11h] BYREF
  wchar_t *v25; // [rsp+68h] [rbp-9h] BYREF
  CMotion *v26; // [rsp+70h] [rbp-1h] BYREF
  _BYTE v27[24]; // [rsp+78h] [rbp+7h] BYREF

  v6 = fmaxf(a6, *((float *)this + 6));
  v7 = *((_QWORD *)this + 17);
  v22 = 0.0;
  *((float *)this + 16) = a4;
  *((float *)this + 6) = v6;
  *((float *)this + 9) = a5;
  if ( v7
    || (v11 = (*(double (__fastcall **)(CMotion *))(*(_QWORD *)this + 16LL))(this),
        v12 = *(_QWORD *)this,
        v22 = *(float *)&v11,
        v13 = *(float *)&v11,
        *(float *)&v11 = (*(float (__fastcall **)(CMotion *))(v12 + 32))(this),
        v14 = *((_QWORD *)this + 17),
        *((_DWORD *)this + 7) = LODWORD(v11),
        v14) )
  {
    v15 = CMotion::AdvanceInertiaToTimeInertiaModifier(this, a2, a3);
    v16 = *((_QWORD *)this + 17);
    v22 = v15;
    v13 = v15;
    *((_DWORD *)this + 7) = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 32LL))(v16, v27)
                                      + 8);
  }
  if ( (unsigned int)dword_180344E80 > 4 && (qword_180344E90 & 2) != 0 && (qword_180344E98 & 2) == qword_180344E98 )
  {
    v17 = *((_DWORD *)this + 3);
    v23 = a6;
    v24 = *((_DWORD *)this + 7);
    v25 = (wchar_t *)ScrollAxisToString(v17);
    v26 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v18,
      byte_1802E9FAB,
      v19,
      v20,
      (__int64)&v26,
      &v25,
      (__int64)&v22,
      (__int64)&v24,
      (__int64)&v23);
  }
  return v13;
}
