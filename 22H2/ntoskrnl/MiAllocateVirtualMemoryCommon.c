/*
 * XREFs of MiAllocateVirtualMemoryCommon @ 0x140678908
 * Callers:
 *     MmAllocateUserStack @ 0x140678840 (MmAllocateUserStack.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x140303F4C (PsDereferencePartition.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1405F99F0 (MiAllocateVirtualMemoryPrepare.c)
 *     PsReferencePartitionByHandle @ 0x140676644 (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall MiAllocateVirtualMemoryCommon(
        ULONG_PTR a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        signed int a9,
        int a10,
        __int64 a11)
{
  unsigned __int64 v13; // rsi
  int v14; // ebx
  ULONG_PTR v15; // rcx
  int v16; // eax
  int v18; // eax
  unsigned __int64 v19; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v20; // [rsp+80h] [rbp-88h] BYREF
  PVOID Object; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v22[22]; // [rsp+98h] [rbp-70h] BYREF

  memset(v22, 0, 0x80uLL);
  v13 = 0LL;
  v20 = 0LL;
  Object = 0LL;
  v19 = 0LL;
  v14 = MiAllocateVirtualMemoryPrepare(a1, *a2, a3, *a4, a5, a6, a7, a8, a9, a10, a11, (__int64)v22, &Object);
  if ( v14 < 0 )
    goto LABEL_19;
  v15 = *(_QWORD *)(a7 + 24);
  if ( v15 )
  {
    if ( v15 == -3LL )
    {
      v13 = 1LL;
    }
    else
    {
      v18 = PsReferencePartitionByHandle(v15, 2, a8, 0x61566D4Du, &v19);
      v13 = v19;
      v14 = v18;
      if ( v18 < 0 )
        goto LABEL_19;
    }
  }
  if ( *(_BYTE *)(a7 + 48) != 1 || (a5 & 0x20400000) == 0x400000 )
  {
    if ( a9 >= 0 )
    {
      v14 = MiAllocateVirtualMemory((__int64)v22, (_QWORD *)v13, &v20);
    }
    else
    {
      v19 = 0LL;
      if ( (v22[7] & 0x4000000000000000LL) != 0 )
      {
        HIDWORD(v22[9]) = 536870913;
        v22[10] = &v19;
      }
      v16 = MiAllocateVirtualMemory((__int64)v22, 0LL, &v20);
      v22[10] = 0LL;
      v14 = v16;
      HIDWORD(v22[9]) = 0;
      if ( v16 >= 0 )
        v14 = 0;
    }
    if ( v14 >= 0 )
    {
      *a2 = v20;
      *a4 = v22[3];
      goto LABEL_11;
    }
  }
  else
  {
    v14 = -1073741811;
  }
LABEL_19:
  if ( v22[0] )
    ++dword_140C4E7EC;
  else
    ++dword_140C4E7E8;
LABEL_11:
  if ( v13 >= 2 )
    PsDereferencePartition(v13);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  return (unsigned int)v14;
}
