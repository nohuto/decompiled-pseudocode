__int64 __fastcall Feature_P010DisplayableSupport__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_P010DisplayableSupport__private_descriptor);
}
