__int64 __fastcall LockProcessByClientId(__int64 a1, PVOID *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rax
  int v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v10 = -1;
  v5 = LockProcessByClientIdEx(a1, a2, &v10);
  if ( v5 < 0 )
    return (unsigned int)v5;
  v8 = (_DWORD *)SGDGetUserSessionState(v4, v3, v6, v7);
  if ( v10 == *v8 )
    return (unsigned int)v5;
  ObfDereferenceObject(*a2);
  *a2 = 0LL;
  return 3221225473LL;
}
