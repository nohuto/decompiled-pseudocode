NTSTATUS __fastcall RtlpOpenSystemSessionKey(__int64 a1, HANDLE *a2)
{
  char PreviousMode; // cl
  ULONG v3; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v3 = 1600;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  if ( PreviousMode != 1 )
    v3 = 576;
  ObjectAttributes.Attributes = v3;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_14000ABC0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a2, 9u, &ObjectAttributes);
}
