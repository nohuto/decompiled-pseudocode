/*
 * XREFs of _anonymous_namespace_::GetExpressionTypeString @ 0x180042980
 * Callers:
 *     _anonymous_namespace_::SynthesizeDescription @ 0x18004274C (_anonymous_namespace_--SynthesizeDescription.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x180212430 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall anonymous_namespace_::GetExpressionTypeString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  if ( a1 == 52 )
    return L"Vector3";
  if ( a1 <= 52 )
  {
    v1 = a1 - 11;
    if ( !v1 )
      return L"Path";
    v2 = v1 - 6;
    if ( !v2 )
      return L"Bool";
    v3 = v2 - 1;
    if ( !v3 )
      return L"Scalar";
    v5 = v3 - 17;
    if ( !v5 )
      return L"Vector2";
    if ( v5 == 7 )
      return L"TimeSpan";
    return L"Unknown Resource Type";
  }
  v6 = a1 - 69;
  if ( !v6 )
    return L"Vector4";
  v7 = v6 - 1;
  if ( !v7 )
    return L"Color";
  v8 = v7 - 1;
  if ( !v8 )
    return L"Quaternion";
  v9 = v8 - 33;
  if ( v9 )
  {
    if ( v9 == 161 )
      return L"Matrix4x4";
    return L"Unknown Resource Type";
  }
  return L"Matrix3x2";
}
