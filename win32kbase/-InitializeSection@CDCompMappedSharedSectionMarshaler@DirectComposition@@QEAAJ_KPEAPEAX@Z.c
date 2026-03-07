__int64 __fastcall DirectComposition::CDCompMappedSharedSectionMarshaler::InitializeSection(
        DirectComposition::CDCompMappedSharedSectionMarshaler *this,
        __int64 a2,
        void **a3)
{
  NTSTATUS v6; // ebx
  PVOID v7; // rdi
  NTSTATUS v8; // eax
  void *v10; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  Handle = 0LL;
  if ( *((_QWORD *)this + 7) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v7 = 0LL;
    v6 = (*(__int64 (__fastcall **)(DirectComposition::CDCompMappedSharedSectionMarshaler *, __int64, HANDLE *))(*(_QWORD *)this + 296LL))(
           this,
           a2,
           &Handle);
    if ( v6 >= 0 )
    {
      Object = 0LL;
      v8 = ObReferenceObjectByHandle(Handle, 0xC0000000, MmSectionObjectType, 0, &Object, 0LL);
      v7 = Object;
      v6 = v8;
    }
    v10 = 0LL;
    if ( v6 < 0 || (v6 = ObOpenObjectByPointer(v7, 0xC0000000, 0LL, 6u, MmSectionObjectType, 1, &v10), v6 < 0) )
    {
      if ( v7 )
        ObfDereferenceObject(v7);
    }
    else
    {
      *a3 = v10;
      *((_QWORD *)this + 8) = a2;
      *((_QWORD *)this + 7) = v7;
    }
    if ( Handle )
      ObCloseHandle(Handle, 0);
  }
  return (unsigned int)v6;
}
