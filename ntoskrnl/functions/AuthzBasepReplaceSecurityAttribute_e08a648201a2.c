__int64 __fastcall AuthzBasepReplaceSecurityAttribute(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm1
  __int64 v5; // xmm0_8
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  v4 = *(_OWORD *)(a2 + 16);
  v7 = *(_OWORD *)a2;
  v5 = *(_QWORD *)(a2 + 32);
  v8 = v4;
  DWORD2(v8) = 0;
  v9 = v5;
  result = AuthzBasepDeleteSecurityAttribute(a1, &v7);
  if ( (_DWORD)result == -1073741275 )
  {
    result = 0LL;
  }
  else if ( (int)result < 0 )
  {
    return result;
  }
  if ( *(_DWORD *)(a2 + 24) )
    return AuthzBasepAddSecurityAttribute(a1, a2);
  return result;
}
