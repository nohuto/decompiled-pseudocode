/*
 * XREFs of ?MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@_NI@Z @ 0x1800845FC
 * Callers:
 *     ??$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@$$QEA_NAEAI@Z @ 0x180082920 (--$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x180075DE8 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@444AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x1800830F0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U2@U2@U-$_tlgWrap.c)
 */

void __fastcall ISMTracing::MPCInputProviderSourceDetectedLost_(
        ISMTracing *this,
        struct IMPCTarget *a2,
        struct InputInfo *a3,
        char a4,
        unsigned int a5)
{
  _QWORD *v8; // rax
  _DWORD *v9; // rdi
  bool v10; // zf
  const wchar_t *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+60h] [rbp-20h] BYREF
  int v15; // [rsp+64h] [rbp-1Ch] BYREF
  int v16; // [rsp+68h] [rbp-18h] BYREF
  int PIDOfMPCTarget; // [rsp+6Ch] [rbp-14h] BYREF
  const wchar_t *v18; // [rsp+70h] [rbp-10h] BYREF
  __int64 v19; // [rsp+78h] [rbp-8h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+30h] BYREF

  v20 = (__int64)this;
  v8 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)v8[1];
  if ( *v9 > 4u && tlgKeywordOn(v8[1], 1LL) )
  {
    v10 = *(_DWORD *)a3 == 512;
    LODWORD(v21) = a5;
    v14 = *((_DWORD *)a3 + 18);
    v15 = *((_DWORD *)a3 + 2);
    v16 = *((_DWORD *)a3 + 1);
    LOBYTE(v20) = a4;
    if ( v10 )
    {
      v11 = L"Hand";
    }
    else if ( *(_DWORD *)a3 == 1024 )
    {
      v11 = L"Clicker";
    }
    else if ( *(_DWORD *)a3 == 0x2000 )
    {
      v11 = L"6dof";
    }
    else
    {
      v11 = &word_1801C2354;
      if ( *(_DWORD *)a3 == 0x40000 )
        v11 = L"Voice";
    }
    v18 = v11;
    PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(a2);
    v19 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      (__int64)v9,
      (unsigned __int8 *)dword_1801C95BF,
      v12,
      v13,
      (__int64)&v19,
      (__int64)&PIDOfMPCTarget,
      &v18,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v20,
      (__int64)&v21);
  }
}
