/*
 * XREFs of _lambda_d05d0920049710dce744919f6cd070e1_::operator() @ 0x1801E9CB4
 * Callers:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_b0de8eff5f5505a00b73db672a1dd984___lambda_d05d0920049710dce744919f6cd070e1___ @ 0x1801E7A34 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_b0de8eff5f5505a00b73db672a1dd984___lambda_d0.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits_Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId_1_1_0____XWinRT::IntVersionTag_::Do__lambda_110b6f5ec110413e81f8f98ddb979ad0___lambda_d05d0920049710dce744919f6cd070e1___ @ 0x1801E7CDC (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1801E7CDC.c)
 * Callees:
 *     <none>
 */

unsigned int **__fastcall lambda_d05d0920049710dce744919f6cd070e1_::operator()(unsigned int ***a1)
{
  unsigned int **result; // rax
  unsigned int v2; // r8d
  unsigned int *v3; // rdx
  __int64 v4; // rdx

  result = *a1;
  v2 = 0;
  v3 = **a1;
  if ( *v3 )
  {
    do
    {
      v4 = v2++;
      (*a1[1])[v4] = 0;
      result = *a1;
      v3 = **a1;
    }
    while ( v2 < *v3 );
  }
  *v3 = 0;
  return result;
}
