__int64 __fastcall MiCreatePartitionNamespace(__int64 a1)
{
  int DirectoryObject; // ebx
  __int64 v3; // rax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-19h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v7; // [rsp+68h] [rbp+17h]
  int v8; // [rsp+70h] [rbp+1Fh]
  int v9; // [rsp+74h] [rbp+23h]
  __int64 v10; // [rsp+78h] [rbp+27h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp+2Fh]
  int v12; // [rsp+88h] [rbp+37h]
  int v13; // [rsp+8Ch] [rbp+3Bh]
  _OWORD *v14; // [rsp+90h] [rbp+3Fh]
  __int64 v15; // [rsp+98h] [rbp+47h]

  v13 = 0;
  v9 = 0;
  v7 = 0LL;
  DestinationString = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v10 = 0LL;
  v15 = 0LL;
  p_DestinationString = &DestinationString;
  v14 = (_OWORD *)SePublicDefaultUnrestrictedSd;
  v8 = 48;
  v12 = 576;
  DirectoryObject = ZwCreateDirectoryObjectEx(a1 + 256, 983055LL);
  if ( DirectoryObject >= 0 )
  {
    DirectoryObject = ObCreateKernelObjectsSD(SecurityDescriptor);
    if ( DirectoryObject >= 0 )
    {
      v3 = *(_QWORD *)(a1 + 256);
      v15 = 0LL;
      v10 = v3;
      v8 = 48;
      p_DestinationString = (UNICODE_STRING *)&MiKernelObjectsDirectoryName;
      v14 = SecurityDescriptor;
      v12 = 576;
      DirectoryObject = ZwCreateDirectoryObjectEx(a1 + 264, 983055LL);
    }
  }
  ObCleanupSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)DirectoryObject;
}
