/*
 * XREFs of PspAllocatePartition @ 0x1407CC424
 * Callers:
 *     NtCreatePartition @ 0x14090CED0 (NtCreatePartition.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140A6ED90 (PspInitializeSystemPartitionPhase0.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     PspAddPartitionToGlobalList @ 0x1403CAA9C (PspAddPartitionToGlobalList.c)
 *     MmCreatePartition @ 0x1403CAB14 (MmCreatePartition.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     ExpPartitionStart @ 0x1407C2654 (ExpPartitionStart.c)
 *     ExpPartitionInitialize @ 0x1407C28CC (ExpPartitionInitialize.c)
 *     PspCreatePartitionSystemProcess @ 0x14090D0B8 (PspCreatePartitionSystemProcess.c)
 */

__int64 __fastcall PspAllocatePartition(
        __int64 a1,
        ACCESS_MASK a2,
        char a3,
        __int64 a4,
        char a5,
        _QWORD *a6,
        __int64 a7)
{
  char v8; // r13
  char v9; // si
  int PartitionSystemProcess; // edi
  char *v11; // rbx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  signed __int64 v15; // rax
  bool v16; // cc
  signed __int64 v17; // rax
  char *v18; // [rsp+20h] [rbp-81h]
  PVOID Object; // [rsp+50h] [rbp-51h] BYREF
  ACCESS_MASK v20; // [rsp+58h] [rbp-49h]
  __int64 v21; // [rsp+60h] [rbp-41h] BYREF
  __int64 v22; // [rsp+68h] [rbp-39h]
  _OWORD v23[3]; // [rsp+70h] [rbp-31h] BYREF

  v20 = a2;
  v22 = a7;
  v8 = 0;
  memset(v23, 0, sizeof(v23));
  v21 = 0LL;
  v9 = 0;
  Object = 0LL;
  PartitionSystemProcess = ObCreateObjectEx(a3, PsPartitionType, a1, a3, v18, 128, 0, 0, &Object, 0LL);
  if ( PartitionSystemProcess < 0 )
  {
    v11 = (char *)Object;
    goto LABEL_9;
  }
  v9 = 1;
  v11 = (char *)Object;
  memset(Object, 0, 0x80uLL);
  *((_QWORD *)v11 + 3) = 2LL;
  ObfReferenceObjectWithTag(v11, 0x64726148u);
  *((_QWORD *)v11 + 4) = 1LL;
  *((_QWORD *)v11 + 12) = 0LL;
  if ( a4 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(a4 + 24)) <= 1 )
      __fastfail(0xEu);
    v11 = (char *)Object;
    *((_QWORD *)Object + 7) = a4;
  }
  else
  {
    if ( a5 )
      goto LABEL_4;
    if ( _InterlockedIncrement64((volatile signed __int64 *)PspSystemPartition + 3) <= 1 )
      __fastfail(0xEu);
    v11 = (char *)Object;
    *((_QWORD *)Object + 7) = PspSystemPartition;
  }
  if ( !a5 )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v23);
    PartitionSystemProcess = PspCreatePartitionSystemProcess(v11 + 104, v11 + 112);
    KiUnstackDetachProcess((__int64)v23, 0LL);
    if ( PartitionSystemProcess < 0 )
      goto LABEL_9;
    PartitionSystemProcess = ExpPartitionInitialize((__int64)v11);
    if ( PartitionSystemProcess < 0 )
      goto LABEL_9;
    goto LABEL_5;
  }
LABEL_4:
  v8 = 1;
LABEL_5:
  PartitionSystemProcess = MmCreatePartition(v11, v8);
  if ( PartitionSystemProcess < 0 )
    goto LABEL_9;
  PspAddPartitionToGlobalList((__int64)v11);
  if ( a5 )
  {
    *((_DWORD *)v11 + 30) |= 1u;
    *a6 = v11;
    v11 = 0LL;
    Object = 0LL;
LABEL_8:
    PartitionSystemProcess = 0;
    goto LABEL_9;
  }
  PartitionSystemProcess = ExpPartitionStart(*((_QWORD *)v11 + 2));
  if ( PartitionSystemProcess >= 0 )
  {
    v9 = 0;
    PartitionSystemProcess = ObInsertObjectEx(v11, 0LL, v20, 0, 0, 0LL, (unsigned __int64 *)&v21);
    if ( PartitionSystemProcess >= 0 )
    {
      v13 = (_QWORD *)v22;
      v14 = v21;
      *a6 = v11;
      *v13 = v14;
      goto LABEL_8;
    }
  }
LABEL_9:
  if ( v11 )
  {
    if ( v9 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v11);
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 4, 0xFFFFFFFFFFFFFFFFuLL);
    v16 = v15 <= 1;
    v17 = v15 - 1;
    if ( v16 )
    {
      if ( v17 )
        __fastfail(0xEu);
      PsDereferencePartition((__int64)Object);
    }
    if ( PartitionSystemProcess < 0 )
      PsDereferencePartition((__int64)Object);
  }
  return (unsigned int)PartitionSystemProcess;
}
