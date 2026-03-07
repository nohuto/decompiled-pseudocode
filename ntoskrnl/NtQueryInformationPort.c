__int64 __fastcall NtQueryInformationPort(HANDLE Handle, __int64 a2, volatile void *a3, unsigned int a4, _DWORD *a5)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v7; // rcx
  NTSTATUS v8; // ebx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(a3, a4, 4u);
    if ( a5 )
    {
      v7 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v7 = (__int64)a5;
      *(_DWORD *)v7 = *(_DWORD *)v7;
    }
  }
  if ( Handle )
  {
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(Handle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v8 >= 0 )
    {
      if ( a5 )
        *a5 = 0;
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    return (unsigned int)-1073741821;
  }
  return (unsigned int)v8;
}
