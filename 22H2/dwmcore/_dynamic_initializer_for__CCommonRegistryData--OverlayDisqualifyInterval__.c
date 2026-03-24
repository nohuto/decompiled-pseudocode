/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::OverlayDisqualifyInterval__ @ 0x180003160
 * Callers:
 *     <none>
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x1800B3354 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::OverlayDisqualifyInterval__()
{
  __int64 result; // rax
  int v1; // ecx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  result = RegGetDwmDwordHelper(L"OverlayDisqualifyInterval", &v2, 0LL);
  v1 = 150;
  if ( (_BYTE)result )
    v1 = v2;
  CCommonRegistryData::OverlayDisqualifyInterval = v1;
  return result;
}
