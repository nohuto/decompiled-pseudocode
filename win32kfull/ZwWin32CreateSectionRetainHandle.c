NTSTATUS __fastcall ZwWin32CreateSectionRetainHandle(
        _QWORD *a1,
        __int64 a2,
        struct _OBJECT_ATTRIBUTES *a3,
        union _LARGE_INTEGER *a4,
        ULONG SectionPageProtection,
        int a6,
        HANDLE FileHandle,
        PVOID Object,
        int a9,
        PHANDLE SectionHandle)
{
  PHANDLE v11; // rbx
  NTSTATUS result; // eax
  HANDLE v13; // rcx
  NTSTATUS v14; // edi

  v11 = SectionHandle;
  result = ZwCreateSection(SectionHandle, 0xF001Fu, a3, a4, SectionPageProtection, 0x8000000u, FileHandle);
  if ( result >= 0 )
  {
    v13 = *v11;
    Object = 0LL;
    v14 = ObReferenceObjectByHandle(v13, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    *a1 = Object;
    if ( v14 < 0 )
    {
      ZwClose(*v11);
      *v11 = 0LL;
    }
    return v14;
  }
  return result;
}
