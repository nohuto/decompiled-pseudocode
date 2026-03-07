__int64 __fastcall NtSetEvent(HANDLE Handle, LONG *a2)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  NTSTATUS v7; // edi
  struct _KEVENT *v8; // rbx
  LONG v9; // eax
  LONG v11; // [rsp+80h] [rbp+18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v11 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 && PreviousMode )
  {
    v5 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v5 = *(_DWORD *)v5;
  }
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v7 = v6;
  v8 = (struct _KEVENT *)Object;
  LODWORD(Object) = v6;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741788 )
    {
      if ( ExCrossVmEventObjectType )
      {
        Object = 0LL;
        v7 = ObReferenceObjectByHandle(Handle, 2u, ExCrossVmEventObjectType, PreviousMode, &Object, 0LL);
        v8 = (struct _KEVENT *)Object;
        LODWORD(Object) = v7;
        if ( v7 >= 0 )
        {
          v7 = ExpSetCrossVmEvent(v8, &v11);
          LODWORD(Object) = v7;
        }
      }
    }
    v9 = v11;
  }
  else
  {
    v9 = KeSetEvent(v8, 1, 0);
    v11 = v9;
  }
  if ( v7 >= 0 && a2 )
    *a2 = v9;
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v7;
}
