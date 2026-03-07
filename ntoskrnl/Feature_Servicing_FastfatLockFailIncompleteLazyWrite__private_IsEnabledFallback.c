__int64 __fastcall Feature_Servicing_FastfatLockFailIncompleteLazyWrite__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           &Feature_Servicing_FastfatLockFailIncompleteLazyWrite__private_descriptor);
}
