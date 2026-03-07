const unsigned __int16 *__fastcall MatrixSubchannelMaskInfo::Matrix4x4SubchannelAtIndex(
        MatrixSubchannelMaskInfo *this,
        char a2)
{
  __int64 v2; // rdx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx

  v2 = (*((_QWORD *)this + 1) >> (4 * (*((_BYTE *)this + 4) - a2) - 4)) & 0xFLL;
  if ( (unsigned int)v2 <= 8 )
  {
    if ( (_DWORD)v2 == 8 )
      return L"_31";
    if ( !(_DWORD)v2 )
      return L"_11";
    v3 = v2 - 1;
    if ( !v3 )
      return L"_12";
    v4 = v3 - 1;
    if ( !v4 )
      return L"_13";
    v5 = v4 - 1;
    if ( !v5 )
      return L"_14";
    v6 = v5 - 1;
    if ( !v6 )
      return L"_21";
    v7 = v6 - 1;
    if ( !v7 )
      return L"_22";
    v8 = v7 - 1;
    if ( !v8 )
      return L"_23";
    if ( v8 == 1 )
      return L"_24";
    return 0LL;
  }
  v10 = v2 - 9;
  if ( !v10 )
    return L"_32";
  v11 = v10 - 1;
  if ( !v11 )
    return L"_33";
  v12 = v11 - 1;
  if ( !v12 )
    return L"_34";
  v13 = v12 - 1;
  if ( !v13 )
    return L"_41";
  v14 = v13 - 1;
  if ( !v14 )
    return L"_42";
  v15 = v14 - 1;
  if ( !v15 )
    return L"_43";
  if ( v15 != 1 )
    return 0LL;
  return L"_44";
}
