__int64 __fastcall PspAllocatePartition(int a1, ACCESS_MASK a2, char a3, __int64 a4, char a5, _QWORD *a6, __int64 a7)
{
  __int64 v8; // r14
  int v9; // r8d
  int Object; // edi
  char v11; // si
  char v12; // r8
  char v13; // r14
  _QWORD *v15; // rcx
  HANDLE v16; // rax
  HANDLE Handle; // [rsp+60h] [rbp-41h] BYREF
  __int64 v19; // [rsp+68h] [rbp-39h]
  $115DCDF994C6370D29323EAB0E0C9502 v20; // [rsp+70h] [rbp-31h] BYREF

  Handle = 0LL;
  v8 = a4;
  LOBYTE(a4) = a3;
  v9 = a1;
  v19 = a7;
  LOBYTE(a1) = a3;
  memset(&v20, 0, sizeof(v20));
  Object = ObCreateObject(a1, (int)PsPartitionType, v9, a4);
  if ( Object < 0 )
    return (unsigned int)Object;
  memset(0LL, 0, 0x88uLL);
  MEMORY[0x20] = 2LL;
  ObfReferenceObjectWithTag(0LL, 0x64726148u);
  MEMORY[0x28] = 1LL;
  v11 = a5 & 1;
  MEMORY[0x68] = 0LL;
  if ( v8 )
  {
    IoDiskIoAttributionReference(v8);
    MEMORY[0x40] = v8;
    v12 = a5 & 1;
    if ( v11 )
      goto LABEL_4;
LABEL_13:
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v20);
    Object = PspCreatePartitionSystemProcess(112LL, 120LL);
    KiUnstackDetachProcess(&v20);
    if ( Object < 0 )
      return (unsigned int)Object;
    v13 = a5 & 2;
    Object = ExpPartitionInitialize(0LL);
    if ( Object < 0 )
      return (unsigned int)Object;
    goto LABEL_5;
  }
  v12 = a5 & 1;
  if ( !v11 )
  {
    IoDiskIoAttributionReference((__int64)PspSystemPartition);
    MEMORY[0x40] = PspSystemPartition;
    goto LABEL_13;
  }
LABEL_4:
  v13 = 1;
  v11 = v12;
LABEL_5:
  Object = MmCreatePartition(0LL, v13);
  if ( Object >= 0 )
  {
    PspAddPartitionToGlobalList(0LL);
    if ( v11 )
    {
      MEMORY[0x80] |= 1u;
      *a6 = 0LL;
      return 0;
    }
    Object = ExpPartitionStart(MEMORY[0x10]);
    if ( Object >= 0 )
    {
      if ( (a5 & 2) != 0 )
        MEMORY[0x80] |= 1u;
      Object = ObInsertObject(0LL, 0LL, a2, 0, 0LL, &Handle);
      if ( Object >= 0 )
      {
        v15 = (_QWORD *)v19;
        v16 = Handle;
        *a6 = 0LL;
        *v15 = v16;
        return 0;
      }
    }
  }
  return (unsigned int)Object;
}
