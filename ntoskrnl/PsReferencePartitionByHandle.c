NTSTATUS __fastcall PsReferencePartitionByHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        ULONG Tag,
        PVOID *DesiredAccess)
{
  int v5; // ebx
  PVOID Next; // rcx
  char v9; // al
  PVOID v10; // rcx
  NTSTATUS result; // eax
  PVOID Handle; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  Handle = 0LL;
  if ( a1 == (void *)-1LL )
  {
    Next = KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next;
LABEL_3:
    Handle = Next;
    goto LABEL_4;
  }
  if ( a1 == (void *)-2LL )
  {
    Next = PspSystemPartition;
    goto LABEL_3;
  }
  result = ObReferenceObjectByHandleWithTag(a1, a2, PsPartitionType, a3, Tag, &Handle, 0LL);
  if ( result < 0 )
    return result;
  Next = Handle;
LABEL_4:
  v9 = PsReferencePartitionSafe((__int64)Next);
  v10 = Handle;
  if ( v9 )
    *DesiredAccess = Handle;
  else
    v5 = -1073740640;
  if ( (unsigned __int64)a1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ObfDereferenceObjectWithTag(v10, Tag);
  return v5;
}
