/*
 * XREFs of ?HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z @ 0x1802A2248
 * Callers:
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x1802A1E8C (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800BAD44 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800FACE4 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 */

void __fastcall CompositorTracing::HolographicInteropTargetCreated_(CompositorTracing *this, const struct _LUID *a2)
{
  _DWORD *v3; // rcx
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r9
  CompositorTracing *v7; // [rsp+40h] [rbp+8h] BYREF
  LONG HighPart; // [rsp+50h] [rbp+18h] BYREF

  v7 = this;
  v3 = (_DWORD *)wil::details::static_lazy<CompositorTracing>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 4u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x400000000000LL) )
    {
      LODWORD(v7) = a2->LowPart;
      HighPart = a2->HighPart;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v4,
        (int)&unk_18037F699,
        v5,
        v6,
        (__int64)&HighPart,
        (__int64)&v7);
    }
  }
}
