/*
 * XREFs of PsCreatePartition @ 0x14085BC40
 * Callers:
 *     MiInitializePartitionSpecialPurposeMemory @ 0x14096E4D8 (MiInitializePartitionSpecialPurposeMemory.c)
 *     NtCreatePartition @ 0x1409B32F0 (NtCreatePartition.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140B28514 (PspInitializeSystemPartitionPhase0.c)
 * Callees:
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     PsReferencePartitionByHandle @ 0x1407DE8D0 (PsReferencePartitionByHandle.c)
 *     PspAllocatePartition @ 0x14085BD34 (PspAllocatePartition.c)
 */

__int64 __fastcall PsCreatePartition(ULONG_PTR a1, HANDLE *a2, int a3, int a4, KPROCESSOR_MODE PreviousMode, int a6)
{
  int v10; // r8d
  HANDLE *p_Handle; // r14
  int Partition; // edi
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-68h]
  HANDLE Handle; // [rsp+48h] [rbp-40h] BYREF
  void *v17; // [rsp+50h] [rbp-38h] BYREF
  __int64 v18[3]; // [rsp+58h] [rbp-30h] BYREF

  v17 = 0LL;
  Handle = 0LL;
  v18[0] = 0LL;
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
      if ( !a1 || (Partition = PsReferencePartitionByHandle(a1, 2, PreviousMode, 0x70437350u, v18), Partition >= 0) )
      {
        p_Handle = &Handle;
        if ( (a6 & 1) != 0 )
          p_Handle = 0LL;
        LODWORD(v15) = a6;
        LOBYTE(v10) = PreviousMode;
        Partition = PspAllocatePartition(a4, a3, v10, v18[0], v15, (__int64)&v17, (__int64)p_Handle);
        if ( Partition >= 0 )
        {
          if ( p_Handle )
          {
            PsDereferencePartition((__int64)v17);
            *a2 = Handle;
          }
          else
          {
            PspSystemPartition = v17;
          }
        }
      }
    }
    else
    {
      Partition = -1073741727;
    }
  }
  if ( v18[0] )
    PsDereferencePartition(v18[0]);
  return (unsigned int)Partition;
}
