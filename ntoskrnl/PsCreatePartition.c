/*
 * XREFs of PsCreatePartition @ 0x140855A0C
 * Callers:
 *     NtCreatePartition @ 0x1409B3520 (NtCreatePartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A4470C (MiInitializePartitionSpecialPurposeMemory.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140B6869C (PspInitializeSystemPartitionPhase0.c)
 * Callees:
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     PsReferencePartitionByHandle @ 0x14070591C (PsReferencePartitionByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     PspAllocatePartition @ 0x140855B00 (PspAllocatePartition.c)
 */

__int64 __fastcall PsCreatePartition(void *a1, HANDLE *a2, int a3, int a4, KPROCESSOR_MODE PreviousMode, int a6)
{
  int v10; // r8d
  HANDLE *p_Handle; // r14
  NTSTATUS Partition; // edi
  __int64 v14; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-40h] BYREF
  void *v16; // [rsp+50h] [rbp-38h] BYREF
  __int64 v17; // [rsp+58h] [rbp-30h] BYREF

  v16 = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  if ( !PreviousMode )
    goto LABEL_22;
  v14 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    v14 = (__int64)a2;
  *(_QWORD *)v14 = *(_QWORD *)v14;
  if ( a6 )
  {
    Partition = -1073741811;
  }
  else
  {
LABEL_22:
    if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    {
      if ( !a1
        || (Partition = PsReferencePartitionByHandle(a1, 2u, PreviousMode, 0x70437350u, (PVOID *)&v17), Partition >= 0) )
      {
        p_Handle = &Handle;
        if ( (a6 & 1) != 0 )
          p_Handle = 0LL;
        LOBYTE(v10) = PreviousMode;
        Partition = PspAllocatePartition(a4, a3, v10, v17, a6, (__int64)&v16, (__int64)p_Handle);
        if ( Partition >= 0 )
        {
          if ( p_Handle )
          {
            PsDereferencePartition((__int64)v16);
            *a2 = Handle;
          }
          else
          {
            PspSystemPartition = v16;
          }
        }
      }
    }
    else
    {
      Partition = -1073741727;
    }
  }
  if ( v17 )
    PsDereferencePartition(v17);
  return (unsigned int)Partition;
}
