__int64 __fastcall NtFlushBuffersFileEx(void *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  struct _OBJECT_HANDLE_INFORMATION v6; // [rsp+40h] [rbp-18h] BYREF
  PVOID Object; // [rsp+48h] [rbp-10h] BYREF

  v6 = 0LL;
  Object = 0LL;
  result = IopReferenceFileObject(a1, 0, KeGetCurrentThread()->PreviousMode, &Object, &v6);
  if ( (int)result >= 0 )
    return IopFlushBuffersFile(Object, v6.GrantedAccess, 0LL, 0LL, a5);
  return result;
}
