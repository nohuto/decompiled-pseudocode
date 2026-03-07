__int64 __fastcall NtCreateEvent(unsigned __int64 a1, unsigned int a2, int a3, EVENT_TYPE a4, BOOLEAN a5)
{
  _QWORD *v7; // rdi
  unsigned __int8 PreviousMode; // si
  __int64 result; // rax
  __int64 v10; // [rsp+58h] [rbp-10h] BYREF

  v7 = (_QWORD *)a1;
  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  if ( (unsigned int)a4 > SynchronizationEvent )
    return 3221225485LL;
  result = ObCreateObjectEx(PreviousMode, (_DWORD)ExEventObjectType, a3, PreviousMode);
  if ( (int)result >= 0 )
  {
    KeInitializeEvent(0LL, a4, a5);
    result = ObInsertObjectEx(0LL, 0LL, a2, 0, 0, 0LL, &v10);
    if ( (int)result >= 0 )
      *v7 = v10;
  }
  return result;
}
