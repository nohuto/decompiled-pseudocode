__int64 __fastcall RtlpGetPersistedRegistryLocation(PCWSTR SourceString, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int PersistedStateLocation; // eax
  int v8; // ebx
  int v9; // ebx
  void *StringRoutine; // rdi
  unsigned int v12[4]; // [rsp+40h] [rbp-28h] BYREF

  v12[0] = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(SourceString, 0LL, 0, (__int64)v12);
  v8 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    v9 = v12[0];
    StringRoutine = (void *)ExpAllocateStringRoutine(v12[0]);
    if ( StringRoutine )
    {
      v8 = RtlGetPersistedStateLocation(SourceString, StringRoutine, v9, (__int64)v12);
      if ( v8 < 0 )
      {
        ExFreePool(StringRoutine);
      }
      else
      {
        *a3 = StringRoutine;
        if ( a4 )
          *a4 = (v12[0] >> 1) - 1;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else if ( PersistedStateLocation >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
