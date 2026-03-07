__int64 __fastcall NtResumeThread(ULONG_PTR BugCheckParameter1, _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned int v6; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  Object = 0LL;
  if ( KeGetCurrentThread()->PreviousMode && a2 )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v4 = (__int64)a2;
    *(_DWORD *)v4 = *(_DWORD *)v4;
  }
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x75537350u, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    PsMultiResumeThread((__int64)Object, &v6, 1u);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    if ( a2 )
      *a2 = v6;
    return 0LL;
  }
  return result;
}
