NTSTATUS __fastcall IoConvertFileHandleToKernelHandle(void *a1, KPROCESSOR_MODE a2, int a3, char a4, PVOID Object)
{
  _QWORD *v5; // r14
  NTSTATUS result; // eax
  PVOID v10; // rsi
  NTSTATUS v11; // ebx
  int v12; // eax
  HANDLE v13; // rdi
  HANDLE Handle[2]; // [rsp+40h] [rbp-10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+70h] [rbp+20h] BYREF

  v5 = Object;
  Handle[0] = 0LL;
  HandleInformation = 0LL;
  *(_QWORD *)Object = 0LL;
  if ( !a1 )
    return 0;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, a2, &Object, &HandleInformation);
  if ( result >= 0 )
  {
    if ( a4 || (a3 & HandleInformation.GrantedAccess) == a3 )
    {
      v12 = ObDuplicateObject(
              (ULONG_PTR)KeGetCurrentThread()->ApcState.Process,
              a1,
              (ULONG_PTR)PsInitialSystemProcess,
              (unsigned __int64 *)Handle,
              a3,
              512,
              0,
              0);
      v10 = Object;
      v11 = v12;
      if ( v12 >= 0 )
      {
        v13 = Handle[0];
        Object = 0LL;
        v11 = ObReferenceObjectByHandle(Handle[0], 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
        if ( v11 >= 0 )
        {
          if ( Object == v10 )
          {
            *v5 = v13;
          }
          else
          {
            v11 = -1073741788;
            ObCloseHandle(v13, 0);
          }
          ObfDereferenceObject(Object);
        }
        else
        {
          ObCloseHandle(v13, 0);
        }
      }
    }
    else
    {
      v10 = Object;
      v11 = -1073741790;
    }
    ObfDereferenceObject(v10);
    return v11;
  }
  return result;
}
