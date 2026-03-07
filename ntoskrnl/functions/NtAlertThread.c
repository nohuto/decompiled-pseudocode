__int64 __fastcall NtAlertThread(ULONG_PTR a1)
{
  char PreviousMode; // bl
  __int64 result; // rax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObpReferenceObjectByHandleWithTag(a1, 4, (__int64)PsThreadType, PreviousMode, 0x75537350u, &Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    KeAlertThread((__int64)Object, PreviousMode);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    return 0LL;
  }
  return result;
}
