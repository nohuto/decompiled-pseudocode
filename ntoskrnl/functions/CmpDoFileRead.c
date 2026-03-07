__int64 __fastcall CmpDoFileRead(HANDLE FileHandle, __int64 a2, ULONG a3, char *a4, ULONG a5, int a6, __int64 a7)
{
  ULONG v7; // edi
  unsigned int v9; // r15d
  int v10; // eax
  NTSTATUS Status; // ebx
  ULONG v12; // r14d
  char *Buffer; // rcx
  ULONG Length; // edi
  __int64 result; // rax
  int Information; // ecx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+58h] [rbp-28h]
  HANDLE Event; // [rsp+60h] [rbp-20h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-18h] BYREF
  ULONG v21; // [rsp+C0h] [rbp+40h]

  v21 = a3;
  ByteOffset.QuadPart = 0LL;
  Event = 0LL;
  v7 = a3;
  Object = 0LL;
  v9 = 0x10000000;
  IoStatusBlock = 0LL;
  v10 = CmpCreateEvent(SynchronizationEvent);
  Status = v10;
  if ( v10 < 0 )
  {
    SetFailureLocation(a7, 1, 12, v10, 16);
    return (unsigned int)Status;
  }
  v12 = a5;
  if ( !a5 )
  {
LABEL_12:
    Status = 0;
    goto LABEL_13;
  }
  Buffer = a4;
  while ( 1 )
  {
    ByteOffset.QuadPart = v7;
    Length = v9;
    if ( v12 <= v9 )
      Length = v12;
    Status = ZwReadFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 && v9 > 0x10000 )
    {
      Buffer = a4;
      v9 >>= 1;
      goto LABEL_11;
    }
    v12 -= Length;
    v21 = Length + ByteOffset.LowPart;
    Buffer = &a4[Length];
    a4 = Buffer;
    if ( Status < 0 )
      break;
    if ( IoStatusBlock.Information != Length )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      ZwClose(Event);
      Information = IoStatusBlock.Information;
      if ( a7 )
      {
        *(_DWORD *)(a7 + 208) = 1;
        *(_QWORD *)(a7 + 216) = FileHandle;
        *(_DWORD *)(a7 + 224) = Information - Length;
      }
      CmRegistryIODebug = 1;
      dword_140D54E18 = Information - Length;
      result = 3221225489LL;
      qword_140D54E10 = (__int64)FileHandle;
      return result;
    }
LABEL_11:
    v7 = v21;
    if ( !v12 )
      goto LABEL_12;
  }
  if ( a7 )
  {
    *(_DWORD *)(a7 + 208) = 1;
    *(_QWORD *)(a7 + 216) = FileHandle;
    *(_DWORD *)(a7 + 224) = Status;
  }
  CmRegistryIODebug = 1;
  qword_140D54E10 = (__int64)FileHandle;
  dword_140D54E18 = Status;
LABEL_13:
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  ZwClose(Event);
  return (unsigned int)Status;
}
