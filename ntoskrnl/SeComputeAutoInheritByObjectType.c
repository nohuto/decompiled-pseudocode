/*
 * XREFs of SeComputeAutoInheritByObjectType @ 0x1402EA340
 * Callers:
 *     <none>
 * Callees:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14030FBF0 (SeComputeAutoInheritByObjectTypeEx.c)
 */

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
