/*
 * XREFs of ?DwmHolographicViewerAdd_@CompositorTracing@@QEAAXIK@Z @ 0x1802A1B70
 * Callers:
 *     ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x1802A1414 (-AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800BAD44 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800FACE4 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 */

void __fastcall CompositorTracing::DwmHolographicViewerAdd_(CompositorTracing *this, int a2, int a3)
{
  _DWORD *v5; // rcx
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // r9
  CompositorTracing *v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = this;
  v5 = (_DWORD *)wil::details::static_lazy<CompositorTracing>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 4u )
  {
    if ( tlgKeywordOn((__int64)v5, 0x400000000000LL) )
    {
      LODWORD(v9) = a3;
      v10 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        (int)&unk_18037F830,
        v7,
        v8,
        (__int64)&v10,
        (__int64)&v9);
    }
  }
}
