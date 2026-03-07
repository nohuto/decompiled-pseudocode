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
