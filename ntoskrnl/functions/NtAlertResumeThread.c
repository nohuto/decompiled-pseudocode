__int64 __fastcall NtAlertResumeThread(ULONG_PTR BugCheckParameter1, _DWORD *a2)
{
  char PreviousMode; // bl
  __int64 v5; // rcx
  __int64 result; // rax
  int v7; // esi
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && a2 )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a2;
    *(_DWORD *)v5 = *(_DWORD *)v5;
  }
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             2,
             (__int64)PsThreadType,
             PreviousMode,
             0x75537350u,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    if ( PreviousMode && (*((_DWORD *)Object + 29) & 0x400) != 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      return 3221225506LL;
    }
    else
    {
      v7 = KeAlertResumeThread((__int64)Object);
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      if ( a2 )
        *a2 = v7;
      return 0LL;
    }
  }
  return result;
}
