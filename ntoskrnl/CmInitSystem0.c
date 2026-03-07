__int64 __fastcall CmInitSystem0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 ***v4; // rax
  __int64 **v5; // rbx
  __int64 result; // rax

  CmpGetSystemControlValues(*(_DWORD **)(a1 + 168), a2, 0);
  v4 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 312LL);
  v5 = *v4;
  while ( v5 != (__int64 **)v4 )
  {
    if ( ((_DWORD)v5[3] & 0x40) != 0 )
      CmpGetSystemControlValues(v5[4], v3, 1);
    v5 = (__int64 **)*v5;
    v4 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 312LL);
  }
  result = (__int64)wil_details_ShouldRegisterFeatureStagingChangeNotification();
  if ( (_DWORD)result )
  {
    result = RtlRegisterFeatureConfigurationChangeNotification(
               (__int64)wil_details_ReevaluateOnFeatureConfigurationChange,
               0LL,
               0LL,
               (__int64)&wil_details_featureChangeNotification);
    if ( (_DWORD)result )
      wil_details_featureChangeNotification = 0LL;
  }
  return result;
}
