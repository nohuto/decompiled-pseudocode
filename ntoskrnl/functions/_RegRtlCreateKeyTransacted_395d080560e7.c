__int64 __fastcall RegRtlCreateKeyTransacted(
        void *a1,
        const WCHAR *a2,
        ULONG a3,
        ACCESS_MASK a4,
        void *a5,
        char a6,
        HANDLE *KeyHandle,
        ULONG *Disposition,
        __int64 a9)
{
  void *v9; // rdi
  __int64 v14; // rcx
  int inited; // ebx
  int v16; // r9d
  int v17; // ecx
  void *v19; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-19h] BYREF

  v9 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v19 = 0LL;
  DestinationString = 0LL;
  if ( (unsigned __int8)RegRtlIsPredefinedKey() )
  {
    inited = RegRtlOpenPredefinedKey(v14, &v19);
    if ( inited < 0 )
      goto LABEL_9;
    v9 = v19;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited < 0 )
    goto LABEL_10;
  ObjectAttributes.Length = 48;
  v17 = (32 * (a3 & 8 | 6)) | 2;
  if ( !a6 )
    v17 = 32 * (a3 & 8 | 6);
  if ( v9 )
    a1 = v9;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.Attributes = v17 | 0x200;
  ObjectAttributes.SecurityDescriptor = a5;
  ObjectAttributes.RootDirectory = a1;
  if ( a9 )
  {
    inited = NtCreateKeyTransacted_Stub((_DWORD)KeyHandle, a4, (unsigned int)&ObjectAttributes, v16);
    if ( inited == -1073741702 )
      inited = -1072103420;
  }
  else
  {
    inited = ZwCreateKey(KeyHandle, a4, &ObjectAttributes, 0, 0LL, a3, Disposition);
  }
LABEL_9:
  v9 = v19;
LABEL_10:
  if ( v9 )
    ZwClose(v9);
  return (unsigned int)inited;
}
