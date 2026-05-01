/*
 * XREFs of ?GetAt@?$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x1800765E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,XWinRT::IntVersionTag,1>::GetAt(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3)
{
  int v4; // ebx
  _DWORD *v5; // rsi
  int v6; // eax

  *a3 = 0;
  v4 = *(_DWORD *)(a1 + 80);
  v5 = *(_DWORD **)(a1 + 72);
  if ( v4 < 0 )
  {
    RoOriginateError((unsigned int)v4, 0LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)v5 + 48LL))(*(_QWORD *)(a1 + 72), a2, a3);
    v4 = v6;
    if ( *(_DWORD *)(a1 + 84) != v5[34] )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v6 < 0 )
      {
        RoTransformError((unsigned int)v6, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        *a3 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  return (unsigned int)v4;
}
