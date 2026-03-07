NTSTATUS __fastcall DirectComposition::CSharedSectionMarshaler::CreateSection(
        DirectComposition::CSharedSectionMarshaler *this,
        union _LARGE_INTEGER a2,
        void **a3)
{
  NTSTATUS result; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *SectionHandle; // [rsp+88h] [rbp+18h] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+98h] [rbp+28h] BYREF

  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  SectionHandle = 0LL;
  MaximumSize = a2;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  result = ZwCreateSection(&SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8400000u, 0LL);
  if ( result >= 0 )
    *a3 = SectionHandle;
  return result;
}
