/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_0957f7d3777cb462eb515554cf486388_@@@details@wil@@QEAA@XZ @ 0x180157704
 * Callers:
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfVariableSize_HOLOGRAPHIC_DEVICE_PROPERTY_HEADER__::_1_::dtor$0 @ 0x18014EF4C (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--GetPropertyOfVariableSize_HOLOG.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfVariableSize_HOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2__::_1_::dtor$0 @ 0x18014F0EF (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--GetPropertyOfVaria_ea_18014F0EF.c)
 *     _Windows::Internal::Holographic::NodePropertyCache::GetValue_::_1_::dtor$0 @ 0x18015F077 (_Windows--Internal--Holographic--NodePropertyCache--GetValue_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::PropertyCache::GetValue_::_1_::dtor$0 @ 0x18015F2A0 (_Windows--Internal--Holographic--PropertyCache--GetValue_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn<_lambda_0957f7d3777cb462eb515554cf486388_>::~ScopeExitFn<_lambda_0957f7d3777cb462eb515554cf486388_>(
        __int64 **a1)
{
  __int64 *v1; // rax
  __int64 v2; // rcx
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 8) = 0;
    v2 = *v1;
    result = *(_QWORD *)(*v1 + 8);
    *(_QWORD *)(v2 + 16) = result;
  }
  return result;
}
