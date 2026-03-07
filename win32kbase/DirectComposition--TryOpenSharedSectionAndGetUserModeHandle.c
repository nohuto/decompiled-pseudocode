void *__fastcall DirectComposition::TryOpenSharedSectionAndGetUserModeHandle(__int64 a1, __int64 a2, PVOID *a3)
{
  NTSTATUS v4; // edi
  void *v6; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( *a3 )
    goto LABEL_6;
  Handle = 0LL;
  if ( (int)OpenVmSharedMemorySection(&Handle) >= 0 )
  {
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(Handle, 0xC0000000, MmSectionObjectType, 0, &Object, 0LL);
    if ( v4 >= 0 )
      *a3 = Object;
    ObCloseHandle(Handle, 0);
    if ( v4 >= 0 )
    {
LABEL_6:
      if ( ObOpenObjectByPointer(*a3, 0xC0000000, 0LL, 6u, MmSectionObjectType, 1, &v6) < 0 )
        ObfDereferenceObject(*a3);
    }
  }
  return v6;
}
