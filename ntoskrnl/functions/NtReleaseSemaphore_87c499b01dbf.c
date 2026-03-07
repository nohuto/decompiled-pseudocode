__int64 __fastcall NtReleaseSemaphore(HANDLE Handle, int a2, _DWORD *a3)
{
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v7; // rcx
  int v9; // esi
  int v10; // r8d
  PVOID v11; // rbx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a3 && PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a3;
    *(_DWORD *)v7 = *(_DWORD *)v7;
  }
  if ( a2 <= 0 )
    return 3221225485LL;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, PreviousMode, &Object, 0LL);
  if ( v9 >= 0 )
  {
    v10 = a2;
    v11 = Object;
    v9 = KeReleaseSemaphoreEx((__int64)Object, 1u, v10);
    LODWORD(Object) = v9;
    ObfDereferenceObject(v11);
    if ( v9 >= 0 )
    {
      if ( a3 )
        *a3 = 0;
    }
  }
  return (unsigned int)v9;
}
