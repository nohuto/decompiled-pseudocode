__int64 __fastcall GreSfmGetPresentQueueEvent(__int64 a1, void **a2)
{
  unsigned int v3; // ebx
  __int64 DxgkWin32kInterface; // rax
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  void *Handle; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  Handle = 0LL;
  v3 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  v5 = (*(__int64 (__fastcall **)(_QWORD, PVOID *))(DxgkWin32kInterface + 200))(v3, &Object);
  if ( v5 >= 0 )
  {
    v5 = ObOpenObjectByPointer(Object, 0x80u, 0LL, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &Handle);
    if ( v5 >= 0 )
      *a2 = Handle;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v5;
}
