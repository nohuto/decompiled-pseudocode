__int64 __fastcall DwmCheckProcessSession(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  v8 = 0;
  v3 = LockProcessByClientIdEx(a1, &Object, &v8);
  if ( v3 >= 0 )
  {
    v6 = (_DWORD *)SGDGetUserSessionState(v2, v1, v4, v5);
    if ( v8 != *v6 )
      v3 = -1073741823;
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v3;
}
