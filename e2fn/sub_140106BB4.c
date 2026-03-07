__int64 sub_140106BB4()
{
  unsigned int v0; // ebx
  ULONG MajorVersion; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  MajorVersion = 0;
  if ( !dword_1400DF6F8 )
  {
    PsGetVersion(&MajorVersion, 0LL, 0LL, 0LL);
    if ( MajorVersion >= 5 )
    {
      qword_1400DF6F0 = (__int64)MmGetSystemRoutineAddress((PUNICODE_STRING)&SystemRoutineName);
      _InterlockedExchange(&dword_1400DF6F8, 1);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return v0;
}
