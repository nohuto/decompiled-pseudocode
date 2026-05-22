/*
 * XREFs of ?MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K@Z @ 0x1800B8A50
 * Callers:
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x1800B7CA8 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800B74D4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTe.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800B8020 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_(
        ISMTracing *this,
        struct IInputTarget *a2,
        int a3,
        int a4,
        unsigned __int64 a5)
{
  _QWORD *v8; // rax
  _DWORD *v9; // rdi
  int v10; // edx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  const wchar_t *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+50h] [rbp-28h] BYREF
  __int64 v20; // [rsp+58h] [rbp-20h] BYREF
  __int64 v21; // [rsp+60h] [rbp-18h] BYREF
  __int64 v22; // [rsp+68h] [rbp-10h] BYREF
  __int64 v23; // [rsp+80h] [rbp+8h] BYREF

  v23 = (__int64)this;
  v8 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)v8[1];
  if ( *v9 > 4u && tlgKeywordOn(v8[1], 1LL) )
  {
    v20 = a5;
    if ( a4 )
    {
      v11 = a4 - v10;
      if ( v11 )
      {
        v12 = v11 - v10;
        if ( v12 )
        {
          v13 = v12 - v10;
          if ( v13 )
          {
            v14 = v13 - v10;
            if ( v14 )
            {
              v15 = v14 - v10;
              if ( v15 )
              {
                if ( v15 == v10 )
                  v16 = L"Unset";
                else
                  v16 = &word_1801C2354;
              }
              else
              {
                v16 = L"Shell";
              }
            }
            else
            {
              v16 = L"HologramFrameworkIsolated";
            }
          }
          else
          {
            v16 = L"_HologramFrameworkMaterial";
          }
        }
        else
        {
          v16 = L"HologramFrameworkDefault";
        }
      }
      else
      {
        v16 = L"Exclusive";
      }
    }
    else
    {
      v16 = L"Slate";
    }
    v21 = (__int64)v16;
    LODWORD(v23) = a3;
    LODWORD(v19) = ISMTracing::GetPIDOfTarget(a2);
    v22 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      (__int64)v9,
      (unsigned __int8 *)dword_1801CBC17,
      v17,
      v18,
      (__int64)&v22,
      (__int64)&v19,
      (__int64)&v23,
      (const wchar_t **)&v21,
      (__int64)&v20);
  }
}
