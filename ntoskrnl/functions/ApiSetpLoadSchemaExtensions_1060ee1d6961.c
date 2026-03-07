__int64 __fastcall ApiSetpLoadSchemaExtensions(HANDLE KeyHandle, unsigned int **a2, unsigned int *a3)
{
  ULONG v4; // edi
  ULONG v5; // edx
  HANDLE v7; // rsi
  int SchemaExtension; // ebx
  NTSTATUS v9; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh]
  char *v15; // [rsp+48h] [rbp-B8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyInformation[12]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v18; // [rsp+8Ch] [rbp-74h]
  char v19; // [rsp+90h] [rbp-70h] BYREF

  KeyHandlea = 0LL;
  v4 = 0;
  ResultLength = 0;
  v5 = 0;
  v7 = KeyHandle;
  while ( 1 )
  {
    v9 = ZwEnumerateKey(KeyHandle, v5, KeyBasicInformation, KeyInformation, 0x218u, &ResultLength);
    SchemaExtension = v9;
    if ( v9 < 0 )
      break;
    v14 = 0;
    v15 = &v19;
    v13[0] = v18;
    v13[1] = v18;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v13;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = v7;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SchemaExtension = ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
    if ( SchemaExtension < 0 )
      return (unsigned int)SchemaExtension;
    SchemaExtension = ApiSetpLoadSchemaExtension(KeyHandlea, a2, a3);
    ZwClose(KeyHandlea);
    if ( SchemaExtension < 0 )
      return (unsigned int)SchemaExtension;
    ++v4;
    KeyHandle = v7;
    v5 = v4;
  }
  if ( v9 == -2147483622 )
    return 0;
  return (unsigned int)SchemaExtension;
}
