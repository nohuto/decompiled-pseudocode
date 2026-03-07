__int64 __fastcall CmInitBootFeatureConfigurations(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rcx

  CmFcManagerInitialize();
  v2 = (__int64 *)(*(_QWORD *)(a1 + 240) + 3600LL);
  wil_InitializeFeatureStagingFromBuffers(v2);
  return CmFcManagerStartBootPhase(v3, *v2, v2[1], v2[2], v2[3], v2[4]);
}
