__int64 __fastcall SmKmEtwAppendObjectName(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // eax
  void *DeviceAttachmentBaseRefWithTag; // rbx
  __int64 v5; // rcx
  unsigned int v6; // r14d
  void *v7; // r13
  struct _OBJECT_NAME_INFORMATION *v8; // rdi
  ULONG v9; // r14d
  void *v10; // rbp
  BOOLEAN v11; // r15
  NTSTATUS v12; // ebx
  wchar_t *Buffer; // rdx
  unsigned __int16 v14; // bx
  unsigned __int16 *v15; // rdx
  unsigned int v16; // ecx
  unsigned __int16 **v17; // rax
  __int64 v18; // rdx
  __int64 result; // rax
  _QWORD *v20; // rdx
  ULONG ReturnLength; // [rsp+20h] [rbp-68h] BYREF
  _OWORD Src[2]; // [rsp+28h] [rbp-60h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  ReturnLength = 0;
  DeviceAttachmentBaseRefWithTag = (void *)a2;
  Src[0] = *(_OWORD *)L"\\Device\\Unknown";
  v5 = *(_QWORD *)(a1 + 8) + v2;
  v6 = *(_DWORD *)(a1 + 28) - v2;
  Src[1] = *(_OWORD *)L"Unknown";
  v7 = (void *)(v5 + 2);
  v8 = (struct _OBJECT_NAME_INFORMATION *)((v5 + 9) & 0xFFFFFFFFFFFFFFF8uLL);
  v9 = v5 + v6 - (_DWORD)v8;
  *(_QWORD *)&v8->Name.Length = 0LL;
  v8->Name.Buffer = 0LL;
  if ( (a2 & 1) != 0 )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a2 & 0xFFFFFFFFFFFFFFFEuLL, 0x746C6644u);
    v10 = DeviceAttachmentBaseRefWithTag;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !DeviceAttachmentBaseRefWithTag )
    goto LABEL_10;
  v11 = IoSetThreadHardErrorMode(0);
  v12 = ObQueryNameString(DeviceAttachmentBaseRefWithTag, v8, v9, &ReturnLength);
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  IoSetThreadHardErrorMode(v11);
  if ( v12 >= 0 && v8->Name.Length )
  {
    Buffer = v8->Name.Buffer;
    v14 = v8->Name.Length >> 1;
  }
  else
  {
LABEL_10:
    Buffer = (wchar_t *)Src;
    v14 = 15;
  }
  memmove(v7, Buffer, 2LL * v14);
  v15 = (unsigned __int16 *)(*(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 24));
  v16 = 2 * v14;
  *v15 = v14;
  v17 = (unsigned __int16 **)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16));
  *v17 = v15;
  v17[1] = (unsigned __int16 *)2;
  v18 = (unsigned int)++*(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 24) += 2;
  result = *(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 24);
  v20 = (_QWORD *)(*(_QWORD *)a1 + 16 * v18);
  *v20 = result;
  v20[1] = v16;
  ++*(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 24) += v16;
  return result;
}
