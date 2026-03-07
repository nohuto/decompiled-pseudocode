__int64 __fastcall Edgy::_IsLegacyDevice(Edgy *this, void *a2)
{
  int v2; // esi
  const unsigned __int16 *v3; // rdx
  Edgy *v4; // rcx
  unsigned int *v5; // r9
  unsigned int v6; // edi
  BOOL v7; // ebx
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = (int)this;
  v6 = 0;
  if ( !*(_DWORD *)(SGDGetUserSessionState(this) + 17368) )
  {
    v10 = 0;
    v7 = 1;
    if ( (unsigned int)Edgy::_GetDWordFromRegistry(v4, v3, (const unsigned __int16 *)&v10, v5) )
      v7 = v10 != 1;
    *(_DWORD *)(SGDGetUserSessionState(v8) + 17368) = v7 + 1;
  }
  if ( *(_DWORD *)(SGDGetUserSessionState(v4) + 17368) == 1 )
    return 1LL;
  result = HMValidateHandleNoSecure(v2, 19);
  if ( result )
  {
    LOBYTE(v6) = (unsigned int)GetTouchValidationStatus(result) != 1;
    return v6;
  }
  return result;
}
