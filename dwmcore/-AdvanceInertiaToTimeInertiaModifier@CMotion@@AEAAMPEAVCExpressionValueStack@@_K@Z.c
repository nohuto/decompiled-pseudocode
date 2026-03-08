/*
 * XREFs of ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z @ 0x18026B2A4
 * Callers:
 *     ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x18026B070 (-AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180261C10 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x18026AD74 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 */

float __fastcall CMotion::AdvanceInertiaToTimeInertiaModifier(
        CMotion *this,
        struct CExpressionValueStack *a2,
        __int64 a3)
{
  __int64 v6; // rdx
  float v8; // xmm0_4
  double v9; // xmm0_8
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  wchar_t *v16; // [rsp+58h] [rbp-29h] BYREF
  int v17; // [rsp+60h] [rbp-21h] BYREF
  int v18; // [rsp+64h] [rbp-1Dh] BYREF
  int v19; // [rsp+68h] [rbp-19h] BYREF
  int v20; // [rsp+6Ch] [rbp-15h] BYREF
  CMotion *v21; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v22[24]; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v23[24]; // [rsp+90h] [rbp+Fh] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10)) )
  {
    if ( *((_DWORD *)this + 18) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 32LL))(*((_QWORD *)this + 11));
    if ( *((float *)this + 6) > *(float *)(*((_QWORD *)this + 10) + 96LL) )
    {
      v8 = (*(float (__fastcall **)(CMotion *))(*(_QWORD *)this + 8LL))(this);
      if ( v8 != 0.0 )
        *(float *)(*((_QWORD *)this + 10) + 32LL) = v8 + *(float *)(*((_QWORD *)this + 10) + 32LL);
    }
  }
  v9 = (*(double (__fastcall **)(_QWORD, __int64, struct CExpressionValueStack *, __int64))(**((_QWORD **)this + 12)
                                                                                          + 16LL))(
         *((_QWORD *)this + 12),
         v6,
         a2,
         a3);
  LODWORD(v16) = LODWORD(v9);
  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
  {
    v17 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 12) + 32LL))(
                       *((_QWORD *)this + 12),
                       v22);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12), v23);
    v11 = *((_DWORD *)this + 3);
    v18 = *(_DWORD *)(v10 + 8);
    v19 = *((_DWORD *)this + 6);
    v20 = (int)v16;
    v16 = (wchar_t *)ScrollAxisToString(v11);
    v21 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      byte_18037EC96,
      v13,
      v14,
      (__int64)&v21,
      &v16,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
  return *(float *)&v9;
}
