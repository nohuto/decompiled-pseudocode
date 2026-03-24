/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::Scene::SceneVisualCutoffThresholdInMS__ @ 0x180003350
 * Callers:
 *     <none>
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x1800B3354 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::Scene::SceneVisualCutoffThresholdInMS__()
{
  __int64 result; // rax
  int v1; // ecx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  result = RegGetDwmDwordHelper(L"SceneVisualCutoffThresholdInMS", &v2, 1LL);
  v1 = 1000;
  if ( (_BYTE)result )
    v1 = v2;
  CCommonRegistryData::Scene::SceneVisualCutoffThresholdInMS = v1;
  return result;
}
