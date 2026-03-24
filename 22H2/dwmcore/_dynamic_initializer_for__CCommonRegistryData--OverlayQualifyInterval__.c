/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::OverlayQualifyInterval__ @ 0x1800031C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x1800B3354 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::OverlayQualifyInterval__()
{
  __int64 result; // rax
  int v1; // ecx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  result = RegGetDwmDwordHelper(L"OverlayQualifyInterval", &v2, 0LL);
  v1 = 50;
  if ( (_BYTE)result )
    v1 = v2;
  CCommonRegistryData::OverlayQualifyInterval = v1;
  return result;
}
