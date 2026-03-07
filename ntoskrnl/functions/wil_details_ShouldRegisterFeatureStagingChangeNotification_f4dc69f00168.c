__int64 (__fastcall **wil_details_ShouldRegisterFeatureStagingChangeNotification())()
{
  __int64 (__fastcall **result)(); // rax
  char v1; // dl

  result = wil_details_FeatureDescriptors_SkipPadding((__int64 (__fastcall **)())&wil_details_featureDescriptors_a);
  v1 = 0;
  while ( result )
  {
    if ( *((_BYTE *)result + 29) == v1 && *((_BYTE *)result + 30) == v1 && *((_BYTE *)result + 28) == v1 )
      return (__int64 (__fastcall **)())1;
    result = wil_details_FeatureDescriptors_SkipPadding(result + 7);
  }
  return result;
}
