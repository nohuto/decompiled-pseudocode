NTSTATUS __fastcall ZwWin32CreateSectionRetainHandle(
        void *a1,
        __int64 a2,
        struct _OBJECT_ATTRIBUTES *a3,
        union _LARGE_INTEGER *a4)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  Object = a1;
  result = ZwCreateSection(&gxsSectionHandle, 0xF001Fu, a3, a4, 4u, 0x8000000u, 0LL);
  if ( result >= 0 )
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(gxsSectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    gxsSection = Object;
    if ( v5 < 0 )
    {
      ZwClose(gxsSectionHandle);
      gxsSectionHandle = 0LL;
    }
    return v5;
  }
  return result;
}
