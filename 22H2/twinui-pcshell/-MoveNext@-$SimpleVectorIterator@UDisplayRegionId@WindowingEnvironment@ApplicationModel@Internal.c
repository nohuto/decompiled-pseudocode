/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1801EEC50
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits_Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId_1_1_0____XWinRT::IntVersionTag_::Do__lambda_94c6e3db984f299cd760289365fa2b61___lambda_db6cd974519eb63ba37bb73375e48664___ @ 0x1801E7F2C (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1801E7F2C.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,XWinRT::IntVersionTag,1>::MoveNext(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v2; // rdx
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE **v5; // [rsp+50h] [rbp+8h] BYREF
  _BYTE *v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  *a2 = 0;
  v4[0] = a1;
  v5 = &v6;
  v2 = *(_QWORD *)(a1 + 64);
  v4[1] = &v6;
  v4[2] = &v5;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits_Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId_1_1_0____XWinRT::IntVersionTag_::Do__lambda_94c6e3db984f299cd760289365fa2b61___lambda_db6cd974519eb63ba37bb73375e48664___(
           (unsigned int *)(a1 + 80),
           v2,
           v4,
           &v5);
}
