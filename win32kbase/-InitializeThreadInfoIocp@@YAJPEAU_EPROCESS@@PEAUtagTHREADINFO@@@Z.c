__int64 __fastcall InitializeThreadInfoIocp(struct _EPROCESS *a1, void **a2)
{
  _QWORD *v2; // r14
  NTSTATUS v5; // ebx
  void *v6; // rcx
  HANDLE *v7; // rdi
  HANDLE v8; // r15
  NTSTATUS v9; // eax
  __int64 v10; // r8
  PVOID v11; // r12
  char v13; // [rsp+38h] [rbp-38h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+48h] BYREF
  PVOID v16; // [rsp+C0h] [rbp+50h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+C8h] [rbp+58h] BYREF

  v2 = a2 + 183;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwCreateIoCompletion(a2 + 183, 0x1F0003u, &ObjectAttributes, 0);
  if ( v5 < 0 )
  {
    *v2 = 0LL;
    return (unsigned int)v5;
  }
  v6 = (void *)*v2;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(v6, 0x1F0003u, 0LL, 0, &Object, 0LL);
  a2[182] = Object;
  if ( v5 < 0 )
  {
    a2[182] = 0LL;
    return (unsigned int)v5;
  }
  v7 = a2 + 184;
  v13 = 0;
  v5 = ObDuplicateObject(a1, *v2, a1, a2 + 184, 0, 0, 2, v13);
  if ( v5 < 0 )
    goto LABEL_13;
  v8 = *v7;
  HandleInformation = 0LL;
  v16 = 0LL;
  v9 = ObReferenceObjectByHandle(v8, 0x1F0003u, 0LL, 1, &v16, &HandleInformation);
  v11 = v16;
  v5 = v9;
  if ( v9 >= 0 )
  {
    LOBYTE(v10) = 1;
    BYTE1(Object) = 1;
    LOBYTE(Object) = (HandleInformation.HandleAttributes & 2) != 0;
    v5 = ObSetHandleAttributes(v8, &Object, v10);
    ObfDereferenceObject(v11);
  }
  if ( v5 < 0 )
  {
    ObCloseHandle(*v7, 1);
    goto LABEL_13;
  }
  v7 = a2 + 186;
  v5 = ZwCreateWaitCompletionPacket(a2 + 186, 1LL, &ObjectAttributes);
  if ( v5 < 0 )
  {
LABEL_13:
    *v7 = 0LL;
    return (unsigned int)v5;
  }
  return (unsigned int)ZwAssociateWaitCompletionPacket(*v7, *v2, a2[185], 0LL, 1LL, 0, 0LL, 0LL);
}
