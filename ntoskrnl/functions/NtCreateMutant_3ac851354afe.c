__int64 __fastcall NtCreateMutant(__int64 a1, __int64 a2, int a3, char a4)
{
  _QWORD *v5; // rbx
  char PreviousMode; // di
  __int64 v7; // rdx
  int Object; // ecx
  __int64 v10; // [rsp+58h] [rbp-10h] BYREF

  v5 = (_QWORD *)a1;
  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    a1 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v5 < 0x7FFFFFFF0000LL )
      a1 = (__int64)v5;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  LOBYTE(a1) = PreviousMode;
  Object = ObCreateObjectEx(a1, (_DWORD)ExMutantObjectType, a3, PreviousMode);
  if ( Object >= 0 )
  {
    LOBYTE(v7) = a4;
    KeInitializeMutantEx(0LL, v7, ExpForceEnableMutantAutoboost != 0);
    Object = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&v10);
    if ( Object >= 0 )
      *v5 = v10;
  }
  return (unsigned int)Object;
}
