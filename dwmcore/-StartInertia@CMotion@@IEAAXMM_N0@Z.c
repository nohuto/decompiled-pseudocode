/*
 * XREFs of ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x18026B7A4
 * Callers:
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x180263820 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z.c)
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z @ 0x180263E40 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180261C10 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x18026AE5C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@-$_tlgW.c)
 */

void __fastcall CMotion::StartInertia(CMotion *this, float a2, float a3, char a4, int a5)
{
  char v7; // al
  float v8; // xmm0_4
  char v9; // cl
  __int64 v10; // rax
  float v11; // xmm0_4
  float v12; // xmm0_4
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+68h] [rbp+Fh] BYREF
  wchar_t *v19; // [rsp+70h] [rbp+17h] BYREF
  CMotion *v20; // [rsp+78h] [rbp+1Fh] BYREF
  int v21; // [rsp+B8h] [rbp+5Fh] BYREF
  int v22; // [rsp+C0h] [rbp+67h] BYREF
  int v23; // [rsp+C8h] [rbp+6Fh] BYREF

  *((_DWORD *)this + 6) = 0;
  *((float *)this + 8) = a3;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 12);
  v7 = *((_BYTE *)this + 8);
  if ( !(_BYTE)a5 )
    v7 = a4 | v7 & 0xFE;
  v8 = *((float *)this + 10);
  if ( v8 == 0.0 )
    v9 = 0;
  else
    v9 = 4;
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 8) = v9 | v7 & 0xFB;
  v10 = *(_QWORD *)this;
  v11 = (float)((float)(v8 + a2) > 0.0)
      * fminf(COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 + a2) & _xmm), *((float *)this + 13));
  *((float *)this + 12) = v11;
  *((float *)this + 7) = v11;
  v12 = (*(float (__fastcall **)(CMotion *))(v10 + 40))(this);
  v13 = *(_QWORD *)this;
  *((float *)this + 17) = v12;
  *((float *)this + 15) = (*(float (__fastcall **)(CMotion *))(v13 + 24))(this);
  *((_DWORD *)this + 4) = 2;
  if ( (unsigned int)dword_1803E07D0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
    {
      v14 = *((_DWORD *)this + 3);
      a5 = (unsigned __int8)a5;
      v22 = *((_DWORD *)this + 15);
      v23 = *((_DWORD *)this + 17);
      v21 = *((_DWORD *)this + 12);
      v18 = *((_DWORD *)this + 11);
      v19 = (wchar_t *)ScrollAxisToString(v14);
      v20 = this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v15,
        byte_18037EBD2,
        v16,
        v17,
        (__int64)&v20,
        &v19,
        (__int64)&v18,
        (__int64)&v21,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&a5);
    }
  }
}
