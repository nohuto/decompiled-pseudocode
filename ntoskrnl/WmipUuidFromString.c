__int64 __fastcall WmipUuidFromString(__int64 a1, __int64 a2)
{
  int v4; // r9d
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  int v14; // [rsp+30h] [rbp+10h] BYREF

  v14 = 0;
  if ( !(unsigned __int8)WmipHexStringToDword(a1, a2, 8LL) )
    return 3221225485LL;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 18, &v14, (unsigned int)(v4 - 41)) )
    return 3221225485LL;
  *(_WORD *)(a2 + 4) = v14;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 28, &v14, v5) )
    return 3221225485LL;
  *(_WORD *)(a2 + 6) = v14;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 38, &v14, 2LL) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 8) = v14;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 42, &v14, v6) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 9) = v14;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 48, &v14, v7) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 10) = v14;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 52, &v14, v8) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 11) = v14;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 56, &v14, v9) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 12) = v14;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 60, &v14, v10) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 13) = v14;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 64, &v14, v11) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 14) = v14;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 68, &v14, v12) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 15) = v14;
  return 0LL;
}
