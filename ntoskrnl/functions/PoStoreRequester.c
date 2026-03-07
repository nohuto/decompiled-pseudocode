__int64 __fastcall PoStoreRequester(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v7; // rsi
  char v8; // r8
  unsigned __int16 *v9; // r12
  char *v10; // r14
  char v11; // di
  __int64 v12; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRefWithTag; // rax
  struct _DEVICE_OBJECT *v14; // rbp
  const UNICODE_STRING *p_DriverName; // r8
  ULONG v16; // ecx
  __int64 v17; // rcx
  unsigned __int16 *DeviceNode; // rcx
  unsigned __int16 *v20; // rcx
  __int64 v21; // r8
  char *v22; // rdx
  char *i; // rax
  char *v24; // rax
  unsigned __int64 v25; // rbp
  NTSTATUS DeviceProperty; // eax
  __int64 v27; // rax
  char v28; // [rsp+70h] [rbp+8h]
  ULONG ResultLength; // [rsp+78h] [rbp+10h] BYREF

  v4 = *a3;
  v28 = 0;
  ResultLength = 0;
  v7 = 40LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( a2 && v4 >= 0x28 )
  {
    v10 = (char *)(a2 + 40);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)a1;
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  if ( *(_DWORD *)a1 )
  {
    if ( v11 )
    {
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1088LL);
      *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 16);
    }
    v20 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 8) + 1472LL);
    v21 = *v20;
    v22 = (char *)*((_QWORD *)v20 + 1);
    ResultLength = *v20;
    if ( a4 )
    {
      for ( i = &v22[2 * ((unsigned __int64)(unsigned int)v21 >> 1)]; i != v22 && *(_WORD *)i != 92; i -= 2 )
        ;
      if ( i != v22 )
      {
        v24 = i + 2;
        v21 = (unsigned int)((_DWORD)v22 - (_DWORD)v24 + v21);
        v22 = v24;
        ResultLength = v21;
      }
    }
    v25 = (unsigned int)v21;
    v7 = v21 + 42;
    if ( !v11 || v4 < v7 )
    {
      *a3 = v7;
      return 3221225507LL;
    }
    v11 = 1;
    memmove(v10, v22, (unsigned int)v21);
    *(_WORD *)&v10[2 * (v25 >> 1)] = 0;
    *(_QWORD *)(a2 + 16) = &v10[-a2];
LABEL_38:
    v8 = 0;
    goto LABEL_15;
  }
  v12 = *(_QWORD *)(a1 + 8);
  if ( !v12 )
    goto LABEL_15;
  DeviceAttachmentBaseRefWithTag = (struct _DEVICE_OBJECT *)IoGetDeviceAttachmentBaseRefWithTag(v12, 0x67446F50u);
  v14 = DeviceAttachmentBaseRefWithTag;
  if ( !DeviceAttachmentBaseRefWithTag )
    goto LABEL_38;
  if ( !DeviceAttachmentBaseRefWithTag->DeviceObjectExtension->DeviceNode )
    goto LABEL_8;
  if ( v11 )
  {
    DeviceProperty = IoGetDeviceProperty(
                       DeviceAttachmentBaseRefWithTag,
                       DevicePropertyDeviceDescription,
                       v4 - 40,
                       v10,
                       &ResultLength);
  }
  else
  {
    DeviceProperty = IoGetDeviceProperty(
                       DeviceAttachmentBaseRefWithTag,
                       DevicePropertyDeviceDescription,
                       0,
                       0LL,
                       &ResultLength);
    if ( DeviceProperty == -1073741789 )
      DeviceProperty = 0;
  }
  if ( DeviceProperty < 0 )
  {
LABEL_8:
    p_DriverName = &v14->DriverObject->DriverName;
    v16 = p_DriverName->Length + 2;
    ResultLength = v16;
    if ( v11 && v4 >= (unsigned __int64)v16 + 40 )
    {
      v11 = 1;
      RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v10, v16, p_DriverName);
    }
    else
    {
      v11 = 0;
    }
  }
  v17 = ResultLength;
  v7 = ResultLength + 40LL;
  if ( v11 )
  {
    v28 = 1;
    *(_QWORD *)(a2 + 16) = &v10[-a2];
    v10 += v17;
  }
  DeviceNode = (unsigned __int16 *)v14->DeviceObjectExtension->DeviceNode;
  if ( DeviceNode )
  {
    v9 = DeviceNode + 20;
    v27 = (unsigned int)DeviceNode[20] + 2;
    v7 += v27;
    ResultLength = DeviceNode[20] + 2;
    if ( v11 && v4 >= v7 )
    {
      v11 = 1;
      RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v10, (unsigned int)v27, (PCUNICODE_STRING)(DeviceNode + 20));
      *(_QWORD *)(a2 + 24) = &v10[-a2];
    }
    else
    {
      v11 = 0;
    }
  }
  ObfDereferenceObjectWithTag(v14, 0x67446F50u);
  v8 = v28;
LABEL_15:
  *a3 = v7;
  if ( !v11 )
    return 3221225507LL;
  if ( !*(_DWORD *)(a2 + 8) )
  {
    if ( !v8 )
      *(_QWORD *)(a2 + 16) = 0LL;
    if ( !v9 )
      *(_QWORD *)(a2 + 24) = 0LL;
  }
  return 0LL;
}
