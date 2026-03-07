ULONG __stdcall SeComputeAutoInheritByObjectType(
        PVOID ObjectType,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_DESCRIPTOR ParentSecurityDescriptor)
{
  ULONG v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  SeComputeAutoInheritByObjectTypeEx(
    (_DWORD)ObjectType,
    (_DWORD)SecurityDescriptor,
    (_DWORD)ParentSecurityDescriptor,
    (unsigned int)&v4,
    0LL);
  return v4;
}
