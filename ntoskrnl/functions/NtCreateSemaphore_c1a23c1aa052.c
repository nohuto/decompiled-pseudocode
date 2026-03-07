__int64 __fastcall NtCreateSemaphore(unsigned __int64 a1, unsigned int a2, int a3, LONG a4, int Limit)
{
  _QWORD *v7; // rdi
  unsigned __int8 PreviousMode; // si
  int Object; // ecx
  __int64 v11; // [rsp+58h] [rbp-20h] BYREF

  v7 = (_QWORD *)a1;
  v11 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  if ( Limit <= 0 || a4 < 0 || a4 > Limit )
    return 3221225485LL;
  Object = ObCreateObjectEx(PreviousMode, (_DWORD)ExSemaphoreObjectType, a3, PreviousMode);
  if ( Object >= 0 )
  {
    KeInitializeSemaphore(0LL, a4, Limit);
    Object = ObInsertObjectEx(0LL, 0LL, a2, 0, 0, 0LL, &v11);
    if ( Object >= 0 )
      *v7 = v11;
  }
  return (unsigned int)Object;
}
